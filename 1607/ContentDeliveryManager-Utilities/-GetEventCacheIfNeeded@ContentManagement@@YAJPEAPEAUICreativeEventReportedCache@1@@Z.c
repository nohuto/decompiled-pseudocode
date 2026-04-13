/*
 * XREFs of ?GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18001F310
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001F5F0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentValue@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AF00 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UICreativeEventReportedCache@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019890 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UICreat.c)
 *     ??0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ @ 0x18001AD28 (--0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180024834 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003AE54 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z @ 0x18003AFEC (-IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ContentManagement::GetEventCacheIfNeeded(
        ContentManagement *this,
        struct ContentManagement::ICreativeEventReportedCache **a2)
{
  int IsCallingProcessAppContainer; // eax
  __int64 v4; // rcx
  signed int CallingProcessHandle; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  ContentManagement::AppContainerCreativeEventReportedCache *v9; // rax
  int Interface; // edi
  ContentManagement::AppContainerCreativeEventReportedCache *v11; // rbx
  __int64 v12; // rdx
  signed int LastError; // eax
  char *v14; // rcx
  LPWSTR FileNameW; // rax
  LPWSTR v16; // r14
  _QWORD *v17; // rax
  volatile signed __int64 *v18; // rbx
  _QWORD *v19; // rdi
  bool v20; // zf
  int v21; // eax
  volatile signed __int64 *v22; // rcx
  DWORD dwSize[2]; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE hProcess; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR ExeName[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *(_QWORD *)this = 0LL;
  IsCallingProcessAppContainer = CallerIdentity::IsCallingProcessAppContainer(2LL, dwSize);
  CallingProcessHandle = IsCallingProcessAppContainer;
  if ( IsCallingProcessAppContainer < 0 )
  {
    v6 = (unsigned int)IsCallingProcessAppContainer;
    v7 = 287LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v6);
    return (unsigned int)CallingProcessHandle;
  }
  if ( !LOBYTE(dwSize[0]) )
  {
    dwSize[1] = 260;
    hProcess = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v4, 2LL, &hProcess);
    if ( CallingProcessHandle >= 0 )
    {
      if ( QueryFullProcessImageNameW(hProcess, 0, ExeName, &dwSize[1]) )
      {
        CallingProcessHandle = 0;
        goto LABEL_20;
      }
      LastError = GetLastError();
      CallingProcessHandle = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        CallingProcessHandle = LastError;
      if ( CallingProcessHandle >= 0 )
        CallingProcessHandle = -2147467259;
    }
    ExeName[0] = 0;
    dwSize[1] = 0;
LABEL_20:
    v14 = (char *)hProcess;
    hProcess = 0LL;
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v14);
    if ( CallingProcessHandle < 0 )
    {
      v6 = (unsigned int)CallingProcessHandle;
      v7 = 297LL;
      goto LABEL_3;
    }
    FileNameW = PathFindFileNameW(ExeName);
    *(_QWORD *)this = 0LL;
    v16 = FileNameW;
    v17 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
    {
      v19 = v17 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v17 + 1));
      v20 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
      *v18 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
      *v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>>,1,1>'};
      *((_QWORD *)v18 + 4) = &ContentManagement::DesktopAppCreativeEventReportedCache::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v18 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>,1,0>'};
      *((_QWORD *)v18 + 7) = 1LL;
      if ( !v20 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      *v18 = (volatile signed __int64)&ContentManagement::DesktopAppCreativeEventReportedCache::`vftable'{for `IInspectable'};
      *v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>>,1,1>'};
      *((_QWORD *)v18 + 4) = &ContentManagement::DesktopAppCreativeEventReportedCache::`vftable'{for `IWeakReferenceSource'};
      *((_QWORD *)v18 + 5) = &ContentManagement::DesktopAppCreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>,1,0>'};
      *((_QWORD *)v18 + 8) = 0LL;
      *((_QWORD *)v18 + 9) = 0LL;
      *((_QWORD *)v18 + 10) = 0LL;
      v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              v18 + 8,
              v16);
      Interface = v21;
      if ( v21 >= 0 )
        Interface = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.h",
          (const char *)(unsigned int)v21);
      v22 = v18;
      if ( Interface >= 0 )
      {
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                      (__int64)v18,
                      &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
                      this);
        v22 = v18;
      }
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v22);
      if ( Interface >= 0 )
        return 0LL;
    }
    else
    {
      Interface = -2147024882;
    }
    v12 = 298LL;
    goto LABEL_11;
  }
  *(_QWORD *)this = 0LL;
  v9 = (ContentManagement::AppContainerCreativeEventReportedCache *)operator new(
                                                                      0x60uLL,
                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    Interface = -2147024882;
LABEL_10:
    v12 = 290LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v11 = ContentManagement::AppContainerCreativeEventReportedCache::AppContainerCreativeEventReportedCache(v9);
  Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                (__int64)v11,
                &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
                this);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v11);
  if ( Interface < 0 )
    goto LABEL_10;
  return 0LL;
}
