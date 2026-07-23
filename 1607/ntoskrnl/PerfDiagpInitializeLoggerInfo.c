/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1404C3524
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404C3114 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14057E008 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&InputBufferLength, 0, 0xB0uLL);
  dword_1402FDC18 = -2130771792;
  wcscpy(&xmmword_1402FDB8C, L"Circular Kernel Context Logger");
  dword_1402FDBFC = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_1402FDB8C);
  InputBufferLength = 180;
  dword_1402FDC80 = 1;
  if ( a1 )
  {
    word_1402FDC86 = 1;
    word_1402FDC84 = a2 + 1;
    HIWORD(dword_1402FDC80) = 1;
    LOWORD(dword_1402FDC80) = a2 + 2;
    InputBufferLength = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
