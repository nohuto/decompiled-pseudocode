/*
 * XREFs of HvlpDiscoverTopologyIntel @ 0x1407CE00C
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x1406205F4 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x1407CE184 (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyIntel(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 result; // rax
  unsigned int v10; // ecx
  unsigned __int8 v11; // di
  unsigned int v12; // ecx
  unsigned __int8 v13; // bl
  unsigned int v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+24h] [rbp-1Ch]
  int v16; // [rsp+2Ch] [rbp-14h]

  *a4 = a2;
  *a3 = a2;
  v15 = 0LL;
  v16 = 0;
  v14 = 0;
  v6 = a1;
  HvlpLpCpuid(a1, 0LL, 0LL, &v14);
  v7 = v14;
  if ( v14 >= 0xB && (HvlpLpCpuid(v6, 11LL, 0LL, &v14), (_DWORD)v15) )
  {
    v8 = 0;
    do
    {
      HvlpLpCpuid(v6, 11LL, v8++, &v14);
      result = (unsigned int)((HIDWORD(v15) >> 8) - 1);
      if ( HIDWORD(v15) >> 8 == 1 )
      {
        *a4 >>= v14 & 0x1F;
      }
      else if ( HIDWORD(v15) >> 8 == 2 )
      {
        *a3 >>= v14 & 0x1F;
      }
    }
    while ( (_WORD)v15 );
  }
  else
  {
    if ( v7 < 4 )
    {
      v11 = 1;
    }
    else
    {
      HvlpLpCpuid(v6, 4LL, 0LL, &v14);
      _BitScanReverse(&v10, 2 * (v14 >> 26) + 1);
      v11 = 1 << v10;
    }
    HvlpLpCpuid(v6, 1LL, 0LL, &v14);
    if ( (v16 & 0x10000000) != 0 )
    {
      _BitScanReverse(&v12, 2 * BYTE2(v15) - 1);
      v13 = 1 << v12;
    }
    else
    {
      v13 = v11;
    }
    *a4 /= (unsigned int)(unsigned __int8)(v13 / (__int16)v11);
    result = *a3 / (unsigned int)v13;
    *a3 = result;
  }
  return result;
}
