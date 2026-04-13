/*
 * XREFs of _lambda_f9e236e5f2c30dd9dfc7366d2b2138bc_::operator() @ 0x18000DF84
 * Callers:
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000DD00 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180013EA8 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001A8B4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppListEntry@Core@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001AB40 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_f9e236e5f2c30dd9dfc7366d2b2138bc_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v32; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v33[7]; // [rsp+39h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-31h] BYREF
  __int64 v35; // [rsp+48h] [rbp-29h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h] BYREF
  __int64 v37; // [rsp+58h] [rbp-19h] BYREF
  __int64 v38; // [rsp+60h] [rbp-11h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-9h] BYREF
  __int64 v40; // [rsp+70h] [rbp-1h] BYREF
  __int64 v41; // [rsp+78h] [rbp+7h] BYREF
  __int64 v42; // [rsp+80h] [rbp+Fh] BYREF
  int v43; // [rsp+88h] [rbp+17h] BYREF
  __int64 v44; // [rsp+90h] [rbp+1Fh]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+27h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v44 = -2LL;
  v42 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Management.Deployment.PackageManager", 0x2Cu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         string,
         &v42);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x24C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_63;
  }
  v36 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v42 + 160LL))(v42, 0LL, **a1, &v36);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x24C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v5);
LABEL_56:
    v6 = v36;
    goto LABEL_61;
  }
  v6 = v36;
  if ( v36 )
  {
    v35 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, &v35);
    v4 = v7;
    if ( v7 < 0
      || (v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v35 + 56LL))(v35, &v32), v4 = v7, v7 < 0) )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x24C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v7);
LABEL_54:
      v28 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_56;
    }
    if ( v32 )
    {
      v39 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 48LL))(
             v35,
             &v39);
      v4 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x24C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v8);
LABEL_52:
        v27 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v27)[2])(v27);
        }
        goto LABEL_54;
      }
      v38 = 0LL;
      v9 = (**v39)(v39, &GUID_5f738b61_f86a_4917_93d1_f1ee9d3b35d9, &v38);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x24C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v9);
LABEL_50:
        v26 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_52;
      }
      v37 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 64LL))(v38, &v37);
      v4 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x24C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v10);
LABEL_48:
        v25 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        goto LABEL_50;
      }
      v34 = 0LL;
      v11 = v37;
      v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry *> *>>(v37);
      if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, &v34), v4 < 0) )
      {
        v13 = (unsigned int)v4;
        goto LABEL_45;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v43);
      v4 = v12;
      if ( v12 < 0 )
      {
        v13 = (unsigned int)v12;
LABEL_45:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x24C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v13);
LABEL_46:
        v24 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        goto LABEL_48;
      }
      if ( v43 )
      {
        v41 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, 0LL, &v41);
        v4 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x24C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v14);
LABEL_34:
          v19 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          goto LABEL_46;
        }
        v40 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 56LL))(v41, &v40);
        v4 = v15;
        if ( v15 >= 0 )
        {
          v17 = v40;
          v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>(v40);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 64LL))(v17, v33);
            if ( v4 >= 0 )
            {
              v4 = 0;
              goto LABEL_32;
            }
          }
          v16 = (unsigned int)v4;
        }
        else
        {
          v16 = (unsigned int)v15;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x24C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v16);
LABEL_32:
        v18 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_34;
      }
      v20 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
      }
    }
    v29 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v6 = v36;
  }
  v4 = 0;
LABEL_61:
  if ( v6 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
LABEL_63:
  v30 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return (unsigned int)v4;
}
