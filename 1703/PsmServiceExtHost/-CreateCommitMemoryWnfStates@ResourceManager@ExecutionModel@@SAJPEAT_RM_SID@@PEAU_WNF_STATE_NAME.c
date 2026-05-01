/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x1800199CC
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000C360 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180019AC0 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001A034 (QueryTransientObjectSecurityDescriptor.c)
 *     AccessHlprFree @ 0x18001A148 (AccessHlprFree.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
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
  _WNF_STATE_NAME v11; // [rsp+48h] [rbp-18h] BYREF
  struct _WNF_STATE_NAME v12; // [rsp+50h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (int)QueryTransientObjectSecurityDescriptor(a1, a2, &v10) >= 0 )
  {
    v6 = NtCreateWnfStateName(&v11, 3LL, 0LL);
    if ( v6 < 0 )
      goto LABEL_17;
    v6 = NtCreateWnfStateName(&v12, 3LL, 0LL);
  }
  else
  {
    v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 8u, &v11);
    if ( v6 < 0 )
      goto LABEL_17;
    v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 0x10u, &v12);
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
LABEL_17:
  v9 = RtlNtStatusToDosError(v6);
  v7 = v9;
  if ( v9 > 0 )
    v7 = (unsigned __int16)v9 | 0x80070000;
LABEL_6:
  if ( v10 )
    AccessHlprFree();
  if ( v11.Data[0] || v11.Data[1] )
    NtDeleteWnfStateName(&v11);
  if ( v12.Data[0] || v12.Data[1] )
    NtDeleteWnfStateName(&v12);
  return v7;
}
