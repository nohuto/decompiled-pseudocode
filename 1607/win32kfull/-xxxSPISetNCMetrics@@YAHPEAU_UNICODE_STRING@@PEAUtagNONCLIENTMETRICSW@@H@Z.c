/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01CE1B4
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C008E2D4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CD57C (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01CDEE0 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01CDF0C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CE450 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(
        struct _UNICODE_STRING *a1,
        struct tagNONCLIENTMETRICSW *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  BOOL v6; // ebp
  struct _UNICODE_STRING *v7; // r15
  int v8; // edi
  unsigned int v9; // esi
  int *v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi

  v4 = a3;
  v6 = a3 == 0;
  v7 = a1;
  v8 = 1;
  v9 = 0;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) != 0 )
    {
      if ( IsDPIDWMSysMet(0x5CuLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v11, (__int64)a2, a3, a4) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4) + 408)
          ? (v12 = 0)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         (__int64)a2,
                                                         a3,
                                                         a4)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v12) )
      {
        v10 = (int *)(gpsi + 3024LL);
      }
      else
      {
        v10 = (int *)(gpsi + 2248LL);
      }
    }
    else
    {
      v10 = (int *)(gpsi + 2636LL);
    }
    v13 = *v10;
    *((_DWORD *)a2 + 1) -= *v10;
    a1 = (struct _UNICODE_STRING *)*((unsigned int *)a2 + 1);
    *((_DWORD *)a2 + 125) = v13;
    if ( (int)a1 < 1 )
    {
      *((_DWORD *)a2 + 1) = 1;
      v14 = (_DWORD)a1 + v13 - 1;
      if ( v14 < 0 )
        v14 = 0;
      *((_DWORD *)a2 + 125) = v14;
    }
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) == 0 )
    RescaleNonClientMetrics(a2);
  v15 = 50;
  if ( *((int *)a2 + 1) > 1 )
    v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 50 )
    v15 = v8;
  *((_DWORD *)a2 + 1) = v15;
  if ( v4 )
  {
    v16 = SetWindowMetricInt(v7, 0x88u, v15);
    v17 = SetWindowMetricInt(v7, 0x98u, *((_DWORD *)a2 + 2)) & v16;
    v18 = SetWindowMetricInt(v7, 0x99u, *((_DWORD *)a2 + 3)) & v17;
    v19 = SetWindowMetricInt(v7, 0x89u, *((_DWORD *)a2 + 4)) & v18;
    v20 = SetWindowMetricInt(v7, 0x8Au, *((_DWORD *)a2 + 5)) & v19;
    v21 = SetWindowMetricInt(v7, 0x8Cu, *((_DWORD *)a2 + 29)) & v20;
    v22 = SetWindowMetricInt(v7, 0x8Du, *((_DWORD *)a2 + 30)) & v21;
    v23 = SetWindowMetricInt(v7, 0x8Fu, *((_DWORD *)a2 + 54)) & v22;
    v24 = SetWindowMetricInt(v7, 0x90u, *((_DWORD *)a2 + 55)) & v23;
    v25 = SetWindowMetricFont(v7, 0x8Bu, (struct tagLOGFONTW *)((char *)a2 + 24)) & v24;
    v26 = SetWindowMetricFont(v7, 0x8Eu, (struct tagLOGFONTW *)((char *)a2 + 124)) & v25;
    v27 = SetWindowMetricFont(v7, 0x91u, (struct tagLOGFONTW *)((char *)a2 + 224)) & v26;
    v28 = SetWindowMetricFont(v7, 0x9Cu, (struct tagLOGFONTW *)((char *)a2 + 316)) & v27;
    v29 = SetWindowMetricFont(v7, 0x9Du, (struct tagLOGFONTW *)((char *)a2 + 408)) & v28;
    v9 = SetWindowMetricInt(v7, 0x9Eu, *((_DWORD *)a2 + 125)) & v29;
    v6 = v9;
  }
  if ( v6 )
    xxxSetAndDrawNCMetrics(v7, *((_DWORD *)a2 + 1), a2);
  return v9;
}
