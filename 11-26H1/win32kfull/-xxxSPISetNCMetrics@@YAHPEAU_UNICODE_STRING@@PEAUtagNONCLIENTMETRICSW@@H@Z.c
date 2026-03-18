/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x140201244
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x140201470 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x140201670 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14028C294 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  BOOL v6; // ebx
  unsigned int v7; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  int v15; // ebx
  int v16; // edi
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  int v20; // edi
  int v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // ebx
  int v26; // edi
  int v27; // ebx
  int v28; // edi

  v6 = a3 == 0;
  v7 = 0;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(29, DpiForSystem);
    v10 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 125) = DpiDependentMetric;
    v11 = v10 - DpiDependentMetric;
    *((_DWORD *)a2 + 1) = v11;
    if ( v11 < 1 )
    {
      *((_DWORD *)a2 + 1) = 1;
      v12 = 0;
      if ( v10 - 1 >= 0 )
        v12 = v10 - 1;
      *((_DWORD *)a2 + 125) = v12;
    }
  }
  RescaleNonClientMetrics(a2);
  v13 = *((_DWORD *)a2 + 1);
  if ( v13 <= 1 )
  {
    v13 = 1;
  }
  else
  {
    v14 = 50;
    if ( v13 >= 50 )
      goto LABEL_11;
  }
  v14 = v13;
LABEL_11:
  *((_DWORD *)a2 + 1) = v14;
  if ( a3 )
  {
    v15 = SetWindowMetricInt(a1, 0x88u, v14);
    v16 = v15 & SetWindowMetricInt(a1, 0x98u, *((_DWORD *)a2 + 2));
    v17 = v16 & SetWindowMetricInt(a1, 0x99u, *((_DWORD *)a2 + 3));
    v18 = v17 & SetWindowMetricInt(a1, 0x89u, *((_DWORD *)a2 + 4));
    v19 = v18 & SetWindowMetricInt(a1, 0x8Au, *((_DWORD *)a2 + 5));
    v20 = v19 & SetWindowMetricInt(a1, 0x8Cu, *((_DWORD *)a2 + 29));
    v21 = v20 & SetWindowMetricInt(a1, 0x8Du, *((_DWORD *)a2 + 30));
    v22 = v21 & SetWindowMetricInt(a1, 0x8Fu, *((_DWORD *)a2 + 54));
    v23 = v22 & SetWindowMetricInt(a1, 0x90u, *((_DWORD *)a2 + 55));
    v24 = v23 & SetWindowMetricFont(a1, 0x8Bu, (struct tagLOGFONTW *)((char *)a2 + 24));
    v25 = v24 & SetWindowMetricFont(a1, 0x8Eu, (struct tagLOGFONTW *)((char *)a2 + 124));
    v26 = v25 & SetWindowMetricFont(a1, 0x91u, (struct tagLOGFONTW *)((char *)a2 + 224));
    v27 = v26 & SetWindowMetricFont(a1, 0x9Cu, (struct tagLOGFONTW *)((char *)a2 + 316));
    v28 = v27 & SetWindowMetricFont(a1, 0x9Du, (struct tagLOGFONTW *)((char *)a2 + 408));
    v7 = v28 & SetWindowMetricInt(a1, 0x9Eu, *((_DWORD *)a2 + 125));
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawNCMetrics(a1, *((_DWORD *)a2 + 1), a2);
  return v7;
}
