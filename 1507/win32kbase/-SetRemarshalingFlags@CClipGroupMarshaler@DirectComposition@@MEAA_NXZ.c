/*
 * XREFs of ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D90A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CClipGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CClipGroupMarshaler *this)
{
  if ( !*((_DWORD *)this + 14) )
    return 0;
  *((_DWORD *)this + 15) = 0;
  return 1;
}
