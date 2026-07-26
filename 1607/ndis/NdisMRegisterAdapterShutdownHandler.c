/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C00D2610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00AC45C (ndisMRegisterBugCheckHandler.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Fu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 259) )
  {
    *((_QWORD *)MiniportHandle + 259) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 258) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x30u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportHandle);
}
