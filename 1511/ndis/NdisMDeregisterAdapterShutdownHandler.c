/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C00CC6C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C0098F88 (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x31u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportHandle);
  ndisMDeregisterBugCheckHandler((__int64)MiniportHandle);
  *((_QWORD *)MiniportHandle + 259) = 0LL;
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x32u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportHandle);
}
