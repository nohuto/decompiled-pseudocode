/*
 * XREFs of __alloca_probe @ 0x180026B30
 * Callers:
 *     sub_180002200 @ 0x180002200 (sub_180002200.c)
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _alloca_probe()
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
