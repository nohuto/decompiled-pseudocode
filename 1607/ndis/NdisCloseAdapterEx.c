/*
 * XREFs of NdisCloseAdapterEx @ 0x1C00AF390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     NdisCloseAdapter @ 0x1C00EC1F0 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x42u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v3, NdisBindingHandle);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qD(0x43u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)NdisBindingHandle, v3);
  return v3;
}
