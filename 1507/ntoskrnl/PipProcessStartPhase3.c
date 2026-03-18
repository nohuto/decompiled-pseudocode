/*
 * XREFs of PipProcessStartPhase3 @ 0x14045ED7C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEvent @ 0x1400267E4 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x140026DDC (PpvUtilTestStartedPdoStack.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     Template_qz @ 0x1401FD450 (Template_qz.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     PnpSetPlugPlayEvent @ 0x140460814 (PnpSetPlugPlayEvent.c)
 *     PiCreateDriverSwDevices @ 0x140461354 (PiCreateDriverSwDevices.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140461408 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiProcessQueryDeviceState @ 0x140461484 (PiProcessQueryDeviceState.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140461AEC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     PnpQueryID @ 0x1404D6380 (PnpQueryID.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404D8C10 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054DE28 (PnpGenerateDeviceIdsHash.c)
 *     PpDevCfgProcessDevice @ 0x140587928 (PpDevCfgProcessDevice.c)
 *     PiAuditStartedDevice @ 0x1406964A4 (PiAuditStartedDevice.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  int DeviceState; // ebx
  __int64 v6; // r8
  void *v7; // r15
  PVOID v8; // rcx
  PVOID v10; // rsi
  PVOID v11; // rbx
  struct _KTHREAD *v12; // rax
  char v13; // r14
  __int64 v14; // rdx
  unsigned int v15; // r12d
  PVOID v16; // rsi
  unsigned int v17; // r13d
  PVOID v18; // rbx
  int v19; // eax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rcx
  int v26; // [rsp+20h] [rbp-59h]
  int v27; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v29; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-15h] BYREF
  int v31; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  PVOID v34; // [rsp+78h] [rbp-1h] BYREF
  PVOID v35; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v38; // [rsp+F0h] [rbp+77h] BYREF
  char v39; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  v34 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *(const wchar_t **)(a1 + 48));
  DeviceState = PiPnpRtlBeginOperation((__int64 **)&v34);
  if ( DeviceState >= 0 )
  {
    v7 = *(void **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) != 0
      || (int)PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 131097LL) < 0 )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      {
        DeviceState = -1073741823;
      }
      else
      {
        if ( v3 )
          PipSetDevNodeFlags(a1, 8LL);
        PnpQueryAndSaveDeviceNodeCapabilities(a1);
        DeviceState = PiProcessQueryDeviceState(v7);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
        PnpSetDeviceInstanceStartedEvent(a1);
        if ( DeviceState >= 0 )
        {
          PpvUtilTestStartedPdoStack();
          PipSetDevNodeState(a1, 776);
          PnpStartedDeviceNodeDependencyCheck(a1);
          PiCreateDriverSwDevices(a1);
          if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
            PiAuditStartedDevice(a1);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1LL, &P, &v32);
    PnpQueryID(a1, 2LL, &v35, &v30);
    v10 = v35;
    v11 = P;
    PnpGenerateDeviceIdsHash(P, v35, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_40:
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      v23 = KeGetCurrentThread();
      v24 = v23->KernelApcDisable + 1;
      v23->KernelApcDisable = v24;
      if ( !v24
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
        && !v23->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v25, *(_QWORD *)(a1 + 48), 1LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
      v3 = a2;
      goto LABEL_5;
    }
    v12 = KeGetCurrentThread();
    v13 = 0;
    v38 = 0;
    v39 = 0;
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v14 = *(_QWORD *)(a1 + 48);
    v29 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v14,
                (__int64)Handle,
                11,
                (__int64)&v31,
                (__int64)&v27,
                (__int64)&v29) >= 0
      && v31 == 4
      && v29 == 4 )
    {
      if ( (v27 & 0x21) != 0x20 )
      {
LABEL_23:
        v15 = v32;
        v16 = P;
        v17 = v30;
        v18 = v35;
        if ( (v27 & 0x400) == 0 )
        {
          v19 = 0;
          if ( !P || (LOBYTE(v26) = 1, v19 = PnpCheckDeviceIdsChanged(a1, Handle, P, v32, v26, &v38), !v38) )
          {
            if ( v18 )
            {
              LOBYTE(v26) = 0;
              v19 = PnpCheckDeviceIdsChanged(a1, Handle, v18, v17, v26, &v38);
            }
          }
          if ( v19 >= 0 && v38 )
          {
            v27 |= 0x400u;
            v13 = 1;
            v39 = 1;
          }
        }
        if ( v16 )
        {
          CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v16, v15, 0);
          ExFreePoolWithTag(v16, 0);
        }
        if ( v18 )
        {
          CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v18, v17, 0);
          ExFreePoolWithTag(v18, 0);
        }
        if ( v39 )
          CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v27, 4, 0);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        v20 = KeGetCurrentThread();
        v21 = v20->KernelApcDisable + 1;
        v20->KernelApcDisable = v21;
        if ( !v21
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
          && !v20->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( v13 )
          PpDevCfgProcessDevice(a1, Handle, 0LL);
        goto LABEL_40;
      }
    }
    else
    {
      v27 = 0;
    }
    v13 = 1;
    goto LABEL_23;
  }
LABEL_12:
  v8 = v34;
  if ( v34 )
    PiPnpRtlEndOperation((char *)v34);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz((__int64)v8, &KMPnPEvt_ProcessDeviceStart_Stop, v6, 3, *(const wchar_t **)(a1 + 48));
  return (unsigned int)DeviceState;
}
