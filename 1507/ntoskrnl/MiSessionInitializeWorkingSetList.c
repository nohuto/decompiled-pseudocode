/*
 * XREFs of MiSessionInitializeWorkingSetList @ 0x140579F34
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 * Callees:
 *     MiPopulateWorkingSetFreeList @ 0x14002B510 (MiPopulateWorkingSetFreeList.c)
 *     MiAllowWorkingSetExpansion @ 0x14002B61C (MiAllowWorkingSetExpansion.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetSystemPage @ 0x1400E1348 (MiGetSystemPage.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 MiSessionInitializeWorkingSetList()
{
  unsigned __int64 v0; // r14
  __int64 v1; // rax
  unsigned __int64 v2; // rbp
  __int64 v3; // r9
  __int64 v5; // r15
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v0 = xmmword_14034EAE0;
  v1 = (xmmword_14034EAE0 + 519) & 0xFFFFFFFFFFFFFFF0uLL;
  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  *(_QWORD *)(v2 + 3152) = xmmword_14034EAE0;
  *(_QWORD *)(v2 + 3224) = v1;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, 1uLL, 0) )
    return 3221225495LL;
  v5 = *(_QWORD *)(v2 + 3064);
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, 1uLL, 20LL, v3) )
  {
    MiReturnCommit((__int64)MiSystemPartition, 1LL);
    return 3221225495LL;
  }
  _InterlockedExchangeAdd64(&qword_14034F978, 1uLL);
  v6 = (__int64 *)(((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)v6, (__int64)v6, 65, 11) )
  {
    MiReturnCommit((__int64)MiSystemPartition, 1LL);
    MiReturnResidentAvailable(1uLL);
    _InterlockedExchangeAdd64(&qword_14034F980, 1uLL);
    return 3221225495LL;
  }
  MI_INITIALIZE_COLOR_BASE(v2 + 2968, 0, (__int64)v13);
  *(_DWORD *)(v2 + 4) |= 0x10u;
  v7 = qword_1403D0230 ^ (qword_1403D0230 ^ (((MiGetSystemPage((__int64)v13) + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v7 |= 0x100uLL;
  v9 = v7 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
  MiInitializePfn(v8, v6, 4u, 4);
  *v6 = v9;
  if ( MiPteInShadowRange((__int64)v6) )
    MiWritePteShadow((__int64)v6, v9);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 40), 1uLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 48), 1uLL);
  *(_BYTE *)(v2 + 3184) = *(_BYTE *)(v2 + 3184) & 0x78 | 0x81;
  *(_QWORD *)(v2 + 3104) = v5 + 6;
  *(_QWORD *)(v0 + 16) = 0LL;
  *(_QWORD *)(v0 + 496) = *(_QWORD *)(v2 + 3224);
  v10 = *(_DWORD *)(v0 + 496);
  *(_DWORD *)(v0 + 64) = 8;
  *(_QWORD *)(v0 + 96) = *((_QWORD *)&xmmword_14034EAE0 + 1);
  *(_QWORD *)(v0 + 104) = qword_14034EAF0;
  *(_QWORD *)(v0 + 80) = 0xFFFFF90000000000uLL;
  v11 = *((_QWORD *)&xmmword_14034EAE0 + 1);
  *(_QWORD *)(v0 + 8) = 1LL;
  *(_QWORD *)(v0 + 24) = 1LL;
  *(_QWORD *)(v0 + 88) = (v11 - 4096) | 1;
  v12 = ((unsigned __int64)(4096 - (v10 & 0xFFFu)) >> 3) - 1;
  *(_QWORD *)(v0 + 32) = v12;
  *(_QWORD *)(v2 + 3072) = 0LL;
  *(_QWORD *)(v2 + 3080) = 0LL;
  *(_QWORD *)(v2 + 3088) = 0LL;
  *(_QWORD *)(v2 + 3096) = 0LL;
  MiPopulateWorkingSetFreeList(v2 + 2968, 1uLL, v12);
  MiAllowWorkingSetExpansion(v2 + 2968);
  return 0LL;
}
