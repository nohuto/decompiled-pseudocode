/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C00D23B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009E95C (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x31u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportHandle);
  ndisMDeregisterBugCheckHandler((__int64)MiniportHandle);
  *((_QWORD *)MiniportHandle + 259) = 0LL;
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x32u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportHandle);
}
