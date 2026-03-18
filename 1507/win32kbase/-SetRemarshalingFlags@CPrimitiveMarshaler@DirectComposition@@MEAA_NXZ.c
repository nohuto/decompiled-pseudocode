/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C008A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CPrimitiveMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveMarshaler *this)
{
  *((_DWORD *)this + 4) &= 0xFFFFFE3F;
  return 1;
}
