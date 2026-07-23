/*
 * XREFs of PpmEventProcessorVetoRequest @ 0x14020C448
 * Callers:
 *     PpmUpdateProcessorIdleVeto @ 0x14020195C (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventProcessorVetoRequest(__int64 a1, int a2, int a3, char a4)
{
  const EVENT_DESCRIPTOR *v4; // rbx
  const EVENT_DESCRIPTOR *v5; // rax
  REGHANDLE v7; // rdi
  __int16 v8; // ax
  __int16 v10; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+60h] [rbp+Fh]
  int v14; // [rsp+64h] [rbp+13h]
  int *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  int *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  int v21; // [rsp+C0h] [rbp+6Fh] BYREF
  int v22; // [rsp+C8h] [rbp+77h] BYREF

  v22 = a3;
  v21 = a2;
  v4 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_IDLE_VETO_DECREMENT;
  v5 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  if ( a4 )
    v4 = &PPM_ETW_PROCESSOR_IDLE_VETO_INCREMENT;
  if ( PpmEtwRegistered )
  {
    v7 = PpmEtwHandle;
    LOBYTE(v5) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v5 )
    {
      v8 = *(unsigned __int8 *)(a1 + 1616);
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v10 = v8;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = a1 + 1617;
      v15 = &v21;
      v18 = &v22;
      UserData.Size = 2;
      v13 = 1;
      v16 = 4;
      v19 = 4;
      LOBYTE(v5) = EtwWrite(v7, v4, 0LL, 4u, &UserData);
    }
  }
  return (char)v5;
}
