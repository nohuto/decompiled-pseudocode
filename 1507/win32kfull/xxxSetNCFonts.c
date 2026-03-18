/*
 * XREFs of xxxSetNCFonts @ 0x1C0137618
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00FC280 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C005684C (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00FCA30 (GreSetLFONTOwner.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C01375F8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C0137ED0 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C0137F98 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C0138114 (GreMarkDeletableFont.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C013815C (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8C14 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxSetNCFonts(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // kr00_8
  unsigned int LongestString; // ebx
  __int64 v23; // kr08_8
  unsigned int v24; // ebx
  __int64 i; // rbx
  __int64 v26; // [rsp+20h] [rbp-79h] BYREF
  __int64 v27; // [rsp+28h] [rbp-71h]
  __int64 v28; // [rsp+30h] [rbp-69h]
  __int64 v29; // [rsp+38h] [rbp-61h]
  __int64 v30; // [rsp+40h] [rbp-59h]
  __int64 v31; // [rsp+48h] [rbp-51h]
  __int64 v32; // [rsp+50h] [rbp-49h]
  __int64 v33; // [rsp+58h] [rbp-41h]
  __int64 v34; // [rsp+60h] [rbp-39h] BYREF
  __int64 v35; // [rsp+68h] [rbp-31h]
  __int64 v36; // [rsp+70h] [rbp-29h]
  int v37; // [rsp+78h] [rbp-21h]

  if ( a2 )
    v4 = a2 + 24;
  else
    v4 = 0LL;
  if ( !(unsigned int)UserSetFont(
                        a1,
                        v4,
                        139LL,
                        gpsi + 4032LL,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30,
                        v31,
                        v32,
                        v33,
                        v34,
                        v35,
                        v36,
                        v37)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(gpsi + 4032LL), gpsi + 4136LL) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  gdpiSystem[18] = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, &gdpiSystem[19]);
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
  if ( !(unsigned int)UserSetFont(
                        a1,
                        v4,
                        142LL,
                        &gdpiSystem[10],
                        v26,
                        v27,
                        v28,
                        v29,
                        v30,
                        v31,
                        v32,
                        v33,
                        v34,
                        v35,
                        v36,
                        v37)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)&gdpiSystem[10], (char *)&gdpi96 + 40) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  gdpiSystem[20] = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, &gdpiSystem[21]);
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
  if ( !(unsigned int)UserSetFont(
                        a1,
                        v4,
                        145LL,
                        &gdpiSystem[2],
                        v26,
                        v27,
                        v28,
                        v29,
                        v30,
                        v31,
                        v32,
                        v33,
                        v34,
                        v35,
                        v36,
                        v37)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)&gdpiSystem[2], (char *)&gdpi96 + 8) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics(v7, v6, v8);
    GreSelectFontInternal(gMenuState[17]);
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  gdpiSystem[12] = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), &v26, &gdpiSystem[13]);
  gdpiSystem[14] = v30;
  gdpiSystem[15] = v28;
  gdpiSystem[17] = gdpiSystem[13] + v28 + *(_DWORD *)(gpsi + 2064LL);
  gdpiSystem[16] = HIDWORD(v26);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *((_DWORD *)&gdpi96 + 12) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), &v26, (char *)&gdpi96 + 52);
  *((_DWORD *)&gdpi96 + 14) = v30;
  *((_DWORD *)&gdpi96 + 15) = v28;
  *((_DWORD *)&gdpi96 + 17) = *((_DWORD *)&gdpi96 + 13) + v28 + *(_DWORD *)(gpsi + 2064LL);
  *((_DWORD *)&gdpi96 + 16) = HIDWORD(v26);
  gdpiSystem[16] += *(_DWORD *)(gpsi + 1904LL);
  *((_DWORD *)&gdpi96 + 16) += *(_DWORD *)(gpsi + 1904LL);
  v9 = *(_QWORD *)gdpiSystem;
  v10 = *(_QWORD *)&gdpiSystem[4];
  if ( v10 && v10 != *(_QWORD *)gdpiSystem )
  {
    GreMarkDeletableFont(*(struct HLFONT__ **)&gdpiSystem[4]);
    GreDeleteObject(*(_QWORD *)&gdpiSystem[4]);
    *(_QWORD *)&gdpiSystem[4] = 0LL;
    v9 = *(_QWORD *)gdpiSystem;
  }
  GreExtGetObjectW(*(HSURF *)(v9 + 8), 92, (unsigned __int16 *)&v34);
  v11 = v36;
  if ( (int)v36 <= 700 )
    v11 = 700;
  LODWORD(v36) = v11;
  *(_QWORD *)&gdpiSystem[4] = GreCreateFontIndirectW((__int64)&v34);
  v13 = *(_QWORD *)&gdpiSystem[4];
  if ( v13 )
  {
    LOBYTE(v12) = 10;
    HmgMarkUndeletable(v13, v12);
    GreSetLFONTOwner(*(_QWORD *)&gdpiSystem[4], 0, v14);
  }
  v15 = gdpi96;
  v16 = *((_QWORD *)&gdpi96 + 2);
  if ( v16 && v16 != gdpi96 )
  {
    GreMarkDeletableFont(*((struct HLFONT__ **)&gdpi96 + 2));
    GreDeleteObject(*((_QWORD *)&gdpi96 + 2));
    *((_QWORD *)&gdpi96 + 2) = 0LL;
    v15 = gdpi96;
  }
  GreExtGetObjectW(*(HSURF *)(v15 + 8), 92, (unsigned __int16 *)&v34);
  v17 = v36;
  if ( (int)v36 <= 700 )
    v17 = 700;
  LODWORD(v36) = v17;
  *((_QWORD *)&gdpi96 + 2) = GreCreateFontIndirectW((__int64)&v34);
  v19 = *((_QWORD *)&gdpi96 + 2);
  if ( v19 )
  {
    LOBYTE(v18) = 10;
    HmgMarkUndeletable(v19, v18);
    GreSetLFONTOwner(*((_QWORD *)&gdpi96 + 2), 0, v20);
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
  if ( !(unsigned int)UserSetFont(
                        a1,
                        v4,
                        156LL,
                        &gdpiSystem[6],
                        v26,
                        v27,
                        v28,
                        v29,
                        v30,
                        v31,
                        v32,
                        v33,
                        v34,
                        v35,
                        v36,
                        v37)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)&gdpiSystem[6], (char *)&gdpi96 + 24) )
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
  if ( !(unsigned int)UserSetFont(
                        a1,
                        v4,
                        157LL,
                        gpsi + 4040LL,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30,
                        v31,
                        v32,
                        v33,
                        v34,
                        v35,
                        v36,
                        v37)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(gpsi + 4040LL), gpsi + 4144LL) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 4048LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, gpsi + 4052LL);
  v21 = 50 * *(_DWORD *)(gpsi + 4048LL) + 2;
  LongestString = ((BYTE4(v21) & 3) + (int)v21) >> 2;
  if ( LongestString <= xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL)) )
    LongestString = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 4056LL) = LongestString;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 4152LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, gpsi + 4156LL);
  v23 = 50 * *(_DWORD *)(gpsi + 4152LL) + 2;
  v24 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
  if ( v24 <= xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL)) )
    v24 = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 4160LL) = v24;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPISERVERINFO((struct tagDpiKMMetricsCacheNode *)i);
  return 1LL;
}
