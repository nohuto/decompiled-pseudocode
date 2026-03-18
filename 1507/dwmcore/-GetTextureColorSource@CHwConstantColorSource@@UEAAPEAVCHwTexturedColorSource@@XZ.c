/*
 * XREFs of ?GetTextureColorSource@CHwConstantColorSource@@UEAAPEAVCHwTexturedColorSource@@XZ @ 0x18009B610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CHwTexturedColorSource *__fastcall CHwConstantColorSource::GetTextureColorSource(CHwConstantColorSource *this)
{
  return (struct CHwTexturedColorSource *)*((_QWORD *)this + 3);
}
