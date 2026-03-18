/*
 * XREFs of ?Zombied@QueryFontDataRequest@@UEBA_NXZ @ 0x1C0153790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryFontDataRequest::Zombied(QueryFontDataRequest *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 12LL);
}
