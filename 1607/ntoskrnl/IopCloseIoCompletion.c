/*
 * XREFs of IopCloseIoCompletion @ 0x1404FD564
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x1400F4808 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopCloseIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = a2;
  if ( a4 == 1 )
  {
    LOBYTE(a2) = 1;
    return IopDeleteIoCompletionInternal(result, a2);
  }
  return result;
}
