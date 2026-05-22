/*
 * XREFs of ?Release@MobileCursor@@UEAAKXZ @ 0x18000EF50
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x180011070 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WDA@EAAKXZ @ 0x180035C90 (-Release@ControllerProcessor@@WDA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WMA@EAAKXZ @ 0x180059D30 (-Release@MouseProcessor@@WMA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WKI@EAAKXZ @ 0x180059D70 (-Release@MouseProcessor@@WKI@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WLA@EAAKXZ @ 0x180059DA0 (-Release@MouseProcessor@@WLA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WLI@EAAKXZ @ 0x180059DD0 (-Release@MouseProcessor@@WLI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursor::Release(MobileCursor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 8);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 4) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 8);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
