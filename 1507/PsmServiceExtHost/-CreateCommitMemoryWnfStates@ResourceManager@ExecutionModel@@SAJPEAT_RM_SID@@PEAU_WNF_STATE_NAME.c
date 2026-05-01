/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x180003A7C
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800112A8 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180003B74 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x180004258 (QueryTransientObjectSecurityDescriptor.c)
 *     AccessHlprFree @ 0x1800043B0 (AccessHlprFree.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(
        PSID pSid,
        struct _WNF_STATE_NAME *a2,
        struct _WNF_STATE_NAME *a3)
{
  char v6; // di
  signed int v7; // ebx
  NTSTATUS WnfStateName; // eax
  signed int v10; // eax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v6 = 0;
  if ( (int)QueryTransientObjectSecurityDescriptor(10LL, L"CommitMemoryWNFEvents", &P) >= 0 )
  {
    v6 = 1;
  }
  else
  {
    v7 = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStatesSecurityDescriptorManually(pSid, &P);
    if ( v7 < 0 )
      goto LABEL_6;
  }
  WnfStateName = NtCreateWnfStateName(a2, 3LL, 0LL);
  if ( WnfStateName < 0 || (WnfStateName = NtCreateWnfStateName(a3, 3LL, 0LL), WnfStateName < 0) )
  {
    v10 = RtlNtStatusToDosError(WnfStateName);
    v7 = v10;
    if ( v10 > 0 )
      v7 = (unsigned __int16)v10 | 0x80070000;
  }
  else
  {
    v7 = 0;
  }
LABEL_6:
  if ( P )
  {
    if ( v6 )
      AccessHlprFree();
    else
      RmpFreeHeap(P);
  }
  return (unsigned int)v7;
}
