/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C0029A1C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E780 (ACPIFilterFastIoDetachCallback.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FB94 (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rbx
  char result; // al
  _QWORD v4[6]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  v4[1] = 0LL;
  v4[0] = a1 + 752;
  v4[5] = 768LL;
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
