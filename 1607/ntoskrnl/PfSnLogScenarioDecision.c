/*
 * XREFs of PfSnLogScenarioDecision @ 0x1403E87D4
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1403E7AD0 (PfSnBeginAppLaunch.c)
 *     PfSnBeginScenario @ 0x1403E8500 (PfSnBeginScenario.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PfSnLogScenarioDecision(__int64 a1, int a2, __int16 a3, char a4, char a5, char a6, __int64 a7)
{
  REGHANDLE v7; // rdi
  __int64 v11; // rax
  char v12; // [rsp+30h] [rbp-91h] BYREF
  char v13; // [rsp+31h] [rbp-90h] BYREF
  __int16 v14; // [rsp+34h] [rbp-8Dh] BYREF
  __int16 v15; // [rsp+38h] [rbp-89h] BYREF
  int v16; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-81h] BYREF
  __int64 v18; // [rsp+50h] [rbp-71h]
  int v19; // [rsp+58h] [rbp-69h]
  int v20; // [rsp+5Ch] [rbp-65h]
  __int64 v21; // [rsp+60h] [rbp-61h]
  __int64 v22; // [rsp+68h] [rbp-59h]
  int *v23; // [rsp+70h] [rbp-51h]
  __int64 v24; // [rsp+78h] [rbp-49h]
  __int16 *v25; // [rsp+80h] [rbp-41h]
  __int64 v26; // [rsp+88h] [rbp-39h]
  char *v27; // [rsp+90h] [rbp-31h]
  __int64 v28; // [rsp+98h] [rbp-29h]
  char *v29; // [rsp+A0h] [rbp-21h]
  __int64 v30; // [rsp+A8h] [rbp-19h]
  char *v31; // [rsp+B0h] [rbp-11h]
  __int64 v32; // [rsp+B8h] [rbp-9h]
  int *v33; // [rsp+C0h] [rbp-1h]
  __int64 v34; // [rsp+C8h] [rbp+7h]
  int v35; // [rsp+118h] [rbp+57h] BYREF

  v35 = a2;
  v7 = RegHandle;
  if ( RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_ScenarioDecision_Info) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a1 + 2 * v11) );
    v14 = v11;
    UserData.Ptr = (ULONGLONG)&v14;
    v19 = 2 * (unsigned __int16)v11;
    v21 = a1 + 60;
    v23 = &v35;
    v25 = &v15;
    v27 = &v12;
    v13 = a5;
    v29 = &v13;
    v31 = &a6;
    *(_QWORD *)&UserData.Size = 2LL;
    v18 = a1;
    v20 = 0;
    v22 = 4LL;
    v24 = 4LL;
    v15 = a3;
    v26 = 2LL;
    v12 = a4;
    v28 = 1LL;
    v30 = 1LL;
    v32 = 4LL;
    if ( a7 >= 0 )
      v16 = a7 / 10000000;
    else
      v16 = -(a7 != -1) - 1;
    v34 = 4LL;
    v33 = &v16;
    EtwWrite(v7, &PfSnEvt_ScenarioDecision_Info, 0LL, 9u, &UserData);
  }
}
