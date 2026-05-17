/*
 * XREFs of GetShipAssertBuffer @ 0x1800C7FA4
 * Callers:
 *     ShipAssert @ 0x1800C8120 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x180093C40 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800C80A8 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_1801485A8, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_1801485A8;
        if ( qword_1801485A8 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_1801485A8, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_1801485A8, 0LL);
    return 0LL;
  }
  return v1;
}
