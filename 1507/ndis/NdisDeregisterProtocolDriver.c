/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00D0150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C00F3570 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_0009299248ba37495192320194ebfcad_Traceguids,
      (__int64)NdisProtocolHandle,
      (__int64 *)NdisProtocolHandle + 9);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xDu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)NdisProtocolHandle);
}
