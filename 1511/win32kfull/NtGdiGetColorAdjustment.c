/*
 * XREFs of NtGdiGetColorAdjustment @ 0x1C02A66E0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetColorAdjustment @ 0x1C0290C64 (GreGetColorAdjustment.c)
 */

__int64 __fastcall NtGdiGetColorAdjustment(HDC a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  result = GreGetColorAdjustment(a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *(_OWORD *)a2 = v4;
    *(_QWORD *)(a2 + 16) = v5;
  }
  return result;
}
