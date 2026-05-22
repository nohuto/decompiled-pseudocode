/*
 * XREFs of ?DeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800241E0
 * Callers:
 *     ?DeliverInput@EdgeGestureTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x180024AE0 (-DeliverInput@EdgeGestureTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::DeliverInput(EdgeGestureTarget *this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  if ( a2 )
  {
    *((_BYTE *)a2 + 698) = 1;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    v2 = v3;
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 345, v3);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 341, 87);
  }
  return v2;
}
