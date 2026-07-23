/*
 * XREFs of VRegSetup @ 0x140551B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObSetSecurityObjectByPointer @ 0x140406184 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     CmRegisterCallbackEx @ 0x140551610 (CmRegisterCallbackEx.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x140551828 (VrpInitializeLoadedDifferencingHives.c)
 *     PspStorageAllocSlot @ 0x1405524D8 (PspStorageAllocSlot.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall VRegSetup(struct _DRIVER_OBJECT *Driver)
{
  NTSTATUS v2; // eax
  int v3; // eax
  NTSTATUS v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax
  UNICODE_STRING Altitude; // [rsp+40h] [rbp-59h] BYREF
  __int128 v9; // [rsp+50h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v11[15]; // [rsp+70h] [rbp-29h] BYREF

  *(_QWORD *)&v9 = 0x2000000020000LL;
  *((_QWORD *)&v9 + 1) = 0xF000000020000LL;
  TraceLoggingRegisterEx(&stru_1402F3520, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(Driver, 0, &DestinationString, 0x22u, 0x100u, 0, &gDeviceObject);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  v3 = ObSetSecurityObjectByPointer((__int64)gDeviceObject, 12, (__int64)&gHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  *(_DWORD *)&Altitude.Length = 917516;
  gDeviceObject->Flags &= ~0x80u;
  Driver->DriverUnload = (PDRIVER_UNLOAD)RegistryUnload;
  Driver->MajorFunction[0] = (PDRIVER_DISPATCH)&RegistryDispatch;
  Driver->MajorFunction[2] = (PDRIVER_DISPATCH)&RegistryDispatch;
  Driver->MajorFunction[14] = (PDRIVER_DISPATCH)&IoctlDeviceDispatch;
  Altitude.Buffer = L"189900";
  v4 = CmRegisterCallbackEx((PEX_CALLBACK_FUNCTION)RegistryCallback, &Altitude, Driver, 0LL, &gCallbackCookie, 0LL);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 3uLL, 0LL);
  RtlInitUnicodeString(&Altitude, L"VRegConfigurationContext");
  memset(v11, 0, sizeof(v11));
  BYTE2(v11[0]) |= 4u;
  v11[9] = VrpJobContextDelete;
  LOWORD(v11[0]) = 120;
  LODWORD(v11[1]) = 256;
  HIDWORD(v11[4]) = 1;
  *(_OWORD *)((char *)&v11[1] + 4) = v9;
  LODWORD(v11[5]) = 88;
  HIDWORD(v11[3]) = 983040;
  v5 = ObCreateObjectTypeEx(&Altitude, (__int64)&VrpJobContextType);
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 4uLL, 0LL);
  v6 = VrpInitializeLoadedDifferencingHives();
  if ( v6 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v6, 5uLL, 0LL);
  result = PspStorageAllocSlot(&gVregSiloContextSlot);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
