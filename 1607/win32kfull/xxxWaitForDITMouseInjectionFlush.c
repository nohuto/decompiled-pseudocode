/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C00E0460
 * Callers:
 *     xxxSendInput @ 0x1C009EC1C (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
void xxxWaitForDITMouseInjectionFlush()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int16 v3; // si
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  PVOID Object[2]; // [rsp+90h] [rbp-38h] BYREF
  int v7; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v8; // [rsp+D8h] [rbp+10h]

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
    v8 = 0LL;
    v7 = 0;
    LeaveCrit();
    QueueMouseEvent(0, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0, 1, (__int64)&v7, 0LL);
    EnterCrit(0LL, 1LL);
    if ( v7 )
    {
      v2 = *(_QWORD *)(gptiCurrent + 400LL);
      *(_DWORD *)(gptiCurrent + 1096LL) |= 0x400000u;
      v3 = *(_WORD *)(v2 + 10);
      Object[0] = gpkeDITMouseInjectionResponseEvent;
      Object[1] = *(PVOID *)(gptiCurrent + 648LL);
      while ( 1 )
      {
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 64;
        UserSessionSwitchLeaveCrit(v1, v0);
        v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
        EnterCrit(0LL, 1LL);
        v5 = *(_QWORD *)(gptiCurrent + 400LL);
        if ( v4 != 1 )
          break;
        if ( (*(_WORD *)(v5 + 6) & 0x40) != 0 )
        {
          do
            xxxReceiveMessage(gptiCurrent);
          while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
        }
      }
      *(_WORD *)(v5 + 10) = v3;
      *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x400000u;
    }
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
}
