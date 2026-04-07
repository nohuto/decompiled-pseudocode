/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18009CDC8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009CE88 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800BC4A0 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800BC7C0, 2u, 0LL);
    v1 = byte_1800BC4A0;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800BC4A0 = v1;
  }
  return (unsigned __int8)byte_1800BC7C0;
}
