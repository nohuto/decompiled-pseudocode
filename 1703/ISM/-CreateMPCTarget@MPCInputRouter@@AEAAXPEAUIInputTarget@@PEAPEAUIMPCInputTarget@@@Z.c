/*
 * XREFs of ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800847A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x180084C7C (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180084FC4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KI@Z @ 0x18002B84C (-GetWindowIdFromViewId@ViewHelper@@SA_KI@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@IPEA_N@Z @ 0x18002BBF8 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@IPEA_N@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_KPEAUIMPCInputTarget@@@Z @ 0x180083D14 (-MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_KPEAUIMPCInputTarget@@@Z.c)
 *     ?Create@MPCHFXInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085BF4 (-Create@MPCHFXInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_KPEAPEAUIMPCInputTarget@.c)
 *     ?Create@MPCExclusiveInputTarget@@SAJPEAUIInputTarget@@I_KPEAPEAUIMPCInputTarget@@@Z @ 0x180087354 (-Create@MPCExclusiveInputTarget@@SAJPEAUIInputTarget@@I_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::CreateMPCTarget(
        MPCInputRouter *this,
        struct IInputTarget *a2,
        struct IMPCInputTarget **a3,
        const char *a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int FrameworkViewTypeFromViewId; // edi
  unsigned __int64 WindowIdFromViewId; // r8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v20; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  v18[1] = -2LL;
  *a3 = 0LL;
  if ( !*((_BYTE *)this + 1044) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      a4);
    __debugbreak();
  }
  v18[2] = (unsigned __int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v22 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x26F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v21 = 0;
  v20 = 0;
  v18[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 56LL))(v22, &v21);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 48LL))(v22, &v20);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  if ( v21 )
  {
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v21, 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v22 + 64LL))(v22, v18);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x285,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    WindowIdFromViewId = v18[0];
  }
  else
  {
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v20, 0LL);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v20);
    v18[0] = WindowIdFromViewId;
  }
  if ( FrameworkViewTypeFromViewId == 1 )
  {
    v13 = MPCExclusiveInputTarget::Create(a2, v20, WindowIdFromViewId, a3);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x290,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  else
  {
    v14 = MPCHFXInputTarget::Create(a2, (MPCInputRouter *)((char *)this + 992), WindowIdFromViewId, a3);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x29E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v15 && *v15 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_CreateMPCTarget_(v16, a2, v20, FrameworkViewTypeFromViewId, v18[0], *a3);
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
