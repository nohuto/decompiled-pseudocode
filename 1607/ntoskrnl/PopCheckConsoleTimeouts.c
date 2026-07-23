/*
 * XREFs of PopCheckConsoleTimeouts @ 0x140674A84
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14056D950 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x14052E9E4 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x14052EA9C (PopDiagTraceDisplayTimeout.c)
 *     PopGetDisplayTimeout @ 0x14052EB88 (PopGetDisplayTimeout.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
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
  if ( !BYTE5(qword_1403023E4) || !PopInputTimeout )
  {
    if ( PopInputTimeout )
    {
      if ( PopInputTimeout == (_DWORD)qword_1403023E4 )
        goto LABEL_8;
    }
    else
    {
      BYTE5(qword_1403023E4) = 0;
    }
    PopPrintEx(3u, "PopAdaptive: Input timeout: %u->%u\n", qword_1403023E4, PopInputTimeout);
    LODWORD(qword_1403023E4) = v2;
    LOBYTE(DisplayTimeout) = PopDiagTraceInputTimeout(v2, BYTE5(qword_1403023E4), BYTE4(qword_1403023E4));
    DWORD2(PopLazyContext) = v2;
    LOBYTE(qword_140302430) = 1;
    byte_140302404 = v2 != 0;
    if ( !v2 )
      LOBYTE(DisplayTimeout) = PopSetSessionUserStatus(v0, 0);
  }
LABEL_8:
  if ( BYTE4(qword_1403023EC) && (_DWORD)v3 )
  {
    LOBYTE(DisplayTimeout) = -1;
    v4 = v3 + (dword_1403023FC - dword_1403023F8) / 0x3E8u;
    if ( v4 > 0xFFFFFFFF )
      LODWORD(v4) = -1;
    LODWORD(v3) = v4;
  }
  if ( (_DWORD)v3 != (_DWORD)qword_1403023EC )
  {
    PopPrintEx(3u, "PopAdaptive: Display timeout: %u->%u\n", qword_1403023EC, v3);
    LODWORD(qword_1403023EC) = v3;
    LOBYTE(DisplayTimeout) = PopDiagTraceDisplayTimeout(v3, BYTE5(qword_1403023EC), BYTE4(qword_1403023EC));
    HIDWORD(PopLazyContext) = v3;
    BYTE1(qword_140302430) = 1;
  }
  return DisplayTimeout;
}
