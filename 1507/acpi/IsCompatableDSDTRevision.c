/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C001875C
 * Callers:
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     ParseAcquire @ 0x1C0013D20 (ParseAcquire.c)
 *     LNot @ 0x1C0016EA0 (LNot.c)
 *     CondRefOf @ 0x1C0018BB0 (CondRefOf.c)
 *     OSInterface @ 0x1C00201A0 (OSInterface.c)
 *     LogOp2_32 @ 0x1C00206BC (LogOp2_32.c)
 *     ExprOp1 @ 0x1C0021FF0 (ExprOp1.c)
 *     Concat @ 0x1C0047810 (Concat.c)
 *     Match @ 0x1C0048430 (Match.c)
 *     Match_32 @ 0x1C00484EC (Match_32.c)
 *     Match_64 @ 0x1C0048620 (Match_64.c)
 *     ProcessWait @ 0x1C0048F00 (ProcessWait.c)
 *     ToString @ 0x1C00496F0 (ToString.c)
 *     ConvertToBuffer @ 0x1C00499AC (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0049B70 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

bool IsCompatableDSDTRevision()
{
  char v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v2);
    return v2 >= 2;
  }
  return v0;
}
