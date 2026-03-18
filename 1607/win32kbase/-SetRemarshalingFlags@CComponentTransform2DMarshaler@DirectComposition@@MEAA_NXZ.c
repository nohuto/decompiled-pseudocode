/*
 * XREFs of ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EE4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetRemarshalingFlags(
        DirectComposition::CComponentTransform2DMarshaler *this)
{
  *((_DWORD *)this + 4) &= 0xFFFFF81F;
  return *((float *)this + 16) != 0.0
      || *((float *)this + 10) != 0.0
      || *((float *)this + 11) != 0.0
      || *((float *)this + 12) != 0.0
      || *((float *)this + 13) != 0.0
      || *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 17) != 1.0
      || *((float *)this + 18) != 1.0
      || *((float *)this + 19) != 1.0
      || *((float *)this + 20) != 0.0
      || *((float *)this + 21) != 0.0
      || *((float *)this + 22) != 1.0
      || *((float *)this + 23) != 0.0
      || *((float *)this + 24) != 0.0;
}
