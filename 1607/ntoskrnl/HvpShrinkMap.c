/*
 * XREFs of HvpShrinkMap @ 0x1406108D0
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 * Callees:
 *     HvpFreeMap @ 0x1404CC7DC (HvpFreeMap.c)
 */

__int64 __fastcall HvpShrinkMap(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // r11d
  unsigned int v11; // r9d

  v6 = a3;
  if ( !a4 )
  {
    v7 = 632LL * a2;
    v8 = *(_QWORD *)(v7 + a1 + 1416);
    if ( v8 == *(_QWORD *)(v7 + a1 + 1408) )
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 32))(v8, 20480LL, v7, v6);
  }
  result = 511LL;
  v10 = ((a4 >> 12) + 511) >> 9;
  v11 = (((unsigned int)v6 >> 12) + 511) >> 9;
  if ( v10 < v11 )
    return HvpFreeMap(a1, *(_QWORD *)(632LL * a2 + a1 + 1408), v10, v11 - 1);
  return result;
}
