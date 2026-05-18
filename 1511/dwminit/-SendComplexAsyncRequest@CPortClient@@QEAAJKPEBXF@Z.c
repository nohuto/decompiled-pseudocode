/*
 * XREFs of ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x1800051A0
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004914 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequest(CPortClient *this, unsigned int a2, const void *a3)
{
  return (*((__int64 (__fastcall **)(CPortClient *, _QWORD, const void *, __int64))this + 3))(this, a2, a3, 24LL);
}
