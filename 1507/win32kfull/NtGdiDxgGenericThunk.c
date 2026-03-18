/*
 * XREFs of NtGdiDxgGenericThunk @ 0x1C02651F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDxgGenericThunk(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdWarning(a1, a2);
  WdLogEvent5_WdWarning(v2);
  return 0LL;
}
