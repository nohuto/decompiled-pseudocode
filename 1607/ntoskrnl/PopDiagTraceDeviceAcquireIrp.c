/*
 * XREFs of PopDiagTraceDeviceAcquireIrp @ 0x14012C694
 * Callers:
 *     PoDeviceAcquireIrp @ 0x14012C65C (PoDeviceAcquireIrp.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopDiagGetDriverName @ 0x1401239A8 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceAcquireIrp(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  NTSTATUS DriverName; // eax
  wchar_t *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-31h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  wchar_t *v12; // [rsp+60h] [rbp-11h]
  int v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+6Ch] [rbp-5h]
  wchar_t v15[32]; // [rsp+78h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v17; // [rsp+D8h] [rbp+67h] BYREF

  v2 = &retaddr;
  v17 = a1;
  v8 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE);
    if ( (_BYTE)v2 )
    {
      DriverName = PopDiagGetDriverName(a2, v15, 0x40u);
      *(_QWORD *)&UserData.Size = 8LL;
      v11 = 8LL;
      UserData.Ptr = (ULONGLONG)&v17;
      v5 = v15;
      v10 = &v8;
      if ( DriverName < 0 )
        v5 = (wchar_t *)&cchOriginalDestLength;
      v6 = -1LL;
      v12 = v5;
      do
        ++v6;
      while ( v5[v6] );
      v13 = 2 * v6 + 2;
      v14 = 0;
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
