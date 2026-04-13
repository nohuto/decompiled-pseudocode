/*
 * XREFs of sub_180001778 @ 0x180001778
 * Callers:
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001778(int a1)
{
  dword_18003AC60 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18003ABC0);
}
