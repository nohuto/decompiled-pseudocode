/*
 * XREFs of MiGetPageTablePages @ 0x1400185B8
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MmCreateShadowMapping @ 0x1406264D0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiCleanupPageTablePages @ 0x140017C64 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBaseSession @ 0x140019BD4 (MiInitializeColorBaseSession.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiZeroPfn @ 0x140131BE0 (MiZeroPfn.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int16 *v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // ebp
  unsigned __int64 v9; // r15
  __int16 v10; // r13
  _WORD *v11; // r12
  unsigned int v12; // ebp
  __int64 Page; // rax
  __int64 v14; // r14
  _WORD *v16; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+28h] [rbp-30h]
  unsigned __int16 v18; // [rsp+2Ah] [rbp-2Eh]

  if ( a2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
  {
    MiInitializeColorBaseSession(&v16);
  }
  else
  {
    if ( a2 > (unsigned __int64)MmHighestUserAddress && a2 + 0xA8000000000LL > 0x17FFFFFFFFFLL )
      v6 = 0LL;
    else
      v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    MI_INITIALIZE_COLOR_BASE(v6, 0LL, &v16);
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  if ( !*(_DWORD *)(a1 + 32) )
    v8 = 128;
  if ( (*(_DWORD *)(a1 + 36) & 8) != 0 || !*(_QWORD *)(v7 + 6120) )
    goto LABEL_15;
  if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(a1 + 8), a3, 1LL) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(v7, a3, v8) )
  {
    MiReturnCommit(v7, a3);
    return 0LL;
  }
  *(_QWORD *)(a1 + 16) = a3;
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( (int *)v7 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF3E0, a3);
    if ( (*(_DWORD *)(a1 + 36) & 0x40) == 0 && *(_DWORD *)(a1 + 32) == 2 )
      _InterlockedExchangeAdd64(&qword_1402FF828, a3);
  }
  else if ( (int *)v7 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1402FF3D0, a3);
  }
LABEL_15:
  v9 = 0LL;
  if ( a3 )
  {
    v10 = v17;
    v11 = v16;
    do
    {
      v12 = v18 | (unsigned __int16)(v10 & ++*v11);
      while ( 1 )
      {
        Page = MiGetPage(v7, v12, 10LL);
        if ( Page != -1 )
          break;
        if ( (*(_DWORD *)(a1 + 36) & 0x10) != 0 && *(_QWORD *)(v7 + 5888) >= 0x60uLL )
        {
          Page = MiGetPage(v7, v12, 14LL);
          if ( Page != -1 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 36) & 1) == 0 )
        {
          MiCleanupPageTablePages(a1);
          return 0LL;
        }
        MiWaitForFreePage(v7);
      }
      v14 = 48 * Page - 0x58000000000LL;
      MiFinalizePageAttribute(v14, 1LL, 0LL);
      if ( *(_QWORD *)(v14 + 16) )
      {
        MiZeroPfn(v14);
        *(_QWORD *)(v14 + 16) = 0LL;
      }
      *(_QWORD *)v14 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 32) )
        *(_BYTE *)(v14 + 38) = (16 * a4) | *(_BYTE *)(v14 + 38) & 0xF;
      *(_QWORD *)a1 = v14;
      ++v9;
    }
    while ( v9 < a3 );
  }
  return 1LL;
}
