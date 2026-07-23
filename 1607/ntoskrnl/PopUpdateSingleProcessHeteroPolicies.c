/*
 * XREFs of PopUpdateSingleProcessHeteroPolicies @ 0x140672ED0
 * Callers:
 *     <none>
 * Callees:
 *     PsEnumProcessThreads @ 0x140459774 (PsEnumProcessThreads.c)
 */

__int64 __fastcall PopUpdateSingleProcessHeteroPolicies(__int64 a1)
{
  PsEnumProcessThreads(a1, (__int64 (__fastcall *)(__int64, __int64, __int64))PopUpdateSingleThreadHeteroPolicies, 0LL);
  return 0LL;
}
