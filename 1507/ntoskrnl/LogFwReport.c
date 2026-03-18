/*
 * XREFs of LogFwReport @ 0x14075CB0C
 * Callers:
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x140131B20 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x140150248 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14015076C (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140323CF0 & 0x80u) != 0 )
  {
    dword_140323CF0 &= ~0x80u;
    BgpFwQueryPerformanceCounter(&PerformanceFrequency);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140356CF8 = v1;
    dword_140356D00 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_14036C720.Parameter = 0LL;
    stru_14036C720.List.Flink = 0LL;
    dword_140356D8C = BitsPerPixel;
    dword_140356D88 = dword_140323CF0;
    dword_140356D18 = 1000000 * qword_140356D80 / PerformanceFrequency.QuadPart;
    dword_140356D04 = 1000000 * qword_140356D20 / PerformanceFrequency.QuadPart;
    dword_140356D08 = 1000000 * qword_140356D28 / PerformanceFrequency.QuadPart;
    stru_14036C720.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_14036C720, DelayedWorkQueue);
    if ( (dword_140323CF0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140356CF8,
        HIDWORD(qword_140356CF8),
        dword_140356D8C);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140356D58 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140356D60);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140323D10);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_14031E878 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140356D30 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140356D40 / PerformanceFrequency.QuadPart,
        1000000 * qword_140356D90 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140356D38 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140356D48);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140323D0C,
        dword_140356D04,
        dword_140356D08);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_14031E888 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140356D68 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140356D18,
        1000000 * qword_140356D10 / PerformanceFrequency.QuadPart);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140356D78 / PerformanceFrequency.QuadPart);
      if ( qword_140323D20 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140323D20);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_14036D038 / PerformanceFrequency.QuadPart);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
