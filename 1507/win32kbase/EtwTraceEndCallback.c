/*
 * XREFs of EtwTraceEndCallback @ 0x1C00082D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceEndCallback()
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    --*(_BYTE *)(*(_QWORD *)result + 1092LL);
  else
    --MEMORY[0x444];
  return result;
}
