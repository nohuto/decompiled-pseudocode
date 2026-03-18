/*
 * XREFs of PopDiagTraceIrpFinish @ 0x1401369F0
 * Callers:
 *     PopRequestCompletion @ 0x140136608 (PopRequestCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x14013682C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     IoFindDeviceThatFailedIrp @ 0x14012FCCC (IoFindDeviceThatFailedIrp.c)
 *     PopDiagGetDriverName @ 0x14014A228 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  REGHANDLE v2; // rsi
  __int16 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 DeviceThatFailedIrp; // rax
  int DriverName; // eax
  __int16 *v8; // rcx
  int v9; // [rsp+30h] [rbp-89h] BYREF
  __int64 v10; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-79h] BYREF
  int *v12; // [rsp+50h] [rbp-69h]
  __int64 v13; // [rsp+58h] [rbp-61h]
  __int16 *v14; // [rsp+60h] [rbp-59h]
  int v15; // [rsp+68h] [rbp-51h]
  int v16; // [rsp+6Ch] [rbp-4Dh]
  _BYTE v17[128]; // [rsp+70h] [rbp-49h] BYREF

  v10 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH) )
    {
      v3 = &word_140196B30;
      v4 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
      v9 = *(_DWORD *)(a1 + 48);
      if ( v9 < 0 && !*(_DWORD *)(v4 + 188) )
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1);
        DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v17, 120LL);
        v2 = PopDiagHandle;
        v8 = (__int16 *)v17;
        if ( DriverName < 0 )
          v8 = &word_140196B30;
        v3 = v8;
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v10;
      v12 = &v9;
      v5 = -1LL;
      v13 = 4LL;
      v14 = v3;
      do
        ++v5;
      while ( v3[v5] );
      v16 = 0;
      v15 = 2 * v5 + 2;
      EtwWrite(v2, &POP_ETW_EVENT_IRPFINISH, 0LL, 3u, &UserData);
    }
  }
}
