/*
 * XREFs of KiIpiSendRequestEx @ 0x14007C440
 * Callers:
 *     KxFlushSingleTb @ 0x1400077D0 (KxFlushSingleTb.c)
 *     KxFlushEntireTb @ 0x140007A1C (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14007C310 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 *     KxFlushMultipleTb @ 0x140102D90 (KxFlushMultipleTb.c)
 *     KeInvalidateRangeAllCaches @ 0x14011B944 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x14005DCC0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14007C500 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64),
        __int64 a8)
{
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int i; // ebx

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
  KiIpiSendRequest(a1, a2, a3, a4, a5, a6);
  if ( a7 )
    a7(a8);
  result = *(unsigned int *)(a1 + 11520);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11520) )
  {
    if ( (++i & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(i, v13, v14);
  }
  return result;
}
