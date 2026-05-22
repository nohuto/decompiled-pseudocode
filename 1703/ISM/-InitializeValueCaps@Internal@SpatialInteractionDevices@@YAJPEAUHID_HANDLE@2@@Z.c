/*
 * XREFs of ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x180065BBC
 * Callers:
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     HidStatus @ 0x1800656A8 (HidStatus.c)
 *     GetConfigurationFlag @ 0x180065810 (GetConfigurationFlag.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::InitializeValueCaps(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  void *v3; // rax
  void *v4; // rcx
  char v5; // di
  __int64 v6; // rdx
  void *v8; // rax
  void *v9; // rcx
  void *v10; // rax
  void *v11; // rcx
  struct _HIDP_PREPARSED_DATA *v12; // r9
  NTSTATUS v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  void *v17; // rax
  void *v18; // rcx
  struct _HIDP_VALUE_CAPS *v19; // rdx
  NTSTATUS v20; // eax
  struct _HIDP_PREPARSED_DATA *v21; // r9
  NTSTATUS ButtonCaps; // eax
  unsigned __int64 v23; // rax
  void *v24; // rax
  void *v25; // rcx
  struct _HIDP_BUTTON_CAPS *v26; // rdx
  NTSTATUS v27; // eax
  struct _HIDP_PREPARSED_DATA *v28; // r9
  NTSTATUS ValueCaps; // eax
  unsigned __int64 v30; // rax
  void *v31; // rax
  void *v32; // rcx
  struct _HIDP_VALUE_CAPS *v33; // rdx
  NTSTATUS v34; // eax
  struct _HIDP_PREPARSED_DATA *v35; // r9
  NTSTATUS v36; // eax
  unsigned __int64 v37; // rax
  void *v38; // rax
  void *v39; // rcx
  struct _HIDP_VALUE_CAPS *v40; // rdx
  NTSTATUS v41; // eax
  unsigned int i; // r8d
  __int64 v43; // rdx
  char v44; // si
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  USHORT ValueCapsLength; // [rsp+50h] [rbp+30h] BYREF

  v3 = operator new[](*((unsigned __int16 *)this + 56) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (void *)*((_QWORD *)this + 29);
  v5 = 0;
  *((_QWORD *)this + 29) = v3;
  if ( v4 )
    operator delete(v4);
  if ( !*((_QWORD *)this + 29) )
  {
    v6 = 125LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v8 = operator new[](*((unsigned __int16 *)this + 54) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = v8;
  if ( v9 )
    operator delete(v9);
  if ( !*((_QWORD *)this + 30) )
  {
    v6 = 128LL;
    goto LABEL_5;
  }
  v10 = operator new[](*((unsigned __int16 *)this + 55) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = v10;
  if ( v11 )
    operator delete(v11);
  if ( !*((_QWORD *)this + 31) )
  {
    v6 = 131LL;
    goto LABEL_5;
  }
  if ( !*((_WORD *)this + 54) )
    goto LABEL_43;
  if ( !*((_WORD *)this + 76) )
  {
LABEL_29:
    if ( *((_WORD *)this + 54) && *((_WORD *)this + 75) )
    {
      v21 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
      ValueCapsLength = 0;
      ButtonCaps = HidP_GetButtonCaps(HidP_Input, 0LL, &ValueCapsLength, v21);
      if ( ButtonCaps != -1072627705 )
      {
        v14 = HidStatus(ButtonCaps);
        if ( v14 < 0 )
        {
          v15 = 156LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        return 0LL;
      }
      v23 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v23 = -1LL;
      v24 = operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
      v25 = (void *)*((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = v24;
      if ( v25 )
        operator delete(v25);
      v26 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 23);
      if ( !v26 )
      {
        v6 = 160LL;
        goto LABEL_5;
      }
      v27 = HidP_GetButtonCaps(HidP_Input, v26, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
      v14 = HidStatus(v27);
      if ( v14 < 0 )
      {
        v15 = 162LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v15,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v14);
      }
      *((_DWORD *)this + 48) = ValueCapsLength;
    }
LABEL_43:
    if ( *((_WORD *)this + 56) && *((_WORD *)this + 82) )
    {
      v28 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
      ValueCapsLength = 0;
      ValueCaps = HidP_GetValueCaps(HidP_Feature, 0LL, &ValueCapsLength, v28);
      if ( ValueCaps != -1072627705 )
      {
        v14 = HidStatus(ValueCaps);
        if ( v14 < 0 )
        {
          v15 = 174LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        return 0LL;
      }
      v30 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v30 = -1LL;
      v31 = operator new[](v30, (const struct std::nothrow_t *)&std::nothrow);
      v32 = (void *)*((_QWORD *)this + 27);
      *((_QWORD *)this + 27) = v31;
      if ( v32 )
        operator delete(v32);
      v33 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 27);
      if ( !v33 )
      {
        v6 = 178LL;
        goto LABEL_5;
      }
      v34 = HidP_GetValueCaps(HidP_Feature, v33, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
      v14 = HidStatus(v34);
      if ( v14 < 0 )
      {
        v15 = 180LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v15,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v14);
      }
      *((_DWORD *)this + 56) = ValueCapsLength;
    }
    if ( *((_WORD *)this + 55) && *((_WORD *)this + 79) )
    {
      v35 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
      ValueCapsLength = 0;
      v36 = HidP_GetValueCaps(HidP_Output, 0LL, &ValueCapsLength, v35);
      if ( v36 != -1072627705 )
      {
        v14 = HidStatus(v36);
        if ( v14 < 0 )
        {
          v15 = 191LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        return 0LL;
      }
      v37 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v37 = -1LL;
      v38 = operator new[](v37, (const struct std::nothrow_t *)&std::nothrow);
      v39 = (void *)*((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = v38;
      if ( v39 )
        operator delete(v39);
      v40 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 25);
      if ( !v40 )
      {
        v6 = 195LL;
        goto LABEL_5;
      }
      v41 = HidP_GetValueCaps(HidP_Output, v40, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
      v14 = HidStatus(v41);
      if ( v14 < 0 )
      {
        v15 = 197LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v15,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v14);
      }
      *((_DWORD *)this + 52) = ValueCapsLength;
    }
    if ( *((_WORD *)this + 44) == 1032
      && *((_WORD *)this + 45) == 0xB0D7
      && *((_WORD *)this + 46) == 1
      && *((_WORD *)this + 52) == 1
      && *((_WORD *)this + 53) == 17 )
    {
      for ( i = 0; i < *((_DWORD *)this + 44); ++i )
      {
        v43 = *((_QWORD *)this + 21);
        if ( *(_WORD *)(v43 + 72LL * i + 10) == 17
          && *(_WORD *)(v43 + 72LL * i + 8) == 19
          && *(_WORD *)(v43 + 72LL * i) == 1
          && (unsigned __int16)(*(_WORD *)(v43 + 72LL * i + 56) - 48) <= 1u )
        {
          *(_DWORD *)(v43 + 72LL * i + 32) = 0;
        }
      }
    }
    if ( *((_WORD *)this + 44) != 11036
      || *((_WORD *)this + 45) != 3
      || *((_WORD *)this + 46) != 256
      || *((_WORD *)this + 52) != 1
      || (v44 = 1, *((_WORD *)this + 53) != 0xFF0A) )
    {
      v44 = 0;
    }
    *((_BYTE *)this + 259) = GetConfigurationFlag(L"InverseThumbstickX");
    if ( v44 || GetConfigurationFlag(L"InverseThumbstickY") )
      v5 = 1;
    *((_BYTE *)this + 260) = v5;
    *((_BYTE *)this + 257) = GetConfigurationFlag(L"InverseTouchpadX");
    *((_BYTE *)this + 258) = GetConfigurationFlag(L"InverseTouchpadY");
    return 0LL;
  }
  v12 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
  ValueCapsLength = 0;
  v13 = HidP_GetValueCaps(HidP_Input, 0LL, &ValueCapsLength, v12);
  if ( v13 == -1072627705 )
  {
    v16 = 72LL * ValueCapsLength;
    if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
      v16 = -1LL;
    v17 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
    v18 = (void *)*((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = v17;
    if ( v18 )
      operator delete(v18);
    v19 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 21);
    if ( !v19 )
    {
      v6 = 143LL;
      goto LABEL_5;
    }
    v20 = HidP_GetValueCaps(HidP_Input, v19, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
    v14 = HidStatus(v20);
    if ( v14 < 0 )
    {
      v15 = 145LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v15,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
               (const char *)(unsigned int)v14);
    }
    *((_DWORD *)this + 44) = ValueCapsLength;
    goto LABEL_29;
  }
  v14 = HidStatus(v13);
  if ( v14 < 0 )
  {
    v15 = 139LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v15,
             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
             (const char *)(unsigned int)v14);
  }
  return 0LL;
}
