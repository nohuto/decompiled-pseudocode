/*
 * XREFs of DpiTestGetBrightness @ 0x1C0170BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiTestGetBrightness(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( !a2 )
    return 3221225485LL;
  v6 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = DpiTestGetBrightness;
  *(_QWORD *)(v6 + 32) = g_Brightness;
  WdLogEvent5_WdEvent(v6);
  *a2 = g_Brightness;
  return 0LL;
}
