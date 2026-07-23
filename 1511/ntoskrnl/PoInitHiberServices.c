/*
 * XREFs of PoInitHiberServices @ 0x1405466A8
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     BcdOpenSystemStore @ 0x1404FB6B8 (BcdOpenSystemStore.c)
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x1404FBE3C (BcdCloseStore.c)
 *     PopBcdEstablishResumeObject @ 0x1404FBEB0 (PopBcdEstablishResumeObject.c)
 *     PoDisableSleepStates @ 0x14051AEE4 (PoDisableSleepStates.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
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
  if ( *(&xmmword_1402DDFD0 + 1) )
    ((void (*)(void))*(&xmmword_1402DDFD0 + 1))();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
