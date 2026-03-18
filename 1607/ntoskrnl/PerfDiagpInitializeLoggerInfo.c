/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1404DFF20
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404DFB10 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14057DB5C (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(dword_1402FDBF0, 0, 0xB0uLL);
  dword_1402FDC38 = -2130771792;
  wcscpy(&xmmword_1402FDBAC, L"Circular Kernel Context Logger");
  dword_1402FDC1C = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_1402FDBAC);
  dword_1402FDBF0[0] = 180;
  dword_1402FDCA0 = 1;
  if ( a1 )
  {
    word_1402FDCA6 = 1;
    word_1402FDCA4 = a2 + 1;
    HIWORD(dword_1402FDCA0) = 1;
    LOWORD(dword_1402FDCA0) = a2 + 2;
    dword_1402FDBF0[0] = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
