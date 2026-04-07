/*
 * XREFs of ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18006FFCC
 * Callers:
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18007E6F0 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180027C90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveGlassColorizationParameters(
        __int64 a1,
        float a2,
        char a3,
        char a4,
        _OWORD *a5)
{
  __int64 v5; // r10
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = (__int64)a5;
  *a5 = *(_OWORD *)(a1 + 1364);
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(a1 + 1380);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 1388);
  v7 = *(_DWORD *)(a1 + 1328);
  if ( !a4 && *(_BYTE *)(a1 + 24) )
    a3 |= 4u;
  if ( *(_BYTE *)(a1 + 1392) )
    a3 |= 0x20u;
  return CGlassColorizationParameters::AdjustWindowColorization((int *)v5, (unsigned __int8 *)&v7, a2, a3);
}
