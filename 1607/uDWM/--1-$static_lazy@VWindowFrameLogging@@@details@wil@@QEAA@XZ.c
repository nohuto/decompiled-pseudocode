/*
 * XREFs of ??1?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAA@XZ @ 0x18004F11C
 * Callers:
 *     ??__Fwrapper@?1??Instance@WindowFrameLogging@@KAPEAV1@XZ@YAXXZ @ 0x180051930 (--__Fwrapper@-1--Instance@WindowFrameLogging@@KAPEAV1@XZ@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<WindowFrameLogging>::~static_lazy<WindowFrameLogging>(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(&`WindowFrameLogging::Instance'::`2'::wrapper, 1u, (PBOOL)&fPending, &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
