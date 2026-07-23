/*
 * XREFs of PiControlGetPropertyData @ 0x1403F2E48
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400093B8 (PiControlAllocateBufferForUserModeCaller.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1403F2A40 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x14064A2E8 (PiControlGetDevicePowerData.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  unsigned int v5; // r14d
  __int64 result; // rax
  struct _DEVICE_OBJECT *v9; // r15
  __int64 DeviceNode; // rsi
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  int DevicePowerData; // ebx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  DEVICE_REGISTRY_PROPERTY v21; // edx
  NTSTATUS DeviceStack; // eax
  int UserModeCallersCopy; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int DeviceRegProp; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  int DeviceDependencyList; // eax
  unsigned int v32; // ecx
  int ResultLength; // [rsp+20h] [rbp-40h]
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  _WORD v35[4]; // [rsp+48h] [rbp-18h] BYREF
  void *v36; // [rsp+50h] [rbp-10h] BYREF
  int v37; // [rsp+98h] [rbp+38h] BYREF

  v4 = *a2;
  v5 = 0;
  PropertyBuffer = 0LL;
  v35[1] = v4;
  v35[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v36, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v9 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(v35);
    PiControlFreeUserModeCallersBuffer(a4, v36);
    if ( !v9 || (DeviceNode = (__int64)v9->DeviceObjectExtension->DeviceNode) == 0 )
    {
      DevicePowerData = -1073741810;
      goto LABEL_22;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
    {
      DevicePowerData = -1073741738;
    }
    else
    {
      v11 = (unsigned int *)(a2 + 16);
      v5 = *((_DWORD *)a2 + 8);
      DevicePowerData = PiControlAllocateBufferForUserModeCaller(&PropertyBuffer, v5, a4, *((_QWORD *)a2 + 3));
      if ( DevicePowerData < 0 )
        goto LABEL_22;
      v14 = *((_DWORD *)a2 + 4);
      if ( v14 > 8 )
      {
        v24 = v14 - 10;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            v21 = DevicePropertyInstallState;
            goto LABEL_17;
          }
          v26 = v25 - 2;
          if ( !v26 )
          {
            *v11 = 4;
            if ( v5 >= 4 )
            {
              DevicePowerData = 0;
              *(_DWORD *)PropertyBuffer = *(_DWORD *)(DeviceNode + 684);
LABEL_20:
              LOBYTE(ResultLength) = a4;
              UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a2 + 12, PropertyBuffer, v5, 1LL, ResultLength, 0);
              if ( UserModeCallersCopy < 0 )
                DevicePowerData = UserModeCallersCopy;
              goto LABEL_22;
            }
            DevicePowerData = -1073741789;
LABEL_22:
            PpDevNodeUnlockTree(0LL);
            if ( v9 )
              ObfDereferenceObject(v9);
            PiControlFreeUserModeCallersBuffer(a4, PropertyBuffer);
            return (unsigned int)DevicePowerData;
          }
          v28 = v26 - 1;
          if ( !v28 )
          {
            DeviceStack = PiControlGetDeviceStack(DeviceNode, v5, PropertyBuffer, a2 + 16);
            goto LABEL_18;
          }
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              goto LABEL_50;
            v30 = 1LL;
          }
          else
          {
            v30 = 0LL;
          }
          DeviceDependencyList = PnpGetDeviceDependencyList(DeviceNode, v30, PropertyBuffer, v5 >> 1, a2 + 16);
          v32 = 2 * *v11;
          DevicePowerData = DeviceDependencyList;
          *v11 = v32;
          if ( ((int)(DeviceDependencyList + 0x80000000) < 0 || DeviceDependencyList == -1073741789) && v32 <= 2 )
          {
            *v11 = 0;
            DevicePowerData = -1073741772;
          }
        }
        else
        {
          if ( v5 < 4 )
          {
            DevicePowerData = -1073741789;
          }
          else
          {
            PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0, (signed int *)PropertyBuffer);
            DevicePowerData = 0;
          }
          *v11 = 4;
        }
      }
      else
      {
        if ( v14 == 8 )
        {
          v21 = DevicePropertyAddress;
          goto LABEL_17;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v21 = DevicePropertyPhysicalDeviceObjectName;
          goto LABEL_17;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v21 = DevicePropertyBusTypeGuid;
          goto LABEL_17;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v21 = DevicePropertyLegacyBusType;
          goto LABEL_17;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v21 = DevicePropertyBusNumber;
          goto LABEL_17;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            v21 = DevicePropertyRemovalPolicy;
LABEL_17:
            DeviceStack = IoGetDeviceProperty(v9, v21, v5, PropertyBuffer, (PULONG)a2 + 8);
LABEL_18:
            DevicePowerData = DeviceStack;
            goto LABEL_19;
          }
          if ( v20 == 1 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *(_QWORD *)(DeviceNode + 48),
                              0,
                              34,
                              (__int64)&v37,
                              (__int64)PropertyBuffer,
                              (__int64)(a2 + 16),
                              0);
            DevicePowerData = DeviceRegProp;
            if ( DeviceRegProp >= 0 && v37 != 4 )
            {
              DevicePowerData = -1073741584;
              goto LABEL_22;
            }
            if ( DeviceRegProp == -1073741275 )
              DevicePowerData = -1073741772;
            goto LABEL_19;
          }
LABEL_50:
          DevicePowerData = -1073741811;
          goto LABEL_22;
        }
        DevicePowerData = PiControlGetDevicePowerData(DeviceNode, v12, v5, PropertyBuffer, a2 + 16);
        if ( DevicePowerData == -2147483643 )
          DevicePowerData = -1073741789;
      }
    }
LABEL_19:
    if ( DevicePowerData >= 0 )
      goto LABEL_20;
    goto LABEL_22;
  }
  return result;
}
