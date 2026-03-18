/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z @ 0x1C007EEC0
 * Callers:
 *     PowerUnDimMonitor @ 0x1C000AB34 (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C00A9BD0 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET *a1, int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h]

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 16;
  *((_DWORD *)a1 + 1) = 72;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v4 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = dword_1C0104754;
  *((_DWORD *)a1 + 15) = dword_1C0104740;
  *((_DWORD *)a1 + 16) = dword_1C0104748;
  *((_DWORD *)a1 + 17) = a2;
}
