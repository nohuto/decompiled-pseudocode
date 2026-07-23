/*
 * XREFs of PopFxLogSocSubsystemBlockingTimes @ 0x14066C9E4
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140209288 (PopDiagTraceSleepStudyBlocker.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14066CF38 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14066DB44 (PopPluginQuerySocSubsystemBlockingTime.c)
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
  __int64 v13; // rcx
  char v15; // [rsp+20h] [rbp-79h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-71h] BYREF
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-39h] BYREF
  __int64 v20; // [rsp+70h] [rbp-29h]
  int v21; // [rsp+78h] [rbp-21h]
  int v22; // [rsp+7Ch] [rbp-1Dh]
  unsigned int *v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  __int64 v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  int v30; // [rsp+A8h] [rbp+Fh]
  int v31; // [rsp+ACh] [rbp+13h]
  __int64 *v32; // [rsp+B0h] [rbp+17h]
  int v33; // [rsp+B8h] [rbp+1Fh]
  int v34; // [rsp+BCh] [rbp+23h]

  v15 = PopWdiCurrentScenarioInstanceId;
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
        memset(v18, 0, sizeof(v18));
        LODWORD(v18[0]) = a2;
        v8 = *(_QWORD *)(v7 + v5 + 64);
        v18[3] = 0LL;
        v9 = (unsigned __int16 *)(v7 + v5 + 40);
        LODWORD(v18[4]) = 0;
        v18[2] = v9;
        v18[1] = v8;
        if ( !(unsigned __int8)PopPluginQuerySocSubsystemBlockingTime(v10, *(unsigned int *)(v7 + v5 + 60), v18) )
          break;
        v19.Reserved = 0;
        v22 = 0;
        v17 = v18[3];
        v19.Ptr = (ULONGLONG)&v15;
        v21 = 16;
        v20 = v7 + v5 + 88;
        v19.Size = 1;
        v11 = *v9;
        v25 = 0;
        v16 = v11 >> 1;
        v23 = &v16;
        v24 = 4;
        v12 = *(_QWORD *)(v7 + v5 + 48);
        v13 = *v9;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v26 = v12;
        v30 = 16;
        v29 = v7 + v5 + 72;
        v27 = v13;
        v32 = &v17;
        v33 = 8;
        PopDiagTraceSleepStudyBlocker(v13, &v19);
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
