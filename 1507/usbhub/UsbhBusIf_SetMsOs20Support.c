/*
 * XREFs of UsbhBusIf_SetMsOs20Support @ 0x1C004FDAC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043334 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhBusIf_SetMsOs20Support(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, __int64, __int64, __int64)
{
  char v4; // di
  _DWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v4 = a4;
  v8 = FdoExt(a1, a2, a3, a4);
  Log(a1, 4, 1968391236, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v10 + 4536);
  if ( result )
  {
    LOBYTE(v9) = v4;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v10 + 4232), a2, a3, v9);
  }
  return result;
}
