/*
 * XREFs of MiGetPageTablePages @ 0x140100588
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MmCreateShadowMapping @ 0x14065BD7C (MmCreateShadowMapping.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiCleanupPageTablePages @ 0x1401004E0 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x140100744 (MiInitializeColorBase.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v9; // ecx
  unsigned __int64 v10; // r15
  __int16 v11; // r13
  _WORD *v12; // r12
  unsigned int v13; // ebp
  __int64 Page; // rax
  __int64 v15; // r14
  _WORD *v16; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+28h] [rbp-30h]
  unsigned __int16 v18; // [rsp+2Ah] [rbp-2Eh]

  MiInitializeColorBase(a2, &v16);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  if ( !*(_DWORD *)(a1 + 32) )
    v7 = 128LL;
  if ( (*(_DWORD *)(a1 + 36) & 8) == 0 && *(_QWORD *)(v6 + 7336) )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(a1 + 8), a3, 1) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident(v6, a3, v7) )
    {
      MiReturnCommit(v6, a3);
      return 0LL;
    }
    v9 = *(_DWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = a3;
    if ( v9 && (*(_DWORD *)(a1 + 36) & 0x40) == 0 && v9 == 2 )
      _InterlockedExchangeAdd64(&qword_140327930, a3);
  }
  v10 = 0LL;
  if ( a3 )
  {
    v11 = v17;
    v12 = v16;
    do
    {
      v13 = v18 | (unsigned __int16)(v11 & ++*v12);
      while ( 1 )
      {
        Page = MiGetPage(v6, v13, 0x20CAu);
        if ( Page != -1 )
          break;
        if ( (*(_DWORD *)(a1 + 36) & 0x10) != 0 && *(_QWORD *)(v6 + 6464) >= 0x60uLL )
        {
          Page = MiGetPage(v6, v13, 0x20CEu);
          if ( Page != -1 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 36) & 1) == 0 )
        {
          MiCleanupPageTablePages(a1);
          return 0LL;
        }
        MiWaitForFreePage(v6);
      }
      v15 = 48 * Page - 0x58000000000LL;
      MiSetPfnTbFlushStamp(v15, 0LL, 0);
      *(_QWORD *)v15 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 32) )
        *(_BYTE *)(v15 + 38) = (16 * a4) | *(_BYTE *)(v15 + 38) & 0xF;
      *(_QWORD *)a1 = v15;
      ++v10;
    }
    while ( v10 < a3 );
  }
  return 1LL;
}
