/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C00D3190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00ABFB0 (ndisMRegisterBugCheckHandler.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Fu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 259) )
  {
    *((_QWORD *)MiniportHandle + 259) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 258) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x30u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
}
