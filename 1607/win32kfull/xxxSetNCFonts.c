/*
 * XREFs of xxxSetNCFonts @ 0x1C00B8670
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00B9EA0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     UserSetFont @ 0x1C00B8F28 (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00B90A4 (UserSetAltScaleFont.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     GreMarkDeletableFont @ 0x1C00B919C (GreMarkDeletableFont.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00B91E4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00B9BBC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFACC (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxSetNCFonts(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // kr00_8
  unsigned int LongestString; // ebx
  __int64 v18; // kr08_8
  unsigned int v19; // ebx
  __int64 i; // rbx
  _BYTE v21[4]; // [rsp+20h] [rbp-79h] BYREF
  int v22; // [rsp+24h] [rbp-75h]
  int v23; // [rsp+30h] [rbp-69h]
  int v24; // [rsp+40h] [rbp-59h]
  unsigned __int16 v25[8]; // [rsp+60h] [rbp-39h] BYREF
  int v26; // [rsp+70h] [rbp-29h]

  if ( a2 )
    v4 = a2 + 24;
  else
    v4 = 0LL;
  if ( !(unsigned int)UserSetFont(a1, v4, 139LL, gpsi + 5424LL)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(gpsi + 5424LL), gpsi + 5528LL) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpiSystem + 18) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, (char *)&gdpiSystem + 76);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpi96 + 18) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, (char *)&gdpi96 + 76);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)(a2 + 124);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 140);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 156);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 172);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 188);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(a2 + 204);
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(a2 + 212);
  }
  if ( !(unsigned int)UserSetFont(a1, v4, 142LL, (char *)&gdpiSystem + 40)
    || !(unsigned int)UserSetAltScaleFont(*((_QWORD *)&gdpiSystem + 5), (char *)&gdpi96 + 40) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpiSystem + 20) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, (char *)&gdpiSystem + 84);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpi96 + 20) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, (char *)&gdpi96 + 84);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)(a2 + 224);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 240);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 256);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 272);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 288);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(a2 + 304);
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(a2 + 312);
  }
  if ( !(unsigned int)UserSetFont(a1, v4, 145LL, (char *)&gdpiSystem + 8)
    || !(unsigned int)UserSetAltScaleFont(*((_QWORD *)&gdpiSystem + 1), (char *)&gdpi96 + 8) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics();
    GreSelectFontInternal(gMenuState[17]);
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpiSystem + 12) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v21, (char *)&gdpiSystem + 52);
  *((_DWORD *)&gdpiSystem + 14) = v24;
  *((_DWORD *)&gdpiSystem + 15) = v23;
  *((_DWORD *)&gdpiSystem + 17) = *((_DWORD *)&gdpiSystem + 13) + v23 + *(_DWORD *)(gpsi + 2064LL);
  *((_DWORD *)&gdpiSystem + 16) = v22;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpi96 + 12) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v21, (char *)&gdpi96 + 52);
  *((_DWORD *)&gdpi96 + 14) = v24;
  *((_DWORD *)&gdpi96 + 15) = v23;
  *((_DWORD *)&gdpi96 + 17) = *((_DWORD *)&gdpi96 + 13) + v23 + *(_DWORD *)(gpsi + 2064LL);
  *((_DWORD *)&gdpi96 + 16) = v22;
  *((_DWORD *)&gdpiSystem + 16) += *(_DWORD *)(gpsi + 1904LL);
  *((_DWORD *)&gdpi96 + 16) += *(_DWORD *)(gpsi + 1904LL);
  v6 = gdpiSystem;
  v7 = *((_QWORD *)&gdpiSystem + 2);
  if ( v7 && v7 != gdpiSystem )
  {
    GreMarkDeletableFont(*((struct HLFONT__ **)&gdpiSystem + 2));
    GreDeleteObject(*((_QWORD *)&gdpiSystem + 2));
    *((_QWORD *)&gdpiSystem + 2) = 0LL;
    v6 = gdpiSystem;
  }
  GreExtGetObjectW(*(struct HLFONT__ **)(v6 + 8), 92, v25);
  v8 = v26;
  if ( v26 <= 700 )
    v8 = 700;
  v26 = v8;
  *((_QWORD *)&gdpiSystem + 2) = GreCreateFontIndirectW((__int64)v25);
  v10 = *((_QWORD *)&gdpiSystem + 2);
  if ( v10 )
  {
    LOBYTE(v9) = 10;
    HmgMarkUndeletable(v10, v9);
    GreSetLFONTOwner(*((_QWORD *)&gdpiSystem + 2), 0LL);
  }
  v11 = gdpi96;
  v12 = *((_QWORD *)&gdpi96 + 2);
  if ( v12 && v12 != gdpi96 )
  {
    GreMarkDeletableFont(*((struct HLFONT__ **)&gdpi96 + 2));
    GreDeleteObject(*((_QWORD *)&gdpi96 + 2));
    *((_QWORD *)&gdpi96 + 2) = 0LL;
    v11 = gdpi96;
  }
  GreExtGetObjectW(*(struct HLFONT__ **)(v11 + 8), 92, v25);
  v13 = v26;
  if ( v26 <= 700 )
    v13 = 700;
  v26 = v13;
  *((_QWORD *)&gdpi96 + 2) = GreCreateFontIndirectW((__int64)v25);
  v15 = *((_QWORD *)&gdpi96 + 2);
  if ( v15 )
  {
    LOBYTE(v14) = 10;
    HmgMarkUndeletable(v15, v14);
    GreSetLFONTOwner(*((_QWORD *)&gdpi96 + 2), 0LL);
  }
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)(a2 + 316);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 332);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 348);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 364);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 380);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(a2 + 396);
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(a2 + 404);
  }
  if ( !(unsigned int)UserSetFont(a1, v4, 156LL, (char *)&gdpiSystem + 24)
    || !(unsigned int)UserSetAltScaleFont(*((_QWORD *)&gdpiSystem + 3), (char *)&gdpi96 + 24) )
  {
    return 0LL;
  }
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(a2 + 496);
  }
  if ( !(unsigned int)UserSetFont(a1, v4, 157LL, gpsi + 5432LL)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(gpsi + 5432LL), gpsi + 5536LL) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 5440LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, gpsi + 5444LL);
  v16 = 50 * *(_DWORD *)(gpsi + 5440LL) + 2;
  LongestString = ((BYTE4(v16) & 3) + (int)v16) >> 2;
  if ( LongestString <= xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL)) )
    LongestString = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 5448LL) = LongestString;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 5544LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, gpsi + 5548LL);
  v18 = 50 * *(_DWORD *)(gpsi + 5544LL) + 2;
  v19 = ((BYTE4(v18) & 3) + (int)v18) >> 2;
  if ( v19 <= xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL)) )
    v19 = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 5552LL) = v19;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPISERVERINFO((struct tagDpiKMMetricsCacheNode *)i);
  return 1LL;
}
