/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140558AE8
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140558690 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x1405C6504 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&InputBufferLength, 0, 0xB0uLL);
  dword_14032B278 = -2130771792;
  wcscpy(&xmmword_14032B1EC, L"Circular Kernel Context Logger");
  dword_14032B25C = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_14032B1EC);
  InputBufferLength = 180;
  dword_14032B2E0 = 1;
  if ( a1 )
  {
    word_14032B2E6 = 1;
    word_14032B2E4 = a2 + 1;
    HIWORD(dword_14032B2E0) = 1;
    LOWORD(dword_14032B2E0) = a2 + 2;
    InputBufferLength = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
