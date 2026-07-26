/*
 * XREFs of NdisDeregisterDeviceEx @ 0x1C005B230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 */

void __stdcall NdisDeregisterDeviceEx(NDIS_HANDLE NdisDeviceHandle)
{
  char *v2; // rcx
  char v3; // al
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  NDIS_HANDLE *v6; // r8
  NDIS_HANDLE *v7; // rdx
  __int64 v8; // rdi
  NDIS_HANDLE *v9; // r9
  NDIS_HANDLE *v10; // r8
  KSPIN_LOCK *v11; // rcx
  NDIS_HANDLE *v12; // r9
  NDIS_HANDLE *v13; // r8

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x68u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)NdisDeviceHandle);
  ndisReferencePackage(&ndisPkgs);
  v2 = (char *)*((_QWORD *)NdisDeviceHandle + 3);
  v3 = *v2;
  if ( *v2 == 2 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 392);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 49);
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    v13 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
    if ( v12[1] != (char *)NdisDeviceHandle + 8 || *v13 != (char *)NdisDeviceHandle + 8 )
      __fastfail(3u);
    goto LABEL_20;
  }
  if ( v3 == 4 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 40);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 5);
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    v13 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
    if ( v12[1] != (char *)NdisDeviceHandle + 8 || *v13 != (char *)NdisDeviceHandle + 8 )
      __fastfail(3u);
LABEL_20:
    *v13 = v12;
    v12[1] = v13;
    goto LABEL_21;
  }
  if ( v3 == 17 )
  {
    v8 = *((_QWORD *)v2 + 477);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
    v9 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    v10 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
    if ( v9[1] != (char *)NdisDeviceHandle + 8 || *v10 != (char *)NdisDeviceHandle + 8 )
      __fastfail(3u);
    *v10 = v9;
    v11 = (KSPIN_LOCK *)(v8 + 392);
    v9[1] = v10;
    goto LABEL_22;
  }
  if ( v3 != -86 )
    goto LABEL_23;
  v4 = (KSPIN_LOCK *)((char *)IoGetDriverObjectExtension(**((PDRIVER_OBJECT **)v2 + 1), (PVOID)0x4E4D4944) + 392);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
  v7 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
  if ( v6[1] != (char *)NdisDeviceHandle + 8 || *v7 != (char *)NdisDeviceHandle + 8 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
LABEL_21:
  v11 = v4;
LABEL_22:
  KeReleaseSpinLock(v11, v5);
LABEL_23:
  ndisDereferencePackage(&ndisPkgs);
  IoDeleteSymbolicLink((PUNICODE_STRING)NdisDeviceHandle + 18);
  IoDeleteDevice(*((PDEVICE_OBJECT *)NdisDeviceHandle + 4));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x69u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)NdisDeviceHandle);
}
