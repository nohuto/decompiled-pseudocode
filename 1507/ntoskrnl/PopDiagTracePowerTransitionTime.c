/*
 * XREFs of PopDiagTracePowerTransitionTime @ 0x140566D18
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PopPowerTransitionTimesInMs @ 0x140148B80 (PopPowerTransitionTimesInMs.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PopDiagTracePowerTransitionTime()
{
  int v0; // [rsp+30h] [rbp-49h] BYREF
  int v1; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v2[4]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v3[4]; // [rsp+3Ch] [rbp-3Dh] BYREF
  _DWORD v4[4]; // [rsp+40h] [rbp-39h] BYREF
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
      PopPowerTransitionTimesInMs(v4, (__int64)v2, &v0, &v1, (__int64)v3);
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)v4;
      v6 = v2;
      v9 = &dword_14032ED58;
      v12 = &v0;
      v15 = &v1;
      v18 = &dword_14032EDA0;
      v21 = v3;
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
