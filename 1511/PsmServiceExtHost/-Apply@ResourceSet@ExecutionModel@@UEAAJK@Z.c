/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E860
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000CDA0 (-Apply@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800112FC (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpEmptyWorkerCleanup @ 0x18001BC5C (RmpEmptyWorkerCleanup.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceManager **this, unsigned int a2)
{
  PVOID v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  char *i; // rsi
  int v8; // eax
  int v9; // ebx
  _QWORD *v12; // rdi
  void *v13; // rcx
  void *v14; // rcx
  int v15; // [rsp+38h] [rbp-49h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  __int64 v17; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  __int64 *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  int *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]

  v4 = 0LL;
  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( !a2 && *(this - 167) == *(this - 166) )
  {
    v6 = -2147418113;
  }
  else
  {
    v5 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
           *(this - 168),
           (struct ExecutionModel::ResourceSet *)(this - 171),
           a2,
           (struct _RM_ACTIVITY_HOST **)&P);
    v4 = P;
    v6 = v5;
    if ( v5 >= 0 && P )
    {
      for ( i = (char *)P + 624; ; RtlSleepConditionVariableCS(i + 136, &RmpGlobalLock, 0LL) )
      {
        v8 = RmpActivityHostCheckQueueWork((__int64)v4);
        v9 = v8;
        if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
        {
          v17 = *((_QWORD *)v4 + 3);
          v23 = &v17;
          v25 = &v15;
          v24 = 8LL;
          v15 = v8;
          v26 = 4LL;
          *(_DWORD *)&EventDescriptor.Level = 4;
          *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800625B7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          UserData.Ptr = (ULONGLONG)off_180071068;
          EventDescriptor.Keyword = 1LL;
          UserData.Size = *(unsigned __int16 *)off_180071068;
          UserData.Reserved = 2;
          v20 = &unk_1800625C2;
          v21 = 55;
          v22 = 1;
          EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
          v4 = P;
        }
        if ( !v9 )
          break;
      }
      v6 = 0;
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 4, 0xFFFFFFFF) == 1 )
  {
    v12 = P;
    if ( *((_DWORD *)P + 8) == 1 )
    {
      if ( *((_QWORD *)P + 94) )
        TpReleaseWork();
      RmpEmptyWorkerCleanup(v12 + 100);
      if ( *((_DWORD *)v12 + 10) == 1 )
      {
        v13 = (void *)v12[88];
        if ( v13 )
          CloseHandle(v13);
        v14 = (void *)v12[89];
        if ( v14 )
          CloseHandle(v14);
      }
    }
    RmpFreeHeap(v12);
  }
  return v6;
}
