/*
 * XREFs of ?Release@DWMCursorBroker@@UEAAKXZ @ 0x18001CF40
 * Callers:
 *     ?Release@DWMFocusedInputTarget@@WBI@EAAKXZ @ 0x18001D980 (-Release@DWMFocusedInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@MobileCursorBroker@@WCA@EAAKXZ @ 0x18001D9C0 (-Release@MobileCursorBroker@@WCA@EAAKXZ.c)
 *     ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x18001DA10 (-Release@DWMCursorBroker@@W7EAAKXZ.c)
 *     ?Release@MobileCursorBroker@@WBA@EAAKXZ @ 0x18001DA40 (-Release@MobileCursorBroker@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::Release(DWMCursorBroker *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 32);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 10) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 32);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
