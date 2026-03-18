/*
 * XREFs of PspInitializeSiloStructures @ 0x140770CC0
 * Callers:
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PspAllocateMonitorContextArrayServerSilo @ 0x14054A288 (PspAllocateMonitorContextArrayServerSilo.c)
 */

char PspInitializeSiloStructures()
{
  unsigned int *PoolWithTag; // rax
  char result; // al

  dword_1403066E0 = 1;
  dword_1403066E4 = 259;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x426C6953u);
  if ( !PoolWithTag )
    return 0;
  MonitorContextIndexBitmap.SizeOfBitMap = 32;
  MonitorContextIndexBitmap.Buffer = PoolWithTag;
  *PoolWithTag = 0;
  MonitorContextIndexBitmapBuffer = (__int64)PoolWithTag;
  if ( (int)PspAllocateMonitorContextArrayServerSilo((__int64)&InfrastructureSiloGlobals) < 0 )
    return 0;
  PspSiloMonitorLock = 0LL;
  qword_1402DC108 = (__int64)&PspSiloMonitorList;
  result = 1;
  PspSiloMonitorList = (__int64)&PspSiloMonitorList;
  return result;
}
