/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C0081988
 * Callers:
 *     xxxSendInput @ 0x1C0082A04 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023ABBC (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
void xxxWaitForDITMouseInjectionFlush()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int16 v3; // si
  NTSTATUS v4; // ebx
  PVOID Object[7]; // [rsp+90h] [rbp-38h] BYREF
  int v6; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v7; // [rsp+D8h] [rbp+10h]

  if ( gulAnyInputSinkInSubtree )
  {
    while ( gbMouseInjectionBlockedOnDIT == 1 )
    {
      ++gcDITMouseInjectionWaiters;
      LeaveCrit();
      KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
    }
    gbMouseInjectionBlockedOnDIT = 1;
    v7 = 0LL;
    v6 = 0;
    LeaveCrit();
    QueueMouseEvent(0, 0, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0, 1, (__int64)&v6, 0LL);
    EnterCrit(0LL, 1LL);
    if ( v6 )
    {
      v2 = *(_QWORD *)(gptiCurrent + 400LL);
      *(_DWORD *)(gptiCurrent + 1072LL) |= 0x400000u;
      v3 = *(_WORD *)(v2 + 10);
      Object[0] = gpkeDITMouseInjectionResponseEvent;
      Object[1] = *(PVOID *)(gptiCurrent + 648LL);
      while ( 1 )
      {
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 64;
        UserSessionSwitchLeaveCrit(v1, v0);
        v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
        EnterCrit(0LL, 1LL);
        if ( v4 != 1 )
          break;
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
          xxxReceiveMessage(gptiCurrent);
      }
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = v3;
      *(_DWORD *)(gptiCurrent + 1072LL) &= ~0x400000u;
    }
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
}
