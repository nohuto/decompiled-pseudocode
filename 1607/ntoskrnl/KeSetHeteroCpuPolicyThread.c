/*
 * XREFs of KeSetHeteroCpuPolicyThread @ 0x1401D2D34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetHeteroCpuPolicyThread(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiSetHeteroPolicyThread(a1, a2, 0LL, a3);
}
