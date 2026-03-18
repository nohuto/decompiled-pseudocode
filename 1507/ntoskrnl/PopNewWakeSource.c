/*
 * XREFs of PopNewWakeSource @ 0x1406B5770
 * Callers:
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x1406B57B8 (PopProcessWakeSourceWork.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PopNewWakeSource(int a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x206D654Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v3[4] = a1;
  }
  return v3;
}
