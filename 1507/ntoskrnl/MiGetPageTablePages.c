/*
 * XREFs of MiGetPageTablePages @ 0x14021EB20
 * Callers:
 *     MmCreateShadowMapping @ 0x1406A833C (MmCreateShadowMapping.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiInitializeColorBase @ 0x14006AB5C (MiInitializeColorBase.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiCleanupPageTablePages @ 0x14021EA6C (MiCleanupPageTablePages.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r9
  unsigned __int64 v9; // r15
  __int16 v10; // r13
  _WORD *v11; // r12
  unsigned int v12; // ebp
  __int64 Page; // rax
  __int64 v14; // r14
  _WORD *v15; // [rsp+20h] [rbp-38h] BYREF
  __int16 v16; // [rsp+28h] [rbp-30h]
  unsigned __int16 v17; // [rsp+2Ah] [rbp-2Eh]

  MiInitializeColorBase(a2, (__int64)&v15);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0LL;
  if ( !*(_DWORD *)(a1 + 32) )
    v6 = 128LL;
  if ( (*(_DWORD *)(a1 + 36) & 8) == 0 && *(_QWORD *)(v5 + 5736) )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(a1 + 8), a3, 1) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident((__int16 *)v5, a3, v6, v7) )
    {
      MiReturnCommit(v5, a3);
      return 0LL;
    }
    *(_QWORD *)(a1 + 16) = a3;
    if ( *(_DWORD *)(a1 + 32) )
    {
      if ( (__int16 *)v5 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14034F860, a3);
      if ( (*(_DWORD *)(a1 + 36) & 0x40) == 0 && *(_DWORD *)(a1 + 32) == 2 )
        _InterlockedExchangeAdd64(&qword_14034FCE8, a3);
    }
    else if ( (__int16 *)v5 == MiSystemPartition )
    {
      _InterlockedExchangeAdd64(&qword_14034F850, a3);
    }
  }
  v9 = 0LL;
  if ( a3 )
  {
    v10 = v16;
    v11 = v15;
    do
    {
      v12 = v17 | (unsigned __int16)(v10 & ++*v11);
      while ( 1 )
      {
        Page = MiGetPage(v5, v12, 0x8CAu);
        if ( Page != -1 )
          break;
        if ( (*(_DWORD *)(a1 + 36) & 0x10) != 0 && *(_QWORD *)(v5 + 5504) >= 0x60uLL )
        {
          Page = MiGetPage(v5, v12, 0x8CEu);
          if ( Page != -1 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 36) & 1) == 0 )
        {
          MiCleanupPageTablePages(a1);
          return 0LL;
        }
        MiWaitForFreePage(v5);
      }
      v14 = 48 * Page - 0x58000000000LL;
      MiSetPfnTbFlushStamp(v14, 0LL, 0);
      *(_QWORD *)v14 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 32) )
        *(_BYTE *)(v14 + 38) = *(_BYTE *)(v14 + 38) & 0xF | 0xC0;
      *(_QWORD *)a1 = v14;
      ++v9;
    }
    while ( v9 < a3 );
  }
  return 1LL;
}
