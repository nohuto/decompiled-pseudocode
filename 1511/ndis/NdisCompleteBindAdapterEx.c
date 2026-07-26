/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C0055D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qD(0x40u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x41u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)BindAdapterContext);
}
