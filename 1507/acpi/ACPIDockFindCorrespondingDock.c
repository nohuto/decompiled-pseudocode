/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C00340D0
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00388F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0079570 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C0014580 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C00145E0 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00159B8 (ACPIExtListTestElement.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0018DA8 (ACPIExtListExitEnumEarly.c)
 */

_QWORD *__fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  _QWORD *v3; // rbx
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v5[1] = 0LL;
  v5[5] = 760LL;
  v5[0] = RootDeviceExtension + 744;
  v5[2] = &AcpiDeviceTreeLock;
  v6 = 2;
  for ( i = ACPIExtListStartEnum((__int64)v5); ; i = (__int64)ACPIExtListEnumNext((__int64)v5) )
  {
    v3 = (_QWORD *)i;
    if ( !ACPIExtListTestElement((__int64)v5, 1) )
      break;
    if ( !v3 || (*v3 & 0x200000000000000LL) != 0 && v3[22] == a1 )
    {
      ACPIExtListExitEnumEarly((__int64)v5);
      return v3;
    }
  }
  return v3;
}
