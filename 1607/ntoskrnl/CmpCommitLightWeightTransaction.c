/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x14053A870
 * Callers:
 *     CmpTransMgrCommit @ 0x1404DA7A0 (CmpTransMgrCommit.c)
 *     NtCommitRegistryTransaction @ 0x14053A7A8 (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpAbortLightWeightTransaction @ 0x1404E97EC (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404E9890 (CmpCleanupLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x14053A998 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053AAFC (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053AC0C (CmpPrepareLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  int v1; // ebp
  signed __int32 v3; // eax
  int v4; // edi
  _QWORD *v5; // rsi
  signed __int32 v7[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v4 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 16);
    if ( v5 )
    {
      v1 = 1;
      CmpLockRegistryExclusive();
    }
    v4 = CmpPrepareLightWeightTransaction(v5);
    if ( v4 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        CmpCleanupLightWeightPrepare(v5);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v7, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v4 = -1072103421;
      }
      else
      {
        CmpCommitPreparedLightWeightTransaction(v5);
        if ( v1 )
        {
          CmpUnlockRegistry();
          v1 = 0;
          CmpCleanupLightWeightPrepare(v5);
          if ( !*(_BYTE *)(a1 + 24) )
            CmpCleanupLightWeightTransaction(v5, 4);
        }
        v4 = 0;
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
    {
      if ( !*(_BYTE *)(a1 + 24) )
        CmpAbortLightWeightTransaction(a1);
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v7, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v1 )
      CmpUnlockRegistry();
  }
  return (unsigned int)v4;
}
