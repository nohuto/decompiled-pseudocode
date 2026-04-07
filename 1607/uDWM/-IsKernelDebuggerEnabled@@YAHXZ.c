/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18009B030
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009B0F0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800B7D08 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800BA7E0, 2u, 0LL);
    v1 = byte_1800B7D08;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800B7D08 = v1;
  }
  return (unsigned __int8)byte_1800BA7E0;
}
