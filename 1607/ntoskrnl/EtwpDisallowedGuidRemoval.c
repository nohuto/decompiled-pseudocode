/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x14069FC4C
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x140491A90 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140491C28 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x1404928BC (EtwpBuildNotificationPacket.c)
 *     EtwpIsGuidAllowed @ 0x1404929F4 (EtwpIsGuidAllowed.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  signed __int64 v4; // rbx
  char v5; // r15
  _QWORD *result; // rax
  __int64 *v7; // rbp
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 *v9; // rsi
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  _OWORD *v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  unsigned __int8 v18; // di
  __int64 v19; // r8
  signed __int64 v20; // rax
  unsigned __int64 v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _OWORD *v26; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  v5 = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 904), a1, 0);
  v7 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = result + 48;
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(result + 48), 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      v11[26] |= 1u;
    v7[49] = (__int64)KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v7, 0LL, 0, &v26);
    v12 = v26;
    *(_DWORD *)v26 = 3;
    *(_OWORD *)((char *)v12 + 40) = *(_OWORD *)a1;
    *((_DWORD *)v12 + 9) = PsGetCurrentThreadProcessId();
    if ( EtwpIsGuidAllowed(a2, a1) )
    {
      v13 = (__int64 *)v7[5];
      while ( v13 != v7 + 5 )
      {
        v14 = (__int64)v13;
        v13 = (__int64 *)*v13;
        v15 = *(_QWORD *)(v14 + 40);
        if ( v15 && *(_DWORD *)(v15 + 80) )
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = 32LL * v16;
            if ( *(_DWORD *)(v17 + v15 + 112) )
            {
              if ( *(unsigned __int16 *)(v17 + v15 + 118) == *(_DWORD *)a2 )
                break;
            }
            if ( ++v16 >= 8u )
              goto LABEL_16;
          }
          v5 = 1 << v16;
LABEL_16:
          if ( v5 )
          {
            v18 = *(_BYTE *)(v14 + 101);
            EtwpUpdateRegEntryEnableMask(v14, v5, 2, 1);
            if ( EtwpCalculateUpdateNotification(v14, v5, v18, 0, 2, 1, &v26) )
              EtwpSendDataBlock(v14, (__int64)v26, v19);
          }
        }
      }
    }
    v7[49] = 0LL;
    _m_prefetchw(v9);
    v20 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v20 - 16;
    if ( (v20 & 2) != 0 || (v21 = *v9, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v4, v20)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    return (_QWORD *)EtwpUnreferenceGuidEntry(v7);
  }
  return result;
}
