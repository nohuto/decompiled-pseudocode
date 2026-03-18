/*
 * XREFs of EtwTraceEndCallback @ 0x1C006DE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceEndCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( result )
    --*(_BYTE *)(*(_QWORD *)result + 1084LL);
  else
    --MEMORY[0x43C];
  return result;
}
