/*
 * XREFs of ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x180165C50
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogExclusiveView::UpdateSyncRefreshCount(CAnalogExclusiveView *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v3[8]; // [rsp+28h] [rbp-30h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+38h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)xmmword_1801F03A0 + 88LL))(xmmword_1801F03A0, v3);
  QueryPerformanceCounter(&PerformanceCount);
  *((_DWORD *)this + 42) = v4 + (PerformanceCount.QuadPart - v5) / *((_QWORD *)this + 22);
}
