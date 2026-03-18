/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x1403BA028
 * Callers:
 *     IopGetRootDevices @ 0x1403B9DD4 (IopGetRootDevices.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     PpDevNodeInsertIntoTree @ 0x140106660 (PpDevNodeInsertIntoTree.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     PipAllocateDeviceNode @ 0x1404E9B10 (PipAllocateDeviceNode.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404EC974 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404EF738 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404F0CA0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14050DFF4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgProcessDevice @ 0x140510468 (PpDevCfgProcessDevice.c)
 *     PnpAllocateDeviceInstancePath @ 0x140547518 (PnpAllocateDeviceInstancePath.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  struct _DEVICE_OBJECT *v7; // rax
  __int64 result; // rax
  NTSTATUS DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v10; // r15
  PDEVICE_OBJECT v11; // rcx
  char *v12; // rbx
  __int64 v13; // r14
  int DeviceRegProp; // eax
  __int16 v15; // ax
  __int64 v16; // rdx
  PVOID v17; // r14
  int v18; // ebx
  unsigned int v19; // ebx
  PVOID PoolWithTag; // rax
  PVOID v21; // r14
  __int64 FailedInstallProblemStatus; // r8
  __int64 v23; // rdx
  PVOID v24; // r14
  int v25; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-10h] BYREF
  PVOID v28; // [rsp+78h] [rbp-8h] BYREF
  int v29; // [rsp+D0h] [rbp+50h] BYREF
  int v30; // [rsp+D8h] [rbp+58h] BYREF

  v29 = 0;
  v28 = 0LL;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v18 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v18 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v19 = 8 * v6 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x64647050u);
    v21 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_64;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v19 >> 3;
    *(_QWORD *)(a3 + 16) = v21;
  }
  v7 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(SourceString);
  DeviceObject = v7;
  if ( v7 )
  {
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v7;
LABEL_5:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( DeviceInstancePath >= 0 )
  {
    v10 = DeviceObject;
    v11 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v11->DeviceObjectExtension->ExtensionFlags |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode(v11, &v28) == -1073740946 || (v12 = (char *)v28) == 0LL )
    {
      IoDeleteDevice(v10);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v28, (unsigned int)SourceString->Length + 2);
      if ( DeviceInstancePath >= 0 )
      {
        v13 = (__int64)(v12 + 40);
        RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString);
        PipSetDevNodeFlags(v12, 17LL);
        PipSetDevNodeState((__int64)v12, 770);
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v12);
        v30 = 0;
        v25 = 4;
        DeviceRegProp = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          *((_QWORD *)v12 + 6),
                          (_DWORD)KeyHandle,
                          11,
                          (__int64)&v29,
                          (__int64)&v30,
                          (__int64)&v25);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = 3221226021LL;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_17;
          v23 = 1LL;
        }
        else
        {
          if ( v29 == 4 && v25 == 4 )
          {
            v15 = v30;
          }
          else
          {
            v15 = 0;
            v30 = 0;
          }
          if ( (v15 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v23 = 18LL;
          }
          else if ( (v15 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v23 = 16LL;
          }
          else
          {
            if ( (v15 & 0x40) == 0 )
            {
LABEL_17:
              if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
              {
                v17 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags(v12, 256LL);
                }
                ExFreePoolWithTag(v17, 0);
                v13 = (__int64)(v12 + 40);
              }
              PnpQueryAndSaveDeviceNodeCapabilities(v12);
              if ( (*((_DWORD *)v12 + 140) & 0x4000) != 0
                && ((*((_DWORD *)v12 + 99) & 0x2000) == 0 || *((_DWORD *)v12 + 101) != 1) )
              {
                PipClearDevNodeProblem(v12);
                PipSetDevNodeProblem(v12, 29LL, 0LL);
              }
              if ( ((*((_DWORD *)v12 + 99) & 0x6000) != 0
                 || (unsigned int)PnpGetObjectProperty(
                                    PiPnpRtlCtx,
                                    *((_QWORD *)v12 + 6),
                                    1,
                                    (_DWORD)KeyHandle,
                                    0LL,
                                    (__int64)&DEVPKEY_Device_FirmwareDependencies,
                                    (__int64)&v29,
                                    0LL,
                                    0,
                                    (__int64)&v25,
                                    0) == -1073741789
                 && v29 == 8210)
                && !_bittest((const signed __int32 *)v12 + 140, 0xEu)
                && (v30 & 1) == 0 )
              {
                PpDevCfgProcessDevice(v12, KeyHandle, 0LL);
              }
              if ( ((*((_DWORD *)v12 + 99) & 0x2000) == 0 || *((_DWORD *)v12 + 101) != 22)
                && ((*((_DWORD *)v12 + 99) & 0x2000) == 0 || *((_DWORD *)v12 + 101) != 29)
                && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v13, 1LL) )
              {
                PipClearDevNodeProblem(v12);
                PipSetDevNodeProblem(v12, 22LL, 0LL);
              }
              LOBYTE(v16) = 1;
              PpDeviceRegistration(v13, v16, (__int64)(v12 + 56), 0);
              PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v12 + 4), v13);
              ObfReferenceObject(v10);
              v28 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((int)v10, 0, 4, (int)&v28, &P) >= 0 )
              {
                v24 = v28;
                if ( v28 )
                {
                  if ( (int)IopAllocateBootResourcesRoutine(4LL, *((_QWORD *)v12 + 4), v28) >= 0 )
                    PipSetDevNodeFlags(v12, 64LL);
                  ExFreePoolWithTag(v24, 0);
                }
              }
              ObfReferenceObject(v10);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v10;
              goto LABEL_5;
            }
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                         *((_QWORD *)v12 + 6),
                                                         KeyHandle);
            v23 = 28LL;
          }
        }
        PipSetDevNodeProblem(v12, v23, FailedInstallProblemStatus);
        goto LABEL_17;
      }
      IoDeleteDevice(v10);
    }
  }
LABEL_64:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
