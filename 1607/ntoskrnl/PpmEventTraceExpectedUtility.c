/*
 * XREFs of PpmEventTraceExpectedUtility @ 0x14012FA8C
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14012F920 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceExpectedUtility(__int64 a1)
{
  REGHANDLE v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  __int16 v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  unsigned int v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  int *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  unsigned int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  __int16 *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]
  __int64 v28; // [rsp+B0h] [rbp+37h]
  int v29; // [rsp+B8h] [rbp+3Fh]
  int v30; // [rsp+BCh] [rbp+43h]

  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_EXPECTED_UTILITY) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v3 = *(_QWORD *)(a1 + 24184);
      UserData.Size = 8;
      if ( v3 )
        v4 = *(_DWORD *)(v3 + 60);
      else
        v4 = 100;
      v11 = v4;
      v5 = PpmCheckPeriod / 0x2710uLL;
      v6 = ((unsigned int)(PpmCheckPeriod / 0x2710uLL) * (*(_DWORD *)(a1 + 24236) / v4) + 50) / 0x64;
      v9 = v6;
      if ( v6 <= (unsigned int)(PpmCheckPeriod / 0x2710uLL) )
      {
        v10 = 0;
        v8 = v5 - v6;
      }
      else
      {
        v9 = PpmCheckPeriod / 0x2710uLL;
        v8 = 0;
        v10 = v6 - v5;
      }
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v13 = &v8;
      v14 = 4;
      v16 = &v9;
      v19 = &v10;
      v22 = &v11;
      v7 = *(unsigned __int8 *)(a1 + 1616);
      v25 = &v7;
      v28 = a1 + 1617;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 2;
      v29 = 1;
      EtwWrite(v2, &PPM_ETW_EXPECTED_UTILITY, 0LL, 7u, &UserData);
    }
  }
}
