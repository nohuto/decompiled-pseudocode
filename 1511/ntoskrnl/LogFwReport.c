/*
 * XREFs of LogFwReport @ 0x1406D9AC4
 * Callers:
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x1400F4494 (BgpGetResolution.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     BgpFwQueryPerformanceCounter @ 0x14011BFC4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14011C4EC (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1402D4BB0 & 0x80u) != 0 )
  {
    dword_1402D4BB0 &= ~0x80u;
    BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_1403069F0 = v1;
    dword_1403069F8 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_14031C420.Parameter = 0LL;
    stru_14031C420.List.Flink = 0LL;
    dword_140306A84 = BitsPerPixel;
    dword_140306A80 = dword_1402D4BB0;
    dword_1403069FC = 1000000 * qword_140306A70 / PerformanceFrequency.QuadPart;
    dword_1403069E8 = 1000000 * qword_140306A18 / PerformanceFrequency.QuadPart;
    dword_140306A00 = 1000000 * qword_140306A08 / PerformanceFrequency.QuadPart;
    stru_14031C420.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_14031C420, DelayedWorkQueue);
    if ( (dword_1402D4BB0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_1403069F0,
        HIDWORD(qword_1403069F0),
        dword_140306A84);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140306A48 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140306A50);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_1402D4BD0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_1402CF818 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140306A28 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140306A20 / PerformanceFrequency.QuadPart,
        1000000 * qword_140306A78 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140306A30 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140306A38);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_1402D4BCC,
        dword_1403069E8,
        dword_140306A00);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_1402CF828 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140306A58 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_1403069FC,
        1000000 * qword_140306A10 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140306A68 / PerformanceFrequency.QuadPart);
      if ( qword_1402D4BE0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_1402D4BE0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_14031CCB0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
