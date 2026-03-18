/*
 * XREFs of ?IsOpaque@CHwSolidColorTextureSource@@UEBA_NXZ @ 0x18017C700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwSolidColorTextureSource::IsOpaque(CHwSolidColorTextureSource *this)
{
  return *((float *)this + 32) >= 1.0;
}
