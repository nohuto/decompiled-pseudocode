/*
 * XREFs of PpmEventTraceProfileSetting @ 0x140576A4C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1403F652C (PpmSetProfilePolicySetting.c)
 *     PpmInfoTraceProfileSettings @ 0x140672BF0 (PpmInfoTraceProfileSettings.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProfileSetting(
        char a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  _UNKNOWN **v8; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  REGHANDLE v12; // rbx
  __int64 v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  BOOL v16; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-59h] BYREF
  __int64 v18; // [rsp+58h] [rbp-49h]
  int v19; // [rsp+60h] [rbp-41h]
  int v20; // [rsp+64h] [rbp-3Dh]
  BOOL *v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+70h] [rbp-31h]
  int v23; // [rsp+74h] [rbp-2Dh]
  char *v24; // [rsp+78h] [rbp-29h]
  int v25; // [rsp+80h] [rbp-21h]
  int v26; // [rsp+84h] [rbp-1Dh]
  __int64 v27; // [rsp+88h] [rbp-19h]
  int v28; // [rsp+90h] [rbp-11h]
  int v29; // [rsp+94h] [rbp-Dh]
  int *v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+A0h] [rbp-1h]
  int v32; // [rsp+A4h] [rbp+3h]
  __int64 v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+B0h] [rbp+Fh]
  int v35; // [rsp+B4h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+3Fh] BYREF
  char v37; // [rsp+E8h] [rbp+47h] BYREF
  char v38; // [rsp+100h] [rbp+5Fh] BYREF

  v8 = &retaddr;
  v38 = a4;
  v37 = a1;
  if ( PpmEtwRegistered )
  {
    v11 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE;
    v12 = PpmEtwHandle;
    if ( a8 )
      v11 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN;
    LOBYTE(v8) = EtwEventEnabled(PpmEtwHandle, v11);
    if ( (_BYTE)v8 )
    {
      v18 = a2;
      UserData.Size = 1;
      UserData.Reserved = 0;
      v16 = a7 != 0;
      UserData.Ptr = (ULONGLONG)&v37;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(a2 + v13) );
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v19 = v13 + 1;
      v21 = &v16;
      v24 = &v38;
      v30 = &a6;
      v33 = a5;
      v34 = a6;
      v22 = 4;
      v25 = 1;
      v14 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN;
      v31 = 4;
      v27 = a3;
      v28 = 16;
      if ( !a8 )
        v14 = &PPM_ETW_PROCESSOR_PROFILE_SETTING_CHANGE;
      LOBYTE(v8) = EtwWrite(v12, v14, 0LL, 7u, &UserData);
    }
  }
  return (char)v8;
}
