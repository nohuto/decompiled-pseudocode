/*
 * XREFs of ?AddRefOverride@FxObject@@UEAAKGPEAXJPEAD@Z @ 0x1C00599A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::AddRefOverride(FxObject *this, unsigned __int16 Offset, void *Tag, int Line, char *File)
{
  return FxObject::AddRef(this, Tag, Line, File);
}
