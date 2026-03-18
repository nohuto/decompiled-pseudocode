/*
 * XREFs of ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C004A328
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     IsCitGetWindowInfoSupported_0 @ 0x1C0002FB0 (IsCitGetWindowInfoSupported_0.c)
 *     CitGetWindowInfo_0 @ 0x1C0002FB8 (CitGetWindowInfo_0.c)
 */

__int64 __fastcall CitpGetForegroundWindowInfo(
        struct _CIT_WINDOW_INFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3)
{
  __int64 v5; // rbx

  if ( (int)IsCitGetWindowInfoSupported_0() < 0 )
    return 0LL;
  if ( !a3 )
  {
    if ( !gptiForeground )
      return 0LL;
    if ( *((struct tagPROCESSINFO **)gptiForeground + 47) != a2 )
      return 0LL;
    v5 = *((_QWORD *)gptiForeground + 48);
    if ( !v5 || !*(_QWORD *)(v5 + 80) )
      return 0LL;
  }
  CitGetWindowInfo_0();
  return 1LL;
}
