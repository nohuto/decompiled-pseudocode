/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180085428
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x180084C7C (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@IPEA_N@Z @ 0x18002BBF8 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall MPCInputRouter::IsTargetHolographic(MPCInputRouter *this, struct IInputTarget *a2)
{
  int v2; // eax
  int v3; // eax
  bool v4; // bl
  char v5; // al
  int FrameworkViewTypeFromViewId; // ecx
  int v7; // eax
  HWND Ancestor; // rax
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-20h] BYREF
  MPCInputRouter **v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  MPCInputRouter *v15; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+28h] BYREF
  HWND hwnd; // [rsp+78h] [rbp+30h] BYREF

  v15 = this;
  v17 = 0LL;
  v2 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v17);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2AC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 48LL))(v17, &v16);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2AF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = 0;
  v5 = 0;
  LOBYTE(v15) = 0;
  if ( v16
    && (FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v16, &v15), (v5 = (char)v15) != 0)
    && !FrameworkViewTypeFromViewId )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 64LL))(v17, &hwnd);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    LODWORD(v15) = 0;
    v11 = 23;
    v12 = &v15;
    v13 = 4;
    Ancestor = GetAncestor(hwnd, 2u);
    if ( (unsigned int)GetWindowCompositionAttribute(Ancestor, &v11) )
      v4 = (_DWORD)v15 != 0;
  }
  else
  {
    v4 = v5;
  }
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
