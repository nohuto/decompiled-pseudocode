/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C002563C
 * Callers:
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseAcquire @ 0x1C001B400 (ParseAcquire.c)
 *     ParsePackage @ 0x1C001BD20 (ParsePackage.c)
 *     ExprOp1 @ 0x1C0025080 (ExprOp1.c)
 *     CondRefOf @ 0x1C0025180 (CondRefOf.c)
 *     OSInterface @ 0x1C0025230 (OSInterface.c)
 *     LogOp2_32 @ 0x1C0025478 (LogOp2_32.c)
 *     LNot @ 0x1C00255C0 (LNot.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     Match @ 0x1C005F6D0 (Match.c)
 *     Match_32 @ 0x1C005F798 (Match_32.c)
 *     Match_64 @ 0x1C005F8CC (Match_64.c)
 *     ProcessWait @ 0x1C0060230 (ProcessWait.c)
 *     ToString @ 0x1C0060A70 (ToString.c)
 *     ConvertToBuffer @ 0x1C0060D94 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
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
