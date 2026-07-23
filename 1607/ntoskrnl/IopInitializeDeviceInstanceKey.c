/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x1405162A0
 * Callers:
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     PpDevNodeInsertIntoTree @ 0x1400B1A6C (PpDevNodeInsertIntoTree.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PipAllocateDeviceNode @ 0x1404CB638 (PipAllocateDeviceNode.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14050E6F8 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14050EA28 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 *     PpDeviceRegistration @ 0x14050F4A8 (PpDeviceRegistration.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14050FD98 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpAllocateDeviceInstancePath @ 0x14057B92C (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140639178 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgProcessDevice @ 0x140641430 (PpDevCfgProcessDevice.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  __int64 result; // rax
  int v8; // ebx
  unsigned int v9; // ebx
  PVOID PoolWithTag; // rax
  PVOID v11; // r14
  struct _DEVICE_OBJECT *v12; // rax
  struct _DEVICE_OBJECT *v13; // rdx
  _DWORD *DeviceNode; // rax
  NTSTATUS DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v16; // r15
  PDEVICE_OBJECT v17; // rcx
  char *v18; // rbx
  unsigned __int16 *v19; // r14
  int DeviceRegProp; // eax
  __int16 v21; // ax
  int FailedInstallProblemStatus; // r8d
  int v23; // edx
  PVOID v24; // r14
  __int64 v25; // rdx
  char v26; // cl
  int ObjectProperty; // eax
  PVOID v28; // r14
  int v29; // [rsp+60h] [rbp-20h] BYREF
  int Handle; // [rsp+64h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-10h] BYREF
  PVOID v33; // [rsp+78h] [rbp-8h] BYREF
  int v34; // [rsp+D0h] [rbp+50h] BYREF
  int v35; // [rsp+D8h] [rbp+58h] BYREF

  v34 = 0;
  LOBYTE(Handle) = 0;
  v33 = 0LL;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v6 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v6 )
      return 1LL;
  }
  v8 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v8 )
  {
    v9 = 8 * v8 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x64647050u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_17;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v9 >> 3;
    *(_QWORD *)(a3 + 16) = v11;
  }
  v12 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)SourceString);
  DeviceObject = v12;
  v13 = v12;
  if ( v12 )
  {
    DeviceNode = v12->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && (DeviceNode[99] & 0x10000) != 0 )
    {
      ObfDereferenceObject(v13);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v13;
LABEL_19:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( DeviceInstancePath >= 0 )
  {
    v16 = DeviceObject;
    v17 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v17->DeviceObjectExtension->ExtensionFlags |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode((__int64)v17, &v33) == -1073740946 || (v18 = (char *)v33) == 0LL )
    {
      IoDeleteDevice(v16);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v33, (unsigned int)SourceString->Length + 2);
      if ( DeviceInstancePath >= 0 )
      {
        v19 = (unsigned __int16 *)(v18 + 40);
        RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 40), SourceString);
        PipSetDevNodeFlags((__int64)v18, 17);
        PipSetDevNodeState((__int64)v18, 770);
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v18);
        v29 = 4;
        v35 = 0;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *((_QWORD *)v18 + 6),
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v34,
                          (__int64)&v35,
                          (__int64)&v29,
                          0);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = -1073741275;
          if ( DeviceRegProp == -1073741275 )
          {
            v23 = 1;
            goto LABEL_37;
          }
        }
        else
        {
          if ( v34 == 4 && v29 == 4 )
          {
            v21 = v35;
          }
          else
          {
            v21 = 0;
            v35 = 0;
          }
          if ( (v21 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0;
            v23 = 18;
LABEL_37:
            PipSetDevNodeProblem((__int64)v18, v23, FailedInstallProblemStatus);
            goto LABEL_38;
          }
          if ( (v21 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0;
            v23 = 16;
            goto LABEL_37;
          }
          if ( (v21 & 0x40) != 0 )
          {
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*((_QWORD *)v18 + 6), KeyHandle);
            v23 = 28;
            goto LABEL_37;
          }
        }
LABEL_38:
        if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
        {
          v24 = P;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PipSetDevNodeFlags((__int64)v18, 256);
          ExFreePoolWithTag(v24, 0);
          v19 = (unsigned __int16 *)(v18 + 40);
        }
        PnpQueryAndSaveDeviceNodeCapabilities((__int64)v18);
        if ( (*((_DWORD *)v18 + 140) & 0x4000) != 0
          && ((*((_DWORD *)v18 + 99) & 0x2000) == 0 || *((_DWORD *)v18 + 101) != 1) )
        {
          PipClearDevNodeProblem((__int64)v18);
          PipSetDevNodeProblem((__int64)v18, 29, 0);
        }
        if ( (*((_DWORD *)v18 + 99) & 0x6000) != 0 )
        {
          v26 = 1;
        }
        else
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *((_QWORD *)v18 + 6),
                             1u,
                             (__int64)KeyHandle,
                             0LL,
                             (__int64)&DEVPKEY_Device_FirmwareDependencies,
                             (__int64)&v34,
                             0LL,
                             0,
                             (__int64)&v29,
                             0);
          v26 = Handle;
          if ( ObjectProperty == -1073741789 && v34 == 8210 )
            v26 = 1;
        }
        if ( PnpBootMode )
          *((_DWORD *)v18 + 176) |= 0x1000u;
        if ( (*((_DWORD *)v18 + 140) & 0x4000) == 0 && (v35 & 1) == 0 )
        {
          if ( v26 )
            PpDevCfgProcessDevice(v18, KeyHandle, 0LL);
          else
            PpDevCfgProcessDeviceOperations((__int64)v18, KeyHandle);
        }
        if ( ((*((_DWORD *)v18 + 99) & 0x2000) == 0 || *((_DWORD *)v18 + 101) != 22)
          && ((*((_DWORD *)v18 + 99) & 0x2000) == 0 || *((_DWORD *)v18 + 101) != 29)
          && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v19, 1) )
        {
          PipClearDevNodeProblem((__int64)v18);
          PipSetDevNodeProblem((__int64)v18, 22, 0);
        }
        LOBYTE(v25) = 1;
        PpDeviceRegistration((__int64)v19, v25, (__int64)(v18 + 56), 0);
        PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v18 + 4), (__int64)v19);
        ObfReferenceObject(v16);
        v33 = 0LL;
        if ( (int)PnpGetDeviceResourcesFromRegistry((__int64)v16, 0, 4, &v33, &Handle) >= 0 )
        {
          v28 = v33;
          if ( v33 )
          {
            if ( (int)IopAllocateBootResourcesRoutine(4LL, *((_QWORD *)v18 + 4), v33) >= 0 )
              PipSetDevNodeFlags((__int64)v18, 64);
            ExFreePoolWithTag(v28, 0);
          }
        }
        ObfReferenceObject(v16);
        *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v16;
        goto LABEL_19;
      }
      IoDeleteDevice(v16);
    }
  }
LABEL_17:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
