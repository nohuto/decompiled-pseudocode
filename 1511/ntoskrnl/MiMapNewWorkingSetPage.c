/*
 * XREFs of MiMapNewWorkingSetPage @ 0x140017418
 * Callers:
 *     MiAddWorkingSetPage @ 0x140017280 (MiAddWorkingSetPage.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapNewWorkingSetPage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r15d
  __int64 VmPartition; // r14
  __int64 v15; // rdx
  _WORD *v16; // r8
  __int16 v17; // ax
  __int64 Page; // rax
  __int64 v19; // rbx
  __int64 v20; // r12
  unsigned __int8 v21; // cl
  __int64 v22; // r11
  int v23; // r14d
  __int64 ValidKernelPte; // rbx
  __int64 v25; // rbx
  unsigned int v26; // [rsp+20h] [rbp-78h]
  _WORD *v27; // [rsp+28h] [rbp-70h] BYREF
  __int16 v28; // [rsp+30h] [rbp-68h]
  unsigned __int16 v29; // [rsp+32h] [rbp-66h]
  _QWORD v30[3]; // [rsp+38h] [rbp-60h] BYREF

  v26 = 1;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  v5 = v30;
  v6 = 8;
  v7 = 1;
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 3;
  do
  {
    *v5++ = v8;
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  while ( (MI_READ_PTE_LOCK_FREE(v30[--v9]) & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_7;
  }
  v7 = v9 + 2;
  v26 = v9 + 2;
LABEL_7:
  v12 = 0;
  VmPartition = MiGetVmPartition(a1, v10, v11);
  if ( (*(_BYTE *)(a1 + 216) & 7u) < 2 )
  {
    if ( *(_QWORD *)(a1 + 144) < *(_QWORD *)(a1 + 152) + (unsigned __int64)v7 )
    {
      if ( !(unsigned int)MiChargeCommit(VmPartition, 1LL, 1LL) )
        return 0LL;
      if ( !(unsigned int)MiChargeResident(VmPartition, 1LL, 128LL) )
        goto LABEL_14;
      if ( (int *)VmPartition == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_1402FF3B8, 1uLL);
    }
    else
    {
      v12 = 8;
    }
  }
  else
  {
    v12 = 8;
  }
  MI_INITIALIZE_COLOR_BASE(a1, 0LL, &v27);
  v16 = v27;
  v17 = v28;
  ++*v27;
  Page = MiGetPage(VmPartition, v29 | (unsigned int)(unsigned __int16)(v17 & *v16), 194LL);
  v19 = Page;
  if ( Page == -1 )
  {
    if ( v12 )
      return 0LL;
    if ( (int *)VmPartition == &MiSystemPartition )
    {
      MiReturnResidentAvailable(1LL);
      _InterlockedExchangeAdd64(&qword_1402FF3C0, 1uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(VmPartition + 5952), 1uLL);
    }
LABEL_14:
    v15 = 1LL;
LABEL_15:
    MiReturnCommit(VmPartition, v15);
    return 0LL;
  }
  v20 = 48 * Page - 0x58000000000LL;
  v21 = *(_BYTE *)(a1 + 216) & 7;
  if ( v21 < 2u )
  {
    v6 = (v21 != 1) + 1;
  }
  else if ( (LONG *)a1 != &dword_1402FF880 )
  {
    v6 = 9;
    if ( (LONG *)a1 == &dword_1402FF980 )
      v6 = 6;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v3, v3, v12 | 0x40u, v6) )
  {
    MiReleaseFreshPage(v20);
    if ( v12 )
      return 0LL;
    v22 = 1LL;
    if ( (int *)VmPartition == &MiSystemPartition )
    {
      MiReturnResidentAvailable(1LL);
      _InterlockedExchangeAdd64(&qword_1402FF3C0, (unsigned int)v22);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(VmPartition + 5952), 1uLL);
    }
    v15 = v22;
    goto LABEL_15;
  }
  *(_QWORD *)v3 = 128LL;
  v23 = MiPteInShadowRange(v3);
  if ( v23 )
    MiWritePteShadow(v3, 128LL);
  MiInitializePfn(v20, v3, 4LL);
  if ( (*(_BYTE *)(a1 + 216) & 7u) < 2 )
  {
    ValidKernelPte = qword_140381320 ^ (qword_140381320 ^ (v19 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( v3 + 0x904C0000000LL <= 0x3FFFFFFF )
      ValidKernelPte &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v3 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v3 >= 0xFFFFF68000000000uLL
      || v3 >= 0xFFFFF6FB40000000uLL
      && v3 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v3 >= 0xFFFFF6FB7DA00000uLL
      && v3 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      ValidKernelPte |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v3) )
      ValidKernelPte |= 0x100uLL;
  }
  else
  {
    ValidKernelPte = MiMakeValidKernelPte(v19, 4LL, v3);
  }
  v25 = ValidKernelPte | 0x42;
  *(_QWORD *)v3 = v25;
  if ( v23 )
    MiWritePteShadow(v3, v25);
  if ( (*(_BYTE *)(a1 + 216) & 7) == 1 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 2928), 1uLL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 2920), 1uLL);
  }
  else
  {
    *(_QWORD *)(a1 + 152) += v26;
  }
  return 1LL;
}
