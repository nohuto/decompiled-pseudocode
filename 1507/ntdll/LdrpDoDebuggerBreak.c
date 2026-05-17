/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800BDE50
 * Callers:
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
