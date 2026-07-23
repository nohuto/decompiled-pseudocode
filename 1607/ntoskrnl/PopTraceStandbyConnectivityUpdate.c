/*
 * XREFs of PopTraceStandbyConnectivityUpdate @ 0x14057C8F8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14057C7A8 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopTraceStandbyConnectivityUpdate(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  int v3; // r9d
  int v4; // r10d
  REGHANDLE v5; // rbx
  int v7; // [rsp+38h] [rbp-29h] BYREF
  int v8; // [rsp+3Ch] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  int *v10; // [rsp+50h] [rbp-11h]
  int v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+5Ch] [rbp-5h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+94h] [rbp+33h]
  int *v17; // [rsp+98h] [rbp+37h]
  int v18; // [rsp+A0h] [rbp+3Fh]
  int v19; // [rsp+A4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  int v21; // [rsp+C8h] [rbp+67h] BYREF
  int v22; // [rsp+D0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v22 = a2;
  v21 = a1;
  if ( hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v7;
      v17 = &v8;
      v7 = v4;
      v8 = v3;
      v15 = 4;
      v18 = 4;
      LOBYTE(v2) = TlgWrite(&hProvider, &unk_14027CDAB, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 4;
      v10 = &v22;
      v11 = 4;
      LOBYTE(v2) = EtwWrite(v5, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE, 0LL, 2u, &UserData);
    }
  }
  return (char)v2;
}
