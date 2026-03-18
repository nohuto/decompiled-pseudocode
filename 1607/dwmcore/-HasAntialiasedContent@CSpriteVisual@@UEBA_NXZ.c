/*
 * XREFs of ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x180138F40
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x18004EB40 (-HasAntialiasedContent@CVisual@@MEBA_NXZ.c)
 */

char __fastcall CSpriteVisual::HasAntialiasedContent(CSpriteVisual *this)
{
  bool HasAntialiasedContent; // al
  char v3; // dl

  HasAntialiasedContent = CVisual::HasAntialiasedContent(this);
  v3 = 0;
  if ( HasAntialiasedContent || *((_QWORD *)this + 69) )
    return 1;
  return v3;
}
