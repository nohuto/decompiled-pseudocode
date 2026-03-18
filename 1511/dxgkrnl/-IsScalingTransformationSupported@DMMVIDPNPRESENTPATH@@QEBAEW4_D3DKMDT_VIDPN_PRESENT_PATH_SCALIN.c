/*
 * XREFs of ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000938C
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000913C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A13B0 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  __int64 v2; // rdi
  int v4; // eax
  unsigned __int8 IsDriverAspectRatioCenteredMaxSupported; // al
  char v7; // cl
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int8 v10; // al

  v2 = a2;
  switch ( a2 )
  {
    case D3DKMDT_VPPS_IDENTITY:
      v4 = *((_DWORD *)this + 30);
      return v4 & 1;
    case D3DKMDT_VPPS_CENTERED:
      v4 = *((_DWORD *)this + 30) >> 1;
      return v4 & 1;
    case D3DKMDT_VPPS_STRETCHED:
      v4 = *((_DWORD *)this + 30) >> 2;
      return v4 & 1;
    case D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX:
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      v7 = 0;
      if ( !IsDriverAspectRatioCenteredMaxSupported )
        return v7;
      v8 = *((_DWORD *)this + 30) >> 3;
      return v8 & 1;
    case D3DKMDT_VPPS_CUSTOM:
      v10 = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      v7 = 0;
      if ( !v10 )
        return v7;
      v8 = *((_DWORD *)this + 30) >> 4;
      return v8 & 1;
    case D3DKMDT_VPPS_NOTSPECIFIED:
      return 1;
  }
  v9 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v9 + 24) = v2;
  WdLogEvent5_WdError(v9);
  return 0;
}
