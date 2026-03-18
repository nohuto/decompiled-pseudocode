/*
 * XREFs of UsbhSetHubSelectiveSuspend @ 0x1C004C08C
 * Callers:
 *     UsbhSetWmiDataBlock @ 0x1C004E610 (UsbhSetWmiDataBlock.c)
 * Callees:
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhSetHubSelectiveSuspend(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v4; // rax
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF

  Data = (_BYTE)a2 != 0;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1, a2, a3, a4);
  return UsbhSetPdoRegistryParameter(v4[149], L"EnableSelectiveSuspend", 4u, &Data, 4u);
}
