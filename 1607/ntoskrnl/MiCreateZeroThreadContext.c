/*
 * XREFs of MiCreateZeroThreadContext @ 0x14013B070
 * Callers:
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 * Callees:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiGetLargePageWorkMapping @ 0x14013B330 (MiGetLargePageWorkMapping.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiCreateZeroThreadContext(int *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 v9; // r8
  ULONG_PTR v10; // rax
  __int64 PageFilePte; // rax
  __int64 *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 Page; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 DemandZeroPte; // rax
  unsigned __int64 v22; // rdx
  unsigned int v23; // edi
  unsigned __int64 *v24; // rsi
  unsigned __int64 LargePageWorkMapping; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx

  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x20206D4Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0xA0uLL);
  v7[18] = a2;
  if ( !a3 )
  {
    v10 = MiReservePtes((__int64)&qword_1403278B0, 0x100uLL, v9);
    if ( !v10 )
    {
LABEL_5:
      ExFreePoolWithTag(v7, 0);
      return 0LL;
    }
    v7[17] = v10;
    PageFilePte = MiMakePageFilePte(256LL);
    *v12 = PageFilePte;
    if ( (unsigned int)MiPteInShadowRange(v12, PageFilePte) )
      MiWritePteShadow(v14, v13);
    do
    {
      *(_QWORD *)(v15 + 8) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v15 + 8, v13) )
        MiWritePteShadow(v16, 0LL);
    }
    while ( v17 != 1 );
  }
  if ( a1 != MiSystemPartition || a3 != 1 )
  {
    v23 = 0;
    v24 = v7 + 15;
    do
    {
      if ( a3 != 1 || v23 == 1 )
      {
        LargePageWorkMapping = MiGetLargePageWorkMapping(v23);
        if ( !LargePageWorkMapping )
          break;
        v26 = ((LargePageWorkMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = 2 - v23;
        do
        {
          v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v27;
        }
        while ( v27 );
        *v24 = v26;
      }
      ++v23;
      ++v24;
    }
    while ( v23 <= 1 );
    if ( v23 > 1 )
      return v7;
LABEL_26:
    MiDeleteZeroThreadContext(v7);
    goto LABEL_5;
  }
  v7[10] = -1LL;
  v7[11] = 0LL;
  Page = MiGetPage((__int64)a1, *(_DWORD *)(a2 + 80), 0xCAu);
  if ( Page == -1 )
    goto LABEL_26;
  DemandZeroPte = MiMakeDemandZeroPte(4LL, Page, v19, v20);
  *(_QWORD *)(48 * v22 - 0x57FFFFFFFF0LL) = DemandZeroPte;
  v7[12] = v22;
  *((_BYTE *)v7 + 106) = 1;
  return v7;
}
