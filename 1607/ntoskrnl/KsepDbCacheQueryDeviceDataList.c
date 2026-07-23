/*
 * XREFs of KsepDbCacheQueryDeviceDataList @ 0x140652730
 * Callers:
 *     KseQueryDeviceDataList @ 0x140652418 (KseQueryDeviceDataList.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall KsepDbCacheQueryDeviceDataList(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  __int64 *v4; // rsi
  unsigned int v5; // ebp
  __int64 *v6; // rbx
  unsigned int v9; // edi
  __int64 *i; // rcx
  int v11; // eax
  __int64 v12; // rcx

  v4 = (__int64 *)(a1 + 56);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 56);
  v9 = 0;
  for ( i = v6; i != v4; v9 += v11 )
  {
    v11 = *((unsigned __int16 *)i + 9);
    i = (__int64 *)*i;
  }
  if ( (unsigned __int64)v9 + 2 <= a3 )
  {
    while ( v6 != v4 )
    {
      memmove(a2, (const void *)v6[3], *((unsigned __int16 *)v6 + 9));
      v12 = *((unsigned __int16 *)v6 + 9);
      v6 = (__int64 *)*v6;
      a2 += v12;
    }
    *a4 = v9 + 2;
  }
  else
  {
    v5 = -1073741789;
    *a4 = v9 + 2;
  }
  return v5;
}
