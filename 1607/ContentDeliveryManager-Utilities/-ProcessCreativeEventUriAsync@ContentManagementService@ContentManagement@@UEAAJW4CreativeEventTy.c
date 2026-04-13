/*
 * XREFs of ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001F5F0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x18003A1D4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180058BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180058DE8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventUriAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const unsigned __int16 *StringRawBuffer; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rax
  HSTRING v17; // rsi
  HSTRING v18; // rdi
  HSTRING v19; // rbx
  HSTRING *v20; // rax
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v27[40]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v28[6]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v23[1] = -2LL;
  `eh vector constructor iterator'(
    v28,
    0x18uLL,
    0x11uLL,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
          (CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *)v28,
          StringRawBuffer);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v29;
    v23[0] = v29;
    v15 = &`CreativeFramework::LaunchCreativeHelpers::MapCreativeEventTypeToUriParamType'::`2'::c_mapCreativeEventTypeToUriParamType;
    while ( *v15 != a2 )
    {
      v15 += 2;
      if ( v15 == (_DWORD *)&std::nothrow )
        goto LABEL_9;
    }
    if ( v15[1] != -1 )
    {
      v16 = v28[3 * v15[1]];
      goto LABEL_10;
    }
LABEL_9:
    v16 = 0LL;
LABEL_10:
    v22 = v16;
    if ( v16 )
      v17 = *(HSTRING *)Windows::Internal::StringReference::StringReference(v24, &v22);
    else
      v17 = 0LL;
    if ( v14 )
      v18 = *(HSTRING *)Windows::Internal::StringReference::StringReference(v25, v23);
    else
      v18 = 0LL;
    v23[0] = v28[3];
    v22 = v28[0];
    v19 = *(HSTRING *)Windows::Internal::StringReference::StringReference(v26, v23);
    v20 = (HSTRING *)Windows::Internal::StringReference::StringReference(v27, &v22);
    v11 = ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
            a1,
            a2,
            *v20,
            v19,
            v18,
            v17,
            a4,
            a5,
            a6);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v12 = 0;
      goto LABEL_20;
    }
    v13 = 399LL;
  }
  else
  {
    v13 = 388LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v11);
LABEL_20:
  `eh vector destructor iterator'(
    v28,
    0x18uLL,
    0x11uLL,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>);
  return v12;
}
