/*
 * XREFs of PiControlGetPropertyData @ 0x140458140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x140099938 (PiControlAllocateBufferForUserModeCaller.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404390E4 (PiControlMakeUserModeCallersCopy.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140457D6C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x1406157B0 (PiControlGetDevicePowerData.c)
 *     PiControlGetDeviceStack @ 0x1406159EC (PiControlGetDeviceStack.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  _DWORD *v5; // rdi
  unsigned int v7; // r15d
  __int64 result; // rax
  struct _DEVICE_OBJECT *v10; // r13
  __int64 DeviceNode; // r14
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  int DevicePowerData; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  DEVICE_REGISTRY_PROPERTY v22; // edx
  NTSTATUS DeviceStack; // eax
  char v24; // si
  int UserModeCallersCopy; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int DeviceRegProp; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rdx
  int DeviceDependencyList; // eax
  unsigned int v34; // ecx
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  _WORD v36[4]; // [rsp+48h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  int v38; // [rsp+A8h] [rbp+48h] BYREF
  char v39; // [rsp+B8h] [rbp+58h]

  v39 = a4;
  v4 = *a2;
  v5 = 0LL;
  PropertyBuffer = 0LL;
  v36[1] = v4;
  v7 = 0;
  v36[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v10 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(v36);
    if ( a4 && P )
      ExFreePoolWithTag(P, 0);
    if ( !v10 || (DeviceNode = (__int64)v10->DeviceObjectExtension->DeviceNode) == 0 )
    {
      DevicePowerData = -1073741810;
      goto LABEL_40;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
    {
      DevicePowerData = -1073741738;
    }
    else
    {
      v12 = (unsigned int *)(a2 + 16);
      v7 = *((_DWORD *)a2 + 8);
      DevicePowerData = PiControlAllocateBufferForUserModeCaller(&PropertyBuffer, v7, a4, *((_QWORD *)a2 + 3));
      if ( DevicePowerData < 0 )
      {
LABEL_59:
        v5 = PropertyBuffer;
        goto LABEL_40;
      }
      v15 = *((_DWORD *)a2 + 4);
      if ( v15 > 8 )
      {
        v26 = v15 - 10;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            v22 = DevicePropertyInstallState;
            goto LABEL_18;
          }
          v28 = v27 - 2;
          if ( !v28 )
          {
            v5 = PropertyBuffer;
            *v12 = 4;
            if ( v7 >= 4 )
            {
              DevicePowerData = 0;
              *v5 = *(_DWORD *)(DeviceNode + 684);
LABEL_21:
              v24 = v39;
              UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v5, v7, 1u, v39, 0);
              if ( UserModeCallersCopy < 0 )
                DevicePowerData = UserModeCallersCopy;
              goto LABEL_23;
            }
            DevicePowerData = -1073741789;
LABEL_40:
            v24 = v39;
LABEL_23:
            PpDevNodeUnlockTree(0LL);
            if ( v10 )
              ObfDereferenceObject(v10);
            if ( v24 )
            {
              if ( v5 )
                ExFreePoolWithTag(v5, 0);
            }
            return (unsigned int)DevicePowerData;
          }
          v30 = v28 - 1;
          if ( !v30 )
          {
            v5 = PropertyBuffer;
            DeviceStack = PiControlGetDeviceStack(DeviceNode, v7, PropertyBuffer, a2 + 16);
            goto LABEL_19;
          }
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 != 1 )
            {
LABEL_58:
              DevicePowerData = -1073741811;
              goto LABEL_59;
            }
            v32 = 1LL;
          }
          else
          {
            v32 = 0LL;
          }
          v5 = PropertyBuffer;
          DeviceDependencyList = PnpGetDeviceDependencyList(DeviceNode, v32, PropertyBuffer, v7 >> 1, a2 + 16);
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
          v5 = PropertyBuffer;
          if ( v7 < 4 )
          {
            DevicePowerData = -1073741789;
          }
          else
          {
            PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0, (signed int *)PropertyBuffer);
            DevicePowerData = 0;
          }
          *v12 = 4;
        }
      }
      else
      {
        if ( v15 == 8 )
        {
          v22 = DevicePropertyAddress;
          goto LABEL_18;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v22 = DevicePropertyPhysicalDeviceObjectName;
          goto LABEL_18;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v22 = DevicePropertyBusTypeGuid;
          goto LABEL_18;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v22 = DevicePropertyLegacyBusType;
          goto LABEL_18;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v22 = DevicePropertyBusNumber;
          goto LABEL_18;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            v22 = DevicePropertyRemovalPolicy;
LABEL_18:
            v5 = PropertyBuffer;
            DeviceStack = IoGetDeviceProperty(v10, v22, v7, PropertyBuffer, (PULONG)a2 + 8);
LABEL_19:
            DevicePowerData = DeviceStack;
            goto LABEL_20;
          }
          if ( v21 == 1 )
          {
            v5 = PropertyBuffer;
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *(_QWORD *)(DeviceNode + 48),
                              0LL,
                              34,
                              (__int64)&v38,
                              (__int64)PropertyBuffer,
                              (__int64)(a2 + 16));
            DevicePowerData = DeviceRegProp;
            if ( DeviceRegProp >= 0 && v38 != 4 )
            {
              DevicePowerData = -1073741584;
              goto LABEL_40;
            }
            if ( DeviceRegProp == -1073741275 )
              DevicePowerData = -1073741772;
            goto LABEL_20;
          }
          goto LABEL_58;
        }
        v5 = PropertyBuffer;
        DevicePowerData = PiControlGetDevicePowerData(DeviceNode, v13, v7, PropertyBuffer, a2 + 16);
        if ( DevicePowerData == -2147483643 )
          DevicePowerData = -1073741789;
      }
    }
LABEL_20:
    if ( DevicePowerData >= 0 )
      goto LABEL_21;
    goto LABEL_40;
  }
  return result;
}
