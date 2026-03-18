/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x1403B5278
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1404CF680 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x14046D428 (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404CE210 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404CE398 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x1404CE668 (EtwpBuildNotificationPacket.c)
 */

__int64 __fastcall EtwpDisallowedGuidRemoval(_OWORD *a1, _DWORD *a2)
{
  signed __int64 v3; // rbx
  char v4; // r15
  __int64 result; // rax
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  _DWORD *v12; // rdi
  _DWORD *v13; // r8
  _QWORD *v14; // r14
  _QWORD *v15; // r13
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  __int64 v20; // rax
  char v21; // di
  int v22; // r8d
  int v23; // edx
  _DWORD *v25; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0LL;
  v25 = 0LL;
  v4 = 0;
  result = EtwpFindGuidEntryByGuid(a1, 0LL);
  v7 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (unsigned __int64 *)(result + 384);
    v10 = KeAbPreAcquire(result + 384, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *(_QWORD *)(v7 + 392) = KeGetCurrentThread();
    EtwpBuildNotificationPacket(v7, 0LL, 0LL, &v25);
    v12 = v25;
    *v25 = 3;
    *(_OWORD *)(v12 + 10) = *a1;
    v12[9] = PsGetCurrentThreadProcessId();
    if ( (unsigned __int8)EtwpIsGuidAllowed(a2, a1) == 1 )
    {
      v14 = *(_QWORD **)(v7 + 40);
      while ( v14 != (_QWORD *)(v7 + 40) )
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        v16 = v15[5];
        if ( v16 && *(_DWORD *)(v16 + 80) )
        {
          v17 = 0;
          while ( 1 )
          {
            v20 = 32LL * v17;
            if ( *(_DWORD *)(v20 + v16 + 112) )
            {
              v13 = a2;
              if ( *(unsigned __int16 *)(v20 + v16 + 118) == *a2 )
                break;
            }
            if ( ++v17 >= 8u )
              goto LABEL_23;
          }
          v4 = 1 << v17;
LABEL_23:
          if ( v4 )
          {
            v21 = *((_BYTE *)v15 + 100);
            LOBYTE(v13) = 2;
            LOBYTE(v16) = v4;
            EtwpUpdateRegEntryEnableMask(v15, v16, v13, 1LL);
            LOBYTE(v22) = v21;
            LOBYTE(v23) = v4;
            if ( (unsigned __int8)EtwpCalculateUpdateNotification((_DWORD)v15, v23, v22, 0, 2, 1, (__int64)&v25) )
              EtwpSendDataBlock(v15, v25);
          }
        }
      }
    }
    *(_QWORD *)(v7 + 392) = 0LL;
    _m_prefetchw(v9);
    v18 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v18 - 16;
    if ( (v18 & 2) != 0 || (v19 = *v9, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v3, v18)) )
      ExfReleasePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return EtwpUnreferenceGuidEntry(v7);
  }
  return result;
}
