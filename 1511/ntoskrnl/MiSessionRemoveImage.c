/*
 * XREFs of MiSessionRemoveImage @ 0x14011F8FC
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14001A804 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14001A824 (MmLockLoadedModuleListExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 */

__int64 __fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  ULONG_PTR v2; // rsi
  int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 *v8; // r12
  KIRQL v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 j; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 m; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *k; // rcx
  _QWORD *i; // rcx
  _QWORD v26[14]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 v27; // [rsp+D0h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  *a2 = 0LL;
  v5 = 0;
  v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v7 = v6 + 2968;
  v8 = (unsigned __int64 *)(v6 + 104);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 2968));
  MmLockLoadedModuleListExclusive(&v27);
  v10 = MiSessionLookupImage(v2);
  v11 = v10;
  if ( !v10 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  if ( (*(_DWORD *)(v10 + 60))-- == 1 )
  {
    v13 = (_QWORD *)v10;
    v14 = *(_QWORD **)v10;
    if ( v14 )
    {
      for ( i = (_QWORD *)v14[1]; i; i = (_QWORD *)i[1] )
        v14 = i;
    }
    else
    {
      for ( j = v13[2]; ; j = v14[2] )
      {
        v14 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v14 || (_QWORD *)v14[1] == v13 )
          break;
        v13 = v14;
      }
    }
    if ( v14 )
      v16 = v14[6];
    else
      v16 = 0LL;
    v17 = *(_QWORD *)(v11 + 8);
    *a2 = v16;
    v18 = v11;
    if ( v17 )
    {
      for ( k = *(_QWORD **)v17; k; k = (_QWORD *)*k )
        v17 = (unsigned __int64)k;
    }
    else
    {
      for ( m = *(_QWORD *)(v11 + 16); ; m = *(_QWORD *)(v17 + 16) )
      {
        v17 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 || *(_QWORD *)v17 == v18 )
          break;
        v18 = v17;
      }
    }
    if ( v17 )
      v20 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v20 = 0LL;
    a2[1] = v20;
    RtlAvlRemoveNode(v8, v11);
    v5 = 1;
  }
  MmUnlockLoadedModuleListExclusive(v27);
  LOBYTE(v21) = v9;
  MiUnlockWorkingSetExclusive(v7, v21, v22);
  if ( !v5 )
    return 0LL;
  v26[0] = *(_QWORD *)(v11 + 80);
  MiManageSubsectionView((__int64)v26, (_QWORD *)(v11 + 24), 4);
  a2[2] = *(_QWORD *)(v11 + 72);
  if ( *(_BYTE *)(v11 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  ExFreePoolWithTag((PVOID)v11, 0);
  return 1LL;
}
