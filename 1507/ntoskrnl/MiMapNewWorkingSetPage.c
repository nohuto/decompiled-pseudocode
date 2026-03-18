/*
 * XREFs of MiMapNewWorkingSetPage @ 0x140068BC8
 * Callers:
 *     MiAddWorkingSetPage @ 0x140068A30 (MiAddWorkingSetPage.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiMapNewWorkingSetPage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned int v6; // r12d
  unsigned __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // r9
  __int64 *v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r14d
  __int16 *VmPartition; // rsi
  __int64 v17; // r9
  _WORD *v19; // r8
  __int16 v20; // ax
  __int64 Page; // rax
  __int64 v22; // rbx
  __int64 v23; // r15
  unsigned __int8 v24; // cl
  __int64 DemandZeroPte; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _WORD *v33; // [rsp+20h] [rbp-68h] BYREF
  __int16 v34; // [rsp+28h] [rbp-60h]
  unsigned __int16 v35; // [rsp+2Ah] [rbp-5Eh]
  _QWORD v36[3]; // [rsp+30h] [rbp-58h] BYREF

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  v5 = v36;
  v6 = 8;
  v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 1;
  LODWORD(v9) = 3;
  do
  {
    *v5++ = v7;
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  while ( 1 )
  {
    v9 = (unsigned int)(v9 - 1);
    v10 = (__int64 *)v36[v9];
    v11 = *v10;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v11)
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8 * ((v12 >> 3) & 0x1FF));
        if ( (v14 & 0x20) != 0 )
          LOBYTE(v11) = v11 | 0x20;
        if ( (v14 & 0x42) != 0 )
          LOBYTE(v11) = v11 | 0x42;
      }
    }
    if ( (v11 & 1) == 0 )
      break;
    if ( !(_DWORD)v9 )
      goto LABEL_17;
  }
  v8 = v9 + 2;
LABEL_17:
  v15 = 0;
  VmPartition = MiGetVmPartition(a1);
  if ( (*(_BYTE *)(a1 + 216) & 7u) < 2 && *(_QWORD *)(a1 + 144) < *(_QWORD *)(a1 + 152) + (unsigned __int64)v8 )
  {
    if ( !(unsigned int)MiChargeCommit(VmPartition, 1LL, 1LL) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident(VmPartition, 1uLL, 128LL, v17) )
    {
LABEL_23:
      MiReturnCommit(VmPartition, 1LL);
      return 0LL;
    }
    if ( VmPartition == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034F838, 1uLL);
  }
  else
  {
    v15 = 8;
  }
  MI_INITIALIZE_COLOR_BASE(a1, 0, (__int64)&v33);
  v19 = v33;
  v20 = v34;
  ++*v33;
  Page = MiGetPage(VmPartition, v35 | (unsigned int)(unsigned __int16)(v20 & *v19), 194LL);
  v22 = Page;
  if ( Page == -1 )
  {
    if ( v15 )
      return 0LL;
    if ( VmPartition == MiSystemPartition )
      goto LABEL_29;
    goto LABEL_40;
  }
  v23 = 48 * Page - 0x58000000000LL;
  v24 = *(_BYTE *)(a1 + 216) & 7;
  if ( v24 < 2u )
  {
    v6 = (v24 != 1) + 1;
  }
  else if ( (signed __int32 *)a1 != dword_14034FD40 )
  {
    v6 = 9;
    if ( (signed __int32 *)a1 == dword_14034FE40 )
      v6 = 6;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v2, v2, v15 | 0x40u, v6) )
  {
    MiReleaseFreshPage(v23);
    if ( v15 )
      return 0LL;
    if ( VmPartition == MiSystemPartition )
    {
LABEL_29:
      MiReturnResidentAvailable(1uLL);
      _InterlockedExchangeAdd64(&qword_14034F840, 1uLL);
      goto LABEL_23;
    }
LABEL_40:
    _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 696, 1uLL);
    goto LABEL_23;
  }
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)v2 = DemandZeroPte;
  if ( v2 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(v2, DemandZeroPte);
  MiInitializePfn(v23, v2, 4LL);
  v27 = 0x904C0000000LL;
  v28 = v2 + 0x904C0000000LL;
  if ( (*(_BYTE *)(a1 + 216) & 7u) < 2 )
  {
    v31 = qword_1403D0230 ^ (qword_1403D0230 ^ (v22 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( v28 <= 0x3FFFFFFF )
      v31 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v2 >= 0xFFFFF68000000000uLL
      || v2 >= 0xFFFFF6FB40000000uLL
      && v2 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v2 >= 0xFFFFF6FB7DA00000uLL
      && (v27 = 0x90482600000LL, v2 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
      || v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v31 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v2, v31, v27) )
      v30 |= 0x100uLL;
  }
  else
  {
    v29 = qword_1403D0230 ^ (qword_1403D0230 ^ (v22 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( v28 <= 0x3FFFFFFF )
      v29 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v2 >= 0xFFFFF68000000000uLL
      || v2 >= 0xFFFFF6FB40000000uLL
      && v2 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v2 >= 0xFFFFF6FB7DA00000uLL
      && (v27 = 0x90482600000LL, v2 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
      || v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v29 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v2, v26, v27) )
      v29 |= 0x100uLL;
    v30 = v29 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  }
  v32 = v30 | 0x42;
  *(_QWORD *)v2 = v32;
  if ( v2 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(v2, v32);
  if ( (*(_BYTE *)(a1 + 216) & 7) == 1 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 2928), 1uLL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 2920), 1uLL);
  }
  else
  {
    *(_QWORD *)(a1 + 152) += v8;
  }
  return 1LL;
}
