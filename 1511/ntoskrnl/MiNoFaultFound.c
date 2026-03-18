/*
 * XREFs of MiNoFaultFound @ 0x14000A164
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x140116C70 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiNoFaultFound(
        char a1,
        volatile signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v12; // rax
  signed __int64 v13; // rbx

  v7 = 0;
  v8 = 0;
  v12 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (a1 & 2) != 0 && (v12 & 2) == 0 )
  {
    v8 = 1;
    v13 = v12 | 0x62;
    if ( a6 )
    {
      if ( a6 != _InterlockedCompareExchange64(a2, v13, a6) )
        return 0LL;
    }
    else
    {
      *a2 = v13;
      if ( (unsigned int)MiPteInShadowRange(a2) )
        MiWritePteShadow(a2, v13);
    }
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
    {
      if ( a4 )
        v7 = MiTbFlushType(a4);
      KeFlushSingleTb(a3, v7, a5);
    }
  }
  return v8;
}
