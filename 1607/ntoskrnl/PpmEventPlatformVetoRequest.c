/*
 * XREFs of PpmEventPlatformVetoRequest @ 0x14020C1F4
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140201800 (PpmUpdatePlatformIdleVeto.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventPlatformVetoRequest(int a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rax
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PLATFORM_IDLE_VETO_DECREMENT;
  v4 = &PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT;
  if ( a3 )
    v3 = &PPM_ETW_PLATFORM_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 4;
      v8 = &v12;
      v9 = 4;
      LOBYTE(v4) = EtwWrite(v5, v3, 0LL, 2u, &UserData);
    }
  }
  return (char)v4;
}
