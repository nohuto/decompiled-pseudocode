/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x140104598
 * Callers:
 *     FsRtlProcessFileLock @ 0x140103F60 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAll @ 0x14010457C (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x1401E2A14 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x140019FC0 (IoGetRequestorProcess.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRealSuccessor @ 0x140104898 (RtlRealSuccessor.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140105640 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x140105918 (RtlDelete.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1401062B4 (FsRtlSplitLocks.c)
 *     FsRtlCompleteLockIrpReal @ 0x140106380 (FsRtlCompleteLockIrpReal.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // r13
  _RTL_SPLAY_LINKS *v7; // rdi
  int v8; // r15d
  _RTL_SPLAY_LINKS *v9; // r14
  __int64 v10; // rsi
  __int64 CurrentIrql; // r12
  _RTL_SPLAY_LINKS *v12; // rbp
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v15; // r12
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v18; // rbx
  PRTL_SPLAY_LINKS v19; // r15
  _RTL_SPLAY_LINKS *v20; // rcx
  _RTL_SPLAY_LINKS *v21; // r13
  PRTL_SPLAY_LINKS v22; // rbx
  void *v23; // rdi
  void **v24; // r14
  _RTL_SPLAY_LINKS *v25; // rax
  bool v26; // cc
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v28; // rdi
  PVOID v29; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v32; // rbp
  __int64 v33; // rbx
  KIRQL v34; // dl
  char v35[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  _RTL_SPLAY_LINKS *v38; // [rsp+48h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v39; // [rsp+50h] [rbp-68h] BYREF
  PVOID Entry; // [rsp+58h] [rbp-60h]
  _RTL_SPLAY_LINKS *v41; // [rsp+60h] [rbp-58h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v43; // [rsp+C0h] [rbp+8h]
  struct _KPROCESS *v45; // [rsp+D0h] [rbp+18h]

  v45 = a3;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  Entry = 0LL;
  v8 = a4;
  v37 = v6;
  v9 = a2;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v10 = v6 + 24;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v6 + 24);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v6 + 24));
  }
  v12 = *(_RTL_SPLAY_LINKS **)(v6 + 32);
  if ( v12 )
  {
    for ( i = v12->LeftChild; i; i = i->LeftChild )
      v12 = i;
    v43 = 0;
    while ( 1 )
    {
      v15 = v12 - 1;
      v16 = RtlRealSuccessor(v12);
      Parent = v12[-1].Parent;
      v18 = 0LL;
      v39 = 0LL;
      v19 = v16;
      v38 = 0LL;
      v20 = 0LL;
      v21 = v12 - 1;
      if ( !Parent )
      {
        v7 = 0LL;
        goto LABEL_23;
      }
      while ( 1 )
      {
        Entry = Parent;
        if ( Parent[1].LeftChild == a2
          && (struct _KPROCESS *)Parent[1].RightChild == v45
          && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
        {
          break;
        }
        v21 = Parent;
LABEL_17:
        if ( !v20 )
        {
          if ( Parent[2].Parent > v18 )
            v18 = Parent[2].Parent;
          v38 = v18;
        }
        Parent = v21->Parent;
        if ( !v21->Parent )
          goto LABEL_22;
      }
      v25 = v15[2].Parent;
      if ( !v20 )
        v20 = v21;
      v26 = Parent[2].Parent <= v7;
      v41 = v20;
      if ( !v26 )
        v7 = Parent[2].Parent;
      v39 = v7;
      if ( v21->Parent == v25 )
        v15[2].Parent = v21;
      v21->Parent = Parent->Parent;
      if ( !*(_QWORD *)(v37 + 16) )
        break;
      v43 = 1;
LABEL_22:
      v7 = 0LL;
      if ( v20 )
      {
        if ( v15->Parent )
        {
          FsRtlSplitLocks(&v12[-1], v20, &v39, &v38);
        }
        else
        {
          *(_QWORD *)(v10 + 8) = RtlDelete(v12);
          ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v12[-1]);
        }
      }
LABEL_23:
      if ( v43 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v10, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        __writecr8((unsigned __int8)v36);
        v29 = Entry;
        v6 = v37;
        (*(void (__fastcall **)(__int64, char *))(v37 + 16))(a6, (char *)Entry + 8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v10);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v10);
        }
        v36 = CurrentIrql;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v29);
        v19 = *(PRTL_SPLAY_LINKS *)(v10 + 8);
        v43 = 0;
        if ( v19 )
        {
          for ( j = v19->LeftChild; j; j = j->LeftChild )
            v19 = j;
        }
      }
      else
      {
        LOBYTE(CurrentIrql) = v36;
        v6 = v37;
      }
      v12 = v19;
      if ( !v19 )
      {
        v9 = a2;
        v8 = a4;
        goto LABEL_27;
      }
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
    v20 = v41;
    goto LABEL_17;
  }
  if ( !*(_QWORD *)(v6 + 40) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v6 + 24, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    __writecr8((unsigned __int8)CurrentIrql);
    return 3221225598LL;
  }
