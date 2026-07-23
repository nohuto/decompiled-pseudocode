/*
 * XREFs of PpmEventTraceCoordinatedIdleStates @ 0x140673D60
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void PpmEventTraceCoordinatedIdleStates()
{
  __int64 v0; // rdi
  unsigned int v1; // eax
  ULONG v2; // esi
  unsigned int v3; // ebp
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v6; // r9
  struct _EVENT_DATA_DESCRIPTOR *v7; // rdx
  unsigned int v8; // r8d
  struct _EVENT_DATA_DESCRIPTOR *v9; // rcx
  ULONGLONG v10; // r11
  ULONG v11; // eax
  struct _EVENT_DATA_DESCRIPTOR *v12; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v13; // rax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN) )
  {
    v0 = PpmPlatformStates;
    v1 = PpmPlatformStates ? *(_DWORD *)PpmPlatformStates : 0;
    v2 = 2 * v1 + 1;
    v14 = v1;
    v3 = 16 * v2 + 12 * v1;
    PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v3, 0x654D5050u);
    UserData = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      UserData->Reserved = 0;
      v6 = 0LL;
      v7 = &UserData[v2];
      UserData->Ptr = (ULONGLONG)&v14;
      UserData->Size = 4;
      if ( v14 )
      {
        v8 = 2;
        do
        {
          v9 = &UserData[v8 - 1];
          LODWORD(v7->Ptr) = *(_DWORD *)(384 * v6 + v0 + 64);
          HIDWORD(v7->Ptr) = *(_DWORD *)(384 * v6 + v0 + 68);
          v7->Size = *(unsigned __int8 *)(384 * v6 + v0 + 113);
          v9->Reserved = 0;
          v9->Ptr = (ULONGLONG)v7;
          v9->Size = 12;
          v10 = *(_QWORD *)(384 * v6 + v0 + 296);
          if ( v10 )
          {
            v11 = *(unsigned __int16 *)(384 * v6 + v0 + 290);
            v12 = &UserData[v8];
            v12->Reserved = 0;
            v12->Ptr = v10;
            v12->Size = v11;
          }
          else
          {
            v13 = &UserData[v8];
            v13->Reserved = 0;
            v13->Ptr = (ULONGLONG)L"<unspecified>";
            v13->Size = 28;
          }
          v7 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v7 + 12);
          v6 = (unsigned int)(v6 + 1);
          v8 += 2;
        }
        while ( (unsigned int)v6 < v14 );
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN, 0LL, v2, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
