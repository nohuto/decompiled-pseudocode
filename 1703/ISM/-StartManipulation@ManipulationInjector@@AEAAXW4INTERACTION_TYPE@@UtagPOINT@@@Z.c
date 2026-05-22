/*
 * XREFs of ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x1800518A0 (-OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogniz.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x180096DC0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z @ 0x180096E04 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x180098324 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x1800983BC (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXXZ @ 0x1800984DC (-AddZoomContacts@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x180098670 (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 */

void __fastcall ManipulationInjector::StartManipulation(__int64 a1, int a2, POINT a3)
{
  struct tagRECT *v6; // rbp
  const char *v7; // r9
  void *v8; // rcx
  bool v9; // zf
  struct tagPOINT *v10; // r14
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  bool v15; // r8
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  unsigned int v19; // edx
  ManipulationInjector *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r8
  struct tagRECT v23; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 88) == 128 )
    ManipulationInjector::EndManipulationInternal((ManipulationInjector *)a1, 0);
  if ( (unsigned int)(a2 - 1) > 0x7F
    || (v6 = (struct tagRECT *)(a1 + 64), !PtInRect((const RECT *)(a1 + 64), a3))
    || *(_DWORD *)(a1 + 88) )
  {
    v21 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x1FB, v22, (const char *)v21);
    JUMPOUT(0x180097095LL);
  }
  v8 = *(void **)(a1 + 768);
  if ( v8 && !ResetEvent(v8) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x201,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v7);
    __debugbreak();
  }
  v9 = *(_DWORD *)(a1 + 48) == 0;
  v10 = (struct tagPOINT *)(a1 + 80);
  *(POINT *)(a1 + 80) = a3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 724) = 0;
  if ( !v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20A,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      v7);
    __debugbreak();
  }
  v11 = a2 - 1;
  if ( !v11 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_PAN\n");
    v16 = *(_DWORD *)(a1 + 16);
    goto LABEL_30;
  }
  v12 = v11 - 15;
  if ( !v12 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_ZOOM_INCREASING\n");
    v17 = *(_DWORD *)(a1 + 24);
    goto LABEL_23;
  }
  v13 = v12 - 16;
  if ( !v13 )
  {
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_ZOOM_DECREASING\n");
    v17 = *(_DWORD *)(a1 + 32);
LABEL_23:
    v18 = *(_DWORD *)(a1 + 16) + v17;
    v23 = *v6;
    ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v23, v18);
    ManipulationInjector::AddZoomContacts((ManipulationInjector *)a1);
    goto LABEL_32;
  }
  v14 = v13 - 32;
  if ( v14 )
  {
    if ( v14 != 64 )
      goto LABEL_32;
    if ( *(_BYTE *)(a1 + 13) )
      DbgPrint("INTERACTION_TYPE_HOVER\n");
    v23 = *v6;
    ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v23, 0);
    v15 = 1;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 13) )
    DbgPrint("INTERACTION_TYPE_DRAG\n");
  v16 = 0;
LABEL_30:
  v23 = *v6;
  ManipulationInjector::Clip((ManipulationInjector *)a1, (struct tagPOINT *)(a1 + 80), &v23, v16);
  v15 = 0;
LABEL_31:
  ManipulationInjector::AddContact((ManipulationInjector *)a1, *v10, v15);
LABEL_32:
  if ( *(_BYTE *)(a1 + 13) )
    DbgPrint("StartManipulation (%d, %d)\n", v10->x, *(_DWORD *)(a1 + 84));
  ManipulationInjector::InjectAndScrub((ManipulationInjector *)a1);
  if ( ((*(_DWORD *)(a1 + 88) - 16) & 0xFFFFFFEF) == 0 )
  {
    ManipulationInjector::UpdateZoomContactsForThreshold((ManipulationInjector *)a1, v19);
    ManipulationInjector::InjectAndScrub(v20);
  }
}
