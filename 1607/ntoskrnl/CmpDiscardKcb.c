/*
 * XREFs of CmpDiscardKcb @ 0x14000A96C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x14060BA04 (CmpCommitDiscardReplacePost.c)
 *     CmpForceInvalidatePostCallback @ 0x14060BCD4 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14060DB04 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpRemoveKeyControlBlock @ 0x1403FA7E8 (CmpRemoveKeyControlBlock.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403FA840 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpDiscardKcb(ULONG_PTR BugCheckParameter4)
{
  _QWORD *v1; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rdx

  v1 = *(_QWORD **)(BugCheckParameter4 + 184);
  if ( v1 )
  {
    v7 = v1[3];
    if ( v7 )
    {
      v8 = *v1;
      v9 = *(_QWORD *)(v7 + 16);
      v10 = (_QWORD *)v1[1];
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v10 != v1 )
        __fastfail(3u);
      *v10 = v8;
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 184) + 24LL) = 0LL;
      CmpDelayDerefKeyControlBlock(v9);
    }
  }
  *(_DWORD *)(BugCheckParameter4 + 4) |= 0x20000u;
  *(_WORD *)(BugCheckParameter4 + 58) = 0;
  CmpRemoveKeyControlBlock(BugCheckParameter4);
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  v4 = *(_QWORD *)(v3 + 2816);
  v5 = 3
     * ((unsigned int)(*(_DWORD *)(v3 + 2824) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 16) = *(_QWORD *)(v4
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v3 + 2824) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v4 + 8 * v5 + 16) = BugCheckParameter4 + 8;
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
