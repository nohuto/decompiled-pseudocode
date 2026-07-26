/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x1C0047C30
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C0047330 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C000AE40 (NdisAdvanceNetBufferDataStart.c)
 *     NdisRetreatNetBufferDataStart @ 0x1C000C0B0 (NdisRetreatNetBufferDataStart.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  void (__stdcall *v5)(PMDL); // rbp
  int v6; // esi
  PMDL (__stdcall *v7)(PULONG); // rdi
  struct _NET_BUFFER *i; // rbx
  struct _NET_BUFFER *j; // rdi

  v5 = FreeMdlHandler;
  v6 = 0;
  v7 = AllocateMdlHandler;
  if ( (AllocateMdlHandler == 0LL) != (FreeMdlHandler == 0LL) )
  {
    if ( (unsigned __int8)byte_1C008531C >= 4u )
      WPP_SF_(0x12u, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids);
    return -1073741811;
  }
  else
  {
    if ( !AllocateMdlHandler )
    {
      v7 = (PMDL (__stdcall *)(PULONG))ndisAllocateMdl;
      v5 = (void (__stdcall *)(PMDL))ndisFreeMdl;
    }
    for ( i = NetBufferList->FirstNetBuffer; i; i = (struct _NET_BUFFER *)i->Link.Alignment )
    {
      v6 = NdisRetreatNetBufferDataStart(i, DataOffsetDelta, DataBackFill, v7);
      if ( v6 < 0 )
      {
        for ( j = NetBufferList->FirstNetBuffer; j != i; j = (struct _NET_BUFFER *)j->Link.Alignment )
          NdisAdvanceNetBufferDataStart(j, DataOffsetDelta, 1u, v5);
        return v6;
      }
    }
  }
  return v6;
}
