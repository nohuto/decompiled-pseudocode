/*
 * XREFs of ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DA360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D7270 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) &= ~0x400u;
  v2 = DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || *((_QWORD *)this + 10) && *((_QWORD *)this + 12) )
    return 1;
  return v3;
}
