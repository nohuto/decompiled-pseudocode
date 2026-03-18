/*
 * XREFs of ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002480
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001EA0 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x140003700 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequest(CPortClient *this, unsigned int a2)
{
  return (*((__int64 (__fastcall **)(CPortClient *, _QWORD))this + 2))(this, a2);
}
