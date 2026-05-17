/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x18008F240
 * Callers:
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x18007F470 (RtlpHpSegHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1D0 (RtlpSetHeapDebuggingInformation.c)
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
