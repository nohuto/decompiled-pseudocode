/*
 * XREFs of PipProcessStartPhase3 @ 0x1404EC528
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PpvUtilTestStartedPdoStack @ 0x140107494 (PpvUtilTestStartedPdoStack.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x1401076DC (PnpSetDeviceInstanceStartedEvent.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     Template_qz @ 0x1401C1868 (Template_qz.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404EA628 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiCreateDriverSwDevices @ 0x1404EC474 (PiCreateDriverSwDevices.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404EC974 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessQueryDeviceState @ 0x1404ECBB8 (PiProcessQueryDeviceState.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpQueryID @ 0x1404EE304 (PnpQueryID.c)
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404EE7E8 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404EE910 (PnpCheckDeviceIdsChanged.c)
 *     PnpSetPlugPlayEvent @ 0x1404EEE18 (PnpSetPlugPlayEvent.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404F0B04 (PnpGenerateDeviceIdsHash.c)
 *     PpDevCfgProcessDevice @ 0x140510468 (PpDevCfgProcessDevice.c)
 *     PiAuditDeviceStart @ 0x140617FD4 (PiAuditDeviceStart.c)
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
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-59h]
  int v23; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v25; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-15h] BYREF
  int v27; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  PVOID v30; // [rsp+78h] [rbp-1h] BYREF
  PVOID v31; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v34; // [rsp+F0h] [rbp+77h] BYREF
  char v35; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  v30 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *(const wchar_t **)(a1 + 48));
  DeviceState = PiPnpRtlBeginOperation((__int64 **)&v30);
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
          PipSetDevNodeFlags(a1, 8);
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
          if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1LL, &P, &v28);
    PnpQueryID(a1, 2LL, &v31, &v26);
    v10 = v31;
    v11 = P;
    PnpGenerateDeviceIdsHash(P, v31, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_39:
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4u,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v21, *(_QWORD *)(a1 + 48), 1);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
      v3 = a2;
      goto LABEL_5;
    }
    v12 = KeGetCurrentThread();
    v13 = 0;
    v34 = 0;
    v35 = 0;
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v14 = *(_QWORD *)(a1 + 48);
    v25 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v14,
                (__int64)Handle,
                11,
                (__int64)&v27,
                (__int64)&v23,
                (__int64)&v25) >= 0
      && v27 == 4
      && v25 == 4 )
    {
      if ( (v23 & 0x21) != 0x20 )
      {
LABEL_23:
        v15 = v28;
        v16 = P;
        v17 = v26;
        v18 = v31;
        if ( (v23 & 0x400) == 0 )
        {
          v19 = 0;
          if ( !P || (LOBYTE(v22) = 1, v19 = PnpCheckDeviceIdsChanged(a1, Handle, P, v28, v22, &v34), !v34) )
          {
            if ( v18 )
            {
              LOBYTE(v22) = 0;
              v19 = PnpCheckDeviceIdsChanged(a1, Handle, v18, v17, v22, &v34);
            }
          }
          if ( v19 >= 0 && v34 )
          {
            v23 |= 0x400u;
            v13 = 1;
            v35 = 1;
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
        if ( v35 )
          CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v23, 4, 0);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( v13 )
          PpDevCfgProcessDevice(a1, Handle, 0LL);
        goto LABEL_39;
      }
    }
    else
    {
      v23 = 0;
    }
    v13 = 1;
    goto LABEL_23;
  }
LABEL_12:
  v8 = v30;
  if ( v30 )
    PiPnpRtlEndOperation((char *)v30);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz((__int64)v8, &KMPnPEvt_ProcessDeviceStart_Stop, v6, 3, *(const wchar_t **)(a1 + 48));
  return (unsigned int)DeviceState;
}
