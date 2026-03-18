/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x1401D2F5C
 * Callers:
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x1401D2CF4 (KeQueryHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8354 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2, 1LL, 1LL);
  return HeteroCpuPolicyThread;
}
