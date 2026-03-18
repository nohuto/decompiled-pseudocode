/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18016952C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801695EC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1801ECFE8 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1801F0348, 2u, 0LL);
    v1 = byte_1801ECFE8;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1801ECFE8 = v1;
  }
  return (unsigned __int8)byte_1801F0348;
}
