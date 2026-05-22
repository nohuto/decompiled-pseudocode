/*
 * XREFs of ?Release@DWMInputTarget@@UEAAKXZ @ 0x180019BB0
 * Callers:
 *     ?Release@DWMInputTarget@@WBI@EAAKXZ @ 0x18001AF70 (-Release@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCA@EAAKXZ @ 0x18001AFB0 (-Release@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@W7EAAKXZ @ 0x18001B000 (-Release@DWMInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCI@EAAKXZ @ 0x18001B010 (-Release@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBA@EAAKXZ @ 0x18001B060 (-Release@DWMInputTarget@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Release(DWMInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 40);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 12) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 40);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
