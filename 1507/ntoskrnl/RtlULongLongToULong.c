/*
 * XREFs of RtlULongLongToULong @ 0x1400198DC
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
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
