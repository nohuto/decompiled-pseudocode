/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveColorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DF650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CPrimitiveColorMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveColorMarshaler *this)
{
  return *((float *)this + 10) != 0.0
      || *((float *)this + 11) != 0.0
      || *((float *)this + 12) != 0.0
      || *((float *)this + 13) != 0.0;
}
