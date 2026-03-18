/*
 * XREFs of ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x140249A28
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x140201470 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x14023D21C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?RescaleMinMetrics@@YAXPEAUtagMINIMIZEDMETRICS@@@Z @ 0x140249ADC (-RescaleMinMetrics@@YAXPEAUtagMINIMIZEDMETRICS@@@Z.c)
 */

__int64 __fastcall xxxSPISetMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2, int a3)
{
  unsigned int v6; // edi
  BOOL v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // ebx

  v6 = 0;
  RescaleMinMetrics(a2);
  v7 = a3 == 0;
  if ( a3 )
  {
    v8 = SetWindowMetricInt(a1, 146LL, *((_DWORD *)a2 + 1));
    v9 = v8 & SetWindowMetricInt(a1, 147LL, *((_DWORD *)a2 + 2));
    v10 = v9 & SetWindowMetricInt(a1, 148LL, *((_DWORD *)a2 + 3));
    v6 = v10 & SetWindowMetricInt(a1, 150LL, *((_DWORD *)a2 + 4));
    v7 = v6;
  }
  if ( v7 )
    xxxSetAndDrawMinMetrics(a1, a2);
  return v6;
}
