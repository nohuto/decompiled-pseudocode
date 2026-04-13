/*
 * XREFs of ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274
 * Callers:
 *     ?ReportInteraction@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJW4TargetedContentInteraction@23@PEAUHSTRING__@@@Z @ 0x180049AF0 (-ReportInteraction@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJW4TargetedConte.c)
 *     ?ReportInteraction@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJW4TargetedContentInteraction@23@PEAUHSTRING__@@@Z @ 0x18004A7D0 (-ReportInteraction@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJW4TargetedContentInte.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000DDB4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180032BB4 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?Rot13DecodeString@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048CA8 (-Rot13DecodeString@Obfuscation@ContentManagement@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ?ProcessCreativeEvent@TargetedContent@ContentManagement@@YAXW4CreativeEventType@2@PEAUHSTRING__@@11@Z @ 0x180048D24 (-ProcessCreativeEvent@TargetedContent@ContentManagement@@YAXW4CreativeEventType@2@PEAUHSTRING__@.c)
 *     ?TryGetMatchingEventTokenForInteractionName@TargetedContent@ContentManagement@@YA_NPEBGPEAUIJsonObject@Json@Data@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180048F14 (-TryGetMatchingEventTokenForInteractionName@TargetedContent@ContentManagement@@YA_NPEBGPEAUIJson.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800535E0 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ContentManagement::TargetedContent::TryReportInteraction(
        int a1,
        char a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        unsigned __int16 *a6)
{
  PCWSTR StringRawBuffer; // rax
  PCWSTR v11; // rax
  const WCHAR *v12; // rax
  HSTRING *v13; // r9
  const WCHAR *v14; // rax
  const WCHAR *v15; // rax
  HSTRING v16; // rdi
  __int64 v17; // rbx
  __int64 *v18; // rax
  unsigned int v19; // ecx
  __int64 *i; // rax
  unsigned int v21; // eax
  unsigned int v22; // r8d
  const char *v23; // [rsp+20h] [rbp-208h]
  HSTRING v24; // [rsp+20h] [rbp-208h] BYREF
  const WCHAR *v25; // [rsp+28h] [rbp-200h] BYREF
  const WCHAR *v26; // [rsp+30h] [rbp-1F8h] BYREF
  __int128 v27; // [rsp+38h] [rbp-1F0h]
  const WCHAR *v28; // [rsp+48h] [rbp-1E0h]
  __int64 v29; // [rsp+50h] [rbp-1D8h]
  void *v30[3]; // [rsp+58h] [rbp-1D0h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-1B8h]
  void *v32[3]; // [rsp+78h] [rbp-1B0h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-198h]
  _BYTE v34[32]; // [rsp+98h] [rbp-190h] BYREF
  _BYTE v35[40]; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-148h] BYREF
  int v37; // [rsp+E8h] [rbp-140h]
  const wchar_t *v38; // [rsp+F0h] [rbp-138h]
  int v39; // [rsp+F8h] [rbp-130h]
  int v40; // [rsp+FCh] [rbp-12Ch]
  int v41; // [rsp+100h] [rbp-128h]
  const wchar_t *v42; // [rsp+108h] [rbp-120h]
  int v43; // [rsp+110h] [rbp-118h]
  int v44; // [rsp+114h] [rbp-114h]
  int v45; // [rsp+118h] [rbp-110h]
  const wchar_t *v46; // [rsp+120h] [rbp-108h]
  int v47; // [rsp+128h] [rbp-100h]
  int v48; // [rsp+12Ch] [rbp-FCh]
  int v49; // [rsp+130h] [rbp-F8h]
  const wchar_t *v50; // [rsp+138h] [rbp-F0h]
  int v51; // [rsp+140h] [rbp-E8h]
  int v52; // [rsp+144h] [rbp-E4h]
  int v53; // [rsp+148h] [rbp-E0h]
  const wchar_t *v54; // [rsp+150h] [rbp-D8h]
  int v55; // [rsp+158h] [rbp-D0h]
  int v56; // [rsp+15Ch] [rbp-CCh]
  int v57; // [rsp+160h] [rbp-C8h]
  const wchar_t *v58; // [rsp+168h] [rbp-C0h]
  int v59; // [rsp+170h] [rbp-B8h]
  int v60; // [rsp+174h] [rbp-B4h]
  int v61; // [rsp+178h] [rbp-B0h]
  const wchar_t *v62; // [rsp+180h] [rbp-A8h]
  int v63; // [rsp+188h] [rbp-A0h]
  int v64; // [rsp+18Ch] [rbp-9Ch]
  int v65; // [rsp+190h] [rbp-98h]
  const wchar_t *v66; // [rsp+198h] [rbp-90h]
  int v67; // [rsp+1A0h] [rbp-88h]
  int v68; // [rsp+1A4h] [rbp-84h]
  int v69; // [rsp+1A8h] [rbp-80h]
  const wchar_t *v70; // [rsp+1B0h] [rbp-78h]
  int v71; // [rsp+1B8h] [rbp-70h]
  int v72; // [rsp+1BCh] [rbp-6Ch]
  int v73; // [rsp+1C0h] [rbp-68h]
  const wchar_t *v74; // [rsp+1C8h] [rbp-60h]
  int v75; // [rsp+1D0h] [rbp-58h]
  int v76; // [rsp+1D4h] [rbp-54h]
  int v77; // [rsp+1D8h] [rbp-50h]
  const WCHAR *v78; // [rsp+1E0h] [rbp-48h]
  char v79; // [rsp+1E8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v29 = -2LL;
  try
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(
      v32,
      (__int64)StringRawBuffer);
    v11 = WindowsGetStringRawBuffer(a4, 0LL);
    ContentManagement::Obfuscation::Rot13DecodeString(v30, (__int64)v11);
    v36 = 1LL;
    v37 = 0;
    v38 = L"impression";
    v39 = 2;
    v40 = 1;
    v41 = 1;
    v42 = L"click";
    v43 = 3;
    v44 = 3;
    v45 = 3;
    v46 = L"hover";
    v47 = 4;
    v48 = 5;
    v49 = 5;
    v50 = L"like";
    v51 = 5;
    v52 = 6;
    v53 = 6;
    v54 = L"dislike";
    v55 = 7;
    v56 = 13;
    v57 = 13;
    v58 = L"ineligible";
    v59 = 6;
    v60 = 2;
    v61 = 2;
    v62 = L"dismiss";
    v63 = 8;
    v64 = 1;
    v65 = 1;
    v66 = L"accept";
    v67 = 9;
    v68 = 1;
    v69 = 1;
    v70 = L"decline";
    v71 = 10;
    v72 = 18;
    v73 = 18;
    v74 = L"defer";
    v75 = 11;
    v76 = 16;
    v77 = 16;
    v78 = &sourceString;
    for ( i = &v36; ; i += 3 )
    {
      if ( i == (__int64 *)&v79 )
      {
        v21 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::Throw_Hr(retaddr, (void *)0x6B, v22, (const char *)v21, (int)v24);
        return;
      }
      if ( a1 == *(_DWORD *)i )
        break;
    }
    v27 = *(_OWORD *)i;
    v28 = (const WCHAR *)i[2];
    v24 = 0LL;
    if ( a1 == 11 )
      v12 = WindowsGetStringRawBuffer(a3, 0LL);
    else
      v12 = v28;
    if ( ContentManagement::TargetedContent::TryGetMatchingEventTokenForInteractionName(
           v12,
           a6,
           (struct Windows::Data::Json::IJsonObject *)&v24,
           v13) )
    {
      v14 = (const WCHAR *)v32;
      if ( v33 >= 8 )
        v14 = (const WCHAR *)v32[0];
      v25 = v14;
      v15 = (const WCHAR *)v30;
      if ( v31 >= 8 )
        v15 = (const WCHAR *)v30[0];
      v26 = v15;
      v16 = v24;
      v17 = *(_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v34, &v25);
      v18 = (__int64 *)Windows::Internal::StringReference::StringReference((__int64)v35, &v26);
      v19 = DWORD1(v27);
      if ( a2 )
        v19 = DWORD2(v27);
      ContentManagement::TargetedContent::ProcessCreativeEvent(v19, *v18, v17, (__int64)v16);
    }
    if ( v24 )
      WindowsDeleteString(v24);
    if ( v31 >= 8 )
      operator delete(v30[0]);
    v31 = 7LL;
    v30[2] = 0LL;
    LOWORD(v30[0]) = 0;
    if ( v33 >= 8 )
      operator delete(v32[0]);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0xC3,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      "Failure reporting subscribed content interaction",
      v23);
  }
}
