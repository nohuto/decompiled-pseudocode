/*
 * XREFs of MiResolvePageTablePage @ 0x1400C0790
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiLockPageTableRange @ 0x14014A398 (MiLockPageTableRange.c)
 * Callees:
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiCheckUserVirtualAddress @ 0x140089780 (MiCheckUserVirtualAddress.c)
 *     MiVadCompareVpn @ 0x1400C2460 (MiVadCompareVpn.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiLeapPrefetch @ 0x14015C0CC (MiLeapPrefetch.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiWaitForForkToComplete @ 0x1402314F8 (MiWaitForForkToComplete.c)
 */

__int64 __fastcall MiResolvePageTablePage(
        ULONG_PTR a1,
        ULONG_PTR a2,
        _QWORD **a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6)
{
  __int64 v6; // r11
  _QWORD **v7; // r10
  _BYTE *v9; // r9
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  __int64 **v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 i; // rsi
  _KPROCESS *Process; // r15
  __int64 v19; // rdi
  _KPROCESS *v20; // r14
  int v21; // eax
  int v22; // edi
  __int64 DemandZeroPte; // rax
  __int64 *v24; // rcx
  unsigned __int64 v25; // rdx
  char v26; // cl
  __int64 v27; // rdi
  unsigned __int64 *v28; // r14
  int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // r8d
  _BYTE **v32; // rdx
  _BYTE *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rcx
  ULONG_PTR v38; // rsi
  int v39; // [rsp+50h] [rbp-78h]
  int v40; // [rsp+54h] [rbp-74h] BYREF
  int v41; // [rsp+58h] [rbp-70h]
  _BYTE *v42; // [rsp+60h] [rbp-68h]
  __int64 **v43; // [rsp+68h] [rbp-60h]
  ULONG_PTR v44; // [rsp+70h] [rbp-58h]
  __int64 v45; // [rsp+78h] [rbp-50h]
  __int64 v46[9]; // [rsp+80h] [rbp-48h] BYREF

  v39 = 0;
  v45 = a4 & 1;
  v6 = a4;
  v7 = a3;
  v44 = 0LL;
  if ( (a4 & 1) == 0 || (v9 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL), v42 = v9, *v9 != 1) )
  {
    v9 = 0LL;
    v42 = 0LL;
  }
  v10 = 1;
  v43 = a3;
  v41 = 1;
  v11 = 0;
  v12 = a3;
  while ( 1 )
  {
    v13 = **v12;
    if ( (unsigned __int64)(*v12 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(4LL, v13)
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((v14 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v13 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v13 |= 0x42uLL;
      }
    }
    if ( (v13 & 1) == 0 )
      break;
LABEL_77:
    ++v10;
    ++v12;
    ++v11;
    v41 = v10;
    v43 = v12;
    if ( v10 >= 4 )
      return 3221225494LL;
    v9 = v42;
  }
  for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !v13 )
  {
    if ( a2 >= 0xFFFF800000000000uLL )
    {
      if ( v9 )
        return 0LL;
      if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL && v6 )
        KeBugCheckEx(0x50u, a2, a1, (ULONG_PTR)v7[v11], 5uLL);
    }
    v19 = 0LL;
    if ( a2 > (unsigned __int64)MmHighestUserAddress )
    {
      if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
      {
        v40 = 4;
LABEL_50:
        v22 = v39;
        if ( !v39 && Process[1].Affinity.Bitmap[10] )
        {
          if ( v42 && *((_BYTE **)v42 + 7) != v42 + 56 || (unsigned int)MiWaitForForkToComplete(Process, a5) == 1 )
            return 3221226548LL;
          v22 = 0;
        }
        if ( (unsigned __int64)(*v12 + 0x12090482600LL) > 0xFFF && i <= (unsigned __int64)MmHighestUserAddress )
        {
          v44 = MI_GET_USED_PTES_HANDLE(a3[v10]);
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v44, 1u);
        }
        DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v24 = *v12;
        v25 = (unsigned __int64)(*v12 + 0x12090482600LL);
        **v12 = DemandZeroPte;
        if ( v25 <= 0x7F8 )
          MiWritePteShadow(v24, DemandZeroPte);
        v7 = a3;
        v6 = a4;
        v39 = v22 + 1;
        goto LABEL_62;
      }
    }
    else
    {
      if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
        && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 1) == 0 )
      {
        v40 = 1;
        goto LABEL_50;
      }
      v20 = KeGetCurrentThread()->ApcState.Process;
      v19 = v20[2].Affinity.Bitmap[2];
      if ( !v19 )
        goto LABEL_38;
      if ( a2 >> 12 < (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
        || a2 >> 12 > (*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) )
      {
        v19 = v20[2].Affinity.Bitmap[0];
        while ( v19 )
        {
          v21 = MiVadCompareVpn(a2 >> 12, v19);
          if ( v21 >= 0 )
          {
            if ( v21 <= 0 )
            {
              v20[2].Affinity.Bitmap[2] = v19;
              goto LABEL_46;
            }
            v19 = *(_QWORD *)(v19 + 8);
          }
          else
          {
            v19 = *(_QWORD *)v19;
          }
        }
LABEL_38:
        v19 = 0LL;
        goto LABEL_39;
      }
LABEL_46:
      MiCheckUserVirtualAddress(a2, &v40, v19, 0);
      if ( v40 != 24 )
      {
        v12 = v43;
        v10 = v41;
        goto LABEL_50;
      }
    }
