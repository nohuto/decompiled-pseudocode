/*
 * XREFs of VfWmiDumpIrpStack @ 0x1406CA7A4
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 */

ULONG __fastcall VfWmiDumpIrpStack(__int64 a1)
{
  unsigned __int8 v2; // al
  const CHAR *v4; // rcx

  VfUtilDbgPrint("IRP_MJ_SYSTEM_CONTROL.");
  v2 = *(_BYTE *)(a1 + 1);
  if ( v2 <= 9u )
    return VfUtilDbgPrint(WmiIrpNames[v2]);
  v4 = "IRP_MN_BOGUS";
  if ( v2 != 0xFF )
    v4 = "(Bogus)";
  return VfUtilDbgPrint(v4);
}
