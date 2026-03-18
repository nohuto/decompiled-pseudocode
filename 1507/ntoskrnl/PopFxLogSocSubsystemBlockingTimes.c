/*
 * XREFs of PopFxLogSocSubsystemBlockingTimes @ 0x1406B3BA8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1406B4138 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1406B4D44 (PopPluginQuerySocSubsystemBlockingTime.c)
 */

__int64 __fastcall PopFxLogSocSubsystemBlockingTimes(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int16 *v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // ecx
  REGHANDLE v14; // r14
  char v16; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-71h] BYREF
  __int64 v18; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v19[5]; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  __int64 v21; // [rsp+80h] [rbp-29h]
  int v22; // [rsp+88h] [rbp-21h]
  int v23; // [rsp+8Ch] [rbp-1Dh]
  unsigned int *v24; // [rsp+90h] [rbp-19h]
  int v25; // [rsp+98h] [rbp-11h]
  int v26; // [rsp+9Ch] [rbp-Dh]
  __int64 v27; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]
  __int64 v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  int v32; // [rsp+BCh] [rbp+13h]
  __int64 *v33; // [rsp+C0h] [rbp+17h]
  int v34; // [rsp+C8h] [rbp+1Fh]
  int v35; // [rsp+CCh] [rbp+23h]

  v16 = PopWdiCurrentScenarioInstanceId;
  v3 = 0;
  v4 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = 0;
    if ( *(_DWORD *)(v4 + 20) )
    {
      while ( 1 )
      {
        v7 = 344LL * v6;
        memset(v19, 0, sizeof(v19));
        LODWORD(v19[0]) = a2;
        v8 = *(_QWORD *)(v7 + v5 + 64);
        v19[3] = 0LL;
        v9 = (unsigned __int16 *)(v7 + v5 + 40);
        LODWORD(v19[4]) = 0;
        v19[2] = v9;
        v19[1] = v8;
        if ( !(unsigned __int8)PopPluginQuerySocSubsystemBlockingTime(v10, *(unsigned int *)(v7 + v5 + 60), v19) )
          break;
        UserData.Reserved = 0;
        v23 = 0;
        v18 = v19[3];
        UserData.Ptr = (ULONGLONG)&v16;
        UserData.Size = 1;
        v21 = v7 + v5 + 88;
        v22 = 16;
        v11 = *v9;
        v26 = 0;
        v17 = v11 >> 1;
        v24 = &v17;
        v25 = 4;
        v12 = *(_QWORD *)(v7 + v5 + 48);
        v13 = *v9;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v27 = v12;
        v28 = v13;
        v30 = v7 + v5 + 72;
        v33 = &v18;
        v31 = 16;
        v34 = 8;
        if ( PopDiagSleepStudyHandleRegistered )
        {
          v14 = PopDiagSleepStudyHandle;
          if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
            EtwWrite(v14, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 6u, &UserData);
        }
        if ( ++v6 >= *(_DWORD *)(v5 + 20) )
          return v3;
      }
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v3;
}
