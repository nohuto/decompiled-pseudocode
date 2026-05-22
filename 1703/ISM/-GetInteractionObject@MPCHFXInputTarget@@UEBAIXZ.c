/*
 * XREFs of ?GetInteractionObject@MPCHFXInputTarget@@UEBAIXZ @ 0x1800867F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHFXInputTarget::GetInteractionObject(MPCHFXInputTarget *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x195,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v6 = 0LL;
  v1 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v6);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x19E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpchfxinputtarget.cpp",
      (const char *)(unsigned int)v1);
    __debugbreak();
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6);
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
