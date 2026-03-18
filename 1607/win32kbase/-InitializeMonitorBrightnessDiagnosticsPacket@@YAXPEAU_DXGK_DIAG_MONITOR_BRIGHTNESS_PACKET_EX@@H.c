/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0070928
 * Callers:
 *     PowerDimUndimResend @ 0x1C005DAB4 (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C0070410 (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C00B2EF0 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        char a2)
{
  int v4; // edx
  __int64 v5; // [rsp+30h] [rbp+8h]

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v5 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v5 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = dword_1C011BB30;
  *((_DWORD *)a1 + 15) = dword_1C011BB1C;
  *((_DWORD *)a1 + 16) = dword_1C011BB18;
  *((_DWORD *)a1 + 17) = dword_1C011BB24;
  *((_DWORD *)a1 + 18) = dword_1C011BB20;
  *((_DWORD *)a1 + 19) = dword_1C011BB28;
  *((_DWORD *)a1 + 20) = dword_1C011BB2C;
  *((_DWORD *)a1 + 21) ^= (*((_DWORD *)a1 + 21) ^ (2 * LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink))) & 2;
  v4 = *((_DWORD *)a1 + 21) ^ (*((_DWORD *)a1 + 21) ^ (4 * dword_1C011BB88)) & 4;
  *((_DWORD *)a1 + 21) = v4;
  *((_DWORD *)a1 + 21) = a2 & 1 | v4 & 0xFFFFFFF6 | (8 * (dword_1C011BB84 & 1));
}
