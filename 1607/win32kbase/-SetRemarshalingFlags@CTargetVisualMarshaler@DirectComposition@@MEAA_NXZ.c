/*
 * XREFs of ?SetRemarshalingFlags@CTargetVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00F1980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTargetVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CTargetVisualMarshaler *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return result;
}