LABEL_39:
    if ( a2 >= 0x10000
      && (char *)a2 <= (char *)MmHighestUserAddress - 0x10000
      && !v19
      && (a1 & 2) != 0
      && Process == PsInitialSystemProcess )
    {
      KeBugCheckEx(0x1Au, 0x4477uLL, a2, 0LL, 0LL);
    }
    if ( a2 <= (unsigned __int64)MmHighestUserAddress )
    {
      if ( v19 )
      {
        v34 = v42;
        if ( v42 )
        {
          v35 = (__int64)(a3[v11] + 1);
          if ( v11 < 4 )
          {
            v36 = 4 - v11;
            do
            {
              v35 = v35 << 25 >> 16;
              --v36;
            }
            while ( v36 );
          }
          MiLeapPrefetch(v42, v35);
          v34[1] = 1;
        }
      }
    }
    return 3221225477LL;
  }
LABEL_62:
  if ( v45 && ((v26 = *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)(v26 - 1) <= 2u) || v26 == 5) )
    v27 = 0LL;
  else
    v27 = v6;
  v28 = (unsigned __int64 *)&v7[v10];
  v29 = MiDispatchFault(2, *v28, 0, 0, (__int64)&Process[1].IdealNode[8], a5, v27, 0LL, (__int64)v46);
  if ( v29 == -1073532109 )
  {
    v30 = v46[0];
    if ( a6 == 1 )
      *(_BYTE *)(v46[0] + 191) |= 2u;
    MiIssueHardFault((__int64)&Process[1].IdealNode[8], a5, *v28, v30, v27, 1LL);
LABEL_73:
    v7 = a3;
    v31 = 0;
    v32 = (_BYTE **)a3;
    while ( (**v32 & 1) != 0 )
    {
      ++v31;
      ++v32;
      if ( v31 > v11 )
      {
        v10 = v41;
        v6 = a4;
        goto LABEL_77;
      }
    }
    return 3221226548LL;
  }
  if ( !v39 || v29 != -1073741801 )
    goto LABEL_73;
  v37 = a3[v11];
  *v37 = 0LL;
  if ( (unsigned __int64)(v37 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v37, 0LL);
  v38 = v44;
  if ( v44 )
  {
    MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v44, 1u);
    if ( (*(_DWORD *)(v38 + 16) & 0x3FF0000) == 0 )
      MiDeletePageTableHierarchy(0LL, (unsigned __int64)a3[v11]);
  }
  return 3221225495LL;
}
