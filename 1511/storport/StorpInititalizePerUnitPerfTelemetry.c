/*
 * XREFs of StorpInititalizePerUnitPerfTelemetry @ 0x1C00511C4
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C000C508 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall StorpInititalizePerUnitPerfTelemetry(LARGE_INTEGER *a1)
{
  __int64 result; // rax
  PVOID Pool; // rax
  PVOID v4; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  void *QuadPart; // rcx
  void *v7; // rcx

  result = 3221225473LL;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    a1[229].QuadPart = 0LL;
    a1[231].QuadPart = 0LL;
    Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned int)Size, 0x65546152u, a1[1].QuadPart);
    a1[229].QuadPart = (__int64)Pool;
    if ( Pool
      && (memset(Pool, 0, (unsigned int)Size),
          v4 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C0048404, 0x65546152u, a1[1].QuadPart),
          (a1[231].QuadPart = (__int64)v4) != 0) )
    {
      memset(v4, 0, (unsigned int)dword_1C0048404);
      if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      a1[230] = PerformanceCounter;
      return 0LL;
    }
    else
    {
      QuadPart = (void *)a1[229].QuadPart;
      if ( QuadPart )
      {
        ExFreePoolWithTag(QuadPart, 0x65546152u);
        a1[229].QuadPart = 0LL;
      }
      v7 = (void *)a1[231].QuadPart;
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0x65546152u);
        a1[231].QuadPart = 0LL;
      }
      return 3221225495LL;
    }
  }
  return result;
}
