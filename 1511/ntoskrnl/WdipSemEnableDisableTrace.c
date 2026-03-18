/*
 * XREFs of WdipSemEnableDisableTrace @ 0x14050609C
 * Callers:
 *     WdipSemCaptureState @ 0x140123924 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140505D5C (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140505F20 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x140532B1C (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x140533D04 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x14065CD30 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x1405060E8 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
