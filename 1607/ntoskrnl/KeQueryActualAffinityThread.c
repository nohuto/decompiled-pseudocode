/*
 * XREFs of KeQueryActualAffinityThread @ 0x1401D2ACC
 * Callers:
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 */

unsigned __int64 __fastcall KeQueryActualAffinityThread(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  KiAcquireThreadLockRaiseToDpc(a1, &v5);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 584);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 576);
  result = v5;
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(result);
  return result;
}
