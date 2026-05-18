/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x1800050F0
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004C60 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CPortClient::ConnectWithName(
        CPortClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  return (*((__int64 (__fastcall **)(CPortClient *, const unsigned __int16 *, _QWORD))this + 1))(this, a2, 0LL);
}
