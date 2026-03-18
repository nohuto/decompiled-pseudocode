/*
 * XREFs of UsbhBusIf_SetClearRootPortResumeTime @ 0x1C004FC10
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhBusIf_SetClearRootPortResumeTime(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, __int64, __int64, __int64)
{
  char v4; // di
  char v5; // si
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v4 = a4;
  v5 = a3;
  v8 = FdoExt(a1, a2, a3, a4);
  Log(a1, 4, 1968390994, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v11 + 4544);
  if ( result )
  {
    LOBYTE(v10) = v4;
    LOBYTE(v9) = v5;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v11 + 4232), a2, v9, v10);
  }
  return result;
}
