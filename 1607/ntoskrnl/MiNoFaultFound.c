/*
 * XREFs of MiNoFaultFound @ 0x14001F078
 * Callers:
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x1401EF8EC (MiRaisedIrqlFault.c)
 * Callees:
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiNoFaultFound(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r11d
  char v12; // r10
  signed __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx

  v6 = 0;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v12 & 2) != 0 && (v9 & 2) == 0 )
  {
    v6 = v11 + 1;
    v13 = v9 | 0x62;
    if ( a5 )
    {
      if ( a5 != _InterlockedCompareExchange64(a2, v13, a5) )
        return 0LL;
    }
    else
    {
      *a2 = v13;
      if ( (unsigned int)MiPteInShadowRange(a2, v13) )
        MiWritePteShadow(v16, v15);
    }
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
    {
      if ( a6 )
        v11 = MiTbFlushType(a6);
      KeFlushSingleTb(a3, v11, v10);
    }
  }
  return v6;
}
