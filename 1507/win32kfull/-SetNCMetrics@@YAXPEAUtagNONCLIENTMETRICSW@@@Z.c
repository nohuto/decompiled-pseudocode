/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C014DAB4
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00FC280 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C014E1A0 (bSetDevDragWidth.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx
  __int64 i; // rcx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // ecx
  int v13; // r9d
  int v14; // r10d
  int v15; // ecx
  int v16; // r11d
  int v17; // ebx
  __int64 j; // rdx

  *(_DWORD *)(gpsi + 1892LL) = *((_DWORD *)a1 + 2);
  *(_DWORD *)(gpsi + 1888LL) = *(_DWORD *)(gpsi + 1892LL);
  *(_DWORD *)(gpsi + 1964LL) = *((_DWORD *)a1 + 3);
  *(_DWORD *)(gpsi + 1960LL) = *(_DWORD *)(gpsi + 1964LL);
  *(_DWORD *)(gpsi + 1920LL) = *((_DWORD *)a1 + 3);
  *(_DWORD *)(gpsi + 1916LL) = *(_DWORD *)(gpsi + 1920LL);
  *(_DWORD *)(gpsi + 2000LL) = *((_DWORD *)a1 + 4);
  *(_DWORD *)(gpsi + 2004LL) = *((_DWORD *)a1 + 5);
  *(_DWORD *)(gpsi + 1896LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2004LL);
  if ( *(_DWORD *)a1 == 504 )
    *(_DWORD *)(gpsi + 2248LL) = *((_DWORD *)a1 + 125);
  v2 = *(_DWORD *)(gpsi + 1924LL) / 2;
  if ( *(_DWORD *)(gpsi + 2000LL) - *(_DWORD *)(gpsi + 2060LL) < v2 )
    v2 = *(_DWORD *)(gpsi + 2000LL) - *(_DWORD *)(gpsi + 2060LL);
  *(_DWORD *)(gpsi + 2076LL) = v2 & 0xFFFFFFFE;
  v3 = *(_DWORD *)(gpsi + 1928LL) / 2;
  if ( *(_DWORD *)(gpsi + 2004LL) - *(_DWORD *)(gpsi + 2064LL) < v3 )
    v3 = *(_DWORD *)(gpsi + 2004LL) - *(_DWORD *)(gpsi + 2064LL);
  *(_DWORD *)(gpsi + 2080LL) = v3 & 0xFFFFFFFE;
  v4 = *(_DWORD *)(gpsi + 2080LL);
  if ( *(_DWORD *)(gpsi + 2076LL) < v4 )
    v4 = *(_DWORD *)(gpsi + 2076LL);
  for ( i = 2076LL; i < 2084; i += 4LL )
    *(_DWORD *)(i + gpsi) = v4;
  *(_DWORD *)(gpsi + 2088LL) = *((_DWORD *)a1 + 29);
  *(_DWORD *)(gpsi + 2092LL) = *((_DWORD *)a1 + 30);
  *(_DWORD *)(gpsi + 2084LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2092LL);
  *(_DWORD *)(gpsi + 2096LL) = *((_DWORD *)a1 + 54);
  *(_DWORD *)(gpsi + 2100LL) = *((_DWORD *)a1 + 55);
  *(_DWORD *)(gpsi + 1940LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2100LL);
  *(_DWORD *)(gpsi + 4024LL) = *((_DWORD *)a1 + 1);
  *(_DWORD *)(gpsi + 2008LL) = *(_DWORD *)(gpsi + 2060LL)
                             + *(_DWORD *)(gpsi + 1900LL) * (*(_DWORD *)(gpsi + 4024LL) + 1);
  *(_DWORD *)(gpsi + 2012LL) = *(_DWORD *)(gpsi + 2064LL)
                             + *(_DWORD *)(gpsi + 1904LL) * (*(_DWORD *)(gpsi + 4024LL) + 1);
  v6 = gdpi96[19] + *(_DWORD *)(gpsi + 2064LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2004LL), 96, *(unsigned __int16 *)(gpsi + 7286LL)) > v6 )
    v6 = EngMulDiv(*(_DWORD *)(gpsi + 2004LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2392LL) = v6;
  v7 = 4 * *(_DWORD *)(gpsi + 2060LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2000LL), 96, *(unsigned __int16 *)(gpsi + 7286LL)) > v7 )
    v7 = EngMulDiv(*(_DWORD *)(gpsi + 2000LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2388LL) = v7;
  v8 = gdpi96[21] + *(_DWORD *)(gpsi + 2064LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2092LL), 96, *(unsigned __int16 *)(gpsi + 7286LL)) > v8 )
    v8 = EngMulDiv(*(_DWORD *)(gpsi + 2092LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2480LL) = v8;
  v9 = 4 * *(_DWORD *)(gpsi + 2060LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2088LL), 96, *(unsigned __int16 *)(gpsi + 7286LL)) > v9 )
    v9 = EngMulDiv(*(_DWORD *)(gpsi + 2088LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2476LL) = v9;
  v10 = gdpi96[13] + gdpi96[15] + *(_DWORD *)(gpsi + 2064LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2100LL), 96, *(unsigned __int16 *)(gpsi + 7286LL)) > v10 )
    v10 = EngMulDiv(*(_DWORD *)(gpsi + 2100LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2488LL) = v10;
  v11 = 4 * *(_DWORD *)(gpsi + 2060LL);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2096LL), 96, *(unsigned __int16 *)(gpsi + 7286LL)) > v11 )
    v11 = EngMulDiv(*(_DWORD *)(gpsi + 2096LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2484LL) = v11;
  *(_DWORD *)(gpsi + 2328LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2488LL);
  *(_DWORD *)(gpsi + 2284LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2392LL);
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 1904LL) + *(_DWORD *)(gpsi + 2480LL);
  *(_DWORD *)(gpsi + 2636LL) = EngMulDiv(*(_DWORD *)(gpsi + 2248LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2352LL) = EngMulDiv(*(_DWORD *)(gpsi + 1964LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2308LL) = EngMulDiv(*(_DWORD *)(gpsi + 1920LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2276LL) = EngMulDiv(*(_DWORD *)(gpsi + 1888LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2280LL) = EngMulDiv(*(_DWORD *)(gpsi + 1892LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2348LL) = EngMulDiv(*(_DWORD *)(gpsi + 1960LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2304LL) = EngMulDiv(*(_DWORD *)(gpsi + 1916LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 4128LL) = EngMulDiv(*(_DWORD *)(gpsi + 4024LL), 96, *(unsigned __int16 *)(gpsi + 7286LL));
  *(_DWORD *)(gpsi + 2396LL) = *(_DWORD *)(gpsi + 2060LL)
                             + *(_DWORD *)(gpsi + 1900LL) * (*(_DWORD *)(gpsi + 4128LL) + 1);
  *(_DWORD *)(gpsi + 2400LL) = *(_DWORD *)(gpsi + 2064LL)
                             + *(_DWORD *)(gpsi + 1904LL) * (*(_DWORD *)(gpsi + 4128LL) + 1);
  v12 = *(_DWORD *)(gpsi + 2248LL);
  v13 = v12 + *(_DWORD *)(gpsi + 2008LL);
  v14 = v12 + *(_DWORD *)(gpsi + 2012LL);
  v15 = *(_DWORD *)(gpsi + 2636LL);
  v16 = v15 + *(_DWORD *)(gpsi + 2396LL);
  v17 = v15 + *(_DWORD *)(gpsi + 2400LL);
  *(_DWORD *)(gpsi + 2016LL) = *(_DWORD *)(gpsi + 2004LL)
                             + 3 * *(_DWORD *)(gpsi + 2000LL)
                             + 2 * (v13 + *(_DWORD *)(gpsi + 2060LL) + 2 * gdpiSystem[18]);
  *(_DWORD *)(gpsi + 2020LL) = *(_DWORD *)(gpsi + 1896LL) + 2 * v14;
  *(_DWORD *)(gpsi + 2116LL) = *(_DWORD *)(gpsi + 2192LL) + 2 * (v13 + *(_DWORD *)(gpsi + 2060LL));
  *(_DWORD *)(gpsi + 2120LL) = *(_DWORD *)(gpsi + 2196LL) + 2 * (v14 + *(_DWORD *)(gpsi + 2064LL));
  *(_DWORD *)(gpsi + 2504LL) = *(_DWORD *)(gpsi + 2580LL) + 2 * (v16 + *(_DWORD *)(gpsi + 2448LL));
  *(_DWORD *)(gpsi + 2508LL) = *(_DWORD *)(gpsi + 2584LL) + 2 * (v17 + *(_DWORD *)(gpsi + 2452LL));
  for ( j = 1992LL; j < 2000; j += 4LL )
    *(_DWORD *)(j + gpsi) = *(_DWORD *)(j + gpsi + 24);
  *(_DWORD *)(gpsi + 2112LL) = *(_DWORD *)(gpsi + 2004LL) + 2 * *(_DWORD *)(gpsi + 1912LL);
  bSetDevDragWidth(*gpDispInfo, (unsigned int)(*(_DWORD *)(gpsi + 4024LL) + 3));
  SetDesktopMetrics();
}
