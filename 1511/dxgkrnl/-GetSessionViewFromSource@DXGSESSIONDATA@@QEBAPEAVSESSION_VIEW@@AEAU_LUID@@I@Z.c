/*
 * XREFs of ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C009EF8C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00AF0F0 (DxgkDisplayOnOff.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00C2AC0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 * Callees:
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C009F13C (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z.c)
 */

DXGSESSIONDATA **__fastcall DXGSESSIONDATA::GetSessionViewFromSource(
        DXGSESSIONDATA *this,
        struct _LUID *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  struct DISPLAY_SOURCE *OwnedDisplaySource; // rax
  __int64 v7; // rcx
  DXGSESSIONDATA **v8; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rax

  v3 = a3;
  OwnedDisplaySource = DXGSESSIONDATA::GetOwnedDisplaySource(this, a2, a3);
  if ( OwnedDisplaySource )
  {
    v8 = (DXGSESSIONDATA **)*((_QWORD *)OwnedDisplaySource + 6);
    if ( v8 )
    {
      if ( *v8 != this )
      {
        v11 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v11 + 24) = 2898LL;
        WdLogEvent5_WdAssertion(v11);
      }
    }
    return v8;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v10[3] = v3;
    v10[4] = a2->HighPart;
    v10[5] = a2->LowPart;
    v10[6] = this;
    WdLogEvent5_WdError(v10);
    return 0LL;
  }
}
