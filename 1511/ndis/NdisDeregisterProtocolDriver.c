/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00C9560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C00ED550 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids,
      (__int64)NdisProtocolHandle,
      (__int64 *)NdisProtocolHandle + 9);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0xDu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)NdisProtocolHandle);
}
