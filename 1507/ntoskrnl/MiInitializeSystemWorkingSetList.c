/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407CAA28
 * Callers:
 *     MiInitializeSystemCache @ 0x1407C9B74 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 * Callees:
 *     MiPopulateWorkingSetFreeList @ 0x14002B510 (MiPopulateWorkingSetFreeList.c)
 *     MiAllowWorkingSetExpansion @ 0x14002B61C (MiAllowWorkingSetExpansion.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  _WORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  BOOL v14; // r12d
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  _WORD *v20; // [rsp+20h] [rbp-38h] BYREF
  __int16 v21; // [rsp+28h] [rbp-30h]
  unsigned __int16 v22; // [rsp+2Ah] [rbp-2Eh]

  v2 = MiSystemWorkingSetsBase;
  v4 = (16 * a2 + MiSystemWorkingSetsBase + 1073742591) & 0xFFFFFFFFC0000000uLL;
  v5 = (((unsigned __int64)MiSystemWorkingSetsBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (MiSystemWorkingSetsBase + 519) & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = v4 + 8 * a2;
  MiSystemWorkingSetsBase = (v7 + 0x3FFFFFFF) & 0xFFFFFFFFC0000000uLL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v5, v5, 64, 3) )
    return 0LL;
  MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v20);
  v9 = v20;
  ++*v20;
  if ( MiGetPage((__int64)MiSystemPartition, v22 | (unsigned int)(unsigned __int16)(v21 & *v9), 2u) == -1 )
    return 0LL;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
    v10 |= 0x100uLL;
  v12 = 48 * v11 - 0x58000000000LL;
  v13 = v10 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  v14 = *(_QWORD *)(v12 + 16) != 0LL;
  MiInitializePfn(v12, (__int64 *)v5, 4u, 4);
  *(_QWORD *)v5 = v13;
  if ( v5 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(v5, v13);
  if ( v14 )
    KeZeroPages((int *)((__int64)(v5 << 25) >> 16), 0x1000uLL);
  MiChargeResident(MiSystemPartition, 1uLL, 0xFFFFFFFFLL, v15);
  *(_QWORD *)(a1 + 184) = v2;
  *(_QWORD *)(v2 + 8) = 1LL;
  *(_QWORD *)(v2 + 88) = (v4 - 4096) | 1;
  *(_QWORD *)(v2 + 24) = 1LL;
  *(_QWORD *)(v2 + 496) = v6;
  *(_DWORD *)(v2 + 64) = 8;
  *(_QWORD *)(v2 + 96) = v4;
  *(_QWORD *)(v2 + 104) = v7;
  if ( (signed __int32 *)a1 == dword_14034FF40 )
  {
    v17 = 0xFFFFF80000000000uLL;
  }
  else if ( (signed __int32 *)a1 == dword_14034FD40 )
  {
    v17 = qword_14034EE00;
  }
  else
  {
    if ( (signed __int32 *)a1 != dword_14034FE40 )
      goto LABEL_17;
    v17 = 0xFFFFC00000000000uLL;
  }
  *(_QWORD *)(v2 + 80) = v17;
LABEL_17:
  if ( qword_1403551D0 >= 0x4000 )
    *(_QWORD *)(a1 + 96) = 256LL;
  else
    *(_QWORD *)(a1 + 96) = 32LL;
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, *(_QWORD *)(a1 + 96), 0LL, v16) )
    return 0LL;
  _InterlockedExchangeAdd64(&qword_14034F970, *(_QWORD *)(a1 + 96));
  if ( (*(_BYTE *)(a1 + 216) & 7u) >= 2 )
    MiState[(*(_BYTE *)(a1 + 216) & 7) + 270] += 2LL;
  v18 = ((unsigned int)(v6 >> 12) & 0x1FF) + 4;
  *(_QWORD *)(a1 + 152) = v18;
  *(_QWORD *)(a1 + 144) = v18;
  v19 = ((unsigned __int64)(4096 - (*(_DWORD *)(v2 + 496) & 0xFFFu)) >> 3) - 1;
  *(_QWORD *)(v2 + 16) = v19;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(v2 + 32) = v19;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)a1 = 0;
  MiPopulateWorkingSetFreeList(a1, 1uLL, v19);
  MiAllowWorkingSetExpansion(a1);
  return 1LL;
}
