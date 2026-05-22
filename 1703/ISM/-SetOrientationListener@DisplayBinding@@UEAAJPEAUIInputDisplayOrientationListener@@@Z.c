/*
 * XREFs of ?SetOrientationListener@DisplayBinding@@UEAAJPEAUIInputDisplayOrientationListener@@@Z @ 0x18001C5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::SetOrientationListener(
        DisplayBinding *this,
        struct IInputDisplayOrientationListener *a2)
{
  __int64 v4; // rcx

  if ( *((struct IInputDisplayOrientationListener **)this + 14) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputDisplayOrientationListener *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
