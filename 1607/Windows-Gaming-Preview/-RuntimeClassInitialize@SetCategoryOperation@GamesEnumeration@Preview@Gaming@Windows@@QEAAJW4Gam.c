/*
 * XREFs of ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001EA34
 * Callers:
 *     _lambda_61beeb39da0ffab562e69952bf082708_::operator() @ 0x180015838 (_lambda_61beeb39da0ffab562e69952bf082708_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DCC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180023064 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x180023620 (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 *     ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x18002386C (-ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        int a3,
        struct ITileManager *a4,
        struct ITileInfo *a5)
{
  int v7; // eax
  struct IVisualElementEnumerator *v8; // r8
  bool v9; // r9
  signed int v10; // edi
  __int64 v11; // rdx
  IStream *v12; // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned __int16 **v17; // r8
  unsigned __int64 v18; // rbx
  int AppUserModelId; // eax
  WCHAR *v20; // rsi
  HRESULT v21; // eax
  HSTRING v22; // rdi
  __int64 v23; // rcx
  int ActivationFactory; // eax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  HRESULT v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  HRESULT v30; // eax
  HSTRING v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  HRESULT v38; // eax
  __int64 v39; // rdi
  HRESULT v40; // eax
  HRESULT v41; // eax
  HSTRING v42; // rbx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  BYTE pInit[8]; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v56; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v57; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v58; // [rsp+50h] [rbp-99h] BYREF
  IStream *v59; // [rsp+58h] [rbp-91h] BYREF
  PCWSTR sourceString; // [rsp+60h] [rbp-89h] BYREF
  __int64 v61; // [rsp+68h] [rbp-81h]
  __int64 v62; // [rsp+70h] [rbp-79h]
  __int64 v63; // [rsp+78h] [rbp-71h]
  _BYTE v64[80]; // [rsp+88h] [rbp-61h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-11h] BYREF
  HSTRING string; // [rsp+F0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+57h]

  v63 = -2LL;
  if ( a2 == a3 )
    return 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v64,
    a5);
  if ( a3 )
  {
    *(_DWORD *)pInit = a3;
    v12 = SHCreateMemStream(pInit, 4u);
    v59 = v12;
    v10 = v12 == 0LL ? 0x8007000E : 0;
    if ( v12 )
    {
      v15 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty(
              v64,
              L"Windows.Gaming.AppCategory",
              &v59);
      v10 = v15;
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(IStream *))(*(_QWORD *)v12 + 16LL))(v12);
        v10 = 0;
        goto LABEL_15;
      }
      v13 = (unsigned int)v15;
      v14 = 1078LL;
    }
    else
    {
      v13 = (unsigned int)v10;
      v14 = 1077LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v13);
    if ( v12 )
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_15:
    if ( v10 < 0 )
    {
      v11 = 33LL;
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  v7 = TileDataLayerItemWrappers::TDLTileInfoHelper::ClearShellPropertyStream(
         (TileDataLayerItemWrappers::TDLTileInfoHelper *)v64,
         L"Windows.Gaming.AppCategory");
  v10 = v7;
  if ( v7 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v7);
  if ( v10 < 0 )
  {
    v11 = 29LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
      (const char *)(unsigned int)v10);
LABEL_89:
    TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v64);
    return (unsigned int)v10;
  }
LABEL_17:
  v16 = TileDataLayerItemWrappers::TDLTileInfoHelper::CommitInternal(
          (TileDataLayerItemWrappers::TDLTileInfoHelper *)v64,
          a4,
          v8,
          v9);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v16);
    v11 = 40LL;
    goto LABEL_19;
  }
  if ( a3 == 1 )
  {
    sourceString = 0LL;
    v18 = -1LL;
    v61 = -1LL;
    v62 = -1LL;
    AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
                       a5,
                       (struct ITileInfo *)&sourceString,
                       v17);
    v10 = AppUserModelId;
    v20 = (WCHAR *)sourceString;
    if ( AppUserModelId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)AppUserModelId);
LABEL_86:
      if ( v20 )
      {
        CoTaskMemFree(v20);
        sourceString = 0LL;
      }
      v61 = 0LL;
      v62 = 0LL;
      goto LABEL_89;
    }
    v58 = 0LL;
    string = 0LL;
    v21 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
    if ( v21 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    v22 = string;
    v23 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    ActivationFactory = RoGetActivationFactory(v22, &GUID_e0e92883_00fb_4231_817e_4284b94a6460, &v58);
    v10 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_84:
      v49 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      goto LABEL_86;
    }
    v57 = 0LL;
    v25 = v58;
    string = 0LL;
    v26 = -1LL;
    do
      ++v26;
    while ( v20[v26] );
    if ( v26 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      __debugbreak();
    }
    v27 = WindowsCreateStringReference(v20, v26, &hstringHeader, &string);
    if ( v27 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
    v28 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v25 + 432LL))(
            v25,
            0LL,
            string,
            &v57);
    v10 = v29;
    string = 0LL;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)v29);
LABEL_82:
      v48 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      goto LABEL_84;
    }
    *(_QWORD *)pInit = 0LL;
    string = 0LL;
    v30 = WindowsCreateStringReference(
            L"Windows.Internal.StateRepository.PackagePolicy",
            0x2Eu,
            &hstringHeader,
            &string);
    if ( v30 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30);
    v31 = string;
    v32 = *(_QWORD *)pInit;
    if ( *(_QWORD *)pInit )
    {
      *(_QWORD *)pInit = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    *(_QWORD *)pInit = 0LL;
    v10 = RoActivateInstance(v31, &v59);
    if ( v10 >= 0 )
    {
      if ( *(_QWORD *)&GUID_7619d03f_b9b1_446c_aeb9_f126825fd333.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_7619d03f_b9b1_446c_aeb9_f126825fd333.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        *(_QWORD *)pInit = v59;
      }
      else
      {
        v10 = (**(__int64 (__fastcall ***)(IStream *, GUID *, BYTE *))v59)(
                v59,
                &GUID_7619d03f_b9b1_446c_aeb9_f126825fd333,
                pInit);
        (*(void (__fastcall **)(IStream *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    string = 0LL;
    if ( v10 < 0 )
    {
      v33 = (unsigned int)v10;
      v34 = 69LL;
LABEL_69:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)v33);
LABEL_80:
      v47 = *(_QWORD *)pInit;
      if ( *(_QWORD *)pInit )
      {
        *(_QWORD *)pInit = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      goto LABEL_82;
    }
    v35 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)pInit + 136LL))(*(_QWORD *)pInit, v57);
    v10 = v35;
    if ( v35 < 0 )
    {
      v34 = 71LL;
LABEL_68:
      v33 = (unsigned int)v35;
      goto LABEL_69;
    }
    v36 = *(_QWORD *)pInit;
    string = 0LL;
    v37 = -1LL;
    do
      ++v37;
    while ( aAppcategory[v37] );
    if ( v37 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      __debugbreak();
    }
    v38 = WindowsCreateStringReference(L"AppCategory", v37, &hstringHeader, &string);
    if ( v38 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v38);
    v35 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v36 + 152LL))(v36, string);
    v10 = v35;
    string = 0LL;
    if ( v35 < 0 )
    {
      v34 = 72LL;
      goto LABEL_68;
    }
    v39 = *(_QWORD *)pInit;
    string = 0LL;
    do
      ++v18;
    while ( aGame[v18] );
    if ( v18 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      __debugbreak();
    }
    v40 = WindowsCreateStringReference(L"game", v18, &hstringHeader, &string);
    if ( v40 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v40);
    v35 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v39 + 200LL))(v39, string);
    v10 = v35;
    string = 0LL;
    if ( v35 < 0 )
    {
      v34 = 73LL;
      goto LABEL_68;
    }
    v56 = 0LL;
    string = 0LL;
    v41 = WindowsCreateStringReference(
            L"Windows.Internal.StateRepository.PackagePolicy",
            0x2Eu,
            &hstringHeader,
            &string);
    if ( v41 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41);
    v42 = string;
    v43 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = RoGetActivationFactory(v42, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v56);
    v10 = v44;
    string = 0LL;
    if ( v44 < 0 )
    {
      v45 = 82LL;
      goto LABEL_78;
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v56 + 48LL))(v56, *(_QWORD *)pInit);
    v10 = v44;
    if ( v44 < 0 )
    {
      v45 = 84LL;
LABEL_78:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)v44);
      v46 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      goto LABEL_80;
    }
    v51 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v52 = *(_QWORD *)pInit;
    if ( *(_QWORD *)pInit )
    {
      *(_QWORD *)pInit = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    if ( v20 )
    {
      CoTaskMemFree(v20);
      sourceString = 0LL;
    }
    v61 = 0LL;
    v62 = 0LL;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v64);
  return 0LL;
}
