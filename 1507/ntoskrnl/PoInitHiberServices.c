/*
 * XREFs of PoInitHiberServices @ 0x1405BD528
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     BcdOpenSystemStore @ 0x14056DC50 (BcdOpenSystemStore.c)
 *     PopBcdClearPendingResume @ 0x14056E3CC (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     PopBcdEstablishResumeObject @ 0x14056E4D8 (PopBcdEstablishResumeObject.c)
 *     PoDisableSleepStates @ 0x14058E6EC (PoDisableSleepStates.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rdi
  bool v2; // si
  _DWORD *PoolWithTag; // rax
  ULONG v4; // eax
  __int64 v5; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  v2 = PopHiberEnabledReg == 0;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &BcdStoreHandle);
  if ( BcdOpenSystemStore(&BcdStoreHandle) >= 0 )
  {
    PopBcdEstablishResumeObject(BcdStoreHandle, 0LL);
    PopBcdClearPendingResume(BcdStoreHandle);
    BcdCloseStore(BcdStoreHandle);
  }
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0 )
      {
        v4 = ReturnLength - 2;
        ReturnLength -= 2;
        if ( *(_BYTE *)v1 )
        {
          if ( v1[1] <= v4 )
          {
            v2 = 1;
            PoDisableSleepStates(2, 8, &BcdStoreHandle);
          }
        }
      }
    }
  }
  KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopAcquirePolicyLock();
  LOBYTE(v5) = !v2;
  PopEnableHiberFile(v5, 0LL);
  PopReleasePolicyLock();
  KeSetEvent(&PopTransitionLock, 0, 0);
  if ( *(&xmmword_14032E590 + 1) )
    ((void (*)(void))*(&xmmword_14032E590 + 1))();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
