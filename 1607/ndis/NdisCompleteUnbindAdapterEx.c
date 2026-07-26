/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C00E6D20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x44u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x45u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)UnbindContext);
}
