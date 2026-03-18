/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C003C400
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00369C0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C003B9C0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C003BAD0 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C00154B0 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C0015510 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00169B8 (ACPIExtListTestElement.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rbx
  char result; // al
  _QWORD v4[6]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  v4[1] = 0LL;
  v4[0] = a1 + 744;
  v4[5] = 760LL;
  v4[2] = &AcpiDeviceTreeLock;
  v5 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v4); ; i = (__int64)ACPIExtListEnumNext((__int64)v4) )
  {
    v2 = i;
    result = ACPIExtListTestElement((__int64)v4, 1);
    if ( !result )
      break;
    ACPIInitResetDeviceExtension(v2);
  }
  return result;
}
