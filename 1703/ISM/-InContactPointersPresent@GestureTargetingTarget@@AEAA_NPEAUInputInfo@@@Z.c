/*
 * XREFs of ?InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z @ 0x180010078
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 *     ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010110 (-CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

char __fastcall GestureTargetingTarget::InContactPointersPresent(GestureTargetingTarget *this, struct InputInfo *a2)
{
  char v2; // bl
  int PointersFromInput; // eax
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v7[4]; // [rsp+30h] [rbp-78h] BYREF
  struct Pointer *v8[10]; // [rsp+40h] [rbp-68h] BYREF

  v2 = 0;
  v7[0] = 0;
  PointersFromInput = GetPointersFromInput(a2, (__int64)a2, v8, v7);
  if ( PointersFromInput >= 0 )
  {
    v5 = 0;
    if ( v7[0] )
    {
      while ( (*((_BYTE *)v8[v5] + 4) & 2) == 0 )
      {
        if ( ++v5 >= v7[0] )
          return v2;
      }
      return 1;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v4, &MinInput_Warning_CheckResult, 4, 534, PointersFromInput);
  }
  return v2;
}
