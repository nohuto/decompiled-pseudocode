/*
 * XREFs of ACPIFlushDeviceQueueCallback @ 0x1C00359F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFlushQueuesUnload @ 0x1C0035A38 (ACPIFlushQueuesUnload.c)
 *     AMLIRestartContext @ 0x1C00427F4 (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushDeviceQueueCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a3 )
  {
    v5 = a2;
  }
  else
  {
    result = ACPIFlushQueuesUnload(a1, a2, 2LL);
    if ( (_DWORD)result == 259 )
      return result;
    v5 = a2;
  }
  return AMLIRestartContext(v5);
}
