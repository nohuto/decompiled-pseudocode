/*
 * XREFs of xxxSetNCFonts @ 0x1C00CD2F8
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00D7C00 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C0018888 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00CD238 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     UserSetFont @ 0x1C00CDA38 (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00CDBB4 (UserSetAltScaleFont.c)
 *     GreSetLFONTOwner @ 0x1C00CDC80 (GreSetLFONTOwner.c)
 *     GreMarkDeletableFont @ 0x1C00CDCAC (GreMarkDeletableFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D0E04 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9244 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

__int64 __fastcall xxxSetNCFonts(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 DPIMetrics; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int LongestString; // ebx
  unsigned int v18; // ebx
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
  if ( !(unsigned int)UserSetFont(a1, v4, 139LL, gpsi + 4032LL)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(gpsi + 4032LL), gpsi + 4136LL) )
  {
    return 0LL;
  }
  v5 = GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *(_QWORD *)(gpsi + 4032LL));
  *((_DWORD *)&gdpiSystem + 18) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, (char *)&gdpiSystem + 76);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *(_QWORD *)(gpsi + 4136LL));
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
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *((_QWORD *)&gdpiSystem + 5));
  *((_DWORD *)&gdpiSystem + 20) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, (char *)&gdpiSystem + 84);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *((_QWORD *)&gdpi96 + 5));
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
  if ( *((_QWORD *)&gMenuState + 17) )
  {
    DPIMetrics = GetDPIMetrics();
    GreSelectFont(*((_QWORD *)&gMenuState + 17), *(_QWORD *)(DPIMetrics + 8));
  }
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *((_QWORD *)&gdpiSystem + 1));
  *((_DWORD *)&gdpiSystem + 12) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v21, (char *)&gdpiSystem + 52);
  *((_DWORD *)&gdpiSystem + 14) = v24;
  *((_DWORD *)&gdpiSystem + 15) = v23;
  *((_DWORD *)&gdpiSystem + 17) = *((_DWORD *)&gdpiSystem + 13) + v23 + *(_DWORD *)(gpsi + 2064LL);
  *((_DWORD *)&gdpiSystem + 16) = v22;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *((_QWORD *)&gdpi96 + 1));
  *((_DWORD *)&gdpi96 + 12) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v21, (char *)&gdpi96 + 52);
  *((_DWORD *)&gdpi96 + 14) = v24;
  *((_DWORD *)&gdpi96 + 15) = v23;
  *((_DWORD *)&gdpi96 + 17) = *((_DWORD *)&gdpi96 + 13) + v23 + *(_DWORD *)(gpsi + 2064LL);
  *((_DWORD *)&gdpi96 + 16) = v22;
  *((_DWORD *)&gdpiSystem + 16) += *(_DWORD *)(gpsi + 1904LL);
  *((_DWORD *)&gdpi96 + 16) += *(_DWORD *)(gpsi + 1904LL);
  v7 = gdpiSystem;
  v8 = *((_QWORD *)&gdpiSystem + 2);
  if ( v8 && v8 != gdpiSystem )
  {
    GreMarkDeletableFont(*((struct HLFONT__ **)&gdpiSystem + 2));
    GreDeleteObject(*((_QWORD *)&gdpiSystem + 2));
    *((_QWORD *)&gdpiSystem + 2) = 0LL;
    v7 = gdpiSystem;
  }
  GreExtGetObjectW(*(HBRUSH *)(v7 + 8), 92LL, v25);
  v9 = v26;
  if ( v26 <= 700 )
    v9 = 700;
  v26 = v9;
  *((_QWORD *)&gdpiSystem + 2) = GreCreateFontIndirectW((__int64)v25);
  v11 = *((_QWORD *)&gdpiSystem + 2);
  if ( v11 )
  {
    LOBYTE(v10) = 10;
    HmgMarkUndeletable(v11, v10);
    GreSetLFONTOwner(*((_QWORD *)&gdpiSystem + 2), 0LL);
  }
  v12 = gdpi96;
  v13 = *((_QWORD *)&gdpi96 + 2);
  if ( v13 && v13 != gdpi96 )
  {
    GreMarkDeletableFont(*((struct HLFONT__ **)&gdpi96 + 2));
    GreDeleteObject(*((_QWORD *)&gdpi96 + 2));
    *((_QWORD *)&gdpi96 + 2) = 0LL;
    v12 = gdpi96;
  }
  GreExtGetObjectW(*(HBRUSH *)(v12 + 8), 92LL, v25);
  v14 = v26;
  if ( v26 <= 700 )
    v14 = 700;
  v26 = v14;
  *((_QWORD *)&gdpi96 + 2) = GreCreateFontIndirectW((__int64)v25);
  v16 = *((_QWORD *)&gdpi96 + 2);
  if ( v16 )
  {
    LOBYTE(v15) = 10;
    HmgMarkUndeletable(v16, v15);
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
  if ( !(unsigned int)UserSetFont(a1, v4, 157LL, gpsi + 4040LL)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(gpsi + 4040LL), gpsi + 4144LL) )
  {
    return 0LL;
  }
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *(_QWORD *)(gpsi + 4040LL));
  *(_DWORD *)(gpsi + 4048LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, gpsi + 4052LL);
  LongestString = (50 * *(_DWORD *)(gpsi + 4048LL) + 2) / 4;
  if ( LongestString <= (unsigned int)xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL)) )
    LongestString = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 4056LL) = LongestString;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *(_QWORD *)(gpsi + 4144LL));
  *(_DWORD *)(gpsi + 4152LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, gpsi + 4156LL);
  v18 = (50 * *(_DWORD *)(gpsi + 4152LL) + 2) / 4;
  if ( v18 <= (unsigned int)xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL)) )
    v18 = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 4160LL) = v18;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), v5);
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPISERVERINFO((struct tagDpiKMMetricsCacheNode *)i);
  return 1LL;
}
