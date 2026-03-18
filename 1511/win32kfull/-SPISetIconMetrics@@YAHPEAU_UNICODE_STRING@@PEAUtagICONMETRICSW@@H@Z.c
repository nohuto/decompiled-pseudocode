/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6864
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C00D7644 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     SetIconMetrics @ 0x1C00D0E24 (SetIconMetrics.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01D662C (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01D705C (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D7088 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, int a3)
{
  struct tagWND *v3; // rbx
  BOOL v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // rcx
  int v10; // esi
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax

  v3 = 0LL;
  v7 = a3 == 0;
  v8 = 0;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) == 0 )
  {
    RescaleIconMetrics(a2);
  }
  if ( a3 )
  {
    v10 = SetWindowMetricInt(a1, 0x40u, *((_DWORD *)a2 + 1));
    v11 = SetWindowMetricInt(a1, 0x41u, *((_DWORD *)a2 + 2)) & v10;
    v12 = SetWindowMetricInt(a1, 0x42u, *((_DWORD *)a2 + 3)) & v11;
    v8 = SetWindowMetricFont(a1, 0x9Au, (struct tagLOGFONTW *)((char *)a2 + 16)) & v12;
    v7 = v8;
  }
  if ( v7 )
  {
    SetIconMetrics(a1, a2);
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v13 )
      v3 = *(struct tagWND **)(*(_QWORD *)(v13 + 8) + 16LL);
    xxxInternalInvalidate(v3, (HRGN)1, 0x10485u);
  }
  return v8;
}
