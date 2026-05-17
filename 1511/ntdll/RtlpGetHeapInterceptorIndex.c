/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x1800F0D70
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800E1980 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapInterceptorIndex(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  unsigned __int16 v2; // r8

  result = 0LL;
  v2 = 0;
  while ( RtlpInterceptorRoutines[v2] != a1 )
  {
    if ( ++v2 >= 2u )
      return result;
  }
  return (unsigned int)v2 + 1;
}