LABEL_27:
  v22 = *(PRTL_SPLAY_LINKS *)(v10 + 16);
  if ( v22 )
  {
    for ( k = v22->LeftChild; k; k = k->LeftChild )
      v22 = k;
    do
    {
      v28 = RtlRealSuccessor(v22);
      if ( v22[2].Parent == v9
        && (struct _KPROCESS *)v22[2].LeftChild == v45
        && (!a5 || HIDWORD(v22[1].RightChild) == v8) )
      {
        *(_QWORD *)(v10 + 16) = RtlDelete(v22);
        if ( *(_QWORD *)(v6 + 16) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v10, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
          __writecr8((unsigned __int8)CurrentIrql);
          (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(v6 + 16))(a6, v22 + 1);
          LOBYTE(CurrentIrql) = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v10);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v10);
          }
          v28 = *(PRTL_SPLAY_LINKS *)(v10 + 16);
          if ( v28 )
          {
            for ( m = v28->LeftChild; m; m = m->LeftChild )
              v28 = m;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v22);
      }
      v22 = v28;
    }
    while ( v28 );
  }
  v23 = *(void **)(v10 + 24);
  v24 = (void **)(v10 + 24);
  while ( v23 )
  {
    v32 = *((_QWORD *)v23 + 3);
    v33 = *(_QWORD *)(v32 + 184);
    if ( a2 != *(_RTL_SPLAY_LINKS **)(v33 + 48)
      || v45 != IoGetRequestorProcess(*((PIRP *)v23 + 3))
      || a5 && a4 != *(_DWORD *)(v33 + 16) )
    {
      goto LABEL_107;
    }
    IoAcquireCancelSpinLock((PKIRQL)(v32 + 69));
    _InterlockedExchange64((volatile __int64 *)(v32 + 104), 0LL);
    v34 = *(_BYTE *)(v32 + 69);
    if ( *(_BYTE *)(v32 + 68) )
      v32 = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v34);
    if ( v32 )
    {
      *(_QWORD *)(v32 + 56) = 0LL;
      *v24 = *(void **)v23;
      if ( v23 == *(void **)(v10 + 32) )
        *(_QWORD *)(v10 + 32) = v24;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v10, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      __writecr8((unsigned __int8)CurrentIrql);
      FsRtlCompleteLockIrpReal(*(_QWORD *)(v6 + 8), *((_QWORD *)v23 + 2), v32, -1073741698, (__int64)v35, 0LL);
      LOBYTE(CurrentIrql) = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v10);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v10);
      }
      v24 = (void **)(v10 + 24);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v23);
    }
    else
    {
LABEL_107:
      v24 = (void **)v23;
    }
    v23 = *v24;
  }
  LOBYTE(a3) = CurrentIrql;
  FsRtlPrivateCheckWaitingLocks(v6, v10, a3);
  FsRtlPrivateResetLowestLockOffset(v6);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v10, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  __writecr8((unsigned __int8)CurrentIrql);
  return 0LL;
}
