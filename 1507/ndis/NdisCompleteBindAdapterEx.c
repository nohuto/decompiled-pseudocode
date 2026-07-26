/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C0055EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qD(0x40u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x41u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)BindAdapterContext);
}
