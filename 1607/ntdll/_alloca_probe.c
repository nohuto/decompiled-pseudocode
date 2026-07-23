/*
 * XREFs of _alloca_probe @ 0x1800AADB0
 * Callers:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlWow64GetProcessMachines @ 0x18006E1C0 (RtlWow64GetProcessMachines.c)
 *     RtlQueryWnfStateData @ 0x180080DD0 (RtlQueryWnfStateData.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180083DF0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180086F60 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x1800A4DE4 (ReadStringDelimited_1.c)
 *     RtlValidateProcessHeaps @ 0x1800E99D0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 != StackLimit );
  }
  return result;
}
