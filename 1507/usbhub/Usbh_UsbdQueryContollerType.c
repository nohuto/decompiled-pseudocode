/*
 * XREFs of Usbh_UsbdQueryContollerType @ 0x1C0027990
 * Callers:
 *     UsbhInitialize @ 0x1C00189A0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_UsbdQueryContollerType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  __int64 (__fastcall *v5)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *); // rdi

  result = FdoExt(a1, a2, a3, a4);
  if ( *((_WORD *)result + 2400) == 3 )
  {
    v5 = (__int64 (__fastcall *)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *))*((_QWORD *)result + 580);
    if ( v5 )
      return (_DWORD *)v5(
                         *((_QWORD *)result + 570),
                         result + 1306,
                         result + 1307,
                         (char *)result + 5230,
                         result + 1308,
                         (char *)result + 5233,
                         (char *)result + 5234,
                         (char *)result + 5235);
  }
  return result;
}
