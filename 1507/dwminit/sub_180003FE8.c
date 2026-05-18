/*
 * XREFs of sub_180003FE8 @ 0x180003FE8
 * Callers:
 *     sub_180003EA8 @ 0x180003EA8 (sub_180003EA8.c)
 * Callees:
 *     <none>
 */

__int64 sub_180003FE8()
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_18000EF8A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18000EF88, 2u, 0LL);
    v1 = byte_18000EF8A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_18000EF8A = v1;
  }
  return (unsigned __int8)byte_18000EF88;
}
