/*
 * XREFs of StorpInititalizePerUnitPerfTelemetry @ 0x1C0058F64
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C00108C0 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall StorpInititalizePerUnitPerfTelemetry(LARGE_INTEGER *a1)
{
  __int64 result; // rax
  PVOID Pool; // rax
  PVOID v4; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 QuadPart; // r9
  PVOID v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  result = 3221225473LL;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    a1[231].QuadPart = 0LL;
    a1[233].QuadPart = 0LL;
    Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned int)Size, 0x65546152u, a1[1].QuadPart);
    a1[231].QuadPart = (__int64)Pool;
    if ( Pool
      && (memset(Pool, 0, (unsigned int)Size),
          v4 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C004F484, 0x65546152u, a1[1].QuadPart),
          (a1[233].QuadPart = (__int64)v4) != 0) )
    {
      memset(v4, 0, (unsigned int)dword_1C004F484);
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      QuadPart = a1[1].QuadPart;
      a1[232] = PerformanceCounter;
      v7 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C004F49C, 0x65546152u, QuadPart);
      a1[234].QuadPart = (__int64)v7;
      if ( v7 )
        memset(v7, 0, (unsigned int)dword_1C004F49C);
      return 0LL;
    }
    else
    {
      v8 = (void *)a1[231].QuadPart;
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0x65546152u);
        a1[231].QuadPart = 0LL;
      }
      v9 = (void *)a1[233].QuadPart;
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x65546152u);
        a1[233].QuadPart = 0LL;
      }
      v10 = (void *)a1[234].QuadPart;
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x65546152u);
        a1[234].QuadPart = 0LL;
      }
      return 3221225495LL;
    }
  }
  return result;
}
