/*
 * XREFs of VfInitializeBranchTracing @ 0x14070ED1C
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ViIsBTSSupported @ 0x14070EF9C (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x14070F0C0 (ViSetupBTSPerProcNoEnable.c)
 */

__int64 VfInitializeBranchTracing()
{
  __int64 v1; // rbx
  PVOID PoolWithTag; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  PVOID *v5; // rax
  int v6; // eax

  if ( (MmVerifierData & 0x8000000) == 0 )
    return 3221225474LL;
  if ( VfBTSInitialized )
    return 3221226538LL;
  if ( !(unsigned int)ViIsBTSSupported() )
    return 3221226537LL;
  memset(VfBTSDataManagementArea, 0, sizeof(VfBTSDataManagementArea));
  if ( (_DWORD)ViVerifyBTSBufferSize )
    LODWORD(ViVerifyBTSBufferSize) = 24 * ViVerifyBTSBufferSize;
  else
    LODWORD(ViVerifyBTSBufferSize) = 240000;
  v1 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( (unsigned int)v1 < 0x280 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D535442u);
      VfBTSDataManagementArea[v1] = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_16;
      *(_QWORD *)VfBTSDataManagementArea[v1] = ExAllocatePoolWithTag(
                                                 NonPagedPoolNx,
                                                 (unsigned int)ViVerifyBTSBufferSize,
                                                 0x62535442u);
      v3 = (_QWORD *)VfBTSDataManagementArea[v1];
      if ( !*v3 )
        goto LABEL_16;
      v3[1] = *v3;
      *(_QWORD *)(VfBTSDataManagementArea[v1] + 24) = 0LL;
      *(_QWORD *)(VfBTSDataManagementArea[v1] + 16) = *(_QWORD *)VfBTSDataManagementArea[v1]
                                                    + (unsigned int)ViVerifyBTSBufferSize
                                                    + 1LL;
      v4 = VfBTSDataManagementArea[v1];
      v1 = (unsigned int)(v1 + 1);
      *(_QWORD *)(v4 + 80) = 0LL;
      if ( (unsigned int)v1 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_15;
    }
    return 3221226537LL;
  }
LABEL_15:
  if ( !(unsigned int)ViSetupBTSPerProcNoEnable() )
  {
LABEL_16:
    if ( (unsigned int)v1 < 0x280 )
    {
      do
      {
        v5 = (PVOID *)VfBTSDataManagementArea[v1];
        if ( v5 )
        {
          if ( *v5 )
          {
            ExFreePoolWithTag(*v5, 0x62535442u);
            *(_QWORD *)VfBTSDataManagementArea[v1] = 0LL;
          }
          ExFreePoolWithTag((PVOID)VfBTSDataManagementArea[v1], 0x6D535442u);
          VfBTSDataManagementArea[v1] = 0LL;
        }
        v6 = v1;
        v1 = (unsigned int)(v1 - 1);
      }
      while ( v6 );
    }
    return 3221226537LL;
  }
  VfBTSInitialized = 1;
  return 0LL;
}
