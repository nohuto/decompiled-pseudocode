/*
 * XREFs of MiResolvePageTablePage @ 0x14004CC60
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiLockPageTableRange @ 0x140114F64 (MiLockPageTableRange.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiCheckBadSystemProcessAccess @ 0x1400EC094 (MiCheckBadSystemProcessAccess.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiResolvePageTablePage(
        ULONG_PTR a1,
        ULONG_PTR a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6)
{
  unsigned __int64 v7; // r15
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  _QWORD *i; // r13
  __int64 v11; // rax
  unsigned __int64 j; // rdi
  _KPROCESS *Process; // rsi
  _QWORD *v14; // rdi
  char v15; // cl
  __int64 v16; // rdi
  unsigned __int16 *v17; // rsi
  unsigned __int64 *v18; // r14
  int v19; // eax
  ULONG_PTR v20; // r9
  _BYTE **v21; // rdx
  unsigned int v22; // r8d
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  ULONG_PTR v28; // rdi
  int v29; // [rsp+50h] [rbp-68h]
  int v30; // [rsp+54h] [rbp-64h]
  int v31; // [rsp+58h] [rbp-60h] BYREF
  ULONG_PTR v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  ULONG_PTR v34; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v35[8]; // [rsp+78h] [rbp-40h] BYREF

  v29 = 0;
  v33 = a4 & 1;
  v32 = 0LL;
  if ( (a4 & 1) == 0 || (v7 = a4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v7 = 0LL;
  v8 = 1;
  v9 = 0;
  v30 = 1;
  for ( i = a3; ; ++i )
  {
    v11 = MI_READ_PTE_LOCK_FREE(*i);
    if ( (v11 & 1) == 0 )
      break;
LABEL_41:
    ++v8;
    ++v9;
    v30 = v8;
    if ( v8 >= 4 )
      return 3221225494LL;
  }
  for ( j = a2; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
  {
    if ( j > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !v11 )
  {
    if ( a2 >= 0xFFFF800000000000uLL )
    {
      if ( v7 )
        return 0LL;
      if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL && a4 )
        KeBugCheckEx(0x50u, a2, a1, a3[v9], 5uLL);
    }
    MiCheckVirtualAddress(a2, &v31, v35);
    if ( v31 == 24 )
    {
      v24 = v35[0];
      MiCheckBadSystemProcessAccess(a2);
      if ( a2 <= (unsigned __int64)MmHighestUserAddress && v24 && v7 )
      {
        v25 = a3[v9] + 8LL;
        if ( v9 < 4 )
        {
          v26 = 4 - v9;
          do
          {
            v25 = v25 << 25 >> 16;
            --v26;
          }
          while ( v26 );
        }
        MiLeapPrefetch(v7, v25);
        *(_BYTE *)(v7 + 1) = 1;
      }
      return 3221225477LL;
    }
    if ( !v29
      && Process[1].Affinity.Bitmap[10]
      && (v7 && *(_QWORD *)(v7 + 56) != v7 + 56 || (unsigned int)MiWaitForForkToComplete(Process, a5) == 1) )
    {
      return 3221226548LL;
    }
    if ( (unsigned __int64)(*i + 0x90482413000LL) > 0xFFF && j <= (unsigned __int64)MmHighestUserAddress )
    {
      v32 = MI_GET_USED_PTES_HANDLE(a3[v8]);
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v32, 1u);
    }
    v14 = (_QWORD *)*i;
    *v14 = 128LL;
    if ( (unsigned int)MiPteInShadowRange(v14) )
      MiWritePteShadow(v14, 128LL);
    ++v29;
  }
  if ( v33 && ((v15 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)(v15 - 1) <= 2u) || v15 == 5) )
    v16 = 0LL;
  else
    v16 = a4;
  v17 = &Process[1].IdealNode[12];
  v18 = &a3[v8];
  v19 = MiDispatchFault(2, *v18, 0, 0, (__int64)v17, a5, v16, 0LL, (__int64)&v34);
  if ( v19 == -1073532109 )
  {
    v20 = v34;
    if ( a6 == 1 )
      *(_BYTE *)(v34 + 191) |= 2u;
    MiIssueHardFault(v17, a5, *v18, v20, v16, 1LL);
LABEL_37:
    v21 = (_BYTE **)a3;
    v22 = 0;
    while ( (**v21 & 1) != 0 )
    {
      ++v22;
      ++v21;
      if ( v22 > v9 )
      {
        v8 = v30;
        goto LABEL_41;
      }
    }
    return 3221226548LL;
  }
  if ( !v29 || v19 != -1073741801 )
    goto LABEL_37;
  v27 = (_QWORD *)a3[v9];
  *v27 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v27) )
    MiWritePteShadow(v27, 0LL);
  v28 = v32;
  if ( v32 )
  {
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v32);
    if ( ((*(_DWORD *)(v28 + 16) >> 14) & 0x3FF) == 0 )
      MiDeletePageTableHierarchy(0LL, a3[v9]);
  }
  return 3221225495LL;
}
