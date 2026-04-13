/*
 * XREFs of sub_180001794 @ 0x180001794
 * Callers:
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001794(int a1)
{
  dword_18003AB7C = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18003ABC4);
}
