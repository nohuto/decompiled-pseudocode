/*
 * XREFs of IopQueryDeviceResources @ 0x1404C89E8
 * Callers:
 *     IopReleaseDeviceResources @ 0x1404C5E64 (IopReleaseDeviceResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404C866C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404C8D70 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x1404C8F50 (PnpDetermineResourceListSize.c)
 *     IopFilterResourceRequirementsCall @ 0x1404C8FAC (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x1404C9260 (PpIrpQueryResourceRequirements.c)
 *     _CmOpenDeviceRegKey @ 0x1404FCD30 (_CmOpenDeviceRegKey.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     PnpCmResourcesToIoResources @ 0x1405579DC (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x1405583E4 (PnpFilterResourceRequirementsList.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x14057DD18 (PnpMergeFilteredResourceRequirementsList.c)
 */

__int64 __fastcall IopQueryDeviceResources(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  int v8; // r9d
  __int64 v9; // r12
  int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rax
  _DWORD *v14; // rbx
  _DWORD *v15; // rax
  void *v16; // rbx
  SIZE_T v17; // rdx
  PVOID PoolWithTag; // rax
  void *v19; // r14
  int v20; // r12d
  void *v21; // r12
  int v22; // r14d
  PVOID Data; // [rsp+20h] [rbp-59h]
  ULONG DataSize; // [rsp+28h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-39h] BYREF
  _WORD v26[36]; // [rsp+50h] [rbp-29h] BYREF
  void *Src; // [rsp+E0h] [rbp+67h] BYREF
  int Handle; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+F0h] [rbp+77h]
  _DWORD *v30; // [rsp+F8h] [rbp+7Fh]

  *a3 = 0LL;
  *a4 = 0;
  memset(v26, 0, sizeof(v26));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v29 = v9;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v9 + 396) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry(a1, 0, 7, (int)a3, a4);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
    else
    {
      v26[0] = 2587;
      v10 = IopSynchronousCall(a1, (unsigned int)v26, -1073741637, v8, (__int64)a3);
      if ( v10 == -1073741637 )
      {
        *a3 = 0LL;
        v10 = 0;
      }
      if ( v10 >= 0 )
        *a4 = PnpDetermineResourceListSize(*a3);
      return (unsigned int)v10;
    }
    return result;
  }
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry(a1, 0, 2, (int)a3, &Handle) != -1073741772 )
  {
    if ( *a3 )
    {
      v14 = (_DWORD *)PnpCmResourcesToIoResources(v12, *a3, 0LL);
      ExFreePoolWithTag(*a3, 0);
      if ( !v14 )
      {
        *a3 = 0LL;
        *a4 = 0;
        return 3221225626LL;
      }
      *a3 = v14;
      *a4 = *v14;
    }
    else
    {
      v14 = 0LL;
    }
LABEL_17:
    if ( (int)IopFilterResourceRequirementsCall(a1, v14, &Src) < 0 )
    {
      *a3 = v14;
      if ( v14 )
        *a4 = *v14;
      else
        *a4 = 0;
      return 0LL;
    }
    v16 = Src;
    if ( !Src )
    {
      *a4 = 0;
      *a3 = 0LL;
LABEL_26:
      if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(v9 + 48), 19, 0, 131097, 1, (__int64)&Src, 0LL) >= 0 )
      {
        ValueName.Buffer = L"FilteredConfigVector";
        DataSize = *a4;
        Data = *a3;
        *(_DWORD *)&ValueName.Length = 2752552;
        ZwSetValueKey(Src, &ValueName, 0, 0xAu, Data, DataSize);
        ZwClose(Src);
      }
      return 0LL;
    }
    v17 = *(unsigned int *)Src;
    *a4 = *(_DWORD *)Src;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x20207050u);
    *a3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v16, (unsigned int)*a4);
      ExFreePoolWithTag(v16, 0);
      goto LABEL_26;
    }
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry(a1, 1, 1, (int)&Src, &Handle) != -1073741772 )
  {
    v14 = Src;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v9 + 396) & 1) != 0 )
  {
    result = PnpGetDeviceResourcesFromRegistry(a1, 1, 2, (int)&Src, &Handle);
    if ( (_DWORD)result == -1073741772 )
    {
      result = 0LL;
      v14 = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    v13 = *(unsigned int **)(v9 + 440);
    if ( v13 )
    {
      v15 = ExAllocatePoolWithTag(PagedPool, *v13, 0x20207050u);
      v14 = v15;
      if ( !v15 )
        return 3221225495LL;
      memmove(v15, *(const void **)(v9 + 440), **(unsigned int **)(v9 + 440));
      goto LABEL_16;
    }
    result = PpIrpQueryResourceRequirements(a1, &Src);
    if ( (_DWORD)result == -1073741637 )
    {
      v14 = 0LL;
      result = 0LL;
      goto LABEL_15;
    }
  }
  v14 = Src;
LABEL_15:
  if ( (int)result < 0 )
    return result;
LABEL_16:
  if ( (int)PnpGetDeviceResourcesFromRegistry(a1, 0, 4, (int)&Src, &Handle) < 0 )
    goto LABEL_17;
  v19 = Src;
  if ( Src )
  {
    if ( *(_DWORD *)Src && *((_DWORD *)Src + 1) == 5 )
      goto LABEL_17;
  }
  v20 = PnpFilterResourceRequirementsList(v14);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v20 >= 0 )
  {
    v9 = v29;
    if ( (*(_DWORD *)(v29 + 396) & 1) != 0 || Handle && v14[7] <= 1u )
    {
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      v14 = Src;
    }
    else
    {
      v21 = Src;
      v22 = PnpMergeFilteredResourceRequirementsList(Src);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      if ( v22 < 0 )
        return (unsigned int)v22;
      v14 = v30;
      v9 = v29;
    }
    goto LABEL_17;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v20;
}
