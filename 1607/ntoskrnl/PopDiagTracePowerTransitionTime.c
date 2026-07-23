/*
 * XREFs of PopDiagTracePowerTransitionTime @ 0x1405312C8
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopPowerTransitionTimesInMs @ 0x140114BA4 (PopPowerTransitionTimesInMs.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopDiagTracePowerTransitionTime()
{
  int v0; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v1[4]; // [rsp+34h] [rbp-45h] BYREF
  int v2; // [rsp+38h] [rbp-41h] BYREF
  int v3; // [rsp+3Ch] [rbp-3Dh] BYREF
  _BYTE v4[16]; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  _BYTE *v6; // [rsp+60h] [rbp-19h]
  int v7; // [rsp+68h] [rbp-11h]
  int v8; // [rsp+6Ch] [rbp-Dh]
  int *v9; // [rsp+70h] [rbp-9h]
  int v10; // [rsp+78h] [rbp-1h]
  int v11; // [rsp+7Ch] [rbp+3h]
  int *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  int *v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+98h] [rbp+1Fh]
  int v17; // [rsp+9Ch] [rbp+23h]
  int *v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  _BYTE *v21; // [rsp+B0h] [rbp+37h]
  int v22; // [rsp+B8h] [rbp+3Fh]
  int v23; // [rsp+BCh] [rbp+43h]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES) )
    {
      PopPowerTransitionTimesInMs(&v0, (__int64)v1, &v2, &v3, (__int64)v4);
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v0;
      v6 = v1;
      v9 = &dword_140303978;
      v12 = &v2;
      v15 = &v3;
      v18 = &dword_1403039C0;
      v21 = v4;
      UserData.Size = 4;
      v7 = 4;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES, 0LL, 7u, &UserData);
    }
  }
}
