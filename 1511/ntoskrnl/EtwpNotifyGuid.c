/*
 * XREFs of EtwpNotifyGuid @ 0x1404CCB9C
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x1404CC658 (EtwpSendSessionNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetProcessId @ 0x1400F4C44 (PsGetProcessId.c)
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404CE704 (EtwpAllocDataBlock.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(_DWORD *Src, char a2)
{
  bool v3; // cc
  int v5; // r12d
  ACCESS_MASK v6; // ebx
  int v7; // esi
  int v8; // r13d
  __int64 *GuidEntryByGuid; // rax
  __int64 *v10; // rbp
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // r15
  _QWORD *v17; // r14
  char v18; // al
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  __int64 result; // rax
  int v23; // eax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v3 = Src[1] <= 0x10000u;
  Handle = 0LL;
  v5 = 0;
  Object = 0LL;
  if ( !v3 )
    return 3221225990LL;
  v6 = 4;
  Src[9] = PsGetCurrentThreadProcessId();
  if ( *Src != 4 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v6 = 128;
  v7 = 0;
  result = EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
LABEL_4:
    v8 = Src[8];
    Src[5] = 0;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(Src + 10, v7);
    v10 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741163;
    if ( a2 )
    {
      v11 = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[7], v6, 0LL);
      if ( v11 < 0 )
      {
LABEL_29:
        EtwpUnreferenceGuidEntry(v10);
        return (unsigned int)v11;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = v10 + 48;
    v14 = KeAbPreAcquire((ULONG_PTR)(v10 + 48), 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 96, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10 + 48, v14, (ULONG_PTR)(v10 + 48));
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v10 + 5;
    v10[49] = (__int64)KeGetCurrentThread();
    if ( (_QWORD *)*v16 == v16 )
    {
      v11 = -1073741162;
    }
    else
    {
      if ( *((_BYTE *)Src + 12) != 1 )
        goto LABEL_13;
      v11 = EtwpCreateUmReplyObject((ULONG_PTR)v10, &Handle, &Object);
      if ( v11 >= 0 )
      {
        *((_QWORD *)Src + 3) = Object;
LABEL_13:
        v11 = EtwpAllocDataBlock((unsigned int)Src[1], Src);
        if ( v11 < 0 )
        {
          v11 = -1073741801;
        }
        else
        {
          v17 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 != v16 )
          {
            do
            {
              v18 = *((_BYTE *)v17 + 98);
              if ( (v18 & 2) != 0
                && (v18 & 0x40) == 0
                && (!v8 || (unsigned int)PsGetProcessId((PEPROCESS)v17[10]) == v8) )
              {
                v23 = EtwpSendDataBlock(v17, v25);
                if ( v23 < 0 )
                  v11 = v23;
                else
                  ++v5;
              }
              v17 = (_QWORD *)*v17;
            }
            while ( v17 != v16 );
            if ( v5 )
              v11 = 0;
          }
          EtwpUnreferenceDataBlock(v25);
          *((_QWORD *)Src + 3) = Handle;
          Src[5] = v5;
        }
      }
    }
    v10[49] = 0LL;
    _m_prefetchw(v13);
    v19 = *v13;
    v20 = *v13 - 16;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (v19 & 2) != 0 || (v21 = *v13, v21 != _InterlockedCompareExchange64(v13, v20, v19)) )
      ExfReleasePushLock(v10 + 48);
    KeAbPostRelease((ULONG_PTR)(v10 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_29;
  }
  return result;
}
