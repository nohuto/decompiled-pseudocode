/*
 * XREFs of NdisMDeregisterDevice @ 0x1C005B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMDeregisterDevice(NDIS_HANDLE NdisDeviceHandle)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  NDIS_HANDLE *v4; // r9
  NDIS_HANDLE *v5; // r8

  v1 = *((_QWORD *)NdisDeviceHandle + 3);
  ndisReferencePackage(&ndisPkgs);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 392));
  v4 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
  v5 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
  if ( v4[1] != (char *)NdisDeviceHandle + 8 || *v5 != (char *)NdisDeviceHandle + 8 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 392), v3);
  ndisDereferencePackage(&ndisPkgs);
  IoDeleteSymbolicLink((PUNICODE_STRING)NdisDeviceHandle + 18);
  IoDeleteDevice(*((PDEVICE_OBJECT *)NdisDeviceHandle + 4));
  return 0;
}
