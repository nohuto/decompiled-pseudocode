/*
 * XREFs of VfPnpDumpIrpStack @ 0x140718440
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 */

unsigned __int8 __fastcall VfPnpDumpIrpStack(__int64 a1)
{
  unsigned __int8 v2; // al
  const CHAR *v3; // rcx
  unsigned __int8 result; // al
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  DbgPrintEx(0x5Du, 0, "IRP_MJ_PNP.");
  v2 = *(_BYTE *)(a1 + 1);
  if ( v2 > 0x18u )
  {
    v3 = "IRP_MN_BOGUS";
    if ( v2 != 0xFF )
      v3 = "(Bogus)";
    VfUtilDbgPrint(v3);
  }
  else
  {
    VfUtilDbgPrint(PnPIrpNames[v2]);
  }
  result = *(_BYTE *)(a1 + 1);
  if ( result == 7 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    if ( !v12 )
      return VfUtilDbgPrint("(BusRelations)");
    v13 = v12 - 1;
    if ( !v13 )
      return VfUtilDbgPrint("(EjectionRelations)");
    v14 = v13 - 1;
    if ( !v14 )
      return VfUtilDbgPrint("(PowerRelations)");
    v15 = v14 - 1;
    if ( !v15 )
      return VfUtilDbgPrint("(RemovalRelations)");
    if ( v15 == 1 )
      return VfUtilDbgPrint("(TargetDeviceRelation)");
    return VfUtilDbgPrint("(Bogus)");
  }
  if ( result == 12 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    if ( !v11 )
      return VfUtilDbgPrint("(DeviceTextDescription)");
    if ( v11 == 1 )
      return VfUtilDbgPrint("(DeviceTextLocationInformation)");
    return VfUtilDbgPrint("(Bogus)");
  }
  if ( result <= 0xEu )
    return result;
  if ( result <= 0x10u )
    return DbgPrintEx(
             0x5Du,
             0,
             "(WhichSpace=%x, Buffer=%p, Offset=%x, Length=%x)",
             *(_DWORD *)(a1 + 8),
             *(const void **)(a1 + 16),
             *(_DWORD *)(a1 + 24),
             *(_DWORD *)(a1 + 32));
  switch ( result )
  {
    case 0x12u:
      if ( *(_BYTE *)(a1 + 8) )
        return VfUtilDbgPrint("(True)");
      else
        return VfUtilDbgPrint("(False)");
    case 0x13u:
      v8 = *(_DWORD *)(a1 + 8);
      if ( !v8 )
        return VfUtilDbgPrint("(BusQueryDeviceID)");
      v9 = v8 - 1;
      if ( !v9 )
        return VfUtilDbgPrint("(BusQueryHardwareIDs)");
      v10 = v9 - 1;
      if ( !v10 )
        return VfUtilDbgPrint("(BusQueryCompatibleIDs)");
      if ( v10 == 1 )
        return VfUtilDbgPrint("(BusQueryInstanceID)");
      return VfUtilDbgPrint("(Bogus)");
    case 0x16u:
      v5 = *(_DWORD *)(a1 + 16);
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              VfUtilDbgPrint("(DeviceUsageTypeDumpFile");
            else
              VfUtilDbgPrint("(Bogus)");
          }
          else
          {
            VfUtilDbgPrint("(DeviceUsageTypeHibernation");
          }
        }
        else
        {
          VfUtilDbgPrint("(DeviceUsageTypePaging");
        }
      }
      else
      {
        VfUtilDbgPrint("(DeviceUsageTypeUndefined");
      }
      if ( *(_BYTE *)(a1 + 8) )
        return VfUtilDbgPrint(", InPath=TRUE)");
      else
        return VfUtilDbgPrint(", InPath=FALSE)");
  }
  return result;
}
