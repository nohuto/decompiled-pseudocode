/*
 * XREFs of PnpRestoreResourcesInternal @ 0x14064BE48
 * Callers:
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1404C8F50 (PnpDetermineResourceListSize.c)
 *     IopCommitConfiguration @ 0x14055593C (IopCommitConfiguration.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140555CD0 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpFindBestConfiguration @ 0x140555DBC (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405560E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140556A60 (IopResourceRequirementsListToReqList.c)
 *     PnpCmResourcesToIoResources @ 0x1405579DC (PnpCmResourcesToIoResources.c)
 *     IopRearrangeReqList @ 0x140577BAC (IopRearrangeReqList.c)
 */

__int64 __fastcall PnpRestoreResourcesInternal(__int64 a1)
{
  unsigned int *v1; // rdx
  char *v4; // rbx
  int BestConfiguration; // esi
  __int64 v6; // rbx
  _DWORD *v7; // rbx
  ULONG v8; // eax
  _QWORD *v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  v1 = *(unsigned int **)(a1 + 416);
  if ( !v1 )
    return 0LL;
  v4 = PnpCmResourcesToIoResources(a1, v1, 0);
  if ( !v4 )
    return 3221225626LL;
  memset(v10, 0, sizeof(v10));
  v10[0] = *(_QWORD *)(a1 + 32);
  v10[3] = v4;
  HIDWORD(v10[1]) = 4;
  BestConfiguration = IopResourceRequirementsListToReqList((__int64)v10, &v10[4]);
  if ( BestConfiguration >= 0 && (v6 = v10[4]) != 0 )
  {
    IopRearrangeReqList(v10[4]);
    if ( !*(_QWORD *)(v6 + 24) )
    {
      PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
      return 3221225858LL;
    }
    BestConfiguration = PnpFindBestConfiguration((__int64)v10, 1u, (__int64)v9);
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
    if ( BestConfiguration >= 0 )
      BestConfiguration = IopCommitConfiguration(v9);
    if ( v10[5] )
      ExFreePoolWithTag((PVOID)v10[5], 0);
    if ( v10[6] )
      ExFreePoolWithTag((PVOID)v10[6], 0);
    v7 = *(_DWORD **)(a1 + 416);
    v8 = PnpDetermineResourceListSize(v7);
    IopWriteAllocatedResourcesToRegistry(a1, v7, v8);
  }
  else
  {
    ExFreePoolWithTag((PVOID)v10[3], 0);
  }
  return (unsigned int)BestConfiguration;
}
