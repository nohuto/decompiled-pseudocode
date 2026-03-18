/*
 * XREFs of ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEAD@Z @ 0x1C0069D00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0069CA0 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::AddRefOverride(FxRequest *this, __int64 Offset, void *Tag, int Line, char *File)
{
  if ( !(_WORD)Offset )
    return FxObject::AddRef(this, Tag, Line, File);
  FxRequest::AddIrpReference(this, Offset, (unsigned __int8)Tag);
  return 2LL;
}
