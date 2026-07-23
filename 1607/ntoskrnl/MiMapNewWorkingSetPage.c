/*
 * XREFs of MiMapNewWorkingSetPage @ 0x140100BD0
 * Callers:
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiAddWorkingSetPage @ 0x1400FFE80 (MiAddWorkingSetPage.c)
 *     MiMapWsleHash @ 0x140100B00 (MiMapWsleHash.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiMapNewWorkingSetPage(__int64 a1, unsigned __int64 a2, int a3)
{
  char *AnyMultiplexedVm; // rbp
  __int64 v6; // rcx
  LONG *SharedVm; // r12
  unsigned __int64 v8; // rdi
  int v9; // r9d
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r10
  int v12; // r15d
  int *v13; // rsi
  unsigned int v14; // r10d
  unsigned int v15; // r14d
  int v16; // r11d
  unsigned __int16 *v17; // r8
  int v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  unsigned __int8 v22; // al
  __int64 Page; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 DemandZeroPte; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // esi
  unsigned __int64 ValidKernelPte; // rbx
  __int64 v34; // rbx
  unsigned int v35; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+30h] [rbp-78h]
  unsigned __int16 *v38; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 v39; // [rsp+40h] [rbp-68h]
  unsigned __int16 v40; // [rsp+42h] [rbp-66h]
  unsigned __int64 v41; // [rsp+48h] [rbp-60h]
  unsigned __int64 v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+58h] [rbp-50h]

  AnyMultiplexedVm = (char *)a1;
  if ( (*(_BYTE *)(a1 + 187) & 1) != 0 )
    return 0LL;
  SharedVm = MiGetSharedVm(a1);
  v37 = *(_QWORD *)(v6 + 16);
  v35 = 1;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 3;
  v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(*(&v41 + (unsigned int)(v9 - 1)));
    if ( (v10 & v11) == 0 )
      break;
    if ( !v9 )
      goto LABEL_8;
  }
  v35 = v9 + 2;
LABEL_8:
  v12 = 0;
  if ( (AnyMultiplexedVm[184] & 7) == 2 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v13 = MiPartitionIdToPointer(*((_WORD *)AnyMultiplexedVm + 82));
  v15 = 8;
  if ( v16
    && ((AnyMultiplexedVm[184] & 7u) >= 2
     || *((_QWORD *)SharedVm + 6) >= *((_QWORD *)SharedVm + 7) + (unsigned __int64)v14) )
  {
    v12 = 8;
  }
  else
  {
    if ( !(unsigned int)MiChargeCommit((__int64)v13, 1uLL, 1) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident(v13, 1LL, 128LL) )
    {
      MiReturnCommit((__int64)v13, 1uLL);
      return 0LL;
    }
  }
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v38);
  v17 = v38;
  v18 = v39;
  ++*v38;
  v19 = *v17;
  v20 = 194;
  v21 = v40 | v18 & v19;
  v22 = AnyMultiplexedVm[184] & 7;
  if ( v22 >= 2u )
    v20 = 202;
  if ( !v37 && v22 == 4 )
    v20 |= 0x2000u;
  Page = MiGetPage((__int64)v13, v21, v20);
  v27 = Page;
  if ( Page == -1 )
  {
    if ( (v12 & 8) == 0 )
    {
      if ( v13 == MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 816, 1uLL);
      MiReturnCommit((__int64)v13, 1uLL);
    }
    return 0LL;
  }
  v28 = 48 * Page - 0x58000000000LL;
  if ( v35 <= 1 )
    goto LABEL_47;
  if ( (AnyMultiplexedVm[184] & 7) == 1 )
  {
    if ( v37 )
    {
      v15 = 1;
    }
    else
    {
      v15 = 11;
      v12 |= 1u;
    }
  }
  else if ( (AnyMultiplexedVm[184] & 7) != 2 )
  {
    if ( (AnyMultiplexedVm[184] & 7) == 3 )
    {
      v15 = 6;
    }
    else if ( (AnyMultiplexedVm[184] & 7) == 4 )
    {
      v15 = 9;
    }
    else
    {
      v15 = 2;
    }
  }
  if ( (unsigned int)MiMakeZeroedPageTables(v8, v8, v12 | 0x40u, v15) )
  {
LABEL_47:
    DemandZeroPte = MiMakeDemandZeroPte(4LL, v24, v25, v26);
    *(_QWORD *)v8 = DemandZeroPte;
    v32 = MiPteInShadowRange(v8, DemandZeroPte);
    if ( v32 )
      MiWritePteShadow(v31, v30);
    MiInitializePfn(v28, v8, 4LL, v37 != 0 ? 0x10 : 0);
    if ( (AnyMultiplexedVm[184] & 7u) < 2 )
    {
      ValidKernelPte = qword_1403A9360 ^ (qword_1403A9360 ^ (v27 << 12)) & 0xFFFFFFFFF000LL | 0x21;
      if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
        ValidKernelPte &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v8 <= 0xFFFFF6BFFFFFFF78uLL && v8 >= 0xFFFFF68000000000uLL
        || v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB5FFFFFF8uLL
        || v8 >= 0xFFFFF6FB7DA00000uLL && v8 <= 0xFFFFF6FB7DAFFFF8uLL
        || v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        ValidKernelPte |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v8) )
        ValidKernelPte |= 0x100uLL;
    }
    else
    {
      ValidKernelPte = MiMakeValidKernelPte(v27, 4, v8);
    }
    v34 = ValidKernelPte | 0x42;
    *(_QWORD *)v8 = v34;
    if ( v32 )
      MiWritePteShadow(v8, v34);
    if ( !a3 )
      *((_QWORD *)SharedVm + 9) += v35;
    if ( (AnyMultiplexedVm[184] & 7) == 1 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)AnyMultiplexedVm - 371, 1uLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)AnyMultiplexedVm - 370, 1uLL);
    }
    else if ( a3 == 1 )
    {
      *((_QWORD *)SharedVm + 7) += v35;
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_140327940, v35);
    }
    return 1LL;
  }
  else
  {
    MiReleaseFreshPage(v28);
    if ( (v12 & 8) == 0 )
    {
      if ( v13 == MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 816, 1uLL);
      MiReturnCommit((__int64)v13, 1uLL);
    }
    return 0LL;
  }
}
