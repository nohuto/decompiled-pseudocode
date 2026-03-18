/*
 * XREFs of HvlpDiscoverTopologyAmd @ 0x140782568
 * Callers:
 *     sub_1405F6990 @ 0x1405F6990 (sub_1405F6990.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x1407828D4 (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyAmd(__int64 a1, unsigned int a2, unsigned int *a3, int *a4)
{
  unsigned int v7; // esi
  __int64 result; // rax
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+24h] [rbp-34h]
  int v13; // [rsp+2Ch] [rbp-2Ch]

  v11 = 0;
  *a4 = a2;
  v12 = 0LL;
  v13 = 0;
  v7 = a1;
  result = HvlpLpCpuid(a1, 0x80000000LL, 0LL, &v11);
  v9 = v11;
  if ( v11 < 0x80000008 )
  {
    *a3 = a2;
  }
  else
  {
    result = HvlpLpCpuid(v7, 2147483656LL, 0LL, &v11);
    if ( WORD2(v12) >> 12 )
    {
      *a3 = a2 >> (WORD2(v12) >> 12);
    }
    else
    {
      _BitScanReverse(&v10, 2 * BYTE4(v12) + 1);
      result = a2 / (unsigned __int8)(1 << v10);
      *a3 = result;
    }
    if ( v9 >= 0x8000001E )
    {
      HvlpLpCpuid(v7, 2147483678LL, 0LL, &v11);
      result = (unsigned __int8)v12;
      *a4 = (unsigned __int8)v12 | (*a3 << 8);
    }
  }
  return result;
}
