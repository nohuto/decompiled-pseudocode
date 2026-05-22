/*
 * XREFs of ?UpdateInputDisplay@DWMHardwareCursor@@UEAAJPEAUIInputDisplay@@@Z @ 0x180020C60
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMHardwareCursor::UpdateInputDisplay(DWMHardwareCursor *this, struct IInputDisplay *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 12);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 12) = a2;
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 218, 87);
  }
  return v2;
}
