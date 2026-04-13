/*
 * XREFs of ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@@Z @ 0x180011740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180002640 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z @ 0x1800105CC (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x18001082C (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180010A20 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180010B30 (-SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z.c)
 *     ?SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRING__@@@Z @ 0x180010D60 (-SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRIN.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180010FAC (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018ABC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::SetEventReported(
        __int64 a1,
        struct Windows::Storage::IApplicationDataContainer **a2,
        unsigned int a3)
{
  int SettingsContainer; // eax
  unsigned int v6; // esi
  __int64 v7; // rdi
  int HasKey; // eax
  unsigned __int8 *v9; // r9
  __int64 v10; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v11; // rdx
  HSTRING v12; // r9
  bool v13; // bl
  struct Windows::Foundation::Collections::IPropertySet *v14; // rdx
  HSTRING *v15; // r9
  HRESULT v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  HSTRING v20; // r14
  HSTRING v21; // rsi
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  HSTRING v25; // r14
  ContentManagement *v26; // rsi
  int CreativeEventString; // eax
  unsigned __int8 *v28; // r9
  void *v29; // rbx
  __int64 v30; // rdx
  ContentManagement *v31; // r14
  unsigned __int16 v33; // [rsp+20h] [rbp-60h] BYREF
  HSTRING string1; // [rsp+28h] [rbp-58h] BYREF
  ContentManagement *v35; // [rsp+30h] [rbp-50h] BYREF
  INT32 result; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v37; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v38[1] = -2LL;
  v38[0] = 0LL;
  SettingsContainer = ContentManagement::GetSettingsContainer((ContentManagement *)v38, a2);
  v6 = SettingsContainer;
  v7 = v38[0];
  if ( SettingsContainer < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      672LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)SettingsContainer);
    goto LABEL_49;
  }
  v35 = 0LL;
  HasKey = (*(__int64 (__fastcall **)(_QWORD, ContentManagement **))(*(_QWORD *)v38[0] + 64LL))(v38[0], &v35);
  v6 = HasKey;
  if ( HasKey < 0 )
  {
    v10 = 675LL;
LABEL_7:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v10,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)HasKey);
    goto LABEL_47;
  }
  HasKey = ContentManagement::HasKey(
             (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v35,
             (struct Windows::Foundation::Collections::IPropertySet *)L"LastCreativeId",
             &v33,
             v9);
  v6 = HasKey;
  if ( HasKey < 0 )
  {
    v10 = 679LL;
    goto LABEL_7;
  }
  v13 = 0;
  if ( (_BYTE)v33 )
  {
    string1 = 0LL;
    WindowsDeleteString(0LL);
    string1 = 0LL;
    ContentManagement::GetStringFromSetting(
      (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v35,
      v14,
      (const unsigned __int16 *)&string1,
      v15);
    result = 0;
    v16 = WindowsCompareStringOrdinal(string1, (HSTRING)a2, &result);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
    }
    else
    {
      v13 = result != 0;
      WindowsDeleteString(string1);
      if ( (_BYTE)v33 && !v13 )
        goto LABEL_26;
    }
  }
  ContentManagement::SetString(
    (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v35,
    v11,
    (const unsigned __int16 *)a2,
    v12);
  if ( v13 )
  {
    string1 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 72LL))(v7, &string1);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 698LL;
LABEL_22:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v18,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v17);
      v20 = string1;
      if ( !string1 )
        goto LABEL_47;
      string1 = 0LL;
      goto LABEL_46;
    }
    v17 = (*(__int64 (__fastcall **)(HSTRING, INT32 *))(*(_QWORD *)string1 + 56LL))(string1, &result);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 701LL;
      goto LABEL_22;
    }
    if ( result )
    {
      v19 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180031028);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, *v19);
      v6 = v17;
      if ( v17 < 0 )
      {
        v18 = 704LL;
        goto LABEL_22;
      }
    }
    v21 = string1;
    if ( string1 )
    {
      string1 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
LABEL_26:
  v37 = 0LL;
  v22 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180031028);
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, HSTRING *))(*(_QWORD *)v7 + 80LL))(v7, *v22, 0LL, &v37);
  v6 = v23;
  if ( v23 >= 0 )
  {
    v25 = v37;
    v26 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v23 = (*(__int64 (__fastcall **)(HSTRING, ContentManagement **))(*(_QWORD *)v25 + 64LL))(v25, &v35);
    v6 = v23;
    if ( v23 < 0 )
    {
      v24 = 712LL;
      goto LABEL_32;
    }
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    CreativeEventString = ContentManagement::GetCreativeEventString(a3, pv);
    v6 = CreativeEventString;
    v29 = pv[0];
    if ( CreativeEventString >= 0 )
    {
      CreativeEventString = ContentManagement::HasKey(
                              (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v35,
                              (struct Windows::Foundation::Collections::IPropertySet *)pv[0],
                              (unsigned __int16 *)((char *)&v33 + 1),
                              v28);
      v6 = CreativeEventString;
      if ( CreativeEventString >= 0 )
      {
        if ( HIBYTE(v33)
          || (GetSystemTimeAsFileTime((LPFILETIME)&string1),
              CreativeEventString = ContentManagement::SetUInt64(
                                      (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v35,
                                      (struct Windows::Foundation::Collections::IPropertySet *)v29,
                                      (const unsigned __int16 *)string1),
              v6 = CreativeEventString,
              CreativeEventString >= 0) )
        {
          v6 = 0;
LABEL_42:
          if ( v29 )
            CoTaskMemFree(v29);
          goto LABEL_44;
        }
        v30 = 722LL;
      }
      else
      {
        v30 = 718LL;
      }
    }
    else
    {
      v30 = 715LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v30,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    goto LABEL_42;
  }
  v24 = 711LL;
LABEL_32:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v24,
    (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v23);
LABEL_44:
  v20 = v37;
  if ( !v37 )
    goto LABEL_47;
  v37 = 0LL;
LABEL_46:
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_47:
  v31 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v31 + 16LL))(v31);
  }
LABEL_49:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
