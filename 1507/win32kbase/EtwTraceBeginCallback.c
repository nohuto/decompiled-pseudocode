/*
 * XREFs of EtwTraceBeginCallback @ 0x1C0008290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceBeginCallback()
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    ++*(_BYTE *)(*(_QWORD *)result + 1092LL);
  else
    ++MEMORY[0x444];
  return result;
}
