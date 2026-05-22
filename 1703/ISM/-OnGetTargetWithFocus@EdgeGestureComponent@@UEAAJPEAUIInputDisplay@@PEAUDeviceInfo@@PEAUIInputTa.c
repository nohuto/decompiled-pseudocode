/*
 * XREFs of ?OnGetTargetWithFocus@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180022E90
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureComponent::OnGetTargetWithFocus(
        EdgeGestureComponent *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct InputTargetingDecision *a5)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rcx

  v5 = 0;
  if ( a5 )
  {
    *(_DWORD *)a5 = 0;
    v6 = (_QWORD *)*((_QWORD *)a5 + 1);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, struct DeviceInfo *, struct IInputTarget *))(*v6 + 16LL))(
        v6,
        *v6,
        a3,
        a4);
    *((_QWORD *)a5 + 1) = 0LL;
  }
  else
  {
    v5 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 268, 87);
  }
  return v5;
}
