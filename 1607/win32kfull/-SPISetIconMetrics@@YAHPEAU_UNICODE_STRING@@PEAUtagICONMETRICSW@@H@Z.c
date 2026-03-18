/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01CD718
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C008E2D4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetIconMetrics @ 0x1C00B9BDC (SetIconMetrics.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01CD4E0 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x1C01CDEE0 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01CDF0C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rbx
  int v5; // r14d
  BOOL v8; // ebp
  unsigned int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax

  v4 = 0LL;
  v5 = a3;
  v8 = a3 == 0;
  v9 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) == 0 )
    RescaleIconMetrics(a2);
  if ( v5 )
  {
    v10 = SetWindowMetricInt(a1, 0x40u, *((_DWORD *)a2 + 1));
    v11 = SetWindowMetricInt(a1, 0x41u, *((_DWORD *)a2 + 2)) & v10;
    v12 = SetWindowMetricInt(a1, 0x42u, *((_DWORD *)a2 + 3)) & v11;
    v9 = SetWindowMetricFont(a1, 0x9Au, (struct tagLOGFONTW *)((char *)a2 + 16)) & v12;
    v8 = v9;
  }
  if ( v8 )
  {
    SetIconMetrics(a1, a2);
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v13 )
      v4 = *(struct tagWND **)(*(_QWORD *)(v13 + 8) + 16LL);
    xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  }
  return v9;
}
