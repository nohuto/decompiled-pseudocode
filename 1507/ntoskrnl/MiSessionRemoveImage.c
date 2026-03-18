/*
 * XREFs of MiSessionRemoveImage @ 0x1401596A0
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     MmUnlockLoadedModuleListExclusive @ 0x1400254F0 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14002551C (MmLockLoadedModuleListExclusive.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 */

__int64 __fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  unsigned __int64 v2; // rsi
  int v5; // ebp
  unsigned __int64 v6; // rax
  volatile signed __int32 *v7; // rdi
  unsigned __int64 *v8; // r12
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // ebx
  signed __int32 v11; // edx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  bool v14; // zf
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 j; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 m; // rax
  _QWORD *k; // rcx
  unsigned __int64 v23; // rcx
  _QWORD *i; // rcx
  __int64 v26[14]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 v27; // [rsp+D0h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  *a2 = 0LL;
  v5 = 0;
  v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v7 = (volatile signed __int32 *)(v6 + 2968);
  v8 = (unsigned __int64 *)(v6 + 104);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(v7);
    while ( 1 )
    {
      v11 = *v7;
      if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v11 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v7, v11 | 0x40000000, v11);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  MmLockLoadedModuleListExclusive(&v27);
  v12 = MiSessionLookupImage(v2);
  v13 = (__int64)v12;
  if ( !v12 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  v14 = (*((_DWORD *)v12 + 15))-- == 1;
  if ( v14 )
  {
    v15 = v12;
    v16 = (_QWORD *)*v12;
    if ( v16 )
    {
      for ( i = (_QWORD *)v16[1]; i; i = (_QWORD *)i[1] )
        v16 = i;
    }
    else
    {
      for ( j = v15[2]; ; j = v16[2] )
      {
        v16 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v16 || (_QWORD *)v16[1] == v15 )
          break;
        v15 = v16;
      }
    }
    if ( v16 )
      v18 = v16[6];
    else
      v18 = 0LL;
    v19 = *(_QWORD *)(v13 + 8);
    *a2 = v18;
    v20 = v13;
    if ( v19 )
    {
      for ( k = *(_QWORD **)v19; k; k = (_QWORD *)*k )
        v19 = (unsigned __int64)k;
    }
    else
    {
      for ( m = *(_QWORD *)(v13 + 16); ; m = *(_QWORD *)(v19 + 16) )
      {
        v19 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 || *(_QWORD *)v19 == v20 )
          break;
        v20 = v19;
      }
    }
    if ( v19 )
      v23 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v23 = 0LL;
    a2[1] = v23;
    RtlAvlRemoveNode(v8, v13);
    v5 = 1;
  }
  MmUnlockLoadedModuleListExclusive(v27);
  MiUnlockWorkingSetExclusive((__int64)v7, CurrentIrql);
  if ( !v5 )
    return 0LL;
  v26[0] = *(_QWORD *)(v13 + 80);
  MiManageSubsectionView(v26, (_QWORD *)(v13 + 24), 4);
  v14 = *(_BYTE *)(v13 + 64) == 1;
  a2[2] = *(_QWORD *)(v13 + 72);
  if ( v14 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  ExFreePoolWithTag((PVOID)v13, 0);
  return 1LL;
}
