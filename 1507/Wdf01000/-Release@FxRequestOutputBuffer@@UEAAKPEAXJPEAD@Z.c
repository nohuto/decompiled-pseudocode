/*
 * XREFs of ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEAD@Z @ 0x1C0078B80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0075380 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::Release(FxRequestOutputBuffer *this, void *Tag, int Line, char *File)
{
  FxRequest::ReleaseIrpReference((FxRequest *)&this[-17]);
  return 1LL;
}
