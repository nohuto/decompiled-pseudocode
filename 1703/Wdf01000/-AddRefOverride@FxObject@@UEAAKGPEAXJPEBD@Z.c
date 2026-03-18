/*
 * XREFs of ?AddRefOverride@FxObject@@UEAAKGPEAXJPEBD@Z @ 0x1C006A000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::AddRefOverride(
        FxObject *this,
        unsigned __int16 Offset,
        void *Tag,
        int Line,
        const char *File)
{
  return FxObject::AddRef(this, Tag, Line, File);
}
