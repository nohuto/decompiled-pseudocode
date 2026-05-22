/*
 * XREFs of ?IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x18001D410
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall DWMFocusedInputTarget::IsSameAsTarget(
        DWMFocusedInputTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3)
{
  int v5; // eax
  char v6; // bl
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v10 + 32LL))(
         v10,
         a2,
         a3);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
