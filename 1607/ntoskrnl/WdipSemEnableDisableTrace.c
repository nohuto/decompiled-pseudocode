/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1404C7BCC
 * Callers:
 *     WdipSemCaptureState @ 0x1400AE0F4 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x1404C7A5C (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14054203C (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x140564FA4 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x14056618C (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x14069C660 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x1404C7C18 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
