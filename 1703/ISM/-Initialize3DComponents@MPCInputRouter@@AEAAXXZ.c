/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180084FC4
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180085570 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x180013E50 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 *v7; // rsi
  __int64 v8; // rcx
  struct IInputTarget *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IInputTarget *v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1044) )
  {
    *((_BYTE *)this + 1044) = 1;
    v4 = *((_QWORD *)this + 123);
    if ( !v4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x236,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)retaddr);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(__int64, char *, __int64, wil::details::in1diag3 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           (char *)this + 992,
           a3,
           retaddr);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v13 = 0LL;
    v6 = DWMInputRouter::CreateAndRegisterTarget(
           this,
           *((_DWORD *)this + 248),
           *((_DWORD *)this + 249),
           0,
           0,
           0LL,
           &v13);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x244,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = (__int64 *)((char *)this + 976);
    v8 = *((_QWORD *)this + 122);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v13;
    MPCInputRouter::CreateMPCTarget(this, v13, (struct IMPCInputTarget **)this + 122);
    v10 = *v7;
    if ( *((_QWORD *)this + 121) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = *((_QWORD *)this + 121);
      *((_QWORD *)this + 121) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v9 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
