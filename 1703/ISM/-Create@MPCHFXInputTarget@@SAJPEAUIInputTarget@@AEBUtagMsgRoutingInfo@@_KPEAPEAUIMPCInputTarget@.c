/*
 * XREFs of ?Create@MPCHFXInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085BF4
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCHFXInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K@Z @ 0x1800859C4 (--0MPCHFXInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHFXInputTarget::Create(
        struct IInputTarget *a1,
        const struct tagMsgRoutingInfo *a2,
        __int64 a3,
        struct IMPCInputTarget **a4)
{
  MPCHFXInputTarget *v8; // rax
  const char *v9; // r9
  MPCHFXInputTarget *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      0LL);
    __debugbreak();
  }
  v8 = (MPCHFXInputTarget *)malloc(0x70uLL);
  v10 = v8;
  if ( v8 )
    memset(v8, 0, 0x70uLL);
  if ( v10 )
    v10 = MPCHFXInputTarget::MPCHFXInputTarget(v10, a1, a2, a3);
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      v9);
    __debugbreak();
  }
  v11 = (_QWORD *)((char *)v10 + 40);
  v12 = *((_QWORD *)v10 + 5);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = CoreUICreate((char *)v10 + 40);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v11 + 96LL))(
          *v11,
          (__int64)v10 + 56,
          (__int64)v10 + 100);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  *a4 = v10;
  return 0LL;
}
