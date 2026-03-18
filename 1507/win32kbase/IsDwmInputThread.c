/*
 * XREFs of IsDwmInputThread @ 0x1C000EB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 IsDwmInputThread()
{
  __int64 result; // rax

  LOBYTE(result) = 0;
  if ( g_pInputManager )
    LOBYTE(result) = *((_QWORD *)g_pInputManager + 1) == (_QWORD)KeGetCurrentThread();
  return (unsigned __int8)result;
}
