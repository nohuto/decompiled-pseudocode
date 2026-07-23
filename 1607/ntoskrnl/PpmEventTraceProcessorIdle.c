/*
 * XREFs of PpmEventTraceProcessorIdle @ 0x140674384
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorIdle(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  ULONG v4; // ebp
  unsigned int v5; // r14d
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r10
  struct _EVENT_DATA_DESCRIPTOR *v12; // rcx
  ULONGLONG v13; // r11
  ULONG v14; // eax
  struct _EVENT_DATA_DESCRIPTOR *v15; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v16; // rax
  __int16 v17; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN) )
  {
    v2 = *(_QWORD *)(a1 + 23808);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 28);
      v18 = v3;
      v19 = *(_DWORD *)(v2 + 32);
    }
    else
    {
      v3 = 0;
      v19 = 0;
      v18 = 0;
    }
    v4 = 2 * v3 + 4;
    v5 = 37 * v3 + 16 * v4;
    PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v5, 0x654D5050u);
    UserData = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      v17 = *(unsigned __int8 *)(a1 + 1616);
      v8 = 0;
      UserData->Reserved = 0;
      UserData->Ptr = (ULONGLONG)&v17;
      UserData->Size = 2;
      UserData[1].Reserved = 0;
      UserData[1].Ptr = a1 + 1617;
      UserData[1].Size = 1;
      UserData[2].Reserved = 0;
      UserData[2].Ptr = (ULONGLONG)&v19;
      UserData[2].Size = 4;
      UserData[3].Reserved = 0;
      v9 = &UserData[v4];
      UserData[3].Ptr = (ULONGLONG)&v18;
      UserData[3].Size = 4;
      if ( v18 )
      {
        v10 = 5;
        do
        {
          v11 = 248LL * v8;
          v12 = &UserData[v10 - 1];
          LODWORD(v9->Ptr) = *(_DWORD *)(v11 + v2 + 984);
          HIDWORD(v9->Ptr) = *(_DWORD *)(v11 + v2 + 988);
          LOBYTE(v9->Size) = *(_BYTE *)(v11 + v2 + 1040);
          *(ULONG *)((char *)&v9->Size + 1) = *(unsigned __int8 *)(v11 + v2 + 1041);
          *(ULONG *)((char *)&v9->Reserved + 1) = *(unsigned __int8 *)(v11 + v2 + 1042);
          *(_DWORD *)((char *)&v9[1].Ptr + 1) = *(unsigned __int8 *)(v11 + v2 + 1043);
          *(_DWORD *)((char *)&v9[1].Ptr + 5) = *(unsigned __int8 *)(v11 + v2 + 1044);
          *(ULONG *)((char *)&v9[1].Size + 1) = *(unsigned __int8 *)(v11 + v2 + 1045);
          *(ULONG *)((char *)&v9[1].Reserved + 1) = *(unsigned __int8 *)(v11 + v2 + 1046);
          *(_DWORD *)((char *)&v9[2].Ptr + 1) = *(unsigned __int8 *)(v11 + v2 + 1047);
          v12->Reserved = 0;
          v12->Ptr = (ULONGLONG)v9;
          v12->Size = 37;
          v13 = *(_QWORD *)(v11 + v2 + 976);
          if ( v13 )
          {
            v14 = *(unsigned __int16 *)(v11 + v2 + 970);
            v15 = &UserData[v10];
            v15->Reserved = 0;
            v15->Ptr = v13;
            v15->Size = v14;
          }
          else
          {
            v16 = &UserData[v10];
            v16->Reserved = 0;
            v16->Ptr = (ULONGLONG)L"<unspecified>";
            v16->Size = 28;
          }
          v9 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v9 + 37);
          ++v8;
          v10 += 2;
        }
        while ( v8 < v18 );
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN, 0LL, v4, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
