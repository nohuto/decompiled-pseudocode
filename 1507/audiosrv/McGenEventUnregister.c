/*
 * XREFs of McGenEventUnregister @ 0x18009DCF0
 * Callers:
 *     ?MyServiceTerminate@@YAXXZ @ 0x18009D88C (-MyServiceTerminate@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_AudioHandle )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_AudioHandle);
  Microsoft_Windows_AudioHandle = 0LL;
  return result;
}
