/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x1400A9728
 * Callers:
 *     FsRtlFastUnlockAll @ 0x1400A970C (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1401331B8 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x1401B899C (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400A9A4C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1400A9AA0 (FsRtlSplitLocks.c)
 *     IoGetRequestorProcess @ 0x1400C1700 (IoGetRequestorProcess.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1400C3530 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401332E0 (FsRtlCompleteLockIrpReal.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  _QWORD *v6; // r13
  _RTL_SPLAY_LINKS *v7; // rdi
  int v8; // r12d
  _RTL_SPLAY_LINKS *v9; // r15
  KIRQL v10; // al
  __int64 v11; // r8
  _RTL_SPLAY_LINKS *v12; // rbp
  KIRQL v13; // r14
  unsigned int v14; // r14d
  KIRQL v15; // bl
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v18; // r12
  PRTL_SPLAY_LINKS v19; // rax
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v21; // rbx
  _RTL_SPLAY_LINKS *v22; // rcx
  PRTL_SPLAY_LINKS v23; // r15
  _RTL_SPLAY_LINKS *v24; // rdx
  PRTL_SPLAY_LINKS v25; // rbx
  void *v26; // rdi
  void **v27; // r15
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v29; // rdi
  _RTL_SPLAY_LINKS *v30; // rax
  bool v31; // cc
  PVOID v32; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  KIRQL v34; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v36; // rbp
  __int64 v37; // rbx
  KIRQL v38; // dl
  char v39; // [rsp+30h] [rbp-78h]
  _RTL_SPLAY_LINKS *v40; // [rsp+38h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v41; // [rsp+40h] [rbp-68h] BYREF
  _RTL_SPLAY_LINKS *v42; // [rsp+48h] [rbp-60h] BYREF
  PVOID Entry; // [rsp+50h] [rbp-58h]
  _RTL_SPLAY_LINKS *v44; // [rsp+58h] [rbp-50h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD **)(a1 + 24);
  v7 = 0LL;
  Entry = 0LL;
  v8 = a4;
  v9 = a2;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v12 = (_RTL_SPLAY_LINKS *)v6[4];
  v13 = v10;
  NewIrql = v10;
  if ( v12 )
  {
    for ( i = v12->LeftChild; i; i = i->LeftChild )
      v12 = i;
    v39 = 0;
    while ( 1 )
    {
      v18 = v12 - 1;
      v19 = RtlRealSuccessor(v12);
      Parent = v12[-1].Parent;
      v11 = 0LL;
      v42 = 0LL;
      v21 = 0LL;
      v41 = 0LL;
      v22 = v12 - 1;
      v40 = v12 - 1;
      v23 = v19;
      v24 = 0LL;
      if ( !Parent )
      {
        v7 = 0LL;
        goto LABEL_18;
      }
      while ( 1 )
      {
        Entry = Parent;
        if ( Parent[1].LeftChild == a2
          && (struct _KPROCESS *)Parent[1].RightChild == a3
          && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
        {
          break;
        }
        v22 = Parent;
        v40 = Parent;
LABEL_12:
        if ( !v24 )
        {
          if ( Parent[2].Parent > v21 )
            v21 = Parent[2].Parent;
          v41 = v21;
        }
        Parent = v22->Parent;
        if ( !v22->Parent )
          goto LABEL_17;
      }
      v30 = v18[2].Parent;
      if ( !v24 )
        v24 = v22;
      v31 = Parent[2].Parent <= v7;
      v44 = v24;
      if ( !v31 )
        v7 = Parent[2].Parent;
      v42 = v7;
      if ( v22->Parent == v30 )
        v18[2].Parent = v22;
      v22->Parent = Parent->Parent;
      if ( !v6[2] )
        break;
      v39 = 1;
LABEL_17:
      v7 = 0LL;
      if ( v24 )
      {
        if ( v18->Parent )
        {
          FsRtlSplitLocks(&v12[-1], v24, &v42, &v41);
        }
        else
        {
          v6[4] = RtlDelete(v12);
          ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v12[-1]);
        }
      }
LABEL_18:
      if ( v39 )
      {
        KeReleaseSpinLock(v6 + 3, NewIrql);
        v32 = Entry;
        ((void (__fastcall *)(__int64, char *))v6[2])(a6, (char *)Entry + 8);
        NewIrql = KeAcquireSpinLockRaiseToDpc(v6 + 3);
        v13 = NewIrql;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v32);
        v23 = (PRTL_SPLAY_LINKS)v6[4];
        v39 = 0;
        if ( v23 )
        {
          for ( j = v23->LeftChild; j; j = j->LeftChild )
            v23 = j;
        }
      }
      else
      {
        v13 = NewIrql;
      }
      v12 = v23;
      if ( !v23 )
      {
        v9 = a2;
        v8 = a4;
        goto LABEL_22;
      }
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
    v22 = v40;
    v11 = 0LL;
    v24 = v44;
    goto LABEL_12;
  }
  if ( v6[5] )
  {
LABEL_22:
    v25 = (PRTL_SPLAY_LINKS)v6[5];
    if ( v25 )
    {
      for ( k = v25->LeftChild; k; k = k->LeftChild )
        v25 = k;
      do
      {
        v29 = RtlRealSuccessor(v25);
        if ( v25[2].Parent == v9
          && (struct _KPROCESS *)v25[2].LeftChild == a3
          && (!a5 || HIDWORD(v25[1].RightChild) == v8) )
        {
          v6[5] = RtlDelete(v25);
          if ( v6[2] )
          {
            KeReleaseSpinLock(v6 + 3, v13);
            ((void (__fastcall *)(__int64, _RTL_SPLAY_LINKS *))v6[2])(a6, &v25[1]);
            v34 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
            v29 = (PRTL_SPLAY_LINKS)v6[5];
            v13 = v34;
            if ( v29 )
            {
              for ( m = v29->LeftChild; m; m = m->LeftChild )
                v29 = m;
            }
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v25);
        }
        v25 = v29;
      }
      while ( v29 );
      NewIrql = v13;
    }
    v26 = (void *)v6[6];
    v27 = (void **)(v6 + 6);
    if ( v26 )
    {
      do
      {
        v36 = *((_QWORD *)v26 + 3);
        v37 = *(_QWORD *)(v36 + 184);
        if ( a2 != *(_RTL_SPLAY_LINKS **)(v37 + 48)
          || a3 != IoGetRequestorProcess(*((PIRP *)v26 + 3))
          || a5 && a4 != *(_DWORD *)(v37 + 16) )
        {
          goto LABEL_77;
        }
        IoAcquireCancelSpinLock((PKIRQL)(v36 + 69));
        _InterlockedExchange64((volatile __int64 *)(v36 + 104), 0LL);
        v38 = *(_BYTE *)(v36 + 69);
        if ( *(_BYTE *)(v36 + 68) )
          v36 = 0LL;
        KeReleaseQueuedSpinLock(7uLL, v38);
        if ( v36 )
        {
          *(_QWORD *)(v36 + 56) = 0LL;
          *v27 = *(void **)v26;
          if ( v26 == (void *)v6[7] )
            v6[7] = v27;
          KeReleaseSpinLock(v6 + 3, NewIrql);
          FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v26 + 2), v36, -1073741698, (__int64)&v40, 0LL);
          NewIrql = KeAcquireSpinLockRaiseToDpc(v6 + 3);
          v27 = (void **)(v6 + 6);
          ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v26);
        }
        else
        {
LABEL_77:
          v27 = (void **)v26;
        }
        v26 = *v27;
      }
      while ( *v27 );
    }
    v15 = NewIrql;
    LOBYTE(v11) = NewIrql;
    FsRtlPrivateCheckWaitingLocks(v6, v6 + 3, v11);
    FsRtlPrivateResetLowestLockOffset(v6);
    v14 = 0;
  }
  else
  {
    v14 = -1073741698;
    v15 = v10;
  }
  KeReleaseSpinLock(v6 + 3, v15);
  return v14;
}
