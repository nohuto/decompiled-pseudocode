/*
 * XREFs of AcpiEjectBusNumberTranslator @ 0x1C0073258
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0007730 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     PciConfigPinToLine @ 0x1C0023660 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiEjectBusNumberTranslator(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  UCHAR v6; // dl
  POWER_STATE v7; // r8d
  void *v8; // r9
  struct _DEVICE_OBJECT *v10; // rcx
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_WORD *)(v4 + 18) )
    return 3221225659LL;
  if ( *(_WORD *)(v4 + 16) < 0x30u )
  {
    *(_WORD *)v5 = 48;
    return 3221225485LL;
  }
  else
  {
    v11 = 0LL;
    if ( (int)ACPIGet(DeviceExtension, 1195725663, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v11, 0LL) >= 0 && v11 )
    {
      *(_DWORD *)v5 = 48;
      v10 = (struct _DEVICE_OBJECT *)(unsigned __int16)v11;
      *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
      *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
      *(_QWORD *)(v5 + 32) = AcpiTranslateBusNumberResource;
      *(_QWORD *)(v5 + 40) = AcpiTranslateBusNumberRequirements;
      *(_QWORD *)(v5 + 8) = v10;
      PciConfigPinToLine(v10, v6, v7, v8);
      return 0LL;
    }
    else
    {
      return *(unsigned int *)(a2 + 48);
    }
  }
}
