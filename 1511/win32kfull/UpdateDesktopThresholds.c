/*
 * XREFs of UpdateDesktopThresholds @ 0x1C00D885C
 * Callers:
 *     SetDesktopMetrics @ 0x1C00D8690 (SetDesktopMetrics.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00D8804 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 * Callees:
 *     ?UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C00D89E0 (-UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C00D8B18 (-UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z.c)
 */

__int64 UpdateDesktopThresholds()
{
  __int64 v0; // rax
  struct tagMONITOR_MARGIN *v1; // rbx
  int *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 *v6; // r8
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(unsigned int *)(gpDispInfo + 80LL);
  if ( !(_DWORD)v0 )
    return 0LL;
  if ( (unsigned __int64)(24 * v0) > 0xFFFFFFFF )
    return 0LL;
  v1 = (struct tagMONITOR_MARGIN *)Win32AllocPoolZInit((unsigned int)(24 * v0), 1835101525LL);
  if ( !v1 )
    return 0LL;
  v2 = (int *)&unk_1C02E2350;
  v3 = 4LL;
  do
  {
    v4 = *v2;
    v16 = 0;
    UpdateDesktopThresholdsWorker(v1, (unsigned int)v4, &v16);
    if ( v16 )
    {
      v5 = (unsigned int)dword_1C02E5660[v4];
      v6 = (__int64 *)((char *)v1 + 16);
      v7 = (unsigned int)dword_1C02E5670[v4];
      v8 = v4;
      v9 = (unsigned int)dword_1C02E5680[v4];
      v10 = v16;
      v11 = (unsigned int)dword_1C02E5690[v8];
      v12 = (unsigned int)dword_1C02E56A0[v8];
      v13 = (unsigned int)dword_1C02E56B0[v8];
      do
      {
        v14 = *v6;
        v6 += 3;
        *(_BYTE *)(v8 + v14 + 464) = gWinArrGlobal[v5];
        *(_BYTE *)(v8 + v14 + 468) = gWinArrGlobal[v7];
        *(_BYTE *)(v8 + v14 + 472) = gWinArrGlobal[v9];
        *(_BYTE *)(v8 + v14 + 476) = gWinArrGlobal[v11];
        *(_BYTE *)(v8 + v14 + 480) = gWinArrGlobal[v12];
        *(_BYTE *)(v8 + v14 + 484) = gWinArrGlobal[v13];
        *(_BYTE *)(v8 + v14 + 488) = 1;
        --v10;
      }
      while ( v10 );
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  UpdateDesktopMonitorNavigationOrder(v1);
  Win32FreePool(v1);
  return 1LL;
}
