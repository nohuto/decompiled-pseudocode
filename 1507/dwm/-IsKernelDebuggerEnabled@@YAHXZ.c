/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000576C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140004E48 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_14000D15A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_14000D158, 2u, 0LL);
    v1 = byte_14000D15A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_14000D15A = v1;
  }
  return (unsigned __int8)byte_14000D158;
}
