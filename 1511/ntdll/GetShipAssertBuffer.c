/*
 * XREFs of GetShipAssertBuffer @ 0x18008C868
 * Callers:
 *     ShipAssert @ 0x18008C170 (ShipAssert.c)
 * Callees:
 *     SetAssertBufferPtrinPeb @ 0x18008C918 (SetAssertBufferPtrinPeb.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi
  __int64 v4; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_180145FC8, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      v6 = -1000000LL;
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution(0LL, &v6);
        v1 = qword_180145FC8;
        if ( qword_180145FC8 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_180145FC8, 238LL, 255LL);
      }
    }
  }
  else
  {
    v4 = 0LL;
    v5 = 0x2000LL;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v4, 0LL, &v5, 4096, 4) >= 0
      && v5 >= 0x2000
      && (int)SetAssertBufferPtrinPeb(v4) >= 0 )
    {
      _InterlockedExchange64(&qword_180145FC8, v4);
      return v4;
    }
  }
  if ( v4 )
    ZwFreeVirtualMemory(-1LL, &v4, &v5, 0x8000LL);
  return v1;
}
