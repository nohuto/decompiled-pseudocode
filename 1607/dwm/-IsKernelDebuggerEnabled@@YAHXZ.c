/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1400057A4
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140005860 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_14000D152 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_14000D150, 2u, 0LL);
    v1 = byte_14000D152;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_14000D152 = v1;
  }
  return (unsigned __int8)byte_14000D150;
}
