/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D5790
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0132FF0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D4B0C (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01D54A0 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D54CC (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D5A6C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  BOOL v5; // ebp
  struct _UNICODE_STRING *v6; // r15
  int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rcx
  int *v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r8d
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
  int v30; // esi

  v5 = a3 == 0;
  v6 = a1;
  v7 = 1;
  v8 = 0;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0 )
    {
      if ( IsDPIDWMSysMet(0x5CuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v12 = 0)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
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
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) == 0 )
  {
    RescaleNonClientMetrics(a2);
  }
  v16 = 50;
  if ( *((int *)a2 + 1) > 1 )
    v7 = *((_DWORD *)a2 + 1);
  if ( v7 < 50 )
    v16 = v7;
  *((_DWORD *)a2 + 1) = v16;
  if ( a3 )
  {
    v17 = SetWindowMetricInt(v6, 0x88u, v16);
    v18 = SetWindowMetricInt(v6, 0x98u, *((_DWORD *)a2 + 2)) & v17;
    v19 = SetWindowMetricInt(v6, 0x99u, *((_DWORD *)a2 + 3)) & v18;
    v20 = SetWindowMetricInt(v6, 0x89u, *((_DWORD *)a2 + 4)) & v19;
    v21 = SetWindowMetricInt(v6, 0x8Au, *((_DWORD *)a2 + 5)) & v20;
    v22 = SetWindowMetricInt(v6, 0x8Cu, *((_DWORD *)a2 + 29)) & v21;
    v23 = SetWindowMetricInt(v6, 0x8Du, *((_DWORD *)a2 + 30)) & v22;
    v24 = SetWindowMetricInt(v6, 0x8Fu, *((_DWORD *)a2 + 54)) & v23;
    v25 = SetWindowMetricInt(v6, 0x90u, *((_DWORD *)a2 + 55)) & v24;
    v26 = SetWindowMetricFont(v6, 0x8Bu, (struct tagLOGFONTW *)((char *)a2 + 24)) & v25;
    v27 = SetWindowMetricFont(v6, 0x8Eu, (struct tagLOGFONTW *)((char *)a2 + 124)) & v26;
    v28 = SetWindowMetricFont(v6, 0x91u, (struct tagLOGFONTW *)((char *)a2 + 224)) & v27;
    v29 = SetWindowMetricFont(v6, 0x9Cu, (struct tagLOGFONTW *)((char *)a2 + 316)) & v28;
    v30 = SetWindowMetricFont(v6, 0x9Du, (struct tagLOGFONTW *)((char *)a2 + 408)) & v29;
    v8 = SetWindowMetricInt(v6, 0x9Eu, *((_DWORD *)a2 + 125)) & v30;
    v5 = v8;
  }
  if ( v5 )
    xxxSetAndDrawNCMetrics(v6, *((_DWORD *)a2 + 1), a2);
  return v8;
}
