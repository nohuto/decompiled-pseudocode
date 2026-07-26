/*
 * XREFs of NdisCloseAdapterEx @ 0x1C0099390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     NdisCloseAdapter @ 0x1C00E0FB0 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_q(0x42u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v3, NdisBindingHandle);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qD(0x43u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)NdisBindingHandle, v3);
  return v3;
}
