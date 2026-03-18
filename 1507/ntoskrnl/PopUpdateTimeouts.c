/*
 * XREFs of PopUpdateTimeouts @ 0x14055DE64
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     PopConsoleSessionPassiveInput @ 0x14055DA2C (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x1405644F0 (PopConsoleSessionActiveInput.c)
 * Callees:
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x14055DF58 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x14055E148 (PopDiagTraceDisplayTimeout.c)
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
      v8 = (const char *)qword_1405CDB30;
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
      v10 = (const char *)qword_1405CDB30;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = (const char *)qword_1405CDB30;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = (const char *)qword_1405CDB30;
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
  qword_14032D34C = *(_QWORD *)a2;
  if ( a3 )
  {
    qword_14032D344 = *(_QWORD *)a3;
    result = PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
  }
  if ( *((_BYTE *)a2 + 4) )
  {
    result = MEMORY[0xFFFFF78000000320];
    dword_14032D35C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
