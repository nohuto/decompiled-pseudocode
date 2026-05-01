/*
 * XREFs of ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x18001F900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFTMCrossProcClientImpl::ReleaseMarshalData(CFTMCrossProcClientImpl *this, struct IStream *a2)
{
  return CFTMCrossProcClientImpl::_UnwrapStream(this, 1LL, a2);
}
