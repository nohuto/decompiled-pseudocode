/*
 * XREFs of PiInitializeDevice @ 0x140694F24
 * Callers:
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PpDevNodeInsertIntoTree @ 0x14012C8F0 (PpDevNodeInsertIntoTree.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpSetPlugPlayEvent @ 0x140460814 (PnpSetPlugPlayEvent.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140461AEC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipAllocateDeviceNode @ 0x1405532C0 (PipAllocateDeviceNode.c)
 *     PnpConcatenateUnicodeStrings @ 0x140571E00 (PnpConcatenateUnicodeStrings.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BE5F8 (PnpAllocateDeviceInstancePath.c)
 */

__int64 __fastcall PiInitializeDevice(UNICODE_STRING *a1)
{
  WCHAR *PoolWithTag; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _DEVICE_OBJECT *v7; // rax
  int DeviceInstancePath; // edi
  void *v9; // rbx
  unsigned __int16 Length; // r15
  NTSTATUS v11; // eax
  struct _DEVICE_OBJECT *v12; // r14
  int DeviceNode; // eax
  char *v14; // rsi
  __int16 v15; // ax
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  int v28; // [rsp+40h] [rbp-29h] BYREF
  void *v29; // [rsp+48h] [rbp-21h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+60h] [rbp-9h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  char v36; // [rsp+D8h] [rbp+6Fh]
  int v37; // [rsp+E0h] [rbp+77h] BYREF
  int v38; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  PoolWithTag = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v36 = 1;
  v7 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)a1, v4, v5, v6);
  DeviceObject = v7;
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    DeviceInstancePath = 0;
    goto LABEL_44;
  }
  DeviceInstancePath = PnpUnicodeStringToWstr(&v29, 0LL, &a1->Length);
  if ( DeviceInstancePath < 0 )
    goto LABEL_44;
  DeviceInstancePath = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( DeviceInstancePath < 0 )
    goto LABEL_44;
  v9 = v29;
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
    goto LABEL_44;
  *(_DWORD *)&DestinationString.Length = 0;
  v37 = 512;
  DestinationString.Buffer = 0LL;
  Length = 0;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v9,
                (__int64)Handle,
                5,
                (__int64)&v38,
                (__int64)PoolWithTag,
                (__int64)&v37) >= 0
      && v38 == 1
      && v37 )
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
    v11 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
    v12 = DeviceObject;
    DeviceInstancePath = v11;
    if ( v11 < 0 )
      goto LABEL_41;
    DeviceObject->Flags |= 0x1000u;
    DeviceNode = PipAllocateDeviceNode((__int64)v12, (void **)&v32);
    v14 = (char *)v32;
    DeviceInstancePath = DeviceNode;
    if ( !v32 )
    {
      if ( DeviceNode == -1073740946 )
        DeviceInstancePath = -1073741670;
      goto LABEL_40;
    }
    PipSetDevNodeFlags(v32, 17);
    PipSetDevNodeState((__int64)v14, 770);
    v28 = 0;
    v37 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v9,
                (__int64)Handle,
                11,
                (__int64)&v38,
                (__int64)&v28,
                (__int64)&v37) >= 0 )
    {
      if ( v38 == 4 && v37 == 4 )
      {
        v15 = v28;
      }
      else
      {
        v15 = 0;
        v28 = 0;
      }
      if ( (v15 & 0x20) != 0 )
      {
        v16 = 18;
LABEL_29:
        PipSetDevNodeProblem((__int64)v14, v16, 0);
        goto LABEL_30;
      }
      if ( (v15 & 0x2000) != 0 )
      {
        v16 = 16;
        goto LABEL_29;
      }
      if ( (v15 & 0x40) != 0 )
      {
        v16 = 28;
        goto LABEL_29;
      }
    }
LABEL_30:
    DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v14, (unsigned int)a1->Length + 2);
    if ( DeviceInstancePath >= 0 )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 40), a1);
      if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v14 + 56), &DestinationString) < 0 )
      {
        *((_DWORD *)v14 + 14) = 0;
        *((_QWORD *)v14 + 8) = 0LL;
      }
      DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v14 + 4), (__int64)(v14 + 40), v17, v18);
      if ( DeviceInstancePath >= 0 )
      {
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v14);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        v19 = KeGetCurrentThread();
        v20 = v19->KernelApcDisable + 1;
        v19->KernelApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
          && !v19->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v21 = (_QWORD *)v32;
        v36 = 0;
        PnpQueryAndSaveDeviceNodeCapabilities(v32);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v22, v21[6], 1);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v23, v21[6], 14);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v24, *(_QWORD *)(IopRootDeviceNode + 48), 15);
        PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *((_QWORD **)v14 + 4));
        v9 = v29;
        v12 = DeviceObject;
LABEL_40:
        if ( DeviceInstancePath >= 0 )
          goto LABEL_43;
      }
    }
LABEL_41:
    if ( v12 )
      IoDeleteDevice(v12);
LABEL_43:
    if ( !v36 )
      goto LABEL_49;
    goto LABEL_44;
  }
  DeviceInstancePath = -1073741670;
LABEL_44:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v9 = v29;
LABEL_49:
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  if ( v9 )
    PnpUnicodeStringToWstrFree(v9, (__int64)a1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInstancePath;
}
