/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800043DC
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000429C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_18000FFBA )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18000FFB8, 2u, 0LL);
    v1 = byte_18000FFBA;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_18000FFBA = v1;
  }
  return (unsigned __int8)byte_18000FFB8;
}
