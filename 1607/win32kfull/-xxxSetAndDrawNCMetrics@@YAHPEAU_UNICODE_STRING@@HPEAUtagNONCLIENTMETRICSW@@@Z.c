/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CE450
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01CE1B4 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     xxxSetWindowNCMetrics @ 0x1C00B9EA0 (xxxSetWindowNCMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 *     MenuRecalc @ 0x1C02296E4 (MenuRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, int a2, struct tagNONCLIENTMETRICSW *a3)
{
  struct tagWND *v3; // rbx
  int v4; // esi
  int v5; // r15d
  int v6; // r12d
  int v7; // edi
  int v9; // ebp
  int v10; // r14d
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax

  v3 = 0LL;
  v4 = *(_DWORD *)(gpsi + 5416LL);
  v5 = *(_DWORD *)(gpsi + 2108LL);
  v6 = *(_DWORD *)(gpsi + 2112LL);
  v7 = *(_DWORD *)(gpsi + 2248LL);
  if ( a3 )
  {
    v10 = *((_DWORD *)a3 + 5) - *(_DWORD *)(gpsi + 2004LL);
    v9 = *((_DWORD *)a3 + 55) - *(_DWORD *)(gpsi + 2100LL);
  }
  else
  {
    if ( a2 == v4 )
      return 0LL;
    v9 = 0;
    v10 = 0;
  }
  xxxSetWindowNCMetrics((__int64)a1, (__int64)a3, 1, a2);
  MenuRecalc();
  v11 = *(_DWORD *)(gpsi + 2248LL);
  v12 = v11 + *(_DWORD *)(gpsi + 5416LL);
  v13 = v12 - v7 - v4;
  if ( v7 > 0 )
    goto LABEL_10;
  if ( v11 <= 0 )
  {
    v12 = 0;
    goto LABEL_13;
  }
  if ( v7 )
  {
LABEL_10:
    if ( v11 )
      v12 = v11 + *(_DWORD *)(gpsi + 5416LL) - v7 - v4;
    else
      v12 = -(v7 + v4);
  }
LABEL_13:
  if ( v13 || (v14 = 0, v12) )
    v14 = 1;
  xxxMetricsRecalc(v14 | 2, 0, 0, v10, v9, v13, v12);
  v15 = *(_DWORD *)(gpsi + 2112LL) - v6;
  v16 = *(_DWORD *)(gpsi + 2108LL) - v5;
  if ( v16 || v15 )
    xxxMetricsRecalc(4, v16, v15, 0, 0, 0, 0);
  v17 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v17 )
    v3 = *(struct tagWND **)(*(_QWORD *)(v17 + 8) + 16LL);
  xxxInternalInvalidate(v3, (HRGN)1, 0x10485u);
  return 1LL;
}
