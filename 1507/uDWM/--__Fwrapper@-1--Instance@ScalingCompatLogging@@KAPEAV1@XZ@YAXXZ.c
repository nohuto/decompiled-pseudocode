/*
 * XREFs of ??__Fwrapper@?1??Instance@ScalingCompatLogging@@KAPEAV1@XZ@YAXXZ @ 0x18004AD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall `ScalingCompatLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper''(__int64 a1)
{
  wil::details::static_lazy<ScalingCompatLogging>::~static_lazy<ScalingCompatLogging>(a1);
}
