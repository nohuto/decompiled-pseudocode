/*
 * XREFs of PopCheckConsoleTimeouts @ 0x14063C394
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14053D648 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     PopGetDisplayTimeout @ 0x1404F2D38 (PopGetDisplayTimeout.c)
 *     PopDiagTraceInputTimeout @ 0x1404F2FF8 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x1404F3060 (PopDiagTraceDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x1404F30C8 (PopSetSessionUserStatus.c)
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
  if ( !BYTE5(qword_1402DCFE4) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_1402DCFE4 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_1402DCFE4) = 0;
    }
    PopPrintEx(3u, "PopAdaptive: Input timeout: %u->%u\n", qword_1402DCFE4, PopInputTimeout);
    LODWORD(qword_1402DCFE4) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_1402DCFE4), BYTE4(qword_1402DCFE4));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_1402DCFB0) = 1;
    byte_1402DD004 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_1402DCFEC) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_1402DCFFC - dword_1402DCFF8) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_1402DCFEC )
  {
    PopPrintEx(3u, "PopAdaptive: Display timeout: %u->%u\n", qword_1402DCFEC, v3);
    LODWORD(qword_1402DCFEC) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_1402DCFEC), BYTE4(qword_1402DCFEC));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_1402DCFB0) = 1;
  }
  return DisplayTimeout;
}
