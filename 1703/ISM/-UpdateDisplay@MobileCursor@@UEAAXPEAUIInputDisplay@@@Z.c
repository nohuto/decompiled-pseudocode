/*
 * XREFs of ?UpdateDisplay@MobileCursor@@UEAAXPEAUIInputDisplay@@@Z @ 0x1800269E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MobileCursor::UpdateDisplay(MobileCursor *this, struct IInputDisplay *a2)
{
  __int64 v4; // rcx

  if ( a2 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 4) = a2;
  (*(void (__fastcall **)(struct IInputDisplay *, __int64))(*(_QWORD *)a2 + 56LL))(
    a2,
    (*((_QWORD *)this + 3) + 16LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL));
}
