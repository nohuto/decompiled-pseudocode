/*
 * XREFs of ?Instance@MPCTracing@@KAPEAV1@XZ @ 0x180046FC4
 * Callers:
 *     ?TraceGestureUsage_@MPCTracing@@QEAAXIII@Z @ 0x1800470E0 (-TraceGestureUsage_@MPCTracing@@QEAAXIII@Z.c)
 *     ?Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z @ 0x180047198 (-Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18009D26C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct MPCTracing *MPCTracing::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`MPCTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1800D3A30;
    qword_1800D3A30 = (__int64)&HolographicDriverClientTrace::`vftable';
    qword_1800D3A48 = (TraceLoggingHProvider)&`MPCTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5c0423f5c368f201c2baf5224c15c0ae_::_lambda_invoker_cdecl_);
    qword_1800D3A38 = (__int64)qword_1800D3A48;
    byte_1800D3A40 = 1;
    TraceLoggingRegister(qword_1800D3A48);
    dword_1800D3A44 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1800D3A30 + 8))(&qword_1800D3A30);
    InitOnceComplete(&`MPCTracing::Instance'::`2'::wrapper, 0, &qword_1800D3A30);
  }
  return (struct MPCTracing *)Context;
}
