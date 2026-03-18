/*
 * XREFs of RtlULongLongToULong @ 0x14008FB5C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongToULong(ULONGLONG ullOperand, ULONG *pulResult)
{
  if ( ullOperand > 0xFFFFFFFF )
  {
    *pulResult = -1;
    return -1073741675;
  }
  else
  {
    *pulResult = ullOperand;
    return 0;
  }
}
