/*
 * XREFs of _alloca_probe @ 0x1800AADB0
 * Callers:
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlWow64GetProcessMachines @ 0x18006E1D0 (RtlWow64GetProcessMachines.c)
 *     RtlQueryWnfStateData @ 0x180080DE0 (RtlQueryWnfStateData.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180083E00 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180086F70 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x1800A4DE4 (ReadStringDelimited_1.c)
 *     RtlValidateProcessHeaps @ 0x1800E9910 (RtlValidateProcessHeaps.c)
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
