/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18000235C
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000E498 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     RmpUtilCreateWnfStateNameForApplicationClient @ 0x180002454 (RmpUtilCreateWnfStateNameForApplicationClient.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x180002934 (QueryTransientObjectSecurityDescriptor.c)
 *     AccessHlprFree @ 0x180002A5C (AccessHlprFree.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(
        union _RM_SID *a1,
        struct _WNF_STATE_NAME *a2,
        struct _WNF_STATE_NAME *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  signed int v9; // eax
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  struct _WNF_STATE_NAME v11; // [rsp+48h] [rbp-18h] BYREF
  struct _WNF_STATE_NAME v12; // [rsp+50h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (int)QueryTransientObjectSecurityDescriptor(a1, a2, &v10) >= 0 )
  {
    v6 = NtCreateWnfStateName(&v11, 3LL, 0LL);
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = NtCreateWnfStateName(&v12, 3LL, 0LL);
  }
  else
  {
    v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 8LL, &v11);
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 16LL, &v12);
  }
  if ( v6 >= 0 )
  {
    *a2 = v11;
    v11 = 0LL;
    *a3 = v12;
    v12 = 0LL;
    v7 = 0;
    goto LABEL_6;
  }
LABEL_15:
  v9 = RtlNtStatusToDosError(v6);
  v7 = v9;
  if ( v9 > 0 )
    v7 = (unsigned __int16)v9 | 0x80070000;
LABEL_6:
  if ( v10 )
    AccessHlprFree();
  if ( v11 )
    NtDeleteWnfStateName(&v11);
  if ( v12 )
    NtDeleteWnfStateName(&v12);
  return v7;
}
