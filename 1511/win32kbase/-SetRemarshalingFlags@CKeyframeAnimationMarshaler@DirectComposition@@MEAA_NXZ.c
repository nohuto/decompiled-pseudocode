/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D8D70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D9250 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  bool v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) &= 0xFFFFF3FF;
  v2 = DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || *((_QWORD *)this + 10) && *((_QWORD *)this + 12) || *((_DWORD *)this + 30) )
    return 1;
  return v3;
}
