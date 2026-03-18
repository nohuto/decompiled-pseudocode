/*
 * XREFs of EnterCritAvoidingDitHitTestHazard @ 0x1C0044EC4
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall EnterCritAvoidingDitHitTestHazard(int a1)
{
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v10; // rcx

  v2 = 0LL;
  while ( 1 )
  {
    v3 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v3 )
      v2 = *v3;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && a1 && v2 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v2 == gptiRit )
        return v2;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v2 == gptiRit )
        return v2;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v10 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v10, UserRequest, 0, 0, 0LL);
  }
  return v2;
}
