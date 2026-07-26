/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x1C0006620
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C004CA30 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C0006750 (NdisAdvanceNetBufferDataStart.c)
 *     NdisRetreatNetBufferDataStart @ 0x1C00067C0 (NdisRetreatNetBufferDataStart.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
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
    if ( (unsigned __int8)byte_1C00895DC >= 4u )
      WPP_SF_(18LL, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, DataBackFill);
    return -1073741811;
  }
  else
  {
    if ( !AllocateMdlHandler )
    {
      v7 = ndisAllocateMdl;
      v5 = ndisFreeMdl;
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
