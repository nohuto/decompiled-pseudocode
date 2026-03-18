/*
 * XREFs of PiControlGetPropertyData @ 0x1404E1474
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1404E118C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x1406943EC (PiControlGetDevicePowerData.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  _DWORD *v4; // rdi
  size_t v6; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  struct _DEVICE_OBJECT *v10; // r15
  __int64 DeviceNode; // rbx
  unsigned int *v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  DEVICE_REGISTRY_PROPERTY v20; // edx
  NTSTATUS DeviceStack; // eax
  int DevicePowerData; // ebx
  int UserModeCallersCopy; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  _DWORD *PoolWithQuotaTag; // rax
  int DeviceRegProp; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rdx
  int DeviceDependencyList; // eax
  unsigned int v34; // ecx
  unsigned __int16 v35; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int16 v36; // [rsp+42h] [rbp-36h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  int v38; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0LL;
  v36 = *a2;
  v35 = v36;
  LODWORD(v6) = 0;
  if ( (unsigned __int16)(v36 - 1) > 0x18Fu || (v36 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v36, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v10 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(&v35);
    if ( a4 && P )
      ExFreePoolWithTag(P, 0);
    if ( !v10 || (DeviceNode = (__int64)v10->DeviceObjectExtension->DeviceNode) == 0 )
    {
      DevicePowerData = -1073741810;
      goto LABEL_25;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
    {
      DevicePowerData = -1073741738;
    }
    else
    {
      v12 = (unsigned int *)(a2 + 16);
      v6 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v6 )
      {
        if ( a4 )
        {
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, *((unsigned int *)a2 + 8), 0x20207050u);
          v4 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            DevicePowerData = -1073741670;
            goto LABEL_25;
          }
          memset(PoolWithQuotaTag, 0, v6);
        }
        else
        {
          v4 = (_DWORD *)*((_QWORD *)a2 + 3);
        }
      }
      v13 = *((_DWORD *)a2 + 4);
      if ( v13 > 8 )
      {
        v24 = v13 - 10;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            v20 = DevicePropertyInstallState;
            goto LABEL_20;
          }
          v26 = v25 - 2;
          if ( !v26 )
          {
            *v12 = 4;
            if ( (unsigned int)v6 >= 4 )
            {
              v27 = *(_DWORD *)(DeviceNode + 684);
              DevicePowerData = 0;
              *v4 = v27;
LABEL_23:
              UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v4, v6, 1u, a4, 0);
              if ( UserModeCallersCopy < 0 )
                DevicePowerData = UserModeCallersCopy;
              goto LABEL_25;
            }
            DevicePowerData = -1073741789;
LABEL_25:
            PpDevNodeUnlockTree(0LL);
            if ( v10 )
              ObfDereferenceObject(v10);
            if ( a4 )
            {
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
            }
            return (unsigned int)DevicePowerData;
          }
          v30 = v26 - 1;
          if ( !v30 )
          {
            DeviceStack = PiControlGetDeviceStack(DeviceNode, (unsigned int)v6, v4, a2 + 16);
            goto LABEL_21;
          }
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 != 1 )
              goto LABEL_59;
            v32 = 1LL;
          }
          else
          {
            v32 = 0LL;
          }
          DeviceDependencyList = PnpGetDeviceDependencyList(DeviceNode, v32, v4, (unsigned int)v6 >> 1, a2 + 16);
          v34 = 2 * *v12;
          DevicePowerData = DeviceDependencyList;
          *v12 = v34;
          if ( ((int)(DeviceDependencyList + 0x80000000) < 0 || DeviceDependencyList == -1073741789) && v34 <= 2 )
          {
            *v12 = 0;
            DevicePowerData = -1073741772;
          }
        }
        else
        {
          if ( (unsigned int)v6 < 4 )
          {
            DevicePowerData = -1073741789;
          }
          else
          {
            PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0, v4);
            DevicePowerData = 0;
          }
          *v12 = 4;
        }
      }
      else
      {
        if ( v13 == 8 )
        {
          v20 = DevicePropertyAddress;
          goto LABEL_20;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v20 = DevicePropertyPhysicalDeviceObjectName;
          goto LABEL_20;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v20 = DevicePropertyBusTypeGuid;
          goto LABEL_20;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v20 = DevicePropertyLegacyBusType;
          goto LABEL_20;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v20 = DevicePropertyBusNumber;
          goto LABEL_20;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v20 = DevicePropertyRemovalPolicy;
LABEL_20:
            DeviceStack = IoGetDeviceProperty(v10, v20, v6, v4, (PULONG)a2 + 8);
LABEL_21:
            DevicePowerData = DeviceStack;
            goto LABEL_22;
          }
          if ( v19 == 1 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *(_QWORD *)(DeviceNode + 48),
                              0LL,
                              34,
                              (__int64)&v38,
                              (__int64)v4,
                              (__int64)(a2 + 16));
            DevicePowerData = DeviceRegProp;
            if ( DeviceRegProp >= 0 && v38 != 4 )
            {
              DevicePowerData = -1073741584;
              goto LABEL_25;
            }
            if ( DeviceRegProp == -1073741275 )
              DevicePowerData = -1073741772;
            goto LABEL_22;
          }
LABEL_59:
          DevicePowerData = -1073741811;
          goto LABEL_25;
        }
        DevicePowerData = PiControlGetDevicePowerData(DeviceNode, v9, (unsigned int)v6, v4, a2 + 16);
        if ( DevicePowerData == -2147483643 )
          DevicePowerData = -1073741789;
      }
    }
LABEL_22:
    if ( DevicePowerData >= 0 )
      goto LABEL_23;
    goto LABEL_25;
  }
  return result;
}
