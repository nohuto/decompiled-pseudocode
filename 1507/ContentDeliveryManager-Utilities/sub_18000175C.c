/*
 * XREFs of sub_18000175C @ 0x18000175C
 * Callers:
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000175C(int a1)
{
  dword_18003AB78 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_18003AC58);
}
