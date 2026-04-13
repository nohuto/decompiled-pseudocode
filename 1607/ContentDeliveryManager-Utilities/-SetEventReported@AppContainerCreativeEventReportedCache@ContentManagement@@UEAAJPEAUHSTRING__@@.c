/*
 * XREFs of ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x1800223F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x180021660 (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180021814 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180021900 (-SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z.c)
 *     ?SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRING__@@@Z @ 0x180021B04 (-SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRIN.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180021D10 (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::SetEventReported(
        __int64 a1,
        struct Windows::Storage::IApplicationDataContainer **a2,
        unsigned int a3,
        HSTRING a4)
{
  int SettingsContainer; // eax
  unsigned int v8; // edi
  __int64 v9; // rbx
  int HasKey; // eax
  unsigned __int8 *v11; // r9
  __int64 v12; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rdx
  HSTRING v14; // r9
  bool v15; // di
  struct Windows::Foundation::Collections::IPropertySet *v16; // rdx
  HSTRING *v17; // r9
  HRESULT v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  HSTRING v22; // rcx
  HSTRING v23; // rcx
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  HSTRING v27; // rdi
  ContentManagement *v28; // rcx
  int CreativeEventString; // eax
  unsigned __int8 *v30; // r9
  void *v31; // rsi
  __int64 v32; // rdx
  ContentManagement *v33; // rcx
  unsigned __int16 v35; // [rsp+30h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-31h] BYREF
  ContentManagement *v37; // [rsp+40h] [rbp-29h] BYREF
  INT32 result; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v39; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v40[2]; // [rsp+58h] [rbp-11h] BYREF
  LPVOID pv[4]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v40[1] = -2LL;
  v40[0] = 0LL;
  SettingsContainer = ContentManagement::GetSettingsContainer((ContentManagement *)v40, a2);
  v8 = SettingsContainer;
  v9 = v40[0];
  if ( SettingsContainer < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)SettingsContainer);
    goto LABEL_49;
  }
  v37 = 0LL;
  HasKey = (*(__int64 (__fastcall **)(_QWORD, ContentManagement **))(*(_QWORD *)v40[0] + 64LL))(v40[0], &v37);
  v8 = HasKey;
  if ( HasKey < 0 )
  {
    v12 = 719LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)HasKey);
    goto LABEL_47;
  }
  HasKey = ContentManagement::HasKey(
             (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v37,
             (struct Windows::Foundation::Collections::IPropertySet *)L"LastCreativeId",
             &v35,
             v11);
  v8 = HasKey;
  if ( HasKey < 0 )
  {
    v12 = 723LL;
    goto LABEL_7;
  }
  v15 = 0;
  if ( (_BYTE)v35 )
  {
    string1 = 0LL;
    WindowsDeleteString(0LL);
    string1 = 0LL;
    ContentManagement::GetStringFromSetting(
      (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v37,
      v16,
      (const unsigned __int16 *)&string1,
      v17);
    result = 0;
    v18 = WindowsCompareStringOrdinal(string1, (HSTRING)a2, &result);
    if ( v18 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    }
    else
    {
      v15 = result != 0;
      WindowsDeleteString(string1);
      if ( (_BYTE)v35 && !v15 )
        goto LABEL_26;
    }
  }
  ContentManagement::SetString(
    (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v37,
    v13,
    (const unsigned __int16 *)a2,
    v14);
  if ( v15 )
  {
    string1 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 72LL))(v9, &string1);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 742LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v19);
      v22 = string1;
      if ( !string1 )
        goto LABEL_47;
      string1 = 0LL;
      goto LABEL_46;
    }
    v19 = (*(__int64 (__fastcall **)(HSTRING, INT32 *))(*(_QWORD *)string1 + 56LL))(string1, &result);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 745LL;
      goto LABEL_22;
    }
    if ( result )
    {
      v21 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180068ED0);
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, *v21);
      v8 = v19;
      if ( v19 < 0 )
      {
        v20 = 748LL;
        goto LABEL_22;
      }
    }
    v23 = string1;
    if ( string1 )
    {
      string1 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
LABEL_26:
  v39 = 0LL;
  v24 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180068ED0);
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, HSTRING *))(*(_QWORD *)v9 + 80LL))(v9, *v24, 0LL, &v39);
  v8 = v25;
  if ( v25 >= 0 )
  {
    v27 = v39;
    v28 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v25 = (*(__int64 (__fastcall **)(HSTRING, ContentManagement **))(*(_QWORD *)v27 + 64LL))(v27, &v37);
    v8 = v25;
    if ( v25 < 0 )
    {
      v26 = 756LL;
      goto LABEL_32;
    }
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    CreativeEventString = ContentManagement::GetCreativeEventString(a3, a4, pv);
    v8 = CreativeEventString;
    v31 = pv[0];
    if ( CreativeEventString >= 0 )
    {
      CreativeEventString = ContentManagement::HasKey(
                              (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v37,
                              (struct Windows::Foundation::Collections::IPropertySet *)pv[0],
                              (unsigned __int16 *)((char *)&v35 + 1),
                              v30);
      v8 = CreativeEventString;
      if ( CreativeEventString >= 0 )
      {
        if ( HIBYTE(v35)
          || (GetSystemTimeAsFileTime((LPFILETIME)&string1),
              CreativeEventString = ContentManagement::SetUInt64(
                                      (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v37,
                                      (struct Windows::Foundation::Collections::IPropertySet *)v31,
                                      (const unsigned __int16 *)((unsigned int)string1
                                                               + ((unsigned __int64)string1 >> 32 << 32))),
              v8 = CreativeEventString,
              CreativeEventString >= 0) )
        {
          v8 = 0;
LABEL_42:
          if ( v31 )
            CoTaskMemFree(v31);
          goto LABEL_44;
        }
        v32 = 766LL;
      }
      else
      {
        v32 = 762LL;
      }
    }
    else
    {
      v32 = 759LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    goto LABEL_42;
  }
  v26 = 755LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v25);
LABEL_44:
  v22 = v39;
  if ( !v39 )
    goto LABEL_47;
  v39 = 0LL;
LABEL_46:
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_47:
  v33 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_49:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
