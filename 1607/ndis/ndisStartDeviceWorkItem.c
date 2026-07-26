/*
 * XREFs of ndisStartDeviceWorkItem @ 0x1C009E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C009EAEC (ndisStartDeviceSynchronous.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  void *v1; // rbx
  _IRP *v3; // rdi

  v1 = (void *)P[4];
  v3 = (_IRP *)P[5];
  ndisReferencePackage((__int64)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
