/*
 * XREFs of ndisValidateLegacyProtocols @ 0x1C00D0974
 * Callers:
 *     NdisRegisterProtocol @ 0x1C00D02D0 (NdisRegisterProtocol.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_ZL @ 0x1C0056600 (WPP_SF_ZL.c)
 */

unsigned __int8 __fastcall ndisValidateLegacyProtocols(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v3; // di

  v3 = 1;
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_Z(0x10u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1 + 11);
  if ( !a1[14] || !a1[15] || !a1[1] || !a1[2] )
  {
    DbgPrint("ndisValidateLegacyProtocols: protocol does not have Bind/UnbindAdapterHandler and it is not supported.\n");
    v3 = 0;
  }
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_ZL(0x11u, a2, a1 + 11, v3);
  return v3;
}
