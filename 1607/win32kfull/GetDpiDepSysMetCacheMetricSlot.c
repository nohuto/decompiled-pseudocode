/*
 * XREFs of GetDpiDepSysMetCacheMetricSlot @ 0x1C006E95C
 * Callers:
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiDepSysMetCacheMetricSlot(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx

  if ( a1 > 92 )
    return 0xFFFFFFFFLL;
  if ( a1 == 92 )
    return 27LL;
  if ( a1 > 31 )
  {
    if ( a1 <= 51 )
    {
      if ( a1 == 51 )
        return 20LL;
      v12 = a1 - 32;
      if ( !v12 )
        return 14LL;
      v13 = v12 - 1;
      if ( !v13 )
        return 15LL;
      v14 = v13 - 5;
      if ( !v14 )
        return 16LL;
      v15 = v14 - 1;
      if ( !v15 )
        return 17LL;
      v16 = v15 - 10;
      if ( !v16 )
        return 18LL;
      if ( v16 == 1 )
        return 19LL;
    }
    else
    {
      v7 = a1 - 52;
      if ( !v7 )
        return 21LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 22LL;
      v9 = v8 - 1;
      if ( !v9 )
        return 23LL;
      v10 = v9 - 1;
      if ( !v10 )
        return 24LL;
      v11 = v10 - 16;
      if ( !v11 )
        return 25LL;
      if ( v11 == 1 )
        return 26LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a1 == 31 )
    return 13LL;
  if ( a1 > 12 )
  {
    v17 = a1 - 13;
    if ( !v17 )
      return 7LL;
    v18 = v17 - 1;
    if ( !v18 )
      return 8LL;
    v19 = v18 - 1;
    if ( !v19 )
      return 9LL;
    v20 = v19 - 5;
    if ( !v20 )
      return 10LL;
    v21 = v20 - 1;
    if ( !v21 )
      return 11LL;
    if ( v21 == 9 )
      return 12LL;
    return 0xFFFFFFFFLL;
  }
  if ( a1 == 12 )
    return 6LL;
  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 5;
    if ( !v5 )
      return 3LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 4LL;
    if ( v6 == 1 )
      return 5LL;
    return 0xFFFFFFFFLL;
  }
  return result;
}
