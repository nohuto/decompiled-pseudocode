/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C00D2F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009BD18 (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x31u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
  ndisMDeregisterBugCheckHandler((__int64)MiniportHandle);
  *((_QWORD *)MiniportHandle + 259) = 0LL;
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x32u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
}
