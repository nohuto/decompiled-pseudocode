/*
 * XREFs of ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z @ 0x1800643B4 (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003234 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     HidStatus @ 0x1800656A8 (HidStatus.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x180065BBC (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x180066108 (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x180066724 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     wil::ScopeExit__lambda_5c8e1919e6c20c27f141600a6e95e8df___ @ 0x180066848 (wil--ScopeExit__lambda_5c8e1919e6c20c27f141600a6e95e8df___.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::Internal::HIDOpen(
        WCHAR *this,
        wchar_t *a2,
        struct SpatialInteractionDevices::HID_HANDLE **a3)
{
  signed int v5; // ebx
  SpatialInteractionDevices::Internal *v6; // rax
  SpatialInteractionDevices::Internal *v7; // rbx
  __int64 v8; // rdx
  HANDLE FileW; // rax
  const char *v10; // r9
  HANDLE v11; // rdi
  signed int LastError; // eax
  struct SpatialInteractionDevices::HID_HANDLE *v13; // rdx
  SpatialInteractionDevices::Internal *v14; // rbx
  HANDLE v15; // rcx
  signed int v16; // eax
  unsigned __int64 v17; // rcx
  signed int v18; // eax
  signed int v19; // eax
  NTSTATUS Caps; // eax
  int v21; // eax
  struct SpatialInteractionDevices::HID_HANDLE *v22; // rdx
  int v23; // eax
  char v24; // al
  SpatialInteractionDevices::Internal **v26; // [rsp+48h] [rbp-18h] BYREF
  char v27; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  SpatialInteractionDevices::Internal *v29; // [rsp+98h] [rbp+38h] BYREF
  SpatialInteractionDevices::Internal **v30; // [rsp+A0h] [rbp+40h] BYREF

  if ( !a2 )
  {
    v5 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)0x80004003LL);
    return (unsigned int)v5;
  }
  *(_QWORD *)a2 = 0LL;
  v6 = (SpatialInteractionDevices::Internal *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v29 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x108uLL);
    *(_QWORD *)v7 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::`vftable';
    *((_QWORD *)v7 + 1) = -1LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 7LL;
    *((_WORD *)v7 + 8) = 0;
    *((_BYTE *)v7 + 80) = 0;
    *((_QWORD *)v7 + 12) = 0LL;
    *((_WORD *)v7 + 52) = 0;
    memset((char *)v7 + 106, 0, 0x3EuLL);
    *((_QWORD *)v7 + 21) = 0LL;
    *((_DWORD *)v7 + 44) = 0;
    *((_QWORD *)v7 + 23) = 0LL;
    *((_DWORD *)v7 + 48) = 0;
    *((_QWORD *)v7 + 25) = 0LL;
    *((_DWORD *)v7 + 52) = 0;
    *((_QWORD *)v7 + 27) = 0LL;
    *((_DWORD *)v7 + 56) = 0;
    *((_QWORD *)v7 + 29) = 0LL;
    *((_QWORD *)v7 + 30) = 0LL;
    *((_QWORD *)v7 + 31) = 0LL;
    *((_DWORD *)v7 + 64) = 0;
    *((_BYTE *)v7 + 260) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v29 = v7;
  v30 = &v29;
  wil::ScopeExit__lambda_5c8e1919e6c20c27f141600a6e95e8df___(&v26, &v30);
  if ( !v7 )
  {
    v5 = -2147024882;
    v8 = 86LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)(unsigned int)v5);
LABEL_34:
    v24 = v27;
    goto LABEL_36;
  }
  FileW = CreateFileW(this, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
  v11 = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x61,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                  v10);
LABEL_31:
    v5 = LastError;
    goto LABEL_34;
  }
  v14 = v29;
  v15 = (HANDLE)*((_QWORD *)v29 + 1);
  if ( FileW != v15 )
  {
    if ( v15 != (HANDLE)-1LL )
    {
      if ( !CloseHandle(v15) )
      {
        v16 = GetLastError();
        v17 = (unsigned __int16)v16 | 0x80070000;
        if ( v16 <= 0 )
          v17 = (unsigned int)v16;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v17);
        __debugbreak();
      }
      *((_QWORD *)v14 + 1) = -1LL;
    }
    *((_QWORD *)v14 + 1) = v11;
    v14 = v29;
  }
  std::wstring::assign((char *)v14 + 16, this);
  memset((char *)v29 + 48, 0, 0x20uLL);
  *((_QWORD *)v29 + 9) = CreateEventW(0LL, 0, 0, 0LL);
  if ( !HidD_GetAttributes(*((HANDLE *)v29 + 1), (PHIDD_ATTRIBUTES)v29 + 7) )
  {
    v18 = GetLastError();
    v5 = (unsigned __int16)v18 | 0x80070000;
    if ( v18 <= 0 )
      v5 = v18;
    if ( v5 >= 0 )
      goto LABEL_34;
    v8 = 106LL;
    goto LABEL_28;
  }
  if ( !HidD_GetPreparsedData(*((HANDLE *)v29 + 1), (PHIDP_PREPARSED_DATA *)v29 + 12) )
  {
    v19 = GetLastError();
    v5 = (unsigned __int16)v19 | 0x80070000;
    if ( v19 <= 0 )
      v5 = v19;
    if ( v5 >= 0 )
      goto LABEL_34;
    v8 = 108LL;
    goto LABEL_28;
  }
  Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)v29 + 12), (PHIDP_CAPS)((char *)v29 + 104));
  v21 = HidStatus(Caps);
  if ( v21 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x6E,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                  (const char *)(unsigned int)v21);
    goto LABEL_31;
  }
  v23 = SpatialInteractionDevices::Internal::InitializeValueCaps(v29, v22);
  v5 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x70,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_34;
  }
  *(_QWORD *)a2 = v29;
  v24 = 0;
  v5 = 0;
LABEL_36:
  if ( v24 )
    SpatialInteractionDevices::Internal::HIDClose(*v26, v13);
  return (unsigned int)v5;
}
