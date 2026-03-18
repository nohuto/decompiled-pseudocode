/*
 * XREFs of ACPIFlushDeviceQueueCallback @ 0x1C00366B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFlushQueuesUnload @ 0x1C00366F8 (ACPIFlushQueuesUnload.c)
 *     AMLIRestartContext @ 0x1C0042214 (AMLIRestartContext.c)
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
