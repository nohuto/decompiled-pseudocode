/*
 * XREFs of PopTriggerDiagTraceAoAcCapability @ 0x1407BC90C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopTriggerDiagTraceAoAcCapability()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopTriggerDiagHandleRegistered )
  {
    v0 = PopTriggerDiagHandle;
    if ( EtwEventEnabled(PopTriggerDiagHandle, &POP_TRIGGER_ETW_AOAC_CAPABILITY) )
    {
      UserData.Reserved = 0;
      v1 = (unsigned __int8)PopPlatformAoAc;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v1;
      EtwWrite(v0, &POP_TRIGGER_ETW_AOAC_CAPABILITY, 0LL, 1u, &UserData);
    }
  }
}
