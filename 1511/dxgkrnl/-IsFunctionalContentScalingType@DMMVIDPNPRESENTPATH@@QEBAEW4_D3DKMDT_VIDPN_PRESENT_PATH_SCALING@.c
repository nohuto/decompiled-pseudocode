/*
 * XREFs of ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00093F4
 * Callers:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C2C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000913C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(DMMVIDPNPRESENTPATH *this, int a2)
{
  if ( a2 <= 0 )
    return 0;
  if ( a2 <= 3 )
    return 1;
  if ( a2 != 4 && a2 != 5 )
    return a2 == 255;
  return DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
}
