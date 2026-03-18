/*
 * XREFs of DpiTestGetBrightness @ 0x1C019ED30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiTestGetBrightness(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = WdLogNewEntry5_WdEvent(a1);
  *(_QWORD *)(v4 + 24) = g_Brightness;
  WdLogEvent5_WdEvent(v4);
  *a2 = g_Brightness;
  return 0LL;
}
