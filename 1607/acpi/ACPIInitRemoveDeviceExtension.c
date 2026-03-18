/*
 * XREFs of ACPIInitRemoveDeviceExtension @ 0x1C004F990
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 * Callees:
 *     ACPIInternalMoveList @ 0x1C002AC40 (ACPIInternalMoveList.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0045750 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 */

void __fastcall ACPIInitRemoveDeviceExtension(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  char v10; // al
  char v11; // al
  volatile signed __int32 *v12; // rcx

  v1 = a1 + 96;
  v3 = a1[96];
  v4 = (_QWORD *)a1[97];
  if ( *(_QWORD **)(v3 + 8) != v1 || (_QWORD *)*v4 != v1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v1[1] = v1;
  *v1 = v1;
  ACPICleanDeviceDependenciesWithTreeLock((__int64)a1);
  v5 = a1 + 100;
  v6 = a1[100];
  v7 = (_QWORD *)a1[101];
  if ( *(_QWORD **)(v6 + 8) != a1 + 100 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = a1 + 98;
  a1[101] = a1 + 100;
  *v5 = v5;
  if ( (_QWORD *)*v8 != v8 )
    ACPIInternalMoveList(v8, (__int64)&AcpiUnresolvedEjectList);
  v9 = a1[93];
  a1[93] = 0LL;
  v10 = AcpiSurpriseRemovedIndex + 1;
  AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = a1;
  AcpiSurpriseRemovedIndex = v10 & 0x1F;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)v9;
    if ( !v9 || _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 684), 0xFFFFFFFF) != 1 )
      break;
    v9 = *(_QWORD *)(v9 + 744);
    v11 = AcpiSurpriseRemovedIndex + 1;
    AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = v12;
    AcpiSurpriseRemovedIndex = v11 & 0x1F;
    ACPIInitDeleteDeviceExtension(v12);
  }
}
