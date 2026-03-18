/*
 * XREFs of WdipSemEnableDisableTrace @ 0x1405531B0
 * Callers:
 *     WdipSemCaptureState @ 0x14012C624 (WdipSemCaptureState.c)
 *     WdipSemDisableContextProvider @ 0x140553028 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x14056B0F4 (WdipSemEnableContextProvider.c)
 *     WdipSemEnableSemProvider @ 0x1405AE000 (WdipSemEnableSemProvider.c)
 *     WdipSemEnableAllProviders @ 0x1405AF1E8 (WdipSemEnableAllProviders.c)
 *     WdipSemDisableAllProviders @ 0x1406DF5D8 (WdipSemDisableAllProviders.c)
 * Callees:
 *     EtwEnableTrace @ 0x1405531FC (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
