/*
 * XREFs of ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C0078940
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C0074F10 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestSystemBuffer::AddRef(
        FxRequestSystemBuffer *this,
        __int64 Tag,
        unsigned __int8 Line,
        char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-16], Tag, Line);
  return 2LL;
}
