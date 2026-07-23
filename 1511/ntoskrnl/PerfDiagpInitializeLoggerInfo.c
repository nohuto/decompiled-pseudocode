/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140508788
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140508358 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140548F90 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&InputBufferLength, 0, 0xB0uLL);
  dword_1402DAEF8 = -2130771792;
  wcscpy(&xmmword_1402DAE6C, L"Circular Kernel Context Logger");
  dword_1402DAEDC = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_1402DAE6C);
  InputBufferLength = 180;
  dword_1402DAF60 = 1;
  if ( a1 )
  {
    word_1402DAF66 = 1;
    word_1402DAF64 = a2 + 1;
    HIWORD(dword_1402DAF60) = 1;
    LOWORD(dword_1402DAF60) = a2 + 2;
    InputBufferLength = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
