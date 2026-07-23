/*
 * XREFs of PipProcessStartPhase3 @ 0x140488964
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PpvUtilTestStartedPdoStack @ 0x140085FD4 (PpvUtilTestStartedPdoStack.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x140085FE4 (PnpSetDeviceInstanceStartedEvent.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     Template_qz @ 0x1401D0BD8 (Template_qz.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiProcessQueryDeviceState @ 0x1403F026C (PiProcessQueryDeviceState.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404888E8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpSetPlugPlayEvent @ 0x14048A464 (PnpSetPlugPlayEvent.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpGenerateDeviceIdsHash @ 0x14050D908 (PnpGenerateDeviceIdsHash.c)
 *     PiCreateDriverSwDevices @ 0x14050FA08 (PiCreateDriverSwDevices.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14050FD98 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 *     PnpCheckDeviceIdsChanged @ 0x140511D78 (PnpCheckDeviceIdsChanged.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14051230C (PnpDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDevice @ 0x140641430 (PpDevCfgProcessDevice.c)
 *     PiAuditDeviceStart @ 0x14064CDD8 (PiAuditDeviceStart.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  int DeviceState; // ebx
  __int64 v6; // r8
  _QWORD *v7; // r15
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // [rsp+20h] [rbp-59h]
  int v29; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v31; // [rsp+60h] [rbp-19h] BYREF
  int v32; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  PVOID v36; // [rsp+78h] [rbp-1h] BYREF
  PVOID v37; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v40; // [rsp+F0h] [rbp+77h] BYREF
  char v41; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  v37 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *(const wchar_t **)(a1 + 48));
  DeviceState = PiPnpRtlBeginOperation(&v37);
  if ( DeviceState >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 32);
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
          if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1LL, &P, &v33);
    PnpQueryID(a1, 2LL, &v36, &v34);
    v10 = v36;
    v11 = P;
    PnpGenerateDeviceIdsHash(P, v36, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_39:
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
      PipSetDevNodeFlags(a1, 32);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v27, *(_QWORD *)(a1 + 48), 1LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
      v3 = a2;
      goto LABEL_5;
    }
    v12 = KeGetCurrentThread();
    v13 = 0;
    v40 = 0;
    v41 = 0;
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v14 = *(_QWORD *)(a1 + 48);
    v31 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v14, (_DWORD)Handle, 11, (__int64)&v32, (__int64)&v29, (__int64)&v31, 0) >= 0
      && v32 == 4
      && v31 == 4 )
    {
      if ( (v29 & 0x21) != 0x20 )
      {
LABEL_23:
        v15 = v33;
        v16 = P;
        v17 = v34;
        v18 = v36;
        if ( (v29 & 0x400) == 0 )
        {
          v19 = 0;
          if ( !P || (LOBYTE(v28) = 1, v19 = PnpCheckDeviceIdsChanged(a1, Handle, P, v33, v28, &v40), !v40) )
          {
            if ( v18 )
            {
              LOBYTE(v28) = 0;
              v19 = PnpCheckDeviceIdsChanged(a1, Handle, v18, v17, v28, &v40);
            }
          }
          if ( v19 >= 0 && v40 )
          {
            v29 |= 0x400u;
            v13 = 1;
            v41 = 1;
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
        if ( v41 )
          CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v29, 4, 0);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
        if ( v13 )
          PpDevCfgProcessDevice(a1, Handle, 0LL);
        goto LABEL_39;
      }
    }
    else
    {
      v29 = 0;
    }
    v13 = 1;
    goto LABEL_23;
  }
LABEL_12:
  v8 = v37;
  if ( v37 )
    PiPnpRtlEndOperation(v37);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz((__int64)v8, &KMPnPEvt_ProcessDeviceStart_Stop, v6, 3, *(const wchar_t **)(a1 + 48));
  return (unsigned int)DeviceState;
}
