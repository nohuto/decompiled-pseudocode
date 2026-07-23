/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x1400CDE70
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1400CDC38 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1401ACC6C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1400CE098 (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1400CE1E8 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x1400CE42C (RtlDelete.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400CEB78 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1400CEBCC (FsRtlSplitLocks.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  KIRQL v16; // r12
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r9
  _QWORD *v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r15
  bool v23; // cc
  __int64 v24; // r8
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h]
  unsigned __int64 v28; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  v27 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v28 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( !v14 )
  {
    KeReleaseSpinLock(v10, v13);
    return 3221225598LL;
  }
  v26 = *a4 + v9 - 1;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v14, (unsigned int)&v28, (unsigned int)&v26, 0, 0LL);
  v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( !FirstOverlappingSharedNode
    || (v19 = (_QWORD *)(FirstOverlappingSharedNode - 24), v20 = 0LL, v21 = (_QWORD *)*v19, v22 = v19, v26 = 0LL, !v21) )
  {
LABEL_33:
    v15 = -1073741698;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( v21[4] == v27 && v21[5] == a5 && *((_DWORD *)v21 + 7) == a6 )
    {
      v23 = v21[1] <= v9;
      if ( v21[1] != v9 )
        goto LABEL_29;
      if ( v21[2] == *v29 )
        break;
    }
    v23 = v21[1] <= v9;
LABEL_29:
    if ( v23 )
    {
      v22 = v21;
      if ( v20 < v21[6] )
        v20 = v21[6];
      v21 = (_QWORD *)*v21;
      v26 = v20;
      if ( v21 )
        continue;
    }
    goto LABEL_33;
  }
  if ( *(_QWORD **)(v27 + 120) == v21 + 1 )
    *(_QWORD *)(v27 + 120) = 0LL;
  if ( *v22 == v19[6] )
    v19[6] = v22;
  *v22 = *v21;
  if ( v22 == v19 )
  {
    if ( !*v19 )
    {
      v10[1] = (KSPIN_LOCK)RtlDelete(v18);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
      v19 = 0LL;
    }
    if ( *(_QWORD *)a1 == v21[1] )
      FsRtlPrivateResetLowestLockOffset(a1);
  }
  if ( v19 )
    FsRtlSplitLocks(v19, v22, v21 + 6, &v26);
  if ( !a8 && *(_QWORD *)(a1 + 16) )
  {
    KeReleaseSpinLock(v10, v16);
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a7, v21 + 1);
    v16 = KeAcquireSpinLockRaiseToDpc(v10);
  }
  ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
  if ( a9 )
  {
    if ( v10[3] )
    {
      LOBYTE(v24) = v16;
      FsRtlPrivateCheckWaitingLocks(a1, v10, v24);
    }
  }
LABEL_26:
  KeReleaseSpinLock(v10, v16);
  return v15;
}
