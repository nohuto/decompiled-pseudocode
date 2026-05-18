/*
 * XREFs of sub_180003A94 @ 0x180003A94
 * Callers:
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 * Callees:
 *     sub_1800039B8 @ 0x1800039B8 (sub_1800039B8.c)
 *     sub_180003BC0 @ 0x180003BC0 (sub_180003BC0.c)
 *     sub_180003EA8 @ 0x180003EA8 (sub_180003EA8.c)
 */

void __fastcall sub_180003A94(__int64 a1, UINT a2, unsigned int a3, int a4)
{
  HANDLE CurrentProcess; // rax

  if ( (a3 & 4) != 0 )
    sub_1800039B8(2, a2, a4);
  if ( (a3 & 0x10) != 0 && (unsigned __int8)sub_180003BC0(a2) && !IsDebuggerPresent() )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, a2);
  }
  if ( (a3 & 1) != 0 )
    sub_180003EA8(a3);
}
