/*
 * XREFs of PpmCheckRun @ 0x1400D4610
 * Callers:
 *     PpmCheckStart @ 0x1401114D0 (PpmCheckStart.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

char PpmCheckRun()
{
  int v0; // eax
  __int64 (*v1)(void); // r8
  char result; // al
  __int64 v3; // rbx
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v0 = PpmCheckPipelineIndex;
  v1 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( v1 )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v0 + 1;
      result = v1();
      if ( !result )
        break;
      v0 = PpmCheckPipelineIndex;
      v1 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v1 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = PpmPerfPolicyLock;
    PpmPerfPolicyLock = 0LL;
    result = KeSetEvent(&Object, 0, 0);
    if ( v3 )
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
      if ( result )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        return EtwWrite(v4, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
      }
    }
  }
  return result;
}
