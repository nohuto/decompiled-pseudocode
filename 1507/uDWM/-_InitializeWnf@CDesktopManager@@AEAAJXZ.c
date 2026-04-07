/*
 * XREFs of ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18003F7DC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180040248 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::_InitializeWnf(CDesktopManager *this)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (int)RtlQueryWnfStateData(&v4, WNF_DX_MODERN_OUTPUTDUPLICATION, CDesktopManager::ModernDDAWnfCallback, 0LL, 0LL) < 0 )
    goto LABEL_6;
  if ( (int)RtlSubscribeWnfStateChangeNotification(
              (char *)this + 1640,
              WNF_DX_MODERN_OUTPUTDUPLICATION,
              v4,
              CDesktopManager::ModernDDAWnfCallback,
              *((_QWORD *)this + 171),
              0LL,
              0,
              0) < 0 )
  {
LABEL_7:
    OutputDebugStringW(L"Failed RtlSubscribeWnfStateChangeNotification");
    return (unsigned int)-2147467259;
  }
  if ( (int)RtlQueryWnfStateData(&v4, WNF_TMCN_ISTABLETMODE, CDesktopManager::TabletModeWnfCallback, 0LL, 0LL) < 0 )
  {
LABEL_6:
    OutputDebugStringW(L"Failed RtlQueryWnfStateData");
    return (unsigned int)-2147024809;
  }
  if ( (int)RtlSubscribeWnfStateChangeNotification(
              (char *)this + 1648,
              WNF_TMCN_ISTABLETMODE,
              v4,
              CDesktopManager::TabletModeWnfCallback,
              (char *)this + 1512,
              0LL,
              0,
              0) < 0 )
    goto LABEL_7;
  return v2;
}
