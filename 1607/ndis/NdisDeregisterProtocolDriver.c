/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00CEF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C00F41E0 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids,
      (__int64)NdisProtocolHandle,
      (unsigned __int16 *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xDu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)NdisProtocolHandle);
}
