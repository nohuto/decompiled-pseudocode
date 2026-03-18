/*
 * XREFs of SpbCheckRect @ 0x1C000C984
 * Callers:
 *     SpbCheckPwnd @ 0x1C000DD28 (SpbCheckPwnd.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     _ScrollDC @ 0x1C005CDF4 (_ScrollDC.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     SpbCheckDce @ 0x1C0072680 (SpbCheckDce.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00796A4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 * Callees:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C000C9FC (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C01E11A8 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2, unsigned int a3)
{
  int v6; // eax
  struct tagSPB *v7; // rcx
  struct tagSPB *v8; // rbx

  v6 = IsVisible();
  if ( v6 )
  {
    while ( 1 )
    {
      LOBYTE(v6) = gpDispInfo;
      v7 = *(struct tagSPB **)(gpDispInfo + 72LL);
      if ( !v7 )
        break;
      while ( 1 )
      {
        v8 = *(struct tagSPB **)v7;
        v6 = SpbCheckRect2(v7, a1, a2, a3);
        if ( !v6 )
        {
          LOBYTE(v6) = IsSpbPresentOrNull(v8);
          if ( !(_BYTE)v6 )
            break;
        }
        v7 = v8;
        if ( !v8 )
          return v6;
      }
    }
  }
  return v6;
}
