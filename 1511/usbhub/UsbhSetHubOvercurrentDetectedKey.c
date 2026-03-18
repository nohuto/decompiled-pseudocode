/*
 * XREFs of UsbhSetHubOvercurrentDetectedKey @ 0x1C004BFB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdoRegistryParameter @ 0x1C0009514 (UsbhSetPdoRegistryParameter.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhSetHubOvercurrentDetectedKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // rcx
  int Data; // [rsp+58h] [rbp+20h] BYREF

  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)FdoExt(a1, a2, a3, a4) + 149);
  Data = 1;
  return UsbhSetPdoRegistryParameter(v4, L"OvercurrentDetected", 4u, &Data, 4u);
}
