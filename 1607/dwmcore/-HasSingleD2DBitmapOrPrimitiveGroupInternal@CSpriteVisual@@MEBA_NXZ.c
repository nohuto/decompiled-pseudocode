/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x180138FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18010994C (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  int v2; // ecx
  struct CSpriteVisualContent *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = CVisual::GetContentAsSpriteNoRef(this, &v4) != 0;
  if ( *((_QWORD *)this + 69) )
    ++v2;
  return v2 == 1;
}
