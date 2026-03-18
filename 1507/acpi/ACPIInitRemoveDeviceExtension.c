/*
 * XREFs of ACPIInitRemoveDeviceExtension @ 0x1C003C3AC
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 * Callees:
 *     ACPIInternalMoveList @ 0x1C001BDCC (ACPIInternalMoveList.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C00359B8 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
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
  __int64 v9; // rcx
  __int64 v10; // rbx
  char v11; // al
  volatile signed __int32 *v12; // rcx

  v1 = a1 + 95;
  v3 = a1[95];
  v4 = (_QWORD *)a1[96];
  if ( *(_QWORD **)(v3 + 8) != v1 || (_QWORD *)*v4 != v1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v1[1] = v1;
  *v1 = v1;
  ACPICleanDeviceDependenciesWithTreeLock((__int64)a1);
  v5 = a1 + 99;
  v6 = a1[99];
  v7 = (_QWORD *)a1[100];
  if ( *(_QWORD **)(v6 + 8) != a1 + 99 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = a1 + 97;
  a1[100] = a1 + 99;
  *v5 = v5;
  if ( (_QWORD *)*v8 != v8 )
    ACPIInternalMoveList(v8, (__int64)&AcpiUnresolvedEjectList);
  v9 = (unsigned int)AcpiSurpriseRemovedIndex;
  v10 = a1[92];
  a1[92] = 0LL;
  AcpiSurpriseRemovedDeviceExtensions[v9] = a1;
  AcpiSurpriseRemovedIndex = ((_BYTE)v9 + 1) & 0x1F;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)v10;
    if ( !v10 || _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 676), 0xFFFFFFFF) != 1 )
      break;
    v10 = *(_QWORD *)(v10 + 736);
    v11 = AcpiSurpriseRemovedIndex + 1;
    AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = v12;
    AcpiSurpriseRemovedIndex = v11 & 0x1F;
    ACPIInitDeleteDeviceExtension(v12);
  }
}
