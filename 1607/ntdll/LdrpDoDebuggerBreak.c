/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800D20A0
 * Callers:
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
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
