/*
 * XREFs of ndisStartDeviceWorkItem @ 0x1C00AA620
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AA688 (ndisStartDeviceSynchronous.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  _IRP *v3; // rdi

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  v3 = (_IRP *)P[5];
  ndisReferencePackage((__int64)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
