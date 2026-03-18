/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C00392E0
 * Callers:
 *     UpdateDesktopThresholds @ 0x1C0039024 (UpdateDesktopThresholds.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateDesktopMonitorNavigationOrder(struct tagMONITOR_MARGIN *Base)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 i; // rdx
  unsigned int v5; // r9d
  char *v6; // rsi
  _QWORD *v7; // r10
  int v8; // edx
  unsigned int v9; // edx
  _QWORD *v10; // rcx

  v2 = 0LL;
  v3 = 255;
  for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 24) & 1) != 0 && (unsigned int)v2 < *(_DWORD *)(gpDispInfo + 80LL) )
    {
      *((_QWORD *)Base + 3 * v2 + 2) = i;
      *(_QWORD *)(i + 496) = 0LL;
      *(_QWORD *)(i + 504) = 0LL;
      v2 = (unsigned int)(v2 + 1);
    }
  }
  qsort(Base, (unsigned int)v2, 0x18uLL, MonitorCoordComp);
  v5 = 0;
  *(_QWORD *)(gpDispInfo + 200LL) = gpDispInfo + 192LL;
  *(_QWORD *)(gpDispInfo + 192LL) = gpDispInfo + 192LL;
  if ( !(_DWORD)v2 )
    goto LABEL_16;
  v6 = (char *)Base + 16;
  do
  {
    v7 = (_QWORD *)(*(_QWORD *)v6 + 496LL);
    v8 = *(_DWORD *)(*(_QWORD *)v6 + 104LL) - *(_DWORD *)(*(_QWORD *)v6 + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)v6 + 100LL) - *(_DWORD *)(*(_QWORD *)v6 + 92LL) < v8 )
      v8 = *(_DWORD *)(*(_QWORD *)v6 + 100LL) - *(_DWORD *)(*(_QWORD *)v6 + 92LL);
    v9 = (unsigned int)v8 >> 1;
    if ( v3 >= v9 )
      v3 = v9;
    v10 = *(_QWORD **)(gpDispInfo + 200LL);
    *v7 = gpDispInfo + 192LL;
    v7[1] = v10;
    if ( *v10 != gpDispInfo + 192LL )
      __fastfail(3u);
    ++v5;
    *v10 = v7;
    v6 += 24;
    *(_QWORD *)(gpDispInfo + 200LL) = v7;
  }
  while ( v5 < (unsigned int)v2 );
  if ( v3 == -1 )
    *(_DWORD *)(gpDispInfo + 184LL) = 0;
  else
LABEL_16:
    *(_DWORD *)(gpDispInfo + 184LL) = v3;
}
