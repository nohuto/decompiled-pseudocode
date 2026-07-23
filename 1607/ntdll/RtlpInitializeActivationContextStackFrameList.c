/*
 * XREFs of RtlpInitializeActivationContextStackFrameList @ 0x180069650
 * Callers:
 *     LdrShutdownProcess @ 0x180006F20 (LdrShutdownProcess.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180068D58 (RtlpAllocateActivationContextStackFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInitializeActivationContextStackFrameList(_DWORD *a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax

  *a1 = 1953721414;
  a1[6] = 0;
  v1 = a1 + 10;
  result = 32LL;
  do
  {
    *((_QWORD *)v1 - 1) = 0LL;
    *(_QWORD *)v1 = 0LL;
    v1[2] = 12;
    *((_QWORD *)v1 + 2) = 0LL;
    v1 += 24;
    --result;
  }
  while ( result );
  return result;
}
