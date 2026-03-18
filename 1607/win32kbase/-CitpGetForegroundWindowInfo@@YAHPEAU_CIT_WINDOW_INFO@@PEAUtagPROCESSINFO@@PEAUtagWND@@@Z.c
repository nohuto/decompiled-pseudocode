/*
 * XREFs of ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0011184
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     IsCitGetWindowInfoSupported_0 @ 0x1C0002FA8 (IsCitGetWindowInfoSupported_0.c)
 *     CitGetWindowInfo_0 @ 0x1C0002FB0 (CitGetWindowInfo_0.c)
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
    if ( !v5 || !*(_QWORD *)(v5 + 88) )
      return 0LL;
  }
  CitGetWindowInfo_0();
  return 1LL;
}
