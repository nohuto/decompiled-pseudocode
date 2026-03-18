/*
 * XREFs of WaitForCommandComplete @ 0x1C000ECF8
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForCommandComplete(__int64 a1, __int64 a2, __int64 a3)
{
  return WaitForCommandCompleteWithCustomTimeout(a1, a2, a3, 10000LL);
}
