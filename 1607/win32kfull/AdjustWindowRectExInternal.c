/*
 * XREFs of AdjustWindowRectExInternal @ 0x1C006D828
 * Callers:
 *     _AdjustWindowRectExForDpi @ 0x1C006D7AC (_AdjustWindowRectExForDpi.c)
 * Callees:
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C006EB78 (GetWindowBordersWithCompatFlags2.c)
 *     NeedsWindowEdge @ 0x1C006F638 (NeedsWindowEdge.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01DFF90 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01DFFE0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E0100 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExInternal(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v10; // r8d
  unsigned int v11; // edi
  __int64 result; // rax
  int v13; // r8d
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v18; // r11
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r11
  __int64 v24; // rbp

  if ( (unsigned int)NeedsWindowEdge(a2, a4, a5 >= 0x400) )
    v11 = a4 | 0x100;
  else
    v11 = a4 & 0xFFFFFEFF;
  if ( (BYTE2(a2) & 0xC0) != 0xC0 )
    goto LABEL_4;
  if ( (v11 & 0x80u) != 0 )
  {
    if ( !a7 )
    {
      if ( (a6 & 0x2000000) != 0 || !(unsigned int)IsDPIAbsoluteSysMet(51LL) )
        v16 = gpsi + 1880LL;
      else
        v16 = gpsi + 2268LL;
      v15 = *(_DWORD *)(v16 + 204);
      goto LABEL_12;
    }
    if ( a7 == *(unsigned __int16 *)(gpsi + 8678LL) )
    {
      v15 = *(_DWORD *)(gpsi + 2084LL);
      goto LABEL_12;
    }
    if ( a7 == 96 )
    {
      v15 = *(_DWORD *)(gpsi + 2472LL);
      goto LABEL_12;
    }
    DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a7);
    if ( DpiDepSysMetCachePlateauSlot != -1 )
    {
      v19 = 112LL * DpiDepSysMetCachePlateauSlot;
      v15 = *(_DWORD *)(v18 + v19 + 3124);
      if ( v15 != -1 )
        goto LABEL_12;
      EnsureDpiDepSysMetCacheForPlateau(a7);
      v15 = *(_DWORD *)(gpsi + v19 + 3124);
LABEL_26:
      if ( v15 == -1 )
        v15 = 0;
      goto LABEL_12;
    }
    v20 = 51LL;
LABEL_41:
    v15 = ScaleSystemMetricForDPIWithoutCache(v20, a7);
    goto LABEL_12;
  }
  if ( !a7 )
  {
    if ( (a6 & 0x2000000) != 0 || !(unsigned int)IsDPIAbsoluteSysMet(4LL) )
      v21 = gpsi + 1880LL;
    else
      v21 = gpsi + 2268LL;
    v15 = *(_DWORD *)(v21 + 16);
    goto LABEL_12;
  }
  if ( a7 != *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    if ( a7 == 96 )
    {
      v15 = *(_DWORD *)(gpsi + 2284LL);
      goto LABEL_12;
    }
    v22 = GetDpiDepSysMetCachePlateauSlot(a7);
    if ( v22 != -1 )
    {
      v24 = 112LL * v22;
      v15 = *(_DWORD *)(v23 + v24 + 3052);
      if ( v15 != -1 )
        goto LABEL_12;
      EnsureDpiDepSysMetCacheForPlateau(a7);
      v15 = *(_DWORD *)(gpsi + v24 + 3052);
      goto LABEL_26;
    }
    v20 = 4LL;
    goto LABEL_41;
  }
  v15 = *(_DWORD *)(gpsi + 1896LL);
LABEL_12:
  a1[1] -= v15;
LABEL_4:
  result = GetWindowBordersWithCompatFlags2(a2, v11, v10, 1, a6, a7);
  if ( (_DWORD)result )
  {
    v13 = *(_DWORD *)(gpsi + 1904LL) * result;
    v14 = result * *(_DWORD *)(gpsi + 1900LL);
    a1[1] -= v13;
    *a1 -= v14;
    a1[2] += v14;
    a1[3] += v13;
  }
  return result;
}
