/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x140101E20
 * Callers:
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 *     CcCoalescingCallBack @ 0x1401A89B4 (CcCoalescingCallBack.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 */

BOOLEAN __fastcall CcRescheduleLazyWriteScan(__int64 *a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER v2; // rdx
  BOOLEAN result; // al
  __int64 v4; // rcx

  if ( !CcCoalescingState )
  {
    if ( byte_1402FDBA0 )
    {
      if ( a1 && (v1 = *a1, v1 != 0x7FFFFFFFFFFFFFFFLL) && v1 )
      {
        v4 = KeMaximumIncrement * v1;
        v2.QuadPart = 160000000LL;
        if ( v4 <= 160000000 )
          v2.QuadPart = v4;
        if ( v2.QuadPart < 10000000 )
          v2 = CcIdleDelay;
        if ( v2.QuadPart > 0 )
          v2.QuadPart = -v2.QuadPart;
      }
      else
      {
        v2 = CcIdleDelay;
      }
      return KeSetCoalescableTimer(&Timer, v2, 0, 0x3E8u, &LazyWriter);
    }
    else
    {
      return CcScheduleLazyWriteScan(0, 0);
    }
  }
  return result;
}
