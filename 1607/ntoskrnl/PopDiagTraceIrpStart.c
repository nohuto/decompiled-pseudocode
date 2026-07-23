/*
 * XREFs of PopDiagTraceIrpStart @ 0x14012B830
 * Callers:
 *     PopRequestPowerIrp @ 0x14012B108 (PopRequestPowerIrp.c)
 *     PopQueueQuerySetIrp @ 0x14012B5D8 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIrpStart(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r9d
  bool v9; // zf
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  char v14; // [rsp+38h] [rbp-49h] BYREF
  char v15; // [rsp+39h] [rbp-48h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-45h] BYREF
  int v17; // [rsp+40h] [rbp-41h] BYREF
  __int64 v18; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  int *v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  char *v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 *v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  __int16 *v26; // [rsp+98h] [rbp+17h]
  __int64 v27; // [rsp+A0h] [rbp+1Fh]
  __int64 v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v32; // [rsp+F0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v32 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART);
    if ( (_BYTE)v2 )
    {
      v5 = *(_QWORD *)(a2 + 72LL * (*(char *)(a2 + 66) - 1) + 272);
      v15 = *(_BYTE *)(v5 + 184);
      v17 = *(_DWORD *)(v5 + 188);
      v14 = *(_BYTE *)(v5 + 192) - 1;
      v6 = *(_QWORD *)(v5 + 24);
      if ( v6 )
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      else
        v7 = 0LL;
      v18 = v7;
      v8 = 5;
      v9 = *(_WORD *)(v7 + 40) >> 1 == 0;
      v16 = *(_WORD *)(v7 + 40) >> 1;
      UserData.Ptr = (ULONGLONG)&v32;
      v20 = &v17;
      v22 = &v15;
      v24 = &v18;
      v26 = &v16;
      *(_QWORD *)&UserData.Size = 8LL;
      v21 = 4LL;
      v23 = 1LL;
      v25 = 8LL;
      v27 = 2LL;
      if ( !v9 )
      {
        v10 = *(unsigned __int16 *)(v7 + 40);
        v8 = 6;
        v11 = *(_QWORD *)(v7 + 48);
        v30 = 0;
        v28 = v11;
        v29 = v10;
      }
      v12 = 2LL * v8;
      *(&UserData.Reserved + 2 * v12) = 0;
      *(&UserData.Ptr + v12) = (ULONGLONG)&v14;
      *(&UserData.Size + 2 * v12) = 1;
      LOBYTE(v2) = EtwWrite(v4, &POP_ETW_EVENT_IRPSTART, 0LL, v8 + 1, &UserData);
    }
  }
  return (char)v2;
}
