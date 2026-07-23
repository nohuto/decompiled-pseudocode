/*
 * XREFs of PpmEventTraceProfileEnable @ 0x140577CA0
 * Callers:
 *     PpmEnableProfile @ 0x140577C68 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140675C50 (PpmDisableProfile.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProfileEnable(char a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  const EVENT_DESCRIPTOR *v3; // rax
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_PROFILE_ENABLED;
  v3 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  if ( !a2 )
    v2 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 1;
      LOBYTE(v3) = EtwWrite(v4, v2, 0LL, 1u, &UserData);
    }
  }
  return (char)v3;
}
