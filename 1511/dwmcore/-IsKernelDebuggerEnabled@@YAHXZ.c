/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18013EDD8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18013EE98 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1801A1104 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1801A4000, 2u, 0LL);
    v1 = byte_1801A1104;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1801A1104 = v1;
  }
  return (unsigned __int8)byte_1801A4000;
}
