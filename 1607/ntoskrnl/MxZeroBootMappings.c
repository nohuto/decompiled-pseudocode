/*
 * XREFs of MxZeroBootMappings @ 0x1407B2838
 * Callers:
 *     MiZeroBootMappings @ 0x14078F9DC (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x1407B2838 (MxZeroBootMappings.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxZeroBootMappings @ 0x1407B2838 (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x1407B28EC (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    do
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      v9 = v6;
      if ( v6 )
      {
        if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
        {
          if ( a3 > 1 )
            MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
          v7 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v9);
          MiFreeBootPageTable(v7);
        }
        *(_QWORD *)v5 = 0LL;
        if ( MiPteInShadowRange(v5) )
          MiWritePteShadow(v8, 0LL);
      }
      v5 += 8LL;
    }
    while ( v5 < a2 );
  }
}
