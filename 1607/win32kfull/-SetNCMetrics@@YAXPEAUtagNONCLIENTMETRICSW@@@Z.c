/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00BA240
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00B9EA0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C00BAF04 (bSetDevDragWidth.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // ecx
  int v12; // r9d
  int v13; // r10d
  int v14; // ecx
  int v15; // r11d
  int v16; // ebx
  __int64 i; // rdx

  SetDpiDepSysMet(2LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(20LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(21LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(9LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(30LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(31LL, *((unsigned int *)a1 + 5));
  SetDpiDepSysMet(4LL, (unsigned int)(*(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2004LL)));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(92LL, *((unsigned int *)a1 + 125));
  v2 = *(_DWORD *)(gpsi + 1924LL) / 2;
  if ( *(_DWORD *)(gpsi + 2000LL) - *(_DWORD *)(gpsi + 2060LL) < v2 )
    v2 = *(_DWORD *)(gpsi + 2000LL) - *(_DWORD *)(gpsi + 2060LL);
  SetDpiDepSysMet(49LL, v2 & 0xFFFFFFFE);
  v3 = *(_DWORD *)(gpsi + 1928LL) / 2;
  if ( *(_DWORD *)(gpsi + 2004LL) - *(_DWORD *)(gpsi + 2064LL) < v3 )
    v3 = *(_DWORD *)(gpsi + 2004LL) - *(_DWORD *)(gpsi + 2064LL);
  SetDpiDepSysMet(50LL, v3 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(gpsi + 2080LL);
  if ( *(_DWORD *)(gpsi + 2076LL) < (signed int)v4 )
    v4 = *(_DWORD *)(gpsi + 2076LL);
  SetDpiDepSysMet(49LL, v4);
  SetDpiDepSysMet(50LL, v4);
  SetDpiDepSysMet(52LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(53LL, *((unsigned int *)a1 + 30));
  SetDpiDepSysMet(51LL, (unsigned int)(*(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2092LL)));
  SetDpiDepSysMet(54LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(55LL, *((unsigned int *)a1 + 55));
  SetDpiDepSysMet(15LL, (unsigned int)(*(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2100LL)));
  *(_DWORD *)(gpsi + 5416LL) = *((_DWORD *)a1 + 1);
  SetDpiDepSysMet(
    32LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2060LL) + *(_DWORD *)(gpsi + 1900LL) * (*(_DWORD *)(gpsi + 5416LL) + 1)));
  SetDpiDepSysMet(
    33LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2064LL) + *(_DWORD *)(gpsi + 1904LL) * (*(_DWORD *)(gpsi + 5416LL) + 1)));
  v5 = HIDWORD(gdpi96[9]) + *(_DWORD *)(gpsi + 2064LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2004LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v5 )
    v5 = EngMulDiv(*(_DWORD *)(gpsi + 2004LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2392LL) = v5;
  v6 = 4 * *(_DWORD *)(gpsi + 2060LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2000LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v6 )
    v6 = EngMulDiv(*(_DWORD *)(gpsi + 2000LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2388LL) = v6;
  v7 = HIDWORD(gdpi96[10]) + *(_DWORD *)(gpsi + 2064LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2092LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v7 )
    v7 = EngMulDiv(*(_DWORD *)(gpsi + 2092LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2480LL) = v7;
  v8 = 4 * *(_DWORD *)(gpsi + 2060LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2088LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v8 )
    v8 = EngMulDiv(*(_DWORD *)(gpsi + 2088LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2476LL) = v8;
  v9 = HIDWORD(gdpi96[6]) + HIDWORD(gdpi96[7]) + *(_DWORD *)(gpsi + 2064LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2100LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v9 )
    v9 = EngMulDiv(*(_DWORD *)(gpsi + 2100LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2488LL) = v9;
  v10 = 4 * *(_DWORD *)(gpsi + 2060LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2096LL), 96, *(unsigned __int16 *)(gpsi + 8678LL)) > v10 )
    v10 = EngMulDiv(*(_DWORD *)(gpsi + 2096LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2484LL) = v10;
  *(_DWORD *)(gpsi + 2328LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2488LL);
  *(_DWORD *)(gpsi + 2284LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2392LL);
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2480LL);
  *(_DWORD *)(gpsi + 2636LL) = EngMulDiv(*(_DWORD *)(gpsi + 2248LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2352LL) = EngMulDiv(*(_DWORD *)(gpsi + 1964LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2308LL) = EngMulDiv(*(_DWORD *)(gpsi + 1920LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2276LL) = EngMulDiv(*(_DWORD *)(gpsi + 1888LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2280LL) = EngMulDiv(*(_DWORD *)(gpsi + 1892LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2348LL) = EngMulDiv(*(_DWORD *)(gpsi + 1960LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2304LL) = EngMulDiv(*(_DWORD *)(gpsi + 1916LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 5520LL) = EngMulDiv(*(_DWORD *)(gpsi + 5416LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2396LL) = *(_DWORD *)(gpsi + 2060LL)
                             + *(_DWORD *)(gpsi + 1900LL) * (*(_DWORD *)(gpsi + 5520LL) + 1);
  *(_DWORD *)(gpsi + 2400LL) = *(_DWORD *)(gpsi + 2064LL)
                             + *(_DWORD *)(gpsi + 1904LL) * (*(_DWORD *)(gpsi + 5520LL) + 1);
  v11 = *(_DWORD *)(gpsi + 2248LL);
  v12 = v11 + *(_DWORD *)(gpsi + 2008LL);
  v13 = v11 + *(_DWORD *)(gpsi + 2012LL);
  v14 = *(_DWORD *)(gpsi + 2636LL);
  v15 = v14 + *(_DWORD *)(gpsi + 2396LL);
  v16 = v14 + *(_DWORD *)(gpsi + 2400LL);
  *(_DWORD *)(gpsi + 2016LL) = *(_DWORD *)(gpsi + 2004LL)
                             + 3 * *(_DWORD *)(gpsi + 2000LL)
                             + 2 * (v12 + *(_DWORD *)(gpsi + 2060LL) + 2 * gdpiSystem[18]);
  *(_DWORD *)(gpsi + 2020LL) = *(_DWORD *)(gpsi + 1896LL) + 2 * v13;
  *(_DWORD *)(gpsi + 2116LL) = *(_DWORD *)(gpsi + 2192LL) + 2 * (v12 + *(_DWORD *)(gpsi + 2060LL));
  *(_DWORD *)(gpsi + 2120LL) = *(_DWORD *)(gpsi + 2196LL) + 2 * (v13 + *(_DWORD *)(gpsi + 2064LL));
  *(_DWORD *)(gpsi + 2504LL) = *(_DWORD *)(gpsi + 2580LL) + 2 * (v15 + *(_DWORD *)(gpsi + 2448LL));
  *(_DWORD *)(gpsi + 2508LL) = *(_DWORD *)(gpsi + 2584LL) + 2 * (v16 + *(_DWORD *)(gpsi + 2452LL));
  for ( i = 1992LL; i < 2000; i += 4LL )
    *(_DWORD *)(i + gpsi) = *(_DWORD *)(i + gpsi + 24);
  *(_DWORD *)(gpsi + 2112LL) = *(_DWORD *)(gpsi + 2004LL) + 2 * *(_DWORD *)(gpsi + 1912LL);
  bSetDevDragWidth(*gpDispInfo, (unsigned int)(*(_DWORD *)(gpsi + 5416LL) + 3));
  SetDesktopMetrics();
}
