/*
 * XREFs of Template_q @ 0x1401D0B78
 * Callers:
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404D8EBC (PiCMGetDeviceInterfaceList.c)
 *     PnpCallAddDevice @ 0x140543BB4 (PnpCallAddDevice.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  v5.Reserved = 0;
  v5.Size = 4;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 1u, &v5);
}
