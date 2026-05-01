/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001E360
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000F4CC (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180005FD4 (-CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_R.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 *     AccessHlprFree @ 0x18001E9F8 (AccessHlprFree.c)
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
