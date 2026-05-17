/*
 * XREFs of _alloca_probe @ 0x180096610
 * Callers:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlQueryWnfStateData @ 0x18006DC50 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800772B0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x180092280 (ReadStringDelimited_1.c)
 *     RtlValidateProcessHeaps @ 0x1800D8750 (RtlValidateProcessHeaps.c)
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
