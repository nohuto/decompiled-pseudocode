/*
 * XREFs of PopDiagTraceServiceNotification @ 0x140532C54
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceServiceNotification(_DWORD *a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  const EVENT_DESCRIPTOR *v2; // rax
  REGHANDLE v4; // rsi
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int16 v8; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v1 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_SUSPENDSERVICE;
  v2 = &POP_ETW_EVENT_SUSPENDSERVICE_END;
  if ( *a1 )
    v1 = &POP_ETW_EVENT_SUSPENDSERVICE_END;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, v1);
    if ( (_BYTE)v2 )
    {
      v5 = a1 + 1;
      v6 = -1LL;
      do
        ++v6;
      while ( *((_WORD *)v5 + v6) );
      v8 = v6;
      UserData.Ptr = (ULONGLONG)&v8;
      v11 = 2 * (unsigned __int16)v6;
      *(_QWORD *)&UserData.Size = 2LL;
      v10 = v5;
      v12 = 0;
      LOBYTE(v2) = EtwWrite(v4, v1, 0LL, 2u, &UserData);
    }
  }
  return (char)v2;
}
