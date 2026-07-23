/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x14066CB58
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14066CF38 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DC78 (PopPluginQuerySocSubsystemMetadata.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rax
  __int64 v4; // r15
  unsigned int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rax
  size_t v8; // rbx
  char *PoolWithTag; // rax
  char *v10; // rdi
  unsigned int v11; // eax
  unsigned int i; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  SIZE_T v15; // rbx
  unsigned int *v16; // rax
  unsigned int *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int j; // edx
  char *v22; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v23; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v25; // r10d
  unsigned int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // r8
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rdx
  ULONG v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ecx
  REGHANDLE v37; // r12
  char v39; // [rsp+30h] [rbp-10h] BYREF
  ULONG UserDataCount; // [rsp+80h] [rbp+40h]
  unsigned int v42; // [rsp+98h] [rbp+58h] BYREF

  v39 = PopWdiCurrentScenarioInstanceId;
  v2 = 0;
  v3 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = 0;
    if ( !*(_DWORD *)(v3 + 20) )
      return v2;
    while ( 1 )
    {
      v6 = 344LL * v5;
      v7 = *(unsigned int *)(v6 + v4 + 104);
      v42 = v7;
      if ( !(_DWORD)v7 )
        goto LABEL_28;
      v8 = 296 * v7;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 296 * v7, 0x4D584650u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, v8);
      v11 = v42;
      for ( i = 0; i < v42; v11 = v42 )
      {
        v13 = i++;
        v14 = 296 * v13;
        *(_QWORD *)&v10[v14 + 8] = &v10[296 * v13 + 32];
        *(_WORD *)&v10[v14 + 2] = 128;
        *(_QWORD *)&v10[v14 + 24] = &v10[296 * v13 + 164];
        *(_WORD *)&v10[v14 + 18] = 128;
        *(_DWORD *)&v10[v14 + 160] = -1430541637;
        *(_DWORD *)&v10[v14 + 292] = -1430541637;
      }
      v15 = (int)(8 * v11 + 32);
      v16 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v15, 0x4D584650u);
      v17 = v16;
      if ( !v16 )
        break;
      memset(v16, 0, v15);
      v19 = 0LL;
      *v17 = a2;
      v20 = *(_QWORD *)(v6 + v4 + 64);
      v17[6] = 0;
      *((_QWORD *)v17 + 1) = v20;
      *((_QWORD *)v17 + 2) = v6 + v4 + 40;
      for ( v17[7] = v42; (unsigned int)v19 < v42; v19 = (unsigned int)(v19 + 1) )
      {
        v18 = (unsigned int)v19;
        *(_QWORD *)&v17[2 * v19 + 8] = &v10[296 * (unsigned int)v19];
      }
      if ( (unsigned __int8)PopPluginQuerySocSubsystemMetadata(v18, *(unsigned int *)(v6 + v4 + 60), v17) )
      {
        for ( j = 0; j < v42; ++j )
        {
          v22 = &v10[296 * j];
          if ( *((_DWORD *)v22 + 40) != -1430541637 )
            PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *((unsigned __int16 *)v22 + 1));
          if ( *((_DWORD *)v22 + 73) != -1430541637 )
            PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *((unsigned __int16 *)v22 + 9));
        }
        UserDataCount = v42 + 4 * v42 + 2;
        v23 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, 16LL * UserDataCount, 0x4D584650u);
        UserData = v23;
        if ( !v23 )
          break;
        v23->Reserved = 0;
        v23->Ptr = (ULONGLONG)&v39;
        v25 = 0;
        v23->Size = 1;
        v23[1].Reserved = 0;
        v26 = 2;
        v23[1].Ptr = (ULONGLONG)&v42;
        for ( v23[1].Size = 4; v25 < v42; *(_QWORD *)&UserData[v35].Size = v36 )
        {
          v27 = v26;
          UserData[v27].Reserved = 0;
          UserData[v27].Ptr = v6 + v4 + 72;
          UserData[v27].Size = 16;
          v28 = v25++;
          v29 = &v10[296 * v28];
          *((_DWORD *)v29 + 40) = *(unsigned __int16 *)v29 >> 1;
          v30 = v26 + 1;
          v31 = v26 + 2;
          v30 *= 2LL;
          v32 = v31;
          *(&UserData->Reserved + 2 * v30) = 0;
          *(&UserData->Ptr + v30) = (ULONGLONG)(v29 + 160);
          *(&UserData->Size + 2 * v30) = 4;
          v33 = *(unsigned __int16 *)v29;
          UserData[v32].Ptr = *((_QWORD *)v29 + 1);
          UserData[v32].Size = v33;
          UserData[v32].Reserved = 0;
          *((_DWORD *)v29 + 73) = *((unsigned __int16 *)v29 + 8) >> 1;
          v34 = v31 + 1;
          v31 += 2;
          v34 *= 2LL;
          v35 = v31;
          v26 = v31 + 1;
          *(&UserData->Ptr + v34) = (ULONGLONG)(v29 + 292);
          *((_QWORD *)&UserData->Size + v34) = 4LL;
          v36 = *((unsigned __int16 *)v29 + 8);
          UserData[v35].Ptr = *((_QWORD *)v29 + 3);
        }
        if ( PopDiagSleepStudyHandleRegistered )
        {
          v37 = PopDiagSleepStudyHandle;
          if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
            EtwWrite(v37, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
        }
        ExFreePoolWithTag(UserData, 0x4D584650u);
      }
      else
      {
        v2 = -1073741595;
      }
LABEL_25:
      ExFreePoolWithTag(v10, 0x4D584650u);
      if ( v17 )
        ExFreePoolWithTag(v17, 0x4D584650u);
      if ( (v2 & 0x80000000) != 0 )
        return v2;
LABEL_28:
      if ( ++v5 >= *(_DWORD *)(v4 + 20) )
        return v2;
    }
    v2 = -1073741670;
    goto LABEL_25;
  }
  return (unsigned int)-1073741584;
}
