/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x1404E73A8
 * Callers:
 *     IopGetRootDevices @ 0x1404E7140 (IopGetRootDevices.c)
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x14012C8F0 (PpDevNodeInsertIntoTree.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140461AEC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PipAllocateDeviceNode @ 0x1405532C0 (PipAllocateDeviceNode.c)
 *     PpDevCfgProcessDevice @ 0x140587928 (PpDevCfgProcessDevice.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BE5F8 (PnpAllocateDeviceInstancePath.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  struct _DEVICE_OBJECT *v10; // rax
  __int64 result; // rax
  NTSTATUS DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v13; // r15
  PDEVICE_OBJECT v14; // rcx
  char *v15; // rbx
  __int64 v16; // r14
  int DeviceRegProp; // eax
  __int16 v18; // ax
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID v21; // r14
  int v22; // ebx
  unsigned int v23; // ebx
  PVOID PoolWithTag; // rax
  PVOID v25; // r14
  __int64 v26; // r8
  __int64 v27; // rdx
  PVOID v28; // r14
  int v29; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-10h] BYREF
  PVOID v32; // [rsp+78h] [rbp-8h] BYREF
  int v33; // [rsp+D0h] [rbp+50h] BYREF
  int v34; // [rsp+D8h] [rbp+58h] BYREF

  v33 = 0;
  v32 = 0LL;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v22 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v22 )
      return 1LL;
  }
  v9 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v9 )
  {
    v23 = 8 * v9 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x64647050u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_64;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v23 >> 3;
    *(_QWORD *)(a3 + 16) = v25;
  }
  v10 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)SourceString, v6, v7, v8);
  DeviceObject = v10;
  if ( v10 )
  {
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v10;
LABEL_5:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( DeviceInstancePath >= 0 )
  {
    v13 = DeviceObject;
    v14 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v14->DeviceObjectExtension->ExtensionFlags |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode(v14, &v32) == -1073740946 || (v15 = (char *)v32) == 0LL )
    {
      IoDeleteDevice(v13);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v32, (unsigned int)SourceString->Length + 2);
      if ( DeviceInstancePath >= 0 )
      {
        v16 = (__int64)(v15 + 40);
        RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 40), SourceString);
        PipSetDevNodeFlags((__int64)v15, 17);
        PipSetDevNodeState((__int64)v15, 770);
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v15);
        v34 = 0;
        v29 = 4;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *((_QWORD *)v15 + 6),
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v33,
                          (__int64)&v34,
                          (__int64)&v29);
        if ( DeviceRegProp < 0 )
        {
          v26 = 3221226021LL;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_17;
          v27 = 1LL;
        }
        else
        {
          if ( v33 == 4 && v29 == 4 )
          {
            v18 = v34;
          }
          else
          {
            v18 = 0;
            v34 = 0;
          }
          if ( (v18 & 0x20) != 0 )
          {
            v26 = 0LL;
            v27 = 18LL;
          }
          else if ( (v18 & 0x2000) != 0 )
          {
            v26 = 0LL;
            v27 = 16LL;
          }
          else
          {
            if ( (v18 & 0x40) == 0 )
            {
LABEL_17:
              if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
              {
                v21 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags((__int64)v15, 256);
                }
                ExFreePoolWithTag(v21, 0);
                v16 = (__int64)(v15 + 40);
              }
              PnpQueryAndSaveDeviceNodeCapabilities((__int64)v15);
              if ( (*((_DWORD *)v15 + 140) & 0x4000) != 0
                && ((*((_DWORD *)v15 + 99) & 0x2000) == 0 || *((_DWORD *)v15 + 101) != 1) )
              {
                PipClearDevNodeProblem(v15);
                PipSetDevNodeProblem(v15, 29LL, 0LL);
              }
              if ( ((*((_DWORD *)v15 + 99) & 0x6000) != 0
                 || (unsigned int)PnpGetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *((_QWORD *)v15 + 6),
                                    1u,
                                    (__int64)KeyHandle,
                                    0LL,
                                    (__int64)&DEVPKEY_Device_FirmwareDependencies,
                                    (__int64)&v33,
                                    0LL,
                                    0,
                                    (__int64)&v29,
                                    0) == -1073741789
                 && v33 == 8210)
                && !_bittest((const signed __int32 *)v15 + 140, 0xEu)
                && (v34 & 1) == 0 )
              {
                PpDevCfgProcessDevice(v15, KeyHandle, 0LL);
              }
              if ( ((*((_DWORD *)v15 + 99) & 0x2000) == 0 || *((_DWORD *)v15 + 101) != 22)
                && ((*((_DWORD *)v15 + 99) & 0x2000) == 0 || *((_DWORD *)v15 + 101) != 29)
                && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v16, 1LL) )
              {
                PipClearDevNodeProblem(v15);
                PipSetDevNodeProblem(v15, 22LL, 0LL);
              }
              PpDeviceRegistration(v16, 1, (UNICODE_STRING *)(v15 + 56), 0);
              PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v15 + 4), v16, v19, v20);
              ObfReferenceObject(v13);
              v32 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((__int64)v13, 0, 4, &v32, &P) >= 0 )
              {
                v28 = v32;
                if ( v32 )
                {
                  if ( (int)IopAllocateBootResourcesRoutine(4LL, *((_QWORD *)v15 + 4), v32) >= 0 )
                    PipSetDevNodeFlags((__int64)v15, 64);
                  ExFreePoolWithTag(v28, 0);
                }
              }
              ObfReferenceObject(v13);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v13;
              goto LABEL_5;
            }
            v26 = 0LL;
            v27 = 28LL;
          }
        }
        PipSetDevNodeProblem(v15, v27, v26);
        goto LABEL_17;
      }
      IoDeleteDevice(v13);
    }
  }
LABEL_64:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
