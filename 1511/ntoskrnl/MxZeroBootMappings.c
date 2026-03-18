/*
 * XREFs of MxZeroBootMappings @ 0x140747A20
 * Callers:
 *     MiZeroBootMappings @ 0x140745DDC (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140747A20 (MxZeroBootMappings.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxZeroBootMappings @ 0x140747A20 (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x140747AC8 (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE((__int64 *)v5);
      v8 = v6;
      if ( v6 )
        break;
LABEL_11:
      v5 += 8LL;
      if ( v5 >= a2 )
        return;
    }
    if ( (v6 & 1) != 0 )
    {
      if ( a3 <= 1 )
      {
        if ( (v6 & 0x80u) != 0LL )
          goto LABEL_9;
      }
      else
      {
        MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
      }
      v7 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v8);
      MiFreeBootPageTable(v7);
    }
LABEL_9:
    *(_QWORD *)v5 = 0LL;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, 0LL);
    goto LABEL_11;
  }
}
