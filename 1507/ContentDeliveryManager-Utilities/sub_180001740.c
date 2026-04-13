/*
 * XREFs of sub_180001740 @ 0x180001740
 * Callers:
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001740(int a1)
{
  dword_18003AC68 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18003AC4C);
}
