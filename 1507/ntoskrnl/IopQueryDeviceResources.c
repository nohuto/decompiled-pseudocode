/*
 * XREFs of IopQueryDeviceResources @ 0x14045CCC0
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14045CAAC (PiQueryAndAllocateBootResources.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x14045D228 (PnpDetermineResourceListSize.c)
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x14045D5D0 (PpIrpQueryResourceRequirements.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     PnpCmResourcesToIoResources @ 0x14059E0E8 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x14059F0BC (PnpFilterResourceRequirementsList.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1405BE69C (PnpMergeFilteredResourceRequirementsList.c)
 */

__int64 __fastcall IopQueryDeviceResources(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  __int64 v8; // r12
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rax
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  void *v15; // rbx
  SIZE_T v16; // rdx
  PVOID PoolWithTag; // rax
  void *v18; // r14
  int v19; // r12d
  void *v20; // r12
  int v21; // r14d
  PVOID Data; // [rsp+20h] [rbp-59h]
  ULONG DataSize; // [rsp+28h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-39h] BYREF
  _WORD v25[36]; // [rsp+50h] [rbp-29h] BYREF
  void *Src; // [rsp+E0h] [rbp+67h] BYREF
  int Handle; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+F0h] [rbp+77h]
  _DWORD *v29; // [rsp+F8h] [rbp+7Fh]

  *a3 = 0LL;
  *a4 = 0;
  memset(v25, 0, sizeof(v25));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v28 = v8;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v8 + 396) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry(a1, 0, 7, (int)a3, a4);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
    else
    {
      v25[0] = 2587;
      v9 = IopSynchronousCall(a1, (unsigned int)v25, -1073741637, 0, (__int64)a3);
      if ( v9 == -1073741637 )
      {
        *a3 = 0LL;
        v9 = 0;
      }
      if ( v9 >= 0 )
        *a4 = PnpDetermineResourceListSize(*a3);
      return (unsigned int)v9;
    }
    return result;
  }
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry(a1, 0, 2, (int)a3, &Handle) != -1073741772 )
  {
    if ( *a3 )
    {
      v13 = (_DWORD *)PnpCmResourcesToIoResources(v11, *a3, 0LL);
      ExFreePoolWithTag(*a3, 0);
      if ( !v13 )
      {
        *a3 = 0LL;
        *a4 = 0;
        return 3221225626LL;
      }
      *a3 = v13;
      *a4 = *v13;
    }
    else
    {
      v13 = 0LL;
    }
LABEL_17:
    if ( (int)IopFilterResourceRequirementsCall(a1, v13, &Src) < 0 )
    {
      *a3 = v13;
      if ( v13 )
        *a4 = *v13;
      else
        *a4 = 0;
      return 0LL;
    }
    v15 = Src;
    if ( !Src )
    {
      *a4 = 0;
      *a3 = 0LL;
LABEL_26:
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v8 + 48),
                  0x13u,
                  0,
                  131097,
                  1,
                  (__int64)&Src,
                  0LL) >= 0 )
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
    v16 = *(unsigned int *)Src;
    *a4 = *(_DWORD *)Src;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x20207050u);
    *a3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v15, (unsigned int)*a4);
      ExFreePoolWithTag(v15, 0);
      goto LABEL_26;
    }
    ExFreePoolWithTag(v15, 0);
    return 3221225626LL;
  }
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry(a1, 1, 1, (int)&Src, &Handle) != -1073741772 )
  {
    v13 = Src;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v8 + 396) & 1) != 0 )
  {
    result = PnpGetDeviceResourcesFromRegistry(a1, 1, 2, (int)&Src, &Handle);
    if ( (_DWORD)result == -1073741772 )
    {
      result = 0LL;
      v13 = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    v12 = *(unsigned int **)(v8 + 440);
    if ( v12 )
    {
      v14 = ExAllocatePoolWithTag(PagedPool, *v12, 0x20207050u);
      v13 = v14;
      if ( !v14 )
        return 3221225495LL;
      memmove(v14, *(const void **)(v8 + 440), **(unsigned int **)(v8 + 440));
      goto LABEL_16;
    }
    result = PpIrpQueryResourceRequirements(a1, &Src);
    if ( (_DWORD)result == -1073741637 )
    {
      v13 = 0LL;
      result = 0LL;
      goto LABEL_15;
    }
  }
  v13 = Src;
LABEL_15:
  if ( (int)result < 0 )
    return result;
LABEL_16:
  if ( (int)PnpGetDeviceResourcesFromRegistry(a1, 0, 4, (int)&Src, &Handle) < 0 )
    goto LABEL_17;
  v18 = Src;
  if ( Src )
  {
    if ( *(_DWORD *)Src && *((_DWORD *)Src + 1) == 5 )
      goto LABEL_17;
  }
  v19 = PnpFilterResourceRequirementsList(v13);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v19 >= 0 )
  {
    v8 = v28;
    if ( (*(_DWORD *)(v28 + 396) & 1) != 0 || Handle && v13[7] <= 1u )
    {
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v13 = Src;
    }
    else
    {
      v20 = Src;
      v21 = PnpMergeFilteredResourceRequirementsList(Src);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( v21 < 0 )
        return (unsigned int)v21;
      v13 = v29;
      v8 = v28;
    }
    goto LABEL_17;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v19;
}
