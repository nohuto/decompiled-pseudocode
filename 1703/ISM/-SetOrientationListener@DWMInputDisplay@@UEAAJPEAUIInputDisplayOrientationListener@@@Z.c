/*
 * XREFs of ?SetOrientationListener@DWMInputDisplay@@UEAAJPEAUIInputDisplayOrientationListener@@@Z @ 0x18001B750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputDisplay::SetOrientationListener(
        DWMInputDisplay *this,
        struct IInputDisplayOrientationListener *a2)
{
  __int64 v4; // rcx

  if ( a2 )
    (*(void (__fastcall **)(struct IInputDisplayOrientationListener *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 9) = a2;
  return 0LL;
}
