/*
 * XREFs of PiInitializeDevice @ 0x14064AD78
 * Callers:
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     PpDevNodeInsertIntoTree @ 0x1400B1A6C (PpDevNodeInsertIntoTree.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PnpSetPlugPlayEvent @ 0x14048A464 (PnpSetPlugPlayEvent.c)
 *     PipAllocateDeviceNode @ 0x1404CB638 (PipAllocateDeviceNode.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14050FD98 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpConcatenateUnicodeStrings @ 0x140538AA8 (PnpConcatenateUnicodeStrings.c)
 *     PnpAllocateDeviceInstancePath @ 0x14057B92C (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140639178 (PiDevCfgGetFailedInstallProblemStatus.c)
 */

__int64 __fastcall PiInitializeDevice(PCUNICODE_STRING SourceString)
{
  WCHAR *PoolWithTag; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v4; // rax
  int DeviceInstancePath; // edi
  void *v6; // rbx
  unsigned __int16 Length; // r15
  NTSTATUS v8; // eax
  struct _DEVICE_OBJECT *v9; // r14
  int DeviceNode; // eax
  char *v11; // rsi
  __int16 v12; // ax
  int FailedInstallProblemStatus; // r8d
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v26; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-30h] BYREF
  void *v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v33; // [rsp+C8h] [rbp+48h]
  int v34; // [rsp+D0h] [rbp+50h] BYREF
  int v35; // [rsp+D8h] [rbp+58h] BYREF

  Handle = 0LL;
  PoolWithTag = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v33 = 1;
  v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)SourceString);
  DeviceObject = v4;
  if ( !v4 )
  {
    DeviceInstancePath = PnpUnicodeStringToWstr(&v29, 0LL, &SourceString->Length);
    if ( DeviceInstancePath < 0 )
      goto LABEL_40;
    DeviceInstancePath = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( DeviceInstancePath < 0 )
      goto LABEL_40;
    v6 = v29;
    DeviceInstancePath = CmOpenDeviceRegKey(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v29,
                           0x10u,
                           0,
                           983103,
                           0,
                           (__int64)&Handle,
                           0LL);
    if ( DeviceInstancePath < 0 )
      goto LABEL_40;
    *(_DWORD *)&DestinationString.Length = 0;
    v34 = 512;
    DestinationString.Buffer = 0LL;
    Length = 0;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_40;
    }
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v6,
                (__int64)Handle,
                5,
                (__int64)&v35,
                (__int64)PoolWithTag,
                (__int64)&v34,
                0) >= 0
      && v35 == 1
      && v34 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
      {
        Length = DestinationString.Length;
      }
      else
      {
        *(_DWORD *)&DestinationString.Length = 0;
        Length = 0;
        DestinationString.Buffer = 0LL;
      }
    }
    v8 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
    v9 = DeviceObject;
    DeviceInstancePath = v8;
    if ( v8 < 0 )
      goto LABEL_37;
    DeviceObject->Flags |= 0x1000u;
    DeviceNode = PipAllocateDeviceNode((__int64)v9, (void **)&v30);
    v11 = (char *)v30;
    DeviceInstancePath = DeviceNode;
    if ( !v30 )
    {
      if ( DeviceNode == -1073740946 )
        DeviceInstancePath = -1073741670;
LABEL_36:
      if ( DeviceInstancePath >= 0 )
        goto LABEL_39;
      goto LABEL_37;
    }
    PipSetDevNodeFlags(v30, 17);
    PipSetDevNodeState((__int64)v11, 770);
    v26 = 0;
    v34 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v6,
                (__int64)Handle,
                11,
                (__int64)&v35,
                (__int64)&v26,
                (__int64)&v34,
                0) >= 0 )
    {
      if ( v35 == 4 && v34 == 4 )
      {
        v12 = v26;
      }
      else
      {
        v12 = 0;
        v26 = 0;
      }
      if ( (v12 & 0x20) != 0 )
      {
        FailedInstallProblemStatus = 0;
        v14 = 18;
LABEL_29:
        PipSetDevNodeProblem((__int64)v11, v14, FailedInstallProblemStatus);
        goto LABEL_30;
      }
      if ( (v12 & 0x2000) != 0 )
      {
        FailedInstallProblemStatus = 0;
        v14 = 16;
        goto LABEL_29;
      }
      if ( (v12 & 0x40) != 0 )
      {
        FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus((__int64)v6, (__int64)Handle);
        v14 = 28;
        goto LABEL_29;
      }
    }
LABEL_30:
    DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v11, (unsigned int)SourceString->Length + 2);
    if ( DeviceInstancePath >= 0 )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 40), SourceString);
      if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v11 + 56), &DestinationString) < 0 )
      {
        *((_DWORD *)v11 + 14) = 0;
        *((_QWORD *)v11 + 8) = 0LL;
      }
      DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v11 + 4), (__int64)(v11 + 40));
      if ( DeviceInstancePath >= 0 )
      {
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v11);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
        v18 = (_QWORD *)v30;
        v33 = 0;
        PnpQueryAndSaveDeviceNodeCapabilities(v30);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, v18[6], 1);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v20, v18[6], 14);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v21, *(_QWORD *)(IopRootDeviceNode + 48), 15);
        PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *((_QWORD **)v11 + 4));
        v6 = v29;
        v9 = DeviceObject;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( v9 )
      IoDeleteDevice(v9);
LABEL_39:
    if ( !v33 )
      goto LABEL_41;
    goto LABEL_40;
  }
  ObfDereferenceObject(v4);
  DeviceInstancePath = 0;
LABEL_40:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
  v6 = v29;
LABEL_41:
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, (__int64)SourceString);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInstancePath;
}
