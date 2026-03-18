/*
 * XREFs of MiNoFaultFound @ 0x14007EB84
 * Callers:
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x140223EF8 (MiRaisedIrqlFault.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiNoFaultFound(
        char a1,
        volatile signed __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  volatile signed __int64 *v6; // r10
  int v7; // ebx
  __int64 PteShadow; // rdx
  unsigned __int64 v9; // r11
  char v12; // r9
  unsigned int v13; // esi
  signed __int64 v14; // rdx

  v6 = a2;
  v7 = 0;
  PteShadow = *a2;
  v9 = 2040LL;
  v12 = a1;
  v13 = 0;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v6, PteShadow);
  if ( (v12 & 2) != 0 && (PteShadow & 2) == 0 )
  {
    v14 = PteShadow | 0x62;
    v13 = 1;
    if ( a6 )
    {
      if ( a6 != _InterlockedCompareExchange64(v6, v14, a6) )
        return 0LL;
    }
    else
    {
      *v6 = v14;
      if ( (unsigned __int64)(v6 + 0x12090482600LL) <= v9 )
        MiWritePteShadow(v6, v14);
    }
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
    {
      if ( a4 )
        v7 = MiTbFlushType(a4);
      KeFlushSingleTb(a3, v7, a5);
    }
  }
  return v13;
}
