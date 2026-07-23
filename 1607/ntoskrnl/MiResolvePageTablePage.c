/*
 * XREFs of MiResolvePageTablePage @ 0x14003F890
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiLockPageTableRange @ 0x140123A7C (MiLockPageTableRange.c)
 * Callees:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     MiCheckUserVirtualAddress @ 0x14001EA50 (MiCheckUserVirtualAddress.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiDecreaseUsedPtesCount @ 0x1400E46BC (MiDecreaseUsedPtesCount.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiLeapPrefetch @ 0x1401E828C (MiLeapPrefetch.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiResolvePageTablePage(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 **a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  unsigned __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 **v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 **v14; // r10
  unsigned int v15; // r11d
  unsigned __int64 v16; // rsi
  unsigned __int64 i; // rdx
  _KPROCESS *Process; // r14
  unsigned __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  _KPROCESS *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 DemandZeroPte; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // cl
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 *v33; // r14
  int v34; // eax
  char v35; // al
  __int64 v36; // r9
  unsigned int v37; // r8d
  __int64 **v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rcx
  int v43; // [rsp+50h] [rbp-68h]
  unsigned int v44; // [rsp+54h] [rbp-64h]
  __int64 **v45; // [rsp+58h] [rbp-60h]
  __int64 UsedPtesHandle; // [rsp+60h] [rbp-58h]
  ULONG_PTR v47; // [rsp+68h] [rbp-50h]
  __int64 v48[9]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v51; // [rsp+D8h] [rbp+20h] BYREF

  v43 = 0;
  v47 = a4 & 1;
  UsedPtesHandle = 0LL;
  if ( (a4 & 1) == 0 || (v8 = a4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v8 = 0LL;
  v45 = a3;
  v9 = 0;
  v44 = 1;
  v10 = a3;
  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(*v10);
    if ( (v11 & 1) == 0 )
    {
      v16 = a2;
      for ( i = 0xFFFFF68000000000uLL; v16 >= 0xFFFFF68000000000uLL; v16 = (__int64)(v16 << 25) >> 16 )
      {
        if ( v16 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( v11 )
        goto LABEL_62;
      if ( a2 >= 0xFFFF800000000000uLL )
      {
        if ( v8 )
          return 0LL;
        if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL && a4 )
          KeBugCheckEx(0x50u, a2, a1, (ULONG_PTR)v14[v9], 6uLL);
      }
      v19 = 0x7FFFFFFEFFFFLL;
      v20 = 0LL;
      if ( a2 > 0x7FFFFFFEFFFFLL )
      {
        if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v51 = v15;
          goto LABEL_50;
        }
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
        {
          v21 = a2 & 0x7FFFFFFFF000LL;
          if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            v51 = 1;
LABEL_50:
            if ( !v43
              && Process[1].Affinity.Bitmap[10]
              && (v8 && *(_QWORD *)(v8 + 56) != v8 + 56
               || (unsigned int)MiWaitForForkToComplete((__int64)Process, a5) == 1) )
            {
              return 3221226548LL;
            }
            if ( ((unsigned __int64)*v45 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)*v45 > 0xFFFFF6FB7DBEDFFFuLL)
              && v16 <= 0x7FFFFFFEFFFFLL )
            {
              UsedPtesHandle = MiGetUsedPtesHandle(a3[v44]);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
            }
            DemandZeroPte = MiMakeDemandZeroPte(4LL, i, v12, v19);
            v27 = *v45;
            *v27 = DemandZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v27, DemandZeroPte) )
              MiWritePteShadow(v29, v28);
            ++v43;
            v13 = v44;
            v14 = a3;
LABEL_62:
            if ( v47 && ((v30 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)(v30 - 1) <= 2u) || v30 == 5) )
              v31 = 0LL;
            else
              v31 = a4;
            v32 = (__int64)&Process[1].IdealNode[12];
            v33 = (unsigned __int64 *)&v14[v13];
            v34 = MiDispatchFault(2, *v33, 0, 0, v32, a5, v31, 0LL, a6, (__int64)v48);
            if ( v34 == -1073532109 )
            {
              v35 = a6;
              v36 = v48[0];
              if ( a6 == 1 )
                *(_BYTE *)(v48[0] + 191) |= 2u;
              MiIssueHardFault(v32, a5, *v33, v36, v31, 1LL, v35);
            }
            else if ( v43 && v34 == -1073741801 )
            {
              v41 = a3[v9];
              *v41 = 0LL;
              if ( (unsigned int)MiPteInShadowRange(v41, a3) )
                MiWritePteShadow(v42, 0LL);
              if ( UsedPtesHandle )
              {
                MiDecreaseUsedPtesCount(UsedPtesHandle);
                if ( (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) == 0 )
                  MiDeletePageTableHierarchy(0LL, a3[v9]);
              }
              return 3221225495LL;
            }
            v37 = 0;
            v38 = a3;
            while ( (*(_BYTE *)*v38 & 1) != 0 )
            {
              ++v37;
              ++v38;
              if ( v37 > v9 )
              {
                v10 = v45;
                v13 = v44;
                goto LABEL_77;
              }
            }
            return 3221226548LL;
          }
          if ( v21 == qword_1403269D8 && v21 )
          {
            v51 = 1;
            goto LABEL_50;
          }
        }
        v22 = KeGetCurrentThread()->ApcState.Process;
        v20 = v22[2].Affinity.Bitmap[5];
        if ( !v20 )
          goto LABEL_37;
        v23 = a2 >> 12;
        if ( a2 >> 12 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
          || v23 > (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
        {
          v20 = v22[2].Affinity.Bitmap[3];
          while ( v20 )
          {
            if ( v23 > (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
            {
              v20 = *(_QWORD *)(v20 + 8);
            }
            else
            {
              if ( v23 >= (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) )
              {
                v22[2].Affinity.Bitmap[5] = v20;
                goto LABEL_39;
              }
              v20 = *(_QWORD *)v20;
            }
          }
LABEL_37:
          v20 = 0LL;
          goto LABEL_80;
        }
LABEL_39:
        MiCheckUserVirtualAddress(a2, (int *)&v51, v20, 0);
        i = v51;
        if ( v51 != 24 )
        {
          if ( !v8 )
            goto LABEL_50;
          if ( (v24 = a4 & 0xFFFFFFFFFFFFFFFEuLL, v51 >> 3 == 3) && (v51 & 7) != 0 || v51 >> 3 == 1 )
          {
            if ( (*(_DWORD *)(v24 + 80) & 0x4000) != 0 )
              goto LABEL_50;
          }
          MiAdvanceFaultList(v24);
          return 0LL;
        }
        v14 = a3;
        v15 = 4;
        v19 = 0x7FFFFFFEFFFFLL;
      }
LABEL_80:
      if ( a2 - 0x10000 <= 0x7FFFFFFCFFFFLL && !v20 && (a1 & 2) != 0 )
      {
        if ( Process == PsInitialSystemProcess )
          KeBugCheckEx(0x1Au, 0x4477uLL, a2, 0LL, 0LL);
        if ( (unsigned int)MiIsStoreProcess(Process) )
          KeBugCheckEx(0x1Au, 0x4478uLL, a2, 0LL, 0LL);
      }
      if ( a2 <= v19 && v20 && v8 )
      {
        v39 = (__int64)(v14[v9] + 1);
        if ( v9 < 4 )
        {
          v40 = v15 - v9;
          do
          {
            v39 = v39 << 25 >> 16;
            --v40;
          }
          while ( v40 );
        }
        MiLeapPrefetch(v8, v39);
        *(_BYTE *)(v8 + 1) = 1;
      }
      return 3221225477LL;
    }
    if ( (v11 & 0x80u) != 0LL )
      break;
LABEL_77:
    ++v10;
    ++v9;
    v44 = v13 + 1;
    v45 = v10;
    if ( v13 + 1 >= 4 )
      return 3221225494LL;
  }
  if ( !v8 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    KeBugCheckEx(0x50u, a2, a1, a4, 8uLL);
  return 3221225494LL;
}
