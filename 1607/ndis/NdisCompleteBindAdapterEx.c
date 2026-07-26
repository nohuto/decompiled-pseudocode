/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C005A580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qD(0x40u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x41u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)BindAdapterContext);
}
