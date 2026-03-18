/*
 * XREFs of ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E6E30
 * Callers:
 *     ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E6DE0 (-SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EC950 (-SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EDFE0 (-SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E66C4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  char v1; // al
  char v2; // cl

  *((_DWORD *)this + 4) &= 0xFFFFFD3F;
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
    return 1;
  v1 = DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
