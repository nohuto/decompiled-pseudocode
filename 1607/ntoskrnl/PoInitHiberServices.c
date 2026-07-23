/*
 * XREFs of PoInitHiberServices @ 0x14056C3E8
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     BcdOpenSystemStore @ 0x14053C46C (BcdOpenSystemStore.c)
 *     PopBcdClearPendingResume @ 0x14053CB70 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14053CC6C (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x14066BF50 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x14066E998 (PoShutdownBugCheck.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rdi
  bool v2; // bp
  HANDLE v3; // rbx
  _DWORD *PoolWithTag; // rax
  ULONG v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  v2 = PopHiberEnabledReg == 0;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &BcdStoreHandle);
  if ( BcdOpenSystemStore(&BcdStoreHandle) >= 0 )
  {
    v3 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle, 0LL);
    PopBcdClearPendingResume(v3);
    BcdCloseStore(v3);
  }
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0 )
      {
        v5 = ReturnLength - 2;
        ReturnLength -= 2;
        if ( *(_BYTE *)v1 )
        {
          if ( v1[1] <= v5 )
          {
            v2 = 1;
            PoDisableSleepStates(2LL, 8LL, &BcdStoreHandle);
          }
        }
      }
    }
  }
  v6 = 0;
  v7 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v7) )
    {
      v2 = 1;
      if ( (int)PoDisableSleepStates(
                  *(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v7),
                  8LL,
                  &BcdStoreHandle) < 0 )
      {
        LOBYTE(v8) = 1;
        PoShutdownBugCheck(v8, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v6;
    v7 += 4LL;
  }
  while ( v6 < 2 );
  KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopAcquirePolicyLock();
  LOBYTE(v9) = !v2;
  PopEnableHiberFile(v9, 0LL);
  PopReleasePolicyLock();
  KeSetEvent(&PopTransitionLock, 0, 0);
  if ( *(&xmmword_140328FF0 + 1) )
    ((void (*)(void))*(&xmmword_140328FF0 + 1))();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
