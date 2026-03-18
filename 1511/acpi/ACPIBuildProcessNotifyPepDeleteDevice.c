/*
 * XREFs of ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0035C78
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0036438 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C0040570 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1C003F64C (AcpiNotifyPlExtDeleteDeviceSync.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0042FEC (AMLIRemoveNativeObjectsFromNamespace.c)
 */

char __fastcall ACPIBuildProcessNotifyPepDeleteDevice(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 904);
  if ( (v2 & 0x4000000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 904), 0xFFFFFFFFF9FFFFFFuLL);
    AcpiNotifyPlExtDeleteDeviceSync(*(_QWORD *)(a1 + 704), *(_QWORD *)(a1 + 888));
    LOBYTE(v2) = (a2 & 1) == 0;
    if ( (((*(_QWORD *)a1 & 0x80000000000LL) == 0) & (unsigned __int8)v2) != 0 )
      LOBYTE(v2) = AMLIRemoveNativeObjectsFromNamespace(*(_QWORD *)(a1 + 704));
  }
  return v2;
}
