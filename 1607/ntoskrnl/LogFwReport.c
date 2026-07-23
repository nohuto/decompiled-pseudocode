/*
 * XREFs of LogFwReport @ 0x1407259A0
 * Callers:
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x1400B3A5C (BgpGetResolution.c)
 *     BgpFwQueryPerformanceCounter @ 0x14012775C (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1402F9F90 & 0x80u) != 0 )
  {
    dword_1402F9F90 &= ~0x80u;
    BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140328CD8 = v1;
    dword_140328CE0 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_1403404F8.Parameter = 0LL;
    stru_1403404F8.List.Flink = 0LL;
    dword_140328C60 = BitsPerPixel;
    dword_140328CA8 = dword_1402F9F90;
    dword_140328CE4 = 1000000 * qword_140328C78 / PerformanceFrequency.QuadPart;
    dword_140328CC8 = 1000000 * qword_140328CF0 / PerformanceFrequency.QuadPart;
    dword_140328C74 = 1000000 * qword_140328CF8 / PerformanceFrequency.QuadPart;
    stru_1403404F8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_1403404F8, DelayedWorkQueue);
    if ( (dword_1402F9F90 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140328CD8,
        HIDWORD(qword_140328CD8),
        dword_140328C60);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140328CD0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140328CB8);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_1402F9FB0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_1402F4EF8 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140328C68 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140328CB0 / PerformanceFrequency.QuadPart,
        1000000 * qword_140328CA0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140328CC0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140328C70);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_1402F9FAC,
        dword_140328CC8,
        dword_140328C74);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_1402F4F08 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140328C80 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140328CE4,
        1000000 * qword_140328C98 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140328C90 / PerformanceFrequency.QuadPart);
      if ( qword_1402F9FC0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_1402F9FC0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140341CA0 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
