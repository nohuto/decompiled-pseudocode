/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x1800EEDA0
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800DA550 (RtlpSetHeapDebuggingInformation.c)
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
