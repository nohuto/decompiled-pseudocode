/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800337C8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationUpdatedEventArgs@3456@@Z @ 0x180051940 (-OnSpatialNavigationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogniz.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?fabs@@YAMM@Z @ 0x18002CA98 (-fabs@@YAMM@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x180097150 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x180097848 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x180098324 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x1800983BC (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800986C8 (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x180098724 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, const char *a4)
{
  bool v4; // si
  float v5; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  int v10; // ecx
  float v11; // xmm0_4
  float v12; // xmm4_4
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  LONG v16; // eax
  LONG v17; // eax
  bool v18; // zf
  struct tagRECT *v19; // rbx
  int v20; // ecx
  int v21; // ecx
  struct tagRECT *v22; // r9
  struct tagPOINT v23; // rbx
  const char *v24; // r9
  const char *v25; // r9
  unsigned int v26; // eax
  __int64 v27; // r8
  struct tagRECT v28; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct tagPOINT v30; // [rsp+80h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a2;
  if ( *((_DWORD *)this + 22) != 1 )
  {
    v26 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x295, v27, (const char *)v26);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 724) && *((int *)this + 180) > 0 )
  {
    v8 = 0.0;
    *((_BYTE *)this + 724) = 1;
    v9 = fabs(a2);
    v11 = fabs(a3);
    v13 = 1;
    if ( v9 <= v11 )
    {
      if ( a3 < 0.0 )
        v13 = -1;
      v12 = (float)(v10 * v13);
    }
    else
    {
      if ( a2 < 0.0 )
        v13 = -1;
      v8 = (float)(v10 * v13);
    }
    ManipulationInjector::InjectPan(this, v8, v12);
  }
  if ( *(_DWORD *)this == 1 )
    LODWORD(v5) = LODWORD(a2) ^ _xmm;
  if ( *((_BYTE *)this + 13) )
    DbgPrint(
      "Pan Delta: (%d.03%d, %d.%03d)\n",
      (int)v5,
      (int)(float)(v5 * 1000.0) - 1000 * (int)v5,
      (int)a3,
      (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
  v14 = FLOAT_N0_5;
  if ( v5 >= 0.0 )
    v15 = FLOAT_0_5;
  else
    v15 = FLOAT_N0_5;
  v16 = (int)(float)(v15 + v5);
  if ( v5 != 0.0 && !v16 )
  {
    v16 = 1;
    if ( v5 < 0.0 )
      v16 = -1;
  }
  v30.x = v16;
  if ( a3 >= 0.0 )
    v14 = FLOAT_0_5;
  v17 = (int)(float)(v14 + a3);
  if ( a3 != 0.0 && !v17 )
  {
    v17 = 1;
    if ( a3 < 0.0 )
      v17 = -1;
  }
  v18 = *((_DWORD *)this + 1) == 2;
  v30.y = v17;
  v19 = (struct tagRECT *)v30;
  if ( !v18 || !*((_DWORD *)this + 10) )
  {
    if ( *((_DWORD *)this + 12) != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2BD,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
    }
    ManipulationInjector::UpdatePanContact(this, 0, v30);
    v28 = (struct tagRECT)*((_OWORD *)this + 4);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v28, 0);
    v4 = ManipulationInjector::CheckOverlapAndEvent(this);
  }
  if ( *((_DWORD *)this + 1) != 2 || !*((_BYTE *)this + 12) )
  {
    if ( v4 )
    {
      if ( *((_DWORD *)this + 1) == 1 && *((_BYTE *)this + 12) )
      {
        ManipulationInjector::AddContact(this, *(struct tagPOINT *)((char *)this + 80), 0);
        ManipulationInjector::InjectAndScrub(this);
        *((_DWORD *)this + 31) = 0x40000;
        *((_DWORD *)this + 69) = 131078;
      }
      else
      {
        ManipulationInjector::InjectAndScrub(this);
        *((_DWORD *)this + 31) = 0x40000;
        ManipulationInjector::InjectAndScrub(this);
        ManipulationInjector::AddContact(this, *(struct tagPOINT *)((char *)this + 80), 0);
      }
    }
    goto LABEL_50;
  }
  v20 = *((_DWORD *)this + 10);
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( *((_DWORD *)this + 12) != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2D0,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          a4);
        __debugbreak();
      }
      v28 = (struct tagRECT)*((_OWORD *)this + 4);
      v22 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(this, (unsigned int)&v30, 0LL, v19);
      v28 = (struct tagRECT)*((_OWORD *)this + 4);
      v23 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                     this,
                                     (unsigned int)&v30,
                                     (struct tagPOINT)1LL,
                                     v22);
      ManipulationInjector::UpdatePanContact(this, 0, v23);
      v28 = (struct tagRECT)*((_OWORD *)this + 4);
      if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v28, 0) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2D7,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v24);
        __debugbreak();
      }
      ManipulationInjector::UpdatePanContact(this, 1u, v23);
      v28 = (struct tagRECT)*((_OWORD *)this + 4);
      if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v28, 0) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2DB,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v25);
        JUMPOUT(0x1800975C5LL);
      }
      *((_DWORD *)this + 10) = 2;
      goto LABEL_50;
    }
    if ( v21 != 1 )
      return;
    if ( *((_DWORD *)this + 12) != 2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2E4,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
    }
    *((_DWORD *)this + 31) = 0x40000;
    ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v19);
    v28 = (struct tagRECT)*((_OWORD *)this + 4);
    ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v28, 0);
  }
  ManipulationInjector::UpdatePanOverlapState(this);
LABEL_50:
  ManipulationInjector::InjectAndScrub(this);
}
