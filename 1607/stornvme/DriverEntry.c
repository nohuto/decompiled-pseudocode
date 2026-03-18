/*
 * XREFs of DriverEntry @ 0x1C0004650
 * Callers:
 *     GsDriverEntry @ 0x1C0015000 (GsDriverEntry.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _BYTE v5[208]; // [rsp+20h] [rbp-79h] BYREF

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
  *(_DWORD *)&v5[64] = 3264;
  *(_QWORD *)&v5[72] = 0x200002098LL;
  return ((__int64 (__fastcall *)(_DRIVER_OBJECT *, PUNICODE_STRING, _BYTE *, _QWORD))StorPortInitialize)(
           DriverObject,
           RegistryPath,
           v5,
           0LL);
}
