/*
 * XREFs of KiIpiSendRequestEx @ 0x140030DC0
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030C90 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x1400B5930 (KeInvalidateAllCaches.c)
 *     KxFlushMultipleTb @ 0x1400B5DC8 (KxFlushMultipleTb.c)
 *     KxFlushSingleTb @ 0x14010A720 (KxFlushSingleTb.c)
 *     KxFlushEntireTb @ 0x14013CFFC (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x1401D6C2C (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140030E80 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiIpiSendRequest @ 0x1400E0AE0 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64),
        __int64 a8)
{
  int v9; // edi
  __int64 result; // rax
  int i; // [rsp+48h] [rbp+10h] BYREF

  v9 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_3:
      result = (__int64)a7;
      if ( a7 )
        return a7(a8);
      return result;
    }
  }
  else if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  KiIpiSendRequest(a1, a2, v9, a4, a5, a6);
  if ( a7 )
    a7(a8);
  result = *(unsigned int *)(a1 + 11520);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11520) )
    KeYieldProcessorEx(&i);
  return result;
}
