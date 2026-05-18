/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180005208
 * Callers:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004A90 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        unsigned int a2,
        const void *a3,
        __int64 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  return (*((__int64 (__fastcall **)(CPortClient *, _QWORD, const void *, __int64, _QWORD))this + 4))(
           this,
           a2,
           a3,
           4LL,
           0LL);
}
