/*
 * XREFs of ?OnHitTest@InputServiceComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180025330
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceComponent::OnHitTest(
        InputServiceComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rcx

  v6 = 0;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    v7 = (_QWORD *)*((_QWORD *)a6 + 1);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, struct InputInfo *))(*v7 + 16LL))(v7, *v7, a3);
    *((_QWORD *)a6 + 1) = 0LL;
  }
  else
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 98, 87);
  }
  return v6;
}
