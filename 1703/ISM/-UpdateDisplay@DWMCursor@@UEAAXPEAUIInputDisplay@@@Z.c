/*
 * XREFs of ?UpdateDisplay@DWMCursor@@UEAAXPEAUIInputDisplay@@@Z @ 0x18001EF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMCursor::UpdateDisplay(DWMCursor *this, struct IInputDisplay *a2)
{
  __int64 v4; // rcx

  if ( a2 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 5) = a2;
  (*(void (__fastcall **)(struct IInputDisplay *, __int64))(*(_QWORD *)a2 + 56LL))(
    a2,
    (*((_QWORD *)this + 4) + 16LL) & -(__int64)(*((_QWORD *)this + 4) != 0LL));
}
