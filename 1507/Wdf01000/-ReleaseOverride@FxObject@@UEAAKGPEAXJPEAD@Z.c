/*
 * XREFs of ?ReleaseOverride@FxObject@@UEAAKGPEAXJPEAD@Z @ 0x1C0061EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::ReleaseOverride(
        FxObject *this,
        unsigned __int16 Offset,
        void *Tag,
        unsigned int Line,
        char *File)
{
  return ((__int64 (__fastcall *)(FxObject *, void *, _QWORD, char *))this->Release)(this, Tag, Line, File);
}
