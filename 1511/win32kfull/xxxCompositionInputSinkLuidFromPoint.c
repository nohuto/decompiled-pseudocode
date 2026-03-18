/*
 * XREFs of xxxCompositionInputSinkLuidFromPoint @ 0x1C022DA54
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1C0218550 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     WakeDIT @ 0x1C0009CEC (WakeDIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCompositionInputSinkLuidFromPoint(int a1, __int64 *a2, _QWORD *a3, _QWORD *a4, _OWORD *a5)
{
  unsigned int v5; // edi
  bool v6; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx

  v5 = 0;
  v6 = gbDIT == 0;
  *a3 = 0LL;
  if ( !v6 )
  {
    while ( gbCompositionInputSinkQueryBlockedOnDIT == 1 )
    {
      ++gcDITLuidHitTestWaiters;
      LeaveCrit();
      KeWaitForSingleObject(gpsemDITLuidHitTestWaiters, UserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
      if ( !gbDIT )
        return v5;
    }
    gptCompositionInputSinkLuidFromPoint = *a2;
    gtypeCompositionInputSinkLuidFromPoint = a1;
    gbCompositionInputSinkQueryBlockedOnDIT = 1;
    WakeDIT(0x80u);
    UserSessionSwitchLeaveCrit(v12, v11);
    KeWaitForSingleObject(gpkeDITCompositionInputSinkQueryResponseEvent, UserRequest, 1, 1u, 0LL);
    EnterCrit(0LL, 1LL);
    gbCompositionInputSinkQueryBlockedOnDIT = 0;
    v5 = gbCompositionInputSinkLuidFromPoint;
    if ( gbCompositionInputSinkLuidFromPoint )
    {
      *a3 = gluidCompositionInputSinkLuidFromPoint;
      if ( a4 )
        *a4 = ghwndCompositionInputSinkLuidFromPoint;
      if ( a5 )
      {
        *a5 = gxformCompositionInputSinkLuidFromPoint;
        a5[1] = xmmword_1C032C570;
        a5[2] = xmmword_1C032C580;
        a5[3] = xmmword_1C032C590;
      }
    }
    if ( gcDITLuidHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITLuidHitTestWaiters, 0, gcDITLuidHitTestWaiters, 0);
      gcDITLuidHitTestWaiters = 0;
    }
  }
  return v5;
}
