/*
 * XREFs of ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8
 * Callers:
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800341B8 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@3456@@Z @ 0x180051940 (-OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogniz.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x180097150 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x180098324 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXXZ @ 0x1800984DC (-AddZoomContacts@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z @ 0x1800985E8 (-UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x180098670 (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 */

void __fastcall ManipulationInjector::InjectZoom(ManipulationInjector *this, float a2, __int64 a3, const char *a4)
{
  int v5; // ecx
  int v6; // edi
  const char *v7; // rdx
  ManipulationInjector *v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // r8
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 13) )
    DbgPrint("Zoom Delta: %d.%03d\n", (int)a2, (int)(float)(a2 * 1000.0) - 1000 * (int)a2);
  v5 = *((_DWORD *)this + 22);
  if ( ((v5 - 16) & 0xFFFFFFEF) != 0 )
  {
    v10 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x323, v11, (const char *)v10);
    __debugbreak();
  }
  if ( v5 == 16 && a2 < 1.0 || v5 == 32 && a2 > 1.0 )
  {
    v6 = 16;
    if ( v5 == 16 )
      v6 = 32;
    if ( *((_BYTE *)this + 13) )
    {
      v7 = "Decreasing";
      if ( v5 != 16 )
        v7 = "Increasing";
      DbgPrint("Transitioning Zoom Type to %s\n", v7);
    }
    *((_DWORD *)this + 22) = v6;
  }
  if ( *((_DWORD *)this + 12) != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x32C,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    JUMPOUT(0x1800977E5LL);
  }
  ManipulationInjector::UpdateZoomContacts(this, 0, a2);
  v12 = (struct tagRECT)*((_OWORD *)this + 4);
  ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v12, 0);
  v12 = (struct tagRECT)*((_OWORD *)this + 4);
  ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v12, 0);
  if ( *(_DWORD *)this == 3 )
  {
    v12 = *(struct tagRECT *)((char *)this + 740);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 19, &v12, 0);
    v12 = *(struct tagRECT *)((char *)this + 740);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 38, &v12, 0);
  }
  if ( ManipulationInjector::CheckOverlapAndEvent(this) )
  {
    if ( *((_DWORD *)this + 2) != 1 || !*((_BYTE *)this + 12) )
    {
      ManipulationInjector::InjectAndScrub(this);
      *((_DWORD *)this + 31) = 0x40000;
      *((_DWORD *)this + 69) = 0x40000;
      ManipulationInjector::InjectAndScrub(this);
      ManipulationInjector::AddZoomContacts(this);
      ManipulationInjector::InjectAndScrub(this);
      ManipulationInjector::UpdateZoomContactsForThreshold(this, v9);
      goto LABEL_23;
    }
    ManipulationInjector::AddZoomContacts(this);
    ManipulationInjector::InjectAndScrub(this);
    *((_DWORD *)this + 31) = 0x40000;
    *((_DWORD *)this + 69) = 0x40000;
    ManipulationInjector::UpdateZoomContacts(this, 2u, 0.0);
  }
  v8 = this;
LABEL_23:
  ManipulationInjector::InjectAndScrub(v8);
}
