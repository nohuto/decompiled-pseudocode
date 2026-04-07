/*
 * XREFs of ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001E170
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800082F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000A280 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180039F38 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180049DB0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18001E29C (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180042360 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800423BC (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     sqrtf_0 @ 0x1800505BE (sqrtf_0.c)
 */

float __fastcall CDesktopManager::GetScalingFactorForCVI(CDesktopManager *this, const struct tagRECT *a2)
{
  float v3; // xmm6_4
  const RECT *v5; // rcx
  int v6; // r9d
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  HMONITOR v10; // rbx
  _BYTE v12[20]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+34h] [rbp-34h]
  int v14; // [rsp+38h] [rbp-30h]
  enum DEVICE_SCALE_FACTOR v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = FLOAT_1_0;
  if ( !CDesktopManager::_IsMultiMon(this) )
  {
    v5 = (const RECT *)((char *)this + 1288);
    v6 = a2->right - a2->left;
    if ( v6 < 0 )
      v6 = 0;
    v7 = a2->bottom - a2->top;
    if ( v7 < 0 )
      v7 = 0;
    v8 = *((_DWORD *)this + 324) - v5->left;
    if ( v8 < 0 )
      v8 = 0;
    v9 = *((_DWORD *)this + 325) - *((_DWORD *)this + 323);
    if ( v9 < 0 )
      v9 = 0;
    if ( v6 * v7 > v8 * v9 / 2 )
    {
      v10 = MonitorFromRect(v5, 2u);
      if ( (int)GetScalingInfoForMonitor(v10, (struct SCALINGINFO *)v12) >= 0
        && sqrtf_0((float)(v14 * v14) + (float)(v13 * v13)) < 292.1
        && (int)GetScaleFactorForMonitorImp(v10, &v15) >= 0 )
      {
        if ( v15 >= SCALE_180_PERCENT )
        {
          return FLOAT_0_5;
        }
        else if ( v15 >= SCALE_140_PERCENT )
        {
          return FLOAT_0_75;
        }
      }
    }
  }
  return v3;
}
