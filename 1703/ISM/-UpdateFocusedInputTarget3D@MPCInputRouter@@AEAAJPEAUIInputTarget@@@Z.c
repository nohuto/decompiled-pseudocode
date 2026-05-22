/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x180084C7C
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800846E0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180015A40 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z @ 0x180083C08 (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180085428 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(MPCInputRouter *this, struct IInputTarget *a2)
{
  struct IMPCInputTarget **v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  struct IInputTarget *v7; // rcx
  char v8; // r14
  struct IMPCInputTarget *v9; // rcx
  const char *v10; // r9
  int v11; // eax
  int updated; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  struct IInputTarget *v19; // rcx
  struct IMPCInputTarget *v20; // rbx
  _DWORD *v21; // rcx
  ISMTracing *v22; // rcx
  int v23; // eax
  struct IInputTarget *v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  int v28; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v26[1] = -2LL;
  if ( a2 && MPCInputRouter::IsTargetHolographic(this, a2) )
  {
    v4 = (struct IMPCInputTarget **)((char *)this + 968);
    v5 = *((_QWORD *)this + 121);
    if ( v5 )
    {
      v25 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)v5 + 40LL))(v5, &v25);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1FC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      v7 = v25;
      v8 = a2 == v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    else
    {
      v8 = 0;
    }
    if ( !v8 )
    {
      v9 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      MPCInputRouter::CreateMPCTarget(this, a2, (struct IMPCInputTarget **)this + 121);
      if ( !*v4 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x20D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          v10);
        __debugbreak();
      }
      v25 = 0LL;
      v11 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, struct IInputTarget **))*v4)(
              *v4,
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              &v25);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x211,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      updated = DWMInputRouter::UpdateFocusedInputTarget(this, v25);
      if ( updated < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x214,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)updated);
        __debugbreak();
      }
      v27 = 0LL;
      v28 = 0;
      v26[0] = 0LL;
      v13 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, _QWORD *))*v4)(
              *v4,
              &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
              v26);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x219,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v26[0] + 32LL))(v26[0], &v27);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x21B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v26[0] + 40LL))(v26[0], (char *)&v27 + 4);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x21C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v26[0] + 48LL))(v26[0], &v28);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x21D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, &v27, 12LL, 0LL) | 0x10000000;
      if ( v17 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x221,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v17);
      v18 = v26[0];
      if ( v26[0] )
      {
        v26[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    *((_BYTE *)this + 1032) = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)*v4 + 56LL))(*v4) == 1;
    v20 = *v4;
    v21 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v21 && *v21 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(v22, v8, v20, *((_BYTE *)this + 1032));
    }
  }
  else
  {
    v23 = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v23);
  }
  return 0LL;
}
