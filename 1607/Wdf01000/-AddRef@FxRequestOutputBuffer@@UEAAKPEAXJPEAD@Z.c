/*
 * XREFs of ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C007B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C00784FC (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::AddRef(
        FxRequestOutputBuffer *this,
        __int64 Tag,
        unsigned __int8 Line,
        char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-17], Tag, Line);
  return 2LL;
}
