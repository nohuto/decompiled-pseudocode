/*
 * XREFs of EtwpNotifyGuid @ 0x14048E9C8
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x140494084 (EtwpSendSessionNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetProcessId @ 0x140086D74 (PsGetProcessId.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwpAllocDataBlock @ 0x140492958 (EtwpAllocDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  bool v4; // cc
  int v7; // r12d
  ACCESS_MASK v8; // ebx
  int v9; // esi
  int v10; // r13d
  __int64 *GuidEntryByGuid; // rax
  __int64 *v12; // rbp
  int v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v15; // rsi
  _BYTE *v16; // rax
  _BYTE *v17; // rbx
  _QWORD *v18; // r15
  _QWORD *v19; // r14
  __int16 v20; // ax
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  signed __int64 v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 result; // rax
  int v28; // eax
  HANDLE Handle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 4) <= 0x10000u;
  Handle = 0LL;
  v7 = 0;
  if ( !v4 )
    return 3221225990LL;
  v8 = 4;
  *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
  if ( *(_DWORD *)a2 != 4 )
  {
    v9 = 1;
    goto LABEL_4;
  }
  v8 = 128;
  v9 = 0;
  result = EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
LABEL_4:
    v10 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v9);
    v12 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741163;
    if ( a3 )
    {
      v13 = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[7], v8, 0LL);
      if ( v13 < 0 )
      {
LABEL_28:
        EtwpUnreferenceGuidEntry(v12);
        return (unsigned int)v13;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = v12 + 48;
    v16 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v12 + 48), 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 96, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 48, v16, (ULONG_PTR)(v12 + 48));
    if ( v17 )
      v17[26] |= 1u;
    v18 = v12 + 5;
    v12[49] = (__int64)KeGetCurrentThread();
    if ( (_QWORD *)*v18 == v18 )
    {
      v13 = -1073741162;
    }
    else
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_13;
      v13 = EtwpCreateUmReplyObject((ULONG_PTR)v12, &Handle);
      if ( v13 >= 0 )
      {
        *(_QWORD *)(a2 + 24) = 0LL;
LABEL_13:
        v13 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
        if ( v13 < 0 )
        {
          v13 = -1073741801;
        }
        else
        {
          v19 = (_QWORD *)*v18;
          if ( (_QWORD *)*v18 != v18 )
          {
            do
            {
              v20 = *((_WORD *)v19 + 49);
              if ( (v20 & 2) != 0
                && (v20 & 0x40) == 0
                && (!v10 || (unsigned int)PsGetProcessId((PEPROCESS)v19[10]) == v10) )
              {
                v28 = EtwpSendDataBlock(v19, v30);
                if ( v28 < 0 )
                  v13 = v28;
                else
                  ++v7;
              }
              v19 = (_QWORD *)*v19;
            }
            while ( v19 != v18 );
            if ( v7 )
              v13 = 0;
          }
          EtwpUnreferenceDataBlock(v30);
          *(_QWORD *)(a2 + 24) = Handle;
          *(_DWORD *)(a2 + 20) = v7;
        }
      }
    }
    v12[49] = 0LL;
    _m_prefetchw(v15);
    v21 = *v15;
    v22 = *v15 - 16;
    if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (v21 & 2) != 0 || (v23 = *v15, v23 != _InterlockedCompareExchange64(v15, v22, v21)) )
      ExfReleasePushLock(v12 + 48);
    KeAbPostRelease((ULONG_PTR)(v12 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
    goto LABEL_28;
  }
  return result;
}
