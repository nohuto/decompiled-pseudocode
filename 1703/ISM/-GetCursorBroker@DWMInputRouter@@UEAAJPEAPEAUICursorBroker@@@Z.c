/*
 * XREFs of ?GetCursorBroker@DWMInputRouter@@UEAAJPEAPEAUICursorBroker@@@Z @ 0x1800150B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetCursorBroker(DWMInputRouter *this, struct ICursorBroker **a2)
{
  unsigned int v2; // ebx
  struct ICursorBroker *v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    v3 = (struct ICursorBroker *)*((_QWORD *)this + 28);
    *a2 = v3;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1428, 87);
  }
  return v2;
}
