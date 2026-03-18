/*
 * XREFs of ?SetRemarshalingFlags@CEffectBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00D8500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 6) )
    *((_DWORD *)this + 4) |= 0x80u;
  *((_DWORD *)this + 17) = 0;
  return 1;
}
