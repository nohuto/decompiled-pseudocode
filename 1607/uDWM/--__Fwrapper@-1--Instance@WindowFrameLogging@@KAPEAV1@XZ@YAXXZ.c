/*
 * XREFs of ??__Fwrapper@?1??Instance@WindowFrameLogging@@KAPEAV1@XZ@YAXXZ @ 0x180051930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall `WindowFrameLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper''(__int64 a1)
{
  wil::details::static_lazy<WindowFrameLogging>::~static_lazy<WindowFrameLogging>(a1);
}
