/*
 * XREFs of GsDriverEntry @ 0x1C0014000
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 *     __security_init_cookie @ 0x1C00140F8 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _BYTE v5[208]; // [rsp+20h] [rbp-79h] BYREF

  _security_init_cookie();
  memset(&v5[4], 0, 0xCCuLL);
  *(_DWORD *)&v5[184] |= 0x138u;
  *(_QWORD *)&v5[8] = NVMeHwInitialize;
  *(_QWORD *)v5 = 0x5000000D0LL;
  *(_QWORD *)&v5[16] = NVMeHwStartIo;
  *(_DWORD *)&v5[88] = 16843010;
  *(_QWORD *)&v5[24] = NVMeHwInterrupt;
  *(_QWORD *)&v5[32] = NVMeHwFindAdapter;
  v5[92] = 1;
  *(_QWORD *)&v5[40] = NVMeHwResetBus;
  *(_QWORD *)&v5[120] = NVMeHwAdapterControl;
  *(_QWORD *)&v5[128] = NVMeHwBuildIo;
  *(_QWORD *)&v5[176] = NVMeHwTracingEnabled;
  *(_QWORD *)&v5[200] = NVMeHwUnitControl;
  *(_DWORD *)&v5[188] = 2;
  *(_DWORD *)&v5[64] = 11448;
  *(_QWORD *)&v5[72] = 0x2000020A8LL;
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, PUNICODE_STRING, _BYTE *, _QWORD))StorPortInitialize)(
           DriverObject,
           RegistryPath,
           v5,
           0LL);
}
