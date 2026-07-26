/*
 * XREFs of ndisStartDeviceWorkItem @ 0x1C00AC570
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AC4C4 (ndisStartDeviceSynchronous.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  _QWORD *v1; // rbx
  _IRP *v3; // rdi
  __int64 v4; // r8

  v1 = (_QWORD *)P[4];
  v3 = (_IRP *)P[5];
  ndisReferencePackage((__int64)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1, (__int64)v3, v4);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
