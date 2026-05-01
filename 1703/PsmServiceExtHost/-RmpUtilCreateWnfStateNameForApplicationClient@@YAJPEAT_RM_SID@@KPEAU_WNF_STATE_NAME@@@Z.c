/*
 * XREFs of ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180019AC0
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x1800199CC (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180019B50 (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 */

__int64 __fastcall RmpUtilCreateWnfStateNameForApplicationClient(
        union _RM_SID *a1,
        __int64 a2,
        struct _WNF_STATE_NAME *a3)
{
  int v4; // eax
  PVOID v5; // rdi
  int WnfStateName; // ebx
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v4 = RmpUtilCreateSecurityDescriptorForApplicationWnf(a1, &P);
  v5 = P;
  WnfStateName = v4;
  if ( v4 >= 0 )
  {
    WnfStateName = NtCreateWnfStateName(a3, 3LL, 0LL);
    if ( WnfStateName >= 0 )
      WnfStateName = 0;
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)WnfStateName;
}
