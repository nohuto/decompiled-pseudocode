/*
 * XREFs of ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180005670
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004CB8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequest(
        __int64 (__fastcall **this)(CPortClient *, __int64, const void *, __int64),
        __int64 a2,
        const void *a3)
{
  return this[3]((CPortClient *)this, a2, a3, 24LL);
}
