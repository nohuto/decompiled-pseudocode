/*
 * XREFs of ndisValidate60Protocol @ 0x1C00AE5F0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00ADE90 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     Template_zq @ 0x1C00531AC (Template_zq.c)
 *     WPP_SF_ZL @ 0x1C0056600 (WPP_SF_ZL.c)
 */

__int64 __fastcall ndisValidate60Protocol(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = -1073676283;
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_Z(0x46u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 40)
    && *(_QWORD *)(a1 + 48)
    && *(_QWORD *)(a1 + 56)
    && *(_QWORD *)(a1 + 64)
    && *(_QWORD *)(a1 + 72) )
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( *(_QWORD *)(a1 + 104) )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          v4 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C008530C >= 2u )
            WPP_SF_Z(0x49u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)(a1 + 16));
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000000000LL) != 0 )
            Template_zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 2);
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C008530C >= 2u )
          WPP_SF_Z(0x48u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)(a1 + 16));
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000000000LL) != 0 )
          Template_zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 1);
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C008530C >= 2u )
        WPP_SF_Z(0x47u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)(a1 + 16));
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000000LL) != 0 )
        Template_zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 0);
    }
  }
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_ZL(0x4Au, a2, (__int64 *)(a1 + 16), v4);
  return v4;
}
