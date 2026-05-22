/*
 * XREFs of ?IsSameAsTarget@GestureTargetingTarget@@UEAA_NIPEAX@Z @ 0x18000F410
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall GestureTargetingTarget::IsSameAsTarget(GestureTargetingTarget *this, unsigned int a2, void *a3)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  char v6; // bl
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( v5 && (**v5)(v5, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v9) >= 0 )
  {
    if ( !v9 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(0LL, &MinInput_Warning_CheckResult, v9 + 4, 165, 255);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v9 + 24LL))(v9, a2, a3);
  }
  else
  {
    v6 = 0;
  }
  v7 = v9;
  v9 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
