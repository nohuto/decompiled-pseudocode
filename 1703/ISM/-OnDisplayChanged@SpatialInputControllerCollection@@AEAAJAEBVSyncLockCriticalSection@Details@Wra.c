/*
 * XREFs of ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4
 * Callers:
 *     ?Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800774D0 (-Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x1800191F8 (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x180050714 (wil--scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?ControllerNodeTracked_@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800767A0 (-ControllerNodeTracked_@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     EnumerateDevices @ 0x180076FD8 (EnumerateDevices.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180077834 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     _lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator() @ 0x18007A1C0 (_lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_--operator().c)
 *     ?UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@345@PEAUHSTRING__@@PEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A2C0 (-UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeRefer.c)
 *     ?RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x18007A564 (-RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphi.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x18008BA6C (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18008CF28 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXXZ @ 0x18009A84C (-StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=167
__int64 __fastcall SpatialInputControllerCollection::OnDisplayChanged(
        SpatialInputControllerCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3,
        char a4)
{
  int v6; // ebx
  int v7; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  __int64 v9; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // r15
  int v11; // eax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v12; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 *i; // rax
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rbx
  int v30; // eax
  int v31; // eax
  char *v32; // r15
  _QWORD *v33; // rdi
  bool j; // zf
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v38; // rcx
  int v39; // eax
  SpatialInputControllerCollection *v40; // rcx
  __int64 *v41; // rsi
  __int64 *v42; // rbx
  int updated; // r12d
  RawInputProvidersTracing *v44; // rcx
  __int64 *v45; // rax
  __int64 *k; // rax
  __int64 v47; // rbx
  struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *v48; // rax
  __int64 v49; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v55; // rcx
  HSTRING *v56; // rdi
  struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *v57; // rcx
  __int64 v58; // rcx
  __int64 (__fastcall ***v59)(_QWORD, GUID *, _QWORD *); // rcx
  int v61; // [rsp+40h] [rbp-C0h] BYREF
  char v62; // [rsp+44h] [rbp-BCh] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v63; // [rsp+48h] [rbp-B8h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string; // [rsp+70h] [rbp-90h] BYREF
  int pvData; // [rsp+78h] [rbp-88h] BYREF
  GUID InterfaceClassGuid; // [rsp+80h] [rbp-80h] BYREF
  DWORD pcbData; // [rsp+90h] [rbp-70h] BYREF
  void *v72[2]; // [rsp+98h] [rbp-68h] BYREF
  int *v73; // [rsp+A8h] [rbp-58h]
  HSTRING *p_string; // [rsp+B0h] [rbp-50h]
  char *v75; // [rsp+B8h] [rbp-48h]
  char *v76; // [rsp+C0h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v77; // [rsp+C8h] [rbp-38h]
  char *v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  _BYTE v80[48]; // [rsp+E0h] [rbp-20h] BYREF
  char v81; // [rsp+110h] [rbp+10h]
  _BYTE v82[24]; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]
  char v84; // [rsp+198h] [rbp+98h] BYREF

  v84 = a4;
  v79 = -2LL;
  v61 = 0;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x329,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  v66 = 0LL;
  string = 0LL;
  v62 = 0;
  v72[0] = &v66;
  v72[1] = this;
  v73 = &v61;
  p_string = &string;
  v75 = &v84;
  v76 = &v62;
  wil::scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___((__int64)v80, (__int128 *)v72);
  WindowsDeleteString(string);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::IHolographicDisplay *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v7;
  v61 = v7;
  if ( v7 < 0 )
  {
    v9 = 827LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_111;
  }
  v7 = SpatialInputControllerCollection::EnsureResources(this, v8);
  v6 = v7;
  v61 = v7;
  if ( v7 < 0 )
  {
    v9 = 828LL;
    goto LABEL_7;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2760);
  v77 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2760);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 69);
  v78 = (char *)this + 2760;
  if ( v84 )
  {
    v63 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(struct Windows::Graphics::Holographic::IHolographicDisplay *, GUID *, struct Windows::Internal::Holographic::ISpatialGraphDriverClient **))a3)(
            a3,
            &GUID_09a4ed86_3c1f_49b9_a85f_ea9b5deb193d,
            &v63);
    v6 = v11;
    if ( v11 >= 0 )
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
        (char **)this + 368,
        (__int64 *)&v63);
      v13 = v63;
      if ( v63 )
      {
        v63 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3E4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v11);
      v12 = v63;
      if ( v63 )
      {
        v63 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    v61 = v6;
    if ( v6 < 0 )
    {
      v14 = (unsigned int)v6;
      v15 = 836LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)v14);
      goto LABEL_109;
    }
  }
  else
  {
    v16 = SpatialInputControllerCollection::RemoveDisplay(this, a3);
    v6 = v16;
    v61 = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 840LL;
      goto LABEL_19;
    }
  }
  v17 = *((_QWORD *)this + 362);
  if ( v17 )
  {
    *((_QWORD *)this + 362) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 360);
  if ( v18 )
  {
    *((_QWORD *)this + 360) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = *((_QWORD *)this + 359);
  if ( v19 )
  {
    *((_QWORD *)this + 359) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  WindowsDeleteString(*((HSTRING *)this + 361));
  *((_QWORD *)this + 361) = 0LL;
  v20 = (__int64 *)*((_QWORD *)this + 350);
  v21 = (__int64 *)*v20;
  while ( v21 != v20 )
  {
    SpatialInteractionDevices::SpatialInteractionController::StopTracking((SpatialInteractionDevices::SpatialInteractionController *)v21[5]);
    if ( !*((_BYTE *)v21 + 25) )
    {
      v22 = (__int64 *)v21[2];
      if ( *((_BYTE *)v22 + 25) )
      {
        for ( i = (__int64 *)v21[1]; !*((_BYTE *)i + 25) && v21 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v21 = i;
        v21 = i;
      }
      else
      {
        do
        {
          v21 = v22;
          v22 = (__int64 *)*v22;
        }
        while ( !*((_BYTE *)v22 + 25) );
      }
    }
  }
  v65 = 0LL;
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 364)
                                                                                                + 48LL))(
          *((_QWORD *)this + 364),
          &v65);
  v6 = v24;
  v61 = v24;
  if ( v24 < 0 )
  {
    v25 = (unsigned int)v24;
    v26 = 857LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v25);
    goto LABEL_107;
  }
  if ( !v65 )
  {
    v62 = 1;
    if ( (__int64)(*((_QWORD *)this + 369) - *((_QWORD *)this + 368)) >> 3 )
    {
      v6 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, _QWORD))this + 368))(
             **((_QWORD **)this + 368),
             &GUID_9acea414_1d9f_4090_a388_90c06f6eae9c,
             &v65);
    }
    else
    {
      v65 = 0LL;
      v6 = -2147023728;
    }
    if ( v6 < 0 )
    {
      v25 = (unsigned int)v6;
      v26 = 861LL;
      goto LABEL_45;
    }
  }
  v67 = 0LL;
  v27 = (**v65)(v65, &GUID_09a4ed86_3c1f_49b9_a85f_ea9b5deb193d, &v67);
  v6 = v27;
  v61 = v27;
  if ( v27 < 0 )
  {
    v28 = 865LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_105;
  }
  v29 = v67;
  WindowsDeleteString(v66);
  v66 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 64LL))(v29, &v66);
  v6 = v27;
  v61 = v27;
  if ( v27 < 0 )
  {
    v28 = 867LL;
    goto LABEL_50;
  }
  v64 = 0LL;
  v30 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(&v64);
  v6 = v30;
  if ( v30 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3CE,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v30);
  v61 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x368,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_103;
  }
  *(_OWORD *)v72 = 0LL;
  v73 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_SPATIAL_GRAPH;
  v31 = EnumerateDevices(&InterfaceClassGuid, (__int64)v72);
  v6 = v31;
  v61 = v31;
  v32 = (char *)v72[0];
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x36B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v31);
    goto LABEL_98;
  }
  v33 = v72[0];
  for ( j = v72[0] == v72[1]; ; j = v33 == v72[1] )
  {
    if ( j )
    {
      v6 = -2147023728;
      v61 = -2147023728;
      goto LABEL_98;
    }
    v63 = 0LL;
    v35 = CreateSpatialGraphDriverClient((HSTRING)*v33, &v63);
    v36 = v35;
    if ( v35 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x370,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v35);
    if ( v36 >= 0 )
      break;
LABEL_65:
    v38 = v63;
    if ( v63 )
    {
      v63 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v38 + 16LL))(v38);
    }
    ++v33;
  }
  v37 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, HSTRING, _BYTE *))(*(_QWORD *)v63 + 24LL))(
          v63,
          v66,
          v82);
  if ( v37 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x373,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v37);
    goto LABEL_65;
  }
  *(_QWORD *)&InterfaceClassGuid.Data1 = 0LL;
  v39 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *, _QWORD, _BYTE *, GUID *))(*(_QWORD *)v64 + 24LL))(
          v64,
          *v33,
          v82,
          &InterfaceClassGuid);
  v6 = v39;
  v61 = v39;
  if ( v39 >= 0 )
  {
    v41 = (__int64 *)*((_QWORD *)this + 350);
    v42 = (__int64 *)*v41;
    while ( v42 != v41 )
    {
      updated = SpatialInputControllerCollection::UpdateControllerNodeReference(
                  v40,
                  v64,
                  v63,
                  (HSTRING)*v33,
                  (struct SpatialInteractionDevices::SpatialInteractionController *)v42[5]);
      v40 = (SpatialInputControllerCollection *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( v40 && *(_DWORD *)v40 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::ControllerNodeTracked_(v44, updated, *((_DWORD *)v42 + 8));
      }
      if ( !*((_BYTE *)v42 + 25) )
      {
        v45 = (__int64 *)v42[2];
        if ( *((_BYTE *)v45 + 25) )
        {
          for ( k = (__int64 *)v42[1]; !*((_BYTE *)k + 25) && v42 == (__int64 *)k[2]; k = (__int64 *)k[1] )
            v42 = k;
          v42 = k;
        }
        else
        {
          do
          {
            v42 = v45;
            v45 = (__int64 *)*v45;
          }
          while ( !*((_BYTE *)v45 + 25) );
        }
      }
    }
    v47 = *v33;
    *v33 = 0LL;
    WindowsDeleteString(*((HSTRING *)this + 361));
    *((_QWORD *)this + 361) = v47;
    v48 = v64;
    v64 = 0LL;
    v49 = *((_QWORD *)this + 359);
    *((_QWORD *)this + 359) = v48;
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    v50 = v63;
    v63 = 0LL;
    v51 = *((_QWORD *)this + 360);
    *((_QWORD *)this + 360) = v50;
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    pvData = 0;
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
           L"ISM_Enable6DOFController",
           0x18u,
           0LL,
           &pvData,
           &pcbData)
      || pvData )
    {
      v52 = *(_QWORD *)&InterfaceClassGuid.Data1;
      *(_QWORD *)&InterfaceClassGuid.Data1 = 0LL;
      v53 = *((_QWORD *)this + 362);
      *((_QWORD *)this + 362) = v52;
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x376,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v39);
  }
  v54 = *(_QWORD *)&InterfaceClassGuid.Data1;
  if ( *(_QWORD *)&InterfaceClassGuid.Data1 )
  {
    *(_QWORD *)&InterfaceClassGuid.Data1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v55 + 16LL))(v55);
  }
LABEL_98:
  if ( v32 )
  {
    v56 = (HSTRING *)v32;
    if ( v32 != v72[1] )
    {
      do
      {
        WindowsDeleteString(*v56);
        *v56++ = 0LL;
      }
      while ( v56 != v72[1] );
    }
    std::_Deallocate(v32, ((char *)v73 - v32) >> 3, 8uLL);
    v72[0] = 0LL;
    v72[1] = 0LL;
    v73 = 0LL;
  }
  v10 = v77;
LABEL_103:
  v57 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *))(*(_QWORD *)v57 + 16LL))(v57);
  }
LABEL_105:
  v58 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
LABEL_107:
  v59 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v59)[2])(v59);
  }
LABEL_109:
  if ( v10 )
  {
    LeaveCriticalSection(v10);
    v78 = 0LL;
  }
LABEL_111:
  if ( v81 )
  {
    v81 = 0;
    lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator()(v80);
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v66);
  v66 = 0LL;
  return (unsigned int)v6;
}
