/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C000D340
 * Callers:
 *     LNot @ 0x1C000A2B0 (LNot.c)
 *     ParseIntObj @ 0x1C000E4C0 (ParseIntObj.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseAcquire @ 0x1C0014C50 (ParseAcquire.c)
 *     OSInterface @ 0x1C0020770 (OSInterface.c)
 *     LogOp2_32 @ 0x1C0020C84 (LogOp2_32.c)
 *     CondRefOf @ 0x1C0021100 (CondRefOf.c)
 *     ExprOp1 @ 0x1C0022770 (ExprOp1.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     Match @ 0x1C0047D40 (Match.c)
 *     Match_32 @ 0x1C0047DFC (Match_32.c)
 *     Match_64 @ 0x1C0047F30 (Match_64.c)
 *     ProcessWait @ 0x1C0048810 (ProcessWait.c)
 *     ToString @ 0x1C0049000 (ToString.c)
 *     ConvertToBuffer @ 0x1C00492BC (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
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
