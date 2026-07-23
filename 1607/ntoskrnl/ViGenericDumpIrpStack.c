/*
 * XREFs of ViGenericDumpIrpStack @ 0x140703918
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __fastcall ViGenericDumpIrpStack(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  const CHAR *v3; // rcx

  v1 = *a1;
  if ( *a1 == 15 && a1[1] == 1 )
    return VfUtilDbgPrint("IRP_MJ_SCSI");
  if ( v1 <= 0x1Bu )
    return VfUtilDbgPrint(IrpMajorNames[v1]);
  v3 = "IRP_MJ_BOGUS";
  if ( v1 != 0xFF )
    v3 = "IRP_MJ_??";
  return VfUtilDbgPrint(v3);
}
