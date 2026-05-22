/*
 * XREFs of ?GetDefaultInternalDisplay@DWMInputRouter@@UEAAJPEAPEAUIInputDisplay@@@Z @ 0x1800155D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetDefaultInternalDisplay(DWMInputRouter *this, struct IInputDisplay **a2)
{
  unsigned int v3; // ebx
  struct IInputDisplay *v4; // rdi

  v3 = 0;
  if ( a2 )
  {
    v4 = (struct IInputDisplay *)((*((_QWORD *)this + 101) + 8LL) & -(__int64)(*((_QWORD *)this + 101) != 0LL));
    if ( v4 )
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = v4;
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1535, 87);
  }
  return v3;
}
