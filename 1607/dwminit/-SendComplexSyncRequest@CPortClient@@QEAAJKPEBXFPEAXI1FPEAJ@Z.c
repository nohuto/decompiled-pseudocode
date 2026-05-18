/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005690
 * Callers:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        __int64 a2,
        const void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        void *a7,
        __int16 a8,
        int *a9)
{
  __int16 v10; // [rsp+38h] [rbp-20h]

  v10 = 0;
  return (*((__int64 (__fastcall **)(CPortClient *, __int64, const void *, __int64, _QWORD, _DWORD, _QWORD, __int16, int *))this
          + 4))(
           this,
           a2,
           a3,
           4LL,
           0LL,
           0,
           0LL,
           v10,
           a9);
}
