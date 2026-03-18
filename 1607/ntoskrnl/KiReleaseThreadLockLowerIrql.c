/*
 * XREFs of KiReleaseThreadLockLowerIrql @ 0x1400CD0FC
 * Callers:
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleaseThreadLockLowerIrql(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  result = a2;
  __writecr8(a2);
  return result;
}
