/*
 * XREFs of GetShipAssertBuffer @ 0x1800D8D90
 * Callers:
 *     ShipAssert @ 0x1800D8F10 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A6AA0 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800D8E94 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_180154398, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_180154398;
        if ( qword_180154398 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_180154398, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_180154398, 0LL);
    return 0LL;
  }
  return v1;
}
