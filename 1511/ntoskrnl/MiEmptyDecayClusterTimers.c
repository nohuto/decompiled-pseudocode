/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140014790
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiRemoveDecayClusterTimer @ 0x1400DFEB0 (MiRemoveDecayClusterTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r13
  __int64 result; // rax
  __int64 v3; // r9
  char v4; // r15
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edi
  _QWORD v16[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h]

  v17 = a1;
  v1 = a1;
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( (unsigned __int64)(result - *(_QWORD *)(v1 + 4144)) < 0x989680 )
    return result;
  v4 = *(_DWORD *)(v1 + 4136) + 1;
  *(_QWORD *)(v1 + 4144) = result;
  v5 = v4 & 3;
  v6 = v1 + 8 * v5;
  result = *(_QWORD *)(v6 + 4104) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_3;
  while ( 1 )
  {
    v7 = 0xFFFFFFFFFLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v16[1] = v1 + 2088;
    v16[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v16);
      v7 = 0xFFFFFFFFFLL;
    }
    else
    {
      v9 = _InterlockedExchange64((volatile __int64 *)(v1 + 2088), (__int64)v16);
      if ( v9 )
      {
        KxWaitForLockOwnerShip(v16);
        v7 = 0xFFFFFFFFFLL;
      }
    }
    v10 = *(_QWORD *)(v6 + 4104) >> 33;
    if ( v10 == 0x7FFFFFFF )
      break;
    v11 = v10 + qword_1402FEF60;
    v12 = 48 * (v10 + qword_1402FEF60) - 0x58000000000LL;
    v13 = (*(_QWORD *)(v12 + 16) >> 12) & 0xFFFFFFFFFLL;
    if ( v13 == v11 )
    {
      MiUnlinkPageFromList(v12);
      *(_BYTE *)(v12 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v12);
    }
    else
    {
      v14 = 48 * v13 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        v15 = *(_BYTE *)(v14 + 35) & 7;
        KxReleaseQueuedSpinLock(v16, v11, 0xFFFFFFFFFLL, v3);
        MiRelinkStandbyPage(v14, v15, 1022LL);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_12;
      }
    }
    KxReleaseQueuedSpinLock(v16, v11, v7, v3);
LABEL_12:
    __writecr8(CurrentIrql);
  }
  KxReleaseQueuedSpinLock(v16, v9, 0xFFFFFFFFFLL, v3);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v1 = v17;
LABEL_3:
  *(_DWORD *)(v1 + 4136) = v5;
  return result;
}
