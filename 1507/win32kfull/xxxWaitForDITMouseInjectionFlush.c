/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C004AD10
 * Callers:
 *     xxxSendInput @ 0x1C0047E98 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023A9E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 */

__int64 xxxWaitForDITMouseInjectionFlush()
{
  __int64 result; // rax
  int v1; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v2; // [rsp+A8h] [rbp+10h]

  if ( gulAnyInputSinkInSubtree )
  {
    gbMouseInjectionBlockedOnDIT = 1;
    LeaveCrit();
    ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitMouseInjectionFlush);
    v2 = 0LL;
    v1 = 0;
    QueueMouseEvent(0, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0, 1, (__int64)&v1, 0LL);
    if ( v1 )
      KeWaitForSingleObject(gpkeDITMouseInjectionResponseEvent, UserRequest, 1, 1u, 0LL);
    ExReleaseResourceAndLeaveCriticalRegion(gpresDitMouseInjectionFlush);
    result = EnterCrit(1LL);
    gbMouseInjectionBlockedOnDIT = 0;
  }
  return result;
}
