/*
 * XREFs of ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CF6C
 * Callers:
 *     _lambda_c54218cdb3b904062d2ffadd1a7af253_::operator() @ 0x180012B2C (_lambda_c54218cdb3b904062d2ffadd1a7af253_--operator().c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180010DF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180011EBC (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001CE38 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021C7C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::LaunchOperation *this,
        struct ITileInfo *a2)
{
  int v3; // eax
  int v4; // esi
  __int64 v5; // rdx
  HRESULT v6; // eax
  HSTRING v7; // rsi
  __int64 v8; // rdi
  int ActivationFactory; // eax
  __int64 v10; // rdx
  int v11; // eax
  HRESULT v12; // eax
  HSTRING v13; // rsi
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  HRESULT v18; // eax
  __int64 v19; // rdi
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdi
  _BYTE v30[8]; // [rsp+38h] [rbp-79h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-71h] BYREF
  __int64 v32; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+50h] [rbp-61h] BYREF
  __int64 v34; // [rsp+58h] [rbp-59h] BYREF
  __int64 v35; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v37[80]; // [rsp+78h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp+17h] BYREF
  HSTRING string; // [rsp+E0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v36[1] = -2LL;
  v35 = 0LL;
  v3 = VE_MaterializeApplicationActivator(a2, &v35);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      23LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\launchoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_50;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v37,
    a2);
  v30[0] = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v37, v5, v30);
  if ( v30[0] )
    goto LABEL_47;
  v32 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = string;
  v8 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ActivationFactory = RoGetActivationFactory(v7, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v32);
  v4 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory >= 0 )
  {
    v34 = 0LL;
    LOBYTE(v10) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v32 + 136LL))(v32, v10, &v34);
    v4 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        40LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v11);
LABEL_35:
      v21 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_37;
    }
    v31 = 0LL;
    string = 0LL;
    v12 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = string;
    v14 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
    }
    v31 = 0LL;
    v4 = RoActivateInstance(v13, v36);
    if ( v4 >= 0 )
    {
      if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v31 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v36[0];
      }
      else
      {
        v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))v36[0])(
               v36[0],
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               &v31);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36[0] + 16LL))(v36[0]);
      }
    }
    string = 0LL;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        44LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v4);
LABEL_33:
      v20 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
      }
      goto LABEL_35;
    }
    v33 = 0LL;
    v15 = (**v31)(v31, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v33);
    v4 = v15;
    if ( v15 < 0 )
    {
      v16 = 47LL;
      goto LABEL_31;
    }
    v17 = v33;
    string = 0LL;
    v18 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
    if ( v18 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v17 + 80LL))(v17, string, v34, v30);
    v4 = v15;
    string = 0LL;
    if ( v15 < 0 )
    {
      v16 = 56LL;
      goto LABEL_31;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*(_QWORD *)v35 + 40LL))(
            v35,
            0LL,
            0LL,
            v31,
            0LL);
    v4 = v15;
    if ( v15 < 0 )
    {
      v16 = 58LL;
LABEL_31:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v16,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v15);
      v19 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_33;
    }
    v23 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
    }
    v25 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
LABEL_47:
    v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 48LL))(v35);
    v4 = v27;
    if ( v27 < 0 )
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        61LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v27);
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    37LL,
    (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\launchoperation.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_37:
  v22 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_49:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v37);
LABEL_50:
  v28 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v4;
}
