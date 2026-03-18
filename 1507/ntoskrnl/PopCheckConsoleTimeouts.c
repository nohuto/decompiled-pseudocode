/*
 * XREFs of PopCheckConsoleTimeouts @ 0x1406BC9F0
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140598BF8 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x14055DF58 (PopDiagTraceInputTimeout.c)
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 *     PopDiagTraceDisplayTimeout @ 0x14055E148 (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x140564598 (PopGetDisplayTimeout.c)
 */

char PopCheckConsoleTimeouts()
{
  unsigned int v0; // esi
  unsigned int DisplayTimeout; // eax
  int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8

  PopPrintEx(3u, "PopAdaptive: >>>>> Policy parameters change\n");
  v0 = PopConsoleContext;
  DisplayTimeout = PopGetDisplayTimeout(PopConsoleContext);
  v2 = PopInputTimeout;
  v3 = DisplayTimeout;
  if ( !BYTE5(qword_14032D344) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_14032D344 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_14032D344) = 0;
    }
    PopPrintEx(3u, "PopAdaptive: Input timeout: %u->%u\n", qword_14032D344, PopInputTimeout);
    LODWORD(qword_14032D344) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_14032D344), BYTE4(qword_14032D344));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_14032D390) = 1;
    byte_14032D364 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_14032D34C) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_14032D35C - dword_14032D358) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_14032D34C )
  {
    PopPrintEx(3u, "PopAdaptive: Display timeout: %u->%u\n", qword_14032D34C, v3);
    LODWORD(qword_14032D34C) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_14032D34C), BYTE4(qword_14032D34C));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_14032D390) = 1;
  }
  return DisplayTimeout;
}
