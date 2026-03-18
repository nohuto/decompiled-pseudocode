/*
 * XREFs of MiSessionInitializeWorkingSetList @ 0x1404FF630
 * Callers:
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 * Callees:
 *     MiGetSystemPage @ 0x140011A30 (MiGetSystemPage.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiPopulateWorkingSetFreeList @ 0x14009B2F0 (MiPopulateWorkingSetFreeList.c)
 *     MiAllowWorkingSetExpansion @ 0x14009B3B4 (MiAllowWorkingSetExpansion.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 MiSessionInitializeWorkingSetList()
{
  unsigned __int64 v0; // rbp
  __int64 v1; // rax
  unsigned __int64 v2; // rsi
  __int64 v4; // r15
  _QWORD *PteAddress; // r14
  __int64 SystemPage; // r13
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  v0 = xmmword_1402FE630;
  v1 = (xmmword_1402FE630 + 519) & 0xFFFFFFFFFFFFFFF0uLL;
  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  *(_QWORD *)(v2 + 3152) = xmmword_1402FE630;
  *(_QWORD *)(v2 + 3224) = v1;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, 1uLL, 0LL) )
    return 3221225495LL;
  v4 = *(_QWORD *)(v2 + 3064);
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, 1uLL, 20LL) )
  {
    MiReturnCommit((__int64)MiSystemPartition, 1uLL);
    return 3221225495LL;
  }
  _InterlockedExchangeAdd64(&qword_1402FF4F8, 1uLL);
  PteAddress = (_QWORD *)MiGetPteAddress(v0);
  if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)PteAddress, (__int64)PteAddress, 65, 0xBu) )
  {
    MiReturnCommit((__int64)MiSystemPartition, 1uLL);
    MiReturnResidentAvailable(1uLL);
    _InterlockedExchangeAdd64(&qword_1402FF500, 1uLL);
    return 3221225495LL;
  }
  MI_INITIALIZE_COLOR_BASE(v2 + 2968, 0, (__int64)v12);
  *(_DWORD *)(v2 + 4) |= 0x10u;
  SystemPage = MiGetSystemPage((__int64)MiSystemPartition, (__int64)v12);
  v7 = qword_140381320 ^ (qword_140381320 ^ (((SystemPage + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( !MiGetPteAddress(0LL) || !MiGetPdeAddress(0LL) )
    v7 |= 4uLL;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v7 |= 0x100uLL;
  v8 = v7 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
  MiInitializePfn(SystemPage, (unsigned __int64)PteAddress, 4u, 4);
  *PteAddress = v8;
  if ( MiPteInShadowRange((__int64)PteAddress) )
    MiWritePteShadow((__int64)PteAddress, v8);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 40), 1uLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 48), 1uLL);
  *(_BYTE *)(v2 + 3184) = *(_BYTE *)(v2 + 3184) & 0x78 | 0x81;
  *(_QWORD *)(v2 + 3104) = v4 + 6;
  *(_QWORD *)(v0 + 16) = 0LL;
  *(_QWORD *)(v0 + 496) = *(_QWORD *)(v2 + 3224);
  v9 = *(_DWORD *)(v0 + 496);
  *(_DWORD *)(v0 + 64) = 8;
  *(_QWORD *)(v0 + 96) = *((_QWORD *)&xmmword_1402FE630 + 1);
  *(_QWORD *)(v0 + 104) = qword_1402FE640;
  *(_QWORD *)(v0 + 80) = 0xFFFFF90000000000uLL;
  v10 = *((_QWORD *)&xmmword_1402FE630 + 1);
  *(_QWORD *)(v0 + 8) = 1LL;
  *(_QWORD *)(v0 + 24) = 1LL;
  *(_QWORD *)(v0 + 88) = (v10 - 4096) | 1;
  v11 = ((unsigned __int64)(4096 - (v9 & 0xFFFu)) >> 3) - 1;
  *(_QWORD *)(v0 + 32) = v11;
  *(_QWORD *)(v2 + 3072) = 0LL;
  *(_QWORD *)(v2 + 3080) = 0LL;
  *(_QWORD *)(v2 + 3088) = 0LL;
  *(_QWORD *)(v2 + 3096) = 0LL;
  MiPopulateWorkingSetFreeList(v2 + 2968, 1uLL, v11);
  MiAllowWorkingSetExpansion(v2 + 2968);
  return 0LL;
}
