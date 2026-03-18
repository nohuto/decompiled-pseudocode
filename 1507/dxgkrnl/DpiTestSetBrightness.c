/*
 * XREFs of DpiTestSetBrightness @ 0x1C0170D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiTestSetBrightness(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  g_Brightness = a2;
  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  *(_QWORD *)(v4 + 24) = DpiTestGetBrightness;
  *(_QWORD *)(v4 + 32) = g_Brightness;
  WdLogEvent5_WdEvent(v4);
  return 0LL;
}
