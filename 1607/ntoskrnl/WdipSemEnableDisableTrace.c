/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1404E4F14
 * Callers:
 *     WdipSemCaptureState @ 0x1400AFF3C (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x1404E4DA4 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140541AFC (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x140564A64 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x140565C4C (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x14069C57C (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x1404E4F60 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
