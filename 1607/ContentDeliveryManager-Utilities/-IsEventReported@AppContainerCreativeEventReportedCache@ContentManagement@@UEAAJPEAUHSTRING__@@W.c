/*
 * XREFs of ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800220F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x180021660 (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180021814 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180021D10 (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::IsEventReported(
        __int64 a1,
        struct Windows::Storage::IApplicationDataContainer **a2,
        unsigned int a3,
        HSTRING a4,
        _BYTE *a5)
{
  int SettingsContainer; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  int HasKey; // eax
  unsigned __int8 *v12; // r9
  __int64 v13; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v14; // rdx
  HSTRING *v15; // r9
  HRESULT v16; // eax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  ContentManagement *v21; // rcx
  int CreativeEventString; // eax
  unsigned __int8 *v23; // r9
  void *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  ContentManagement *v28; // rcx
  unsigned __int16 v30; // [rsp+38h] [rbp-41h] BYREF
  INT32 result[2]; // [rsp+40h] [rbp-39h] BYREF
  ContentManagement *v32; // [rsp+48h] [rbp-31h] BYREF
  HSTRING string1; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-21h] BYREF
  LPVOID pv[4]; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v34[1] = -2LL;
  *a5 = 0;
  v34[0] = 0LL;
  SettingsContainer = ContentManagement::GetSettingsContainer((ContentManagement *)v34, a2);
  v9 = SettingsContainer;
  v10 = v34[0];
  if ( SettingsContainer < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)SettingsContainer);
    goto LABEL_38;
  }
  v32 = 0LL;
  HasKey = (*(__int64 (__fastcall **)(_QWORD, ContentManagement **))(*(_QWORD *)v34[0] + 64LL))(v34[0], &v32);
  v9 = HasKey;
  if ( HasKey < 0 )
  {
    v13 = 684LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)HasKey);
    goto LABEL_36;
  }
  HasKey = ContentManagement::HasKey(
             (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v32,
             (struct Windows::Foundation::Collections::IPropertySet *)L"LastCreativeId",
             &v30,
             v12);
  v9 = HasKey;
  if ( HasKey < 0 )
  {
    v13 = 687LL;
    goto LABEL_7;
  }
  if ( (_BYTE)v30 )
  {
    string1 = 0LL;
    WindowsDeleteString(0LL);
    string1 = 0LL;
    ContentManagement::GetStringFromSetting(
      (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v32,
      v14,
      (const unsigned __int16 *)&string1,
      v15);
    result[0] = 0;
    v16 = WindowsCompareStringOrdinal(string1, (HSTRING)a2, result);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
    }
    else
    {
      if ( !result[0] )
      {
        *(_QWORD *)result = 0LL;
        v17 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180068ED0);
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, INT32 *))(*(_QWORD *)v10 + 80LL))(
                v10,
                *v17,
                0LL,
                result);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 696LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v18);
LABEL_24:
          v26 = *(_QWORD *)result;
          if ( *(_QWORD *)result )
          {
            *(_QWORD *)result = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          WindowsDeleteString(string1);
          goto LABEL_36;
        }
        v20 = *(_QWORD *)result;
        v21 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v18 = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v20 + 64LL))(v20, &v32);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 697LL;
          goto LABEL_17;
        }
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        pv[2] = (LPVOID)-1LL;
        CreativeEventString = ContentManagement::GetCreativeEventString(a3, a4, pv);
        v9 = CreativeEventString;
        v24 = pv[0];
        if ( CreativeEventString < 0 )
        {
          v25 = 701LL;
          goto LABEL_22;
        }
        CreativeEventString = ContentManagement::HasKey(
                                (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v32,
                                (struct Windows::Foundation::Collections::IPropertySet *)pv[0],
                                (unsigned __int16 *)((char *)&v30 + 1),
                                v23);
        v9 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v25 = 702LL;
LABEL_22:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)CreativeEventString);
          if ( v24 )
            CoTaskMemFree(v24);
          goto LABEL_24;
        }
        if ( HIBYTE(v30) )
          *a5 = 1;
        if ( v24 )
          CoTaskMemFree(v24);
        v27 = *(_QWORD *)result;
        if ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      WindowsDeleteString(string1);
    }
  }
  v9 = 0;
LABEL_36:
  v28 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v28 + 16LL))(v28);
  }
LABEL_38:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
