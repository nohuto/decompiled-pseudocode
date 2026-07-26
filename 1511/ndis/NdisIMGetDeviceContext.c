/*
 * XREFs of NdisIMGetDeviceContext @ 0x1C00EC4C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetDeviceContext(NDIS_HANDLE MiniportAdapterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x2Du, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qq(
        0x2Eu,
        &WPP_8578613493474478f9fbc41c93fda03c_Traceguids,
        MiniportAdapterHandle,
        *((_QWORD *)MiniportAdapterHandle + 247));
  }
  return (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 247);
}
