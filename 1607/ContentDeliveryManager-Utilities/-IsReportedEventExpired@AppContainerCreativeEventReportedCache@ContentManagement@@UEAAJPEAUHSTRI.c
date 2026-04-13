/*
 * XREFs of ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800227B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x1800214B8 (-GetUint64FromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x180021660 (-GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEB.c)
 *     ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180021814 (-HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z.c)
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180021D10 (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::IsReportedEventExpired(
        __int64 a1,
        struct Windows::Storage::IApplicationDataContainer **a2,
        int a3,
        HSTRING a4,
        bool *a5)
{
  int SettingsContainer; // eax
  unsigned int v8; // edi
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
  __int64 v19; // rdi
  ContentManagement *v20; // rcx
  int CreativeEventString; // eax
  unsigned __int8 *v22; // r9
  struct Windows::Foundation::Collections::IPropertySet *v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 *v25; // r9
  __int64 v26; // rcx
  ContentManagement *v27; // rcx
  WCHAR *StringRawBuffer; // rax
  unsigned __int64 ImpressionEventExpirationTime; // rdi
  __int64 v31; // rcx
  ContentManagement *v32; // rcx
  unsigned __int16 v33; // [rsp+30h] [rbp-51h] BYREF
  ContentManagement *v34; // [rsp+38h] [rbp-49h] BYREF
  INT32 result[2]; // [rsp+40h] [rbp-41h] BYREF
  HSTRING string1; // [rsp+48h] [rbp-39h] BYREF
  __int64 v37; // [rsp+50h] [rbp-31h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int16 v39[4]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v40; // [rsp+68h] [rbp-19h]
  LPVOID pv[4]; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v40 = -2LL;
  *a5 = 0;
  if ( a3 )
    return 0LL;
  v37 = 0LL;
  SettingsContainer = ContentManagement::GetSettingsContainer((ContentManagement *)&v37, a2);
  v8 = SettingsContainer;
  v9 = v37;
  if ( SettingsContainer >= 0 )
  {
    v34 = 0LL;
    HasKey = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v37 + 64LL))(v37, &v34);
    v8 = HasKey;
    if ( HasKey < 0 )
    {
      v12 = 782LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)HasKey);
LABEL_31:
      v27 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v27 + 16LL))(v27);
      }
      goto LABEL_33;
    }
    HasKey = ContentManagement::HasKey(
               (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v34,
               (struct Windows::Foundation::Collections::IPropertySet *)L"LastCreativeId",
               &v33,
               v11);
    v8 = HasKey;
    if ( HasKey < 0 )
    {
      v12 = 785LL;
      goto LABEL_8;
    }
    if ( (_BYTE)v33 )
    {
      string1 = 0LL;
      WindowsDeleteString(0LL);
      string1 = 0LL;
      ContentManagement::GetStringFromSetting(
        (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v34,
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
          v16 = (_QWORD *)Windows::Internal::StringReference::StringReference(pv, &off_180068ED0);
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, INT32 *))(*(_QWORD *)v9 + 80LL))(
                  v9,
                  *v16,
                  0LL,
                  result);
          v8 = v17;
          if ( v17 < 0 )
          {
            v18 = 794LL;
LABEL_18:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)v17);
LABEL_28:
            v26 = *(_QWORD *)result;
            if ( *(_QWORD *)result )
            {
              *(_QWORD *)result = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            }
            WindowsDeleteString(string1);
            string1 = 0LL;
            goto LABEL_31;
          }
          v19 = *(_QWORD *)result;
          v20 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v17 = (*(__int64 (__fastcall **)(__int64, ContentManagement **))(*(_QWORD *)v19 + 64LL))(v19, &v34);
          v8 = v17;
          if ( v17 < 0 )
          {
            v18 = 795LL;
            goto LABEL_18;
          }
          pv[0] = 0LL;
          pv[1] = (LPVOID)-1LL;
          pv[2] = (LPVOID)-1LL;
          CreativeEventString = ContentManagement::GetCreativeEventString(0, a4, pv);
          v8 = CreativeEventString;
          v23 = (struct Windows::Foundation::Collections::IPropertySet *)pv[0];
          if ( CreativeEventString < 0 )
          {
            v24 = 799LL;
            goto LABEL_26;
          }
          CreativeEventString = ContentManagement::HasKey(
                                  (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v34,
                                  (struct Windows::Foundation::Collections::IPropertySet *)pv[0],
                                  (unsigned __int16 *)((char *)&v33 + 1),
                                  v22);
          v8 = CreativeEventString;
          if ( CreativeEventString < 0 )
          {
            v24 = 800LL;
            goto LABEL_26;
          }
          if ( HIBYTE(v33) )
          {
            CreativeEventString = ContentManagement::GetUint64FromSetting(
                                    (__int64 (__fastcall ***)(ContentManagement *, GUID *, __int64 *))v34,
                                    v23,
                                    v39,
                                    v25);
            v8 = CreativeEventString;
            if ( CreativeEventString < 0 )
            {
              v24 = 804LL;
LABEL_26:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v24,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
                (const char *)(unsigned int)CreativeEventString);
              if ( v23 )
                CoTaskMemFree(v23);
              goto LABEL_28;
            }
            StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
            ImpressionEventExpirationTime = anonymous_namespace_::GetImpressionEventExpirationTime(
                                              0LL,
                                              StringRawBuffer,
                                              *(__int64 *)v39);
            GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
            *a5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32) >= ImpressionEventExpirationTime;
          }
          if ( v23 )
            CoTaskMemFree(v23);
          v31 = *(_QWORD *)result;
          if ( *(_QWORD *)result )
          {
            *(_QWORD *)result = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
        WindowsDeleteString(string1);
      }
    }
    v32 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(ContentManagement *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)SettingsContainer);
LABEL_33:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
