/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x14053ADB0
 * Callers:
 *     CmpTransMgrCommit @ 0x1404BDDA4 (CmpTransMgrCommit.c)
 *     NtCommitRegistryTransaction @ 0x14053ACE8 (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpAbortLightWeightTransaction @ 0x1404CB8DC (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404CB980 (CmpCleanupLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x14053AED8 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053B03C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053B14C (CmpPrepareLightWeightTransaction.c)
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
