/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C0043160
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004AAD0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009A004 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0020908 (ACPIExtListExitEnumEarly.c)
 */

__int64 __fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  __int64 v3; // rbx
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v5[1] = 0LL;
  v5[5] = 768LL;
  v5[0] = RootDeviceExtension + 752;
  v5[2] = &AcpiDeviceTreeLock;
  v6 = 2;
  for ( i = ACPIExtListStartEnum((__int64)v5); ; i = (__int64)ACPIExtListEnumNext((__int64)v5) )
  {
    v3 = i;
    if ( !ACPIExtListTestElement((__int64)v5, 1) )
      break;
    if ( !v3 || (*(_QWORD *)(v3 + 8) & 0x200000000000000LL) != 0 && *(_QWORD *)(v3 + 184) == a1 )
    {
      ACPIExtListExitEnumEarly((__int64)v5);
      return v3;
    }
  }
  return v3;
}
