/*
 * XREFs of ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00EBD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearGradientBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x20u;
  *((_DWORD *)this + 4) |= 0x1C0u;
  return 1;
}
