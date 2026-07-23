/*
 * XREFs of PopDiagTraceIrpFinish @ 0x14012BE68
 * Callers:
 *     PopRequestCompletion @ 0x14012BB00 (PopRequestCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IoFindDeviceThatFailedIrp @ 0x1400B25F4 (IoFindDeviceThatFailedIrp.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopDiagGetDriverName @ 0x1401239A8 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  REGHANDLE v2; // rsi
  const size_t *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 DeviceThatFailedIrp; // rax
  NTSTATUS DriverName; // eax
  wchar_t *v8; // rcx
  int v9; // [rsp+30h] [rbp-89h] BYREF
  __int64 v10; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-79h] BYREF
  int *v12; // [rsp+50h] [rbp-69h]
  __int64 v13; // [rsp+58h] [rbp-61h]
  const size_t *v14; // [rsp+60h] [rbp-59h]
  int v15; // [rsp+68h] [rbp-51h]
  int v16; // [rsp+6Ch] [rbp-4Dh]
  wchar_t v17[64]; // [rsp+70h] [rbp-49h] BYREF

  v10 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH) )
    {
      v3 = &cchOriginalDestLength;
      v4 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
      v9 = *(_DWORD *)(a1 + 48);
      if ( v9 < 0 && !*(_DWORD *)(v4 + 188) )
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1);
        DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v17, 0x78u);
        v2 = PopDiagHandle;
        v8 = v17;
        if ( DriverName < 0 )
          v8 = (wchar_t *)&cchOriginalDestLength;
        v3 = (const size_t *)v8;
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = &v9;
      v5 = -1LL;
      v13 = 4LL;
      v14 = v3;
      do
        ++v5;
      while ( *((_WORD *)v3 + v5) );
      v16 = 0;
      v15 = 2 * v5 + 2;
      EtwWrite(v2, &POP_ETW_EVENT_IRPFINISH, 0LL, 3u, &UserData);
    }
  }
}
