/*
 * XREFs of ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x18001A288
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18000A9AC (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800084B0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::RegionHelpers::GetCurrentRegionCode(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v8; // r9
  PCWSTR v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v13; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v14[1] = -2LL;
  v12 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Globalization.GeographicRegion", 0x26u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v12 = 0LL;
  v3 = RoActivateInstance(string, v14);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v4 = v14[0];
      v12 = v14[0];
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v14[0])(
             v14[0],
             &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
             &v12);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
      v4 = v12;
    }
    if ( v3 >= 0 )
    {
      v13 = 0LL;
      WindowsDeleteString(0LL);
      v13 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 56LL))(v4, &v13);
      v3 = v5;
      if ( v5 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(v13, 0LL);
        if ( CompareStringOrdinal(StringRawBuffer, -1, L"ZZ", -1, 0) == 2 )
        {
          v3 = -2147467259;
          v8 = 2147500037LL;
          v6 = 25LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v6,
            (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
            (const char *)v8);
LABEL_18:
          WindowsDeleteString(v13);
          v13 = 0LL;
          goto LABEL_20;
        }
        v9 = WindowsGetStringRawBuffer(v13, 0LL);
        v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               a1,
               (__int64)v9,
               0xFFFFFFFFFFFFFFFFuLL);
        v3 = v5;
        if ( v5 >= 0 )
        {
          v3 = 0;
          goto LABEL_18;
        }
        v6 = 32LL;
      }
      else
      {
        v6 = 21LL;
      }
      v8 = (unsigned int)v5;
      goto LABEL_16;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
    (const char *)(unsigned int)v3);
LABEL_20:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v3;
}
