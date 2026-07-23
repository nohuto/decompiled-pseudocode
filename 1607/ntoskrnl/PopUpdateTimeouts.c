/*
 * XREFs of PopUpdateTimeouts @ 0x14052E8F0
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     PopConsoleSessionPassiveInput @ 0x14052E804 (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x14052E87C (PopConsoleSessionActiveInput.c)
 *     PopActiveLockScreenPowerRequest @ 0x1406749F4 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x14052E9E4 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x14052EA9C (PopDiagTraceDisplayTimeout.c)
 */

__int64 __fastcall PopUpdateTimeouts(int a1, unsigned int *a2, unsigned int *a3)
{
  int v6; // r8d
  const char *v7; // rdx
  const char *v8; // rax
  const char *v9; // r9
  const char *v10; // rcx
  __int64 result; // rax

  PopDiagTraceDisplayTimeout(*a2, *((unsigned __int8 *)a2 + 5), *((unsigned __int8 *)a2 + 4));
  if ( a3 )
    v6 = *a3;
  else
    v6 = 0;
  v7 = "Zeroed";
  if ( a3 )
  {
    v8 = "Zeroed";
    if ( !*((_BYTE *)a3 + 5) )
      v8 = (const char *)qword_140588B80;
  }
  else
  {
    v8 = " NULL ";
  }
  v9 = "Computed";
  if ( a3 )
  {
    v10 = "Computed";
    if ( !*((_BYTE *)a3 + 4) )
      v10 = (const char *)qword_140588B80;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = (const char *)qword_140588B80;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = (const char *)qword_140588B80;
  PopPrintEx(
    3u,
    "PopAdaptive: Console session %u timeouts: %s%s Display:%u,: %s%sInput:%u\n",
    a1,
    v9,
    v7,
    *a2,
    v10,
    v8,
    v6);
  result = *(_QWORD *)a2;
  qword_1403023EC = *(_QWORD *)a2;
  if ( a3 )
  {
    qword_1403023E4 = *(_QWORD *)a3;
    result = PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
  }
  if ( *((_BYTE *)a2 + 4) )
  {
    result = MEMORY[0xFFFFF78000000320];
    dword_1403023FC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
