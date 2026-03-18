/*
 * XREFs of ?Zombied@QueryGlyphAttrsRequest@@UEBA_NXZ @ 0x1C015DD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryGlyphAttrsRequest::Zombied(QueryGlyphAttrsRequest *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 12LL);
}
