/*
 * XREFs of IopQueryDeviceResources @ 0x14050EDDC
 * Callers:
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14050EC10 (PiQueryAndAllocateBootResources.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14050D21C (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x14050E9BC (PpIrpQueryResourceRequirements.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x14050F344 (PnpDetermineResourceListSize.c)
 *     PnpCmResourcesToIoResources @ 0x140557F1C (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x140558924 (PnpFilterResourceRequirementsList.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x14057E1C4 (PnpMergeFilteredResourceRequirementsList.c)
 */

__int64 __fastcall IopQueryDeviceResources(struct _DEVICE_OBJECT *a1, int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // r9
  unsigned int **DeviceNode; // r12
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
  _WORD v26[64]; // [rsp+50h] [rbp-29h] BYREF
  void *Src; // [rsp+E0h] [rbp+67h] BYREF
  int Handle; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int **v29; // [rsp+F0h] [rbp+77h]
  _DWORD *v30; // [rsp+F8h] [rbp+7Fh]

  *a3 = 0LL;
  *a4 = 0;
  memset(v26, 0, 0x48uLL);
  DeviceNode = (unsigned int **)a1->DeviceObjectExtension->DeviceNode;
  v29 = DeviceNode;
  if ( !a2 )
  {
    if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((int)a1, 0, 7, (int)a3, a4);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
    else
    {
      v26[0] = 2587;
      v10 = IopSynchronousCall(a1, (__int64)v26, -1073741637, v8, a3);
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
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((int)a1, 0, 2, (int)a3, &Handle) != -1073741772 )
  {
    if ( *a3 )
    {
      v14 = (_DWORD *)PnpCmResourcesToIoResources(v12, *a3, 0LL);
      ExFreePoolWithTag((PVOID)*a3, 0);
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
    if ( (int)IopFilterResourceRequirementsCall(a1, (ULONG_PTR)v14, (ULONG_PTR *)&Src) < 0 )
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
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)DeviceNode[6],
                  0x13u,
                  0,
                  131097,
                  1,
                  (__int64)&Src,
                  0LL) >= 0 )
      {
        ValueName.Buffer = L"FilteredConfigVector";
        DataSize = *a4;
        Data = (PVOID)*a3;
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
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((int)a1, 1, 1, (int)&Src, &Handle) != -1073741772 )
  {
    v14 = Src;
    goto LABEL_16;
  }
  if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 )
  {
    result = PnpGetDeviceResourcesFromRegistry((int)a1, 1, 2, (int)&Src, &Handle);
    if ( (_DWORD)result == -1073741772 )
    {
      result = 0LL;
      v14 = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    v13 = DeviceNode[55];
    if ( v13 )
    {
      v15 = ExAllocatePoolWithTag(PagedPool, *v13, 0x20207050u);
      v14 = v15;
      if ( !v15 )
        return 3221225495LL;
      memmove(v15, DeviceNode[55], *DeviceNode[55]);
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
  if ( (int)PnpGetDeviceResourcesFromRegistry((int)a1, 0, 4, (int)&Src, &Handle) < 0 )
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
    DeviceNode = v29;
    if ( (*((_DWORD *)v29 + 99) & 1) != 0 || Handle && v14[7] <= 1u )
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
      DeviceNode = v29;
    }
    goto LABEL_17;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v20;
}
