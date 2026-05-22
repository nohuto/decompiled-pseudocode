/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NIPEAX@Z @ 0x18001A880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, __int64 a2, void *a3)
{
  _BYTE v6[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( (_DWORD)a2 == *((_DWORD *)this + 14) )
    return 1;
  if ( (_DWORD)a2
    && *((_DWORD *)this + 14)
    && (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 6) + 112LL))(
         *((_QWORD *)this + 6),
         a2,
         v6) >= 0 )
  {
    return (*(__int64 (__fastcall **)(DWMInputTarget *, _BYTE *, void *))(*(_QWORD *)this + 32LL))(this, v6, a3);
  }
  return 0;
}
