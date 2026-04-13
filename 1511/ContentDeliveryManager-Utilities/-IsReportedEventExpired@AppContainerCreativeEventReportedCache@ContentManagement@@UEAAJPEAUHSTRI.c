/*
 * XREFs of ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180002640 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z @ 0x1800105CC (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z.c)
 *     ?GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x180010654 (-GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x18001082C (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180010A20 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180010FAC (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018ABC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::IsReportedEventExpired(
        __int64 a1,
        struct Windows::Storage::IApplicationDataContainer **a2,
        unsigned int a3,
        bool *a4)
{
  int SettingsContainer; // eax
  unsigned int v8; // esi
  __int64 v9; // rbx
  int HasKey; // eax
  unsigned __int8 *v11; // r9
  __int64 v12; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rdx
  HSTRING *v14; // r9
  HRESULT v15; // eax
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r14
  ContentManagement *v20; // rsi
  int CreativeEventString; // eax
  unsigned __int8 *v22; // r9
  struct Windows::Foundation::Collections::IPropertySet *v23; // r14
  __int64 v24; // rdx
  unsigned __int64 *v25; // r9
  __int64 v26; // r14
  unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *ImpressionEventExpirationTime; // rdi
  __int64 v29; // rsi
  ContentManagement *v30; // r14
  unsigned __int16 v32; // [rsp+28h] [rbp-49h] BYREF
  ContentManagement *v33; // [rsp+30h] [rbp-41h] BYREF
  INT32 result[2]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-31h] BYREF
  __int64 v36; // [rsp+48h] [rbp-29h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int16 *v38[2]; // [rsp+58h] [rbp-19h] BYREF
  LPVOID pv[4]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v38[1] = (unsigned __int16 *)-2LL;
  *a4 = 0;
  v36 = 0LL;
  SettingsContainer = ContentManagement::GetSettingsContainer((ContentManagement *)&v36, a2);
  v8 = SettingsContainer;
  v9 = v36;
  if ( SettingsContainer < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      733LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)SettingsContainer);
    goto LABEL_41;
  }
  v33 = 0LL;
  HasKey = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v36 + 64LL))(v36, &v33);
  v8 = HasKey;
  if ( HasKey < 0 )
  {
    v12 = 736LL;
LABEL_7:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v12,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)HasKey);
    goto LABEL_39;
  }
  HasKey = ContentManagement::HasKey(
             (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v33,
             (struct Windows::Foundation::Collections::IPropertySet *)L"LastCreativeId",
             (unsigned __int16 *)((char *)&v32 + 1),
             v11);
  v8 = HasKey;
  if ( HasKey < 0 )
  {
    v12 = 739LL;
    goto LABEL_7;
  }
  if ( HIBYTE(v32) )
  {
    string1 = 0LL;
    WindowsDeleteString(0LL);
    string1 = 0LL;
    ContentManagement::GetStringFromSetting(
      (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v33,
      v13,
      (const unsigned __int16 *)&string1,
      v14);
    result[0] = 0;
    v15 = WindowsCompareStringOrdinal(string1, (HSTRING)a2, result);
    if ( v15 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    }
    else
    {
      if ( !result[0] )
      {
        *(_QWORD *)result = 0LL;
        v16 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180031028);
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, INT32 *))(*(_QWORD *)v9 + 80LL))(
                v9,
                *v16,
                0LL,
                result);
        v8 = v17;
        if ( v17 < 0 )
        {
          v18 = 748LL;
LABEL_17:
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            v18,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v17);
LABEL_28:
          v26 = *(_QWORD *)result;
          if ( *(_QWORD *)result )
          {
            *(_QWORD *)result = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          WindowsDeleteString(string1);
          goto LABEL_39;
        }
        v19 = *(_QWORD *)result;
        v20 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v17 = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v19 + 64LL))(v19, &v33);
        v8 = v17;
        if ( v17 < 0 )
        {
          v18 = 749LL;
          goto LABEL_17;
        }
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        pv[2] = (LPVOID)-1LL;
        CreativeEventString = ContentManagement::GetCreativeEventString(a3, pv);
        v8 = CreativeEventString;
        v23 = (struct Windows::Foundation::Collections::IPropertySet *)pv[0];
        if ( CreativeEventString < 0 )
        {
          v24 = 753LL;
          goto LABEL_26;
        }
        CreativeEventString = ContentManagement::HasKey(
                                (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v33,
                                (struct Windows::Foundation::Collections::IPropertySet *)pv[0],
                                &v32,
                                v22);
        v8 = CreativeEventString;
        if ( CreativeEventString < 0 )
        {
          v24 = 754LL;
          goto LABEL_26;
        }
        if ( (_BYTE)v32 && !a3 )
        {
          CreativeEventString = ContentManagement::GetUint64FromSetting(
                                  (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v33,
                                  v23,
                                  (const unsigned __int16 *)v38,
                                  v25);
          v8 = CreativeEventString;
          if ( CreativeEventString < 0 )
          {
            v24 = 758LL;
LABEL_26:
            wil::details::in1diag3::Return_HrPreRelease(
              retaddr,
              v24,
              (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)CreativeEventString);
            if ( v23 )
              CoTaskMemFree(v23);
            goto LABEL_28;
          }
          StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
          ImpressionEventExpirationTime = `anonymous namespace'::GetImpressionEventExpirationTime(
                                            0LL,
                                            StringRawBuffer,
                                            v38[0]);
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          *a4 = *(_QWORD *)&SystemTimeAsFileTime >= (unsigned __int64)ImpressionEventExpirationTime;
        }
        if ( v23 )
          CoTaskMemFree(v23);
        v29 = *(_QWORD *)result;
        if ( *(_QWORD *)result )
        {
          *(_QWORD *)result = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      WindowsDeleteString(string1);
    }
  }
  v8 = 0;
LABEL_39:
  v30 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_41:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
