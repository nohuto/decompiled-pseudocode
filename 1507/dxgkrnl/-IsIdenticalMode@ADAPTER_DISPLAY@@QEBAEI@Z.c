/*
 * XREFs of ?IsIdenticalMode@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019470
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00B00C0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0126D78 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 */

char __fastcall ADAPTER_DISPLAY::IsIdenticalMode(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rsi
  DXGADAPTER *v4; // r8
  __int64 v5; // rbx
  int v6; // eax
  int CurrentOrientation; // eax
  char v9; // dl
  DXGADAPTER *v10; // rcx

  v3 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  v4 = this[14];
  v5 = 1008 * v3;
  if ( ((*((_DWORD *)v4 + 252 * v3 + 221) - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( *(_DWORD *)((char *)v4 + v5 + 856) != *(_DWORD *)((char *)v4 + v5 + 644) )
      return 0;
    v6 = *(_DWORD *)((char *)v4 + v5 + 648);
  }
  else
  {
    if ( *(_DWORD *)((char *)v4 + v5 + 856) != *(_DWORD *)((char *)v4 + v5 + 648) )
      return 0;
    v6 = *(_DWORD *)((char *)v4 + v5 + 644);
  }
  if ( *(_DWORD *)((char *)v4 + v5 + 860) != v6 )
    return 0;
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)this, v3, 0);
  v9 = 1;
  if ( CurrentOrientation != 1 )
    return 0;
  v10 = this[14];
  if ( *(_DWORD *)((char *)v10 + v5 + 652)
    || *(_DWORD *)((char *)v10 + v5 + 656)
    || *(_DWORD *)((char *)v10 + v5 + 660) != *(_DWORD *)((char *)v10 + v5 + 856)
    || *(_DWORD *)((char *)v10 + v5 + 664) != *(_DWORD *)((char *)v10 + v5 + 860) )
  {
    return 0;
  }
  return v9;
}
