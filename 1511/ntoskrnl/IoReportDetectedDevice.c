/*
 * XREFs of IoReportDetectedDevice @ 0x140528D34
 * Callers:
 *     VerifierIoReportDetectedDevice @ 0x1406C082C (VerifierIoReportDetectedDevice.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1400998AC (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1400998D0 (PipAreDriversLoaded.c)
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     PpDevNodeRemoveFromTree @ 0x1400DA2F8 (PpDevNodeRemoveFromTree.c)
 *     RtlStringCbLengthW @ 0x140103D90 (RtlStringCbLengthW.c)
 *     PpDevNodeInsertIntoTree @ 0x140106660 (PpDevNodeInsertIntoTree.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteKey @ 0x140151EE0 (ZwDeleteKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404A078C (PnpCleanupDeviceRegistryValues.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     PipAllocateDeviceNode @ 0x1404E9B10 (PipAllocateDeviceNode.c)
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404EE7E8 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpDetermineResourceListSize @ 0x1404EF918 (PnpDetermineResourceListSize.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404F0CA0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     _CmCreateDevice @ 0x1404F0DA8 (_CmCreateDevice.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404F16E8 (IopDoDeferredSetInterfaceState.c)
 *     PnpSetRegistryDword @ 0x140528CEC (PnpSetRegistryDword.c)
 *     IopIsReportedAlready @ 0x1405291E0 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x14052948C (IopDuplicateDetection.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140529A40 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateDeviceInstancePath @ 0x140547518 (PnpAllocateDeviceInstancePath.c)
 *     PpCreateLegacyDeviceIds @ 0x140600864 (PpCreateLegacyDeviceIds.c)
 *     IoReportResourceUsageInternal @ 0x140602248 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x140602ED4 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140602F30 (PnpSetRegistryResourceList.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  char *DeviceNode; // rbx
  PDRIVER_EXTENSION DriverExtension; // r15
  UNICODE_STRING *p_ServiceKeyName; // r15
  PDEVICE_OBJECT v14; // rax
  NTSTATUS result; // eax
  const UNICODE_STRING *v16; // rdx
  int appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  char *v21; // rbx
  unsigned __int16 Length; // cx
  size_t v23; // r12
  wchar_t *v24; // rax
  signed __int64 v25; // rcx
  __int16 v26; // ax
  struct _DEVICE_OBJECT *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  unsigned int v30; // eax
  char v31; // r13
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v34; // r12
  PDEVICE_OBJECT v35; // rcx
  int v36; // eax
  PVOID v37; // rax
  NTSTATUS DeviceInstancePath; // eax
  int v39; // eax
  int v40; // eax
  wchar_t *v41; // r13
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  PDRIVER_OBJECT v46; // rdi
  UNICODE_STRING *v47; // rdx
  int LegacyDeviceIds; // eax
  unsigned int v49; // eax
  int v50; // ecx
  SIZE_T v51; // rdi
  PVOID PoolWithTag; // rax
  void *v53; // rsi
  __int64 v54; // r8
  int v55; // edx
  __int64 v56; // rcx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *v59; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+40h] [rbp-C0h]
  char v62; // [rsp+50h] [rbp-B0h]
  char v63; // [rsp+51h] [rbp-AFh] BYREF
  char v64; // [rsp+52h] [rbp-AEh] BYREF
  char v65[5]; // [rsp+53h] [rbp-ADh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v67; // [rsp+60h] [rbp-A0h] BYREF
  char *v68; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  ULONG v70; // [rsp+80h] [rbp-80h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v72; // [rsp+90h] [rbp-70h] BYREF
  PDEVICE_OBJECT v73; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v74[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v75; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int cbMax[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C0h] [rbp-40h] BYREF
  PIO_RESOURCE_REQUIREMENTS_LIST v78; // [rsp+C8h] [rbp-38h]
  PDRIVER_OBJECT v79; // [rsp+D0h] [rbp-30h]
  size_t pcbLength; // [rsp+D8h] [rbp-28h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *j; // [rsp+E8h] [rbp-18h]
  PDEVICE_OBJECT *v83; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v78 = ResourceRequirements;
  DeviceNode = 0LL;
  v79 = DriverObject;
  DriverExtension = DriverObject->DriverExtension;
  v83 = DeviceObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  v70 = SlotNumber;
  memset(v74, 0, sizeof(v74));
  v72 = 0LL;
  v63 = 0;
  v68 = 0LL;
  v67 = 0;
  Handle = 0LL;
  Destination.Buffer = pszDest;
  *(_DWORD *)&Destination.Length = 26214400;
  KeyHandle = 0LL;
  v62 = 0;
  v73 = 0LL;
  *(_QWORD *)&cbMax[1] = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v68 = DeviceNode;
    if ( !DeviceNode )
      return -1073741578;
    goto LABEL_7;
  }
  if ( (DriverObject->Flags & 4) != 0 )
  {
    Buffer = p_ServiceKeyName->Buffer;
    for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; i != Buffer; --i )
    {
      if ( *i == 92 )
      {
        v74[1] = i + 1;
        LOWORD(v74[0]) = p_ServiceKeyName->Length
                       - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        WORD1(v74[0]) = v74[0];
        goto LABEL_3;
      }
    }
    return -1073741585;
  }
  else
  {
LABEL_3:
    result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
    if ( result >= 0 )
    {
      v16 = (const UNICODE_STRING *)v74;
      if ( (DriverObject->Flags & 4) == 0 )
        v16 = p_ServiceKeyName;
      result = RtlAppendUnicodeStringToString(&Destination, v16);
      if ( result >= 0 )
      {
LABEL_7:
        appended = PiPnpRtlBeginOperation((__int64 **)&cbMax[1]);
        if ( appended < 0 )
          goto LABEL_40;
        PpDevNodeLockTree(1);
        if ( DeviceNode || (DriverObject->Flags & 4) != 0 )
        {
          v19 = 0;
        }
        else
        {
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, v70, &v68);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v67 = v68 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v68;
        if ( v68 )
        {
LABEL_25:
          if ( v67 )
          {
            if ( (unsigned int)PipAreDriversLoaded((__int64)v21)
              || (*((_DWORD *)v21 + 99) & 0x6000) != 0
              && ((v49 = *((_DWORD *)v21 + 101), v49 > 0x1C) || (v50 = 268697602, !_bittest(&v50, v49))) )
            {
              ObfDereferenceObject(*((PVOID *)v21 + 4));
              appended = -1073741810;
              goto LABEL_71;
            }
            if ( !v28 )
              PipClearDevNodeProblem((__int64)v21);
          }
          if ( !Handle )
          {
            appended = PnpDeviceObjectToDeviceInstance(*((_QWORD *)v21 + 4), (__int64)&Handle, 983103);
            if ( appended < 0 )
            {
LABEL_71:
              if ( v63 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v72 )
                  ZwDeleteKey(v72);
                if ( Handle )
                  ZwDeleteKey(Handle);
                PnpCleanupDeviceRegistryValues((__int64)(v21 + 40));
                PpDevNodeRemoveFromTree((__int64)v21);
                IoDeleteDevice(*((PDEVICE_OBJECT *)v21 + 4));
                ObfDereferenceObject(*((PVOID *)v21 + 4));
              }
              goto LABEL_40;
            }
          }
LABEL_31:
          v29 = v78;
          if ( !ResourceList && !v78
            || (v40 = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *((_QWORD *)v21 + 6),
                        0x14u,
                        0,
                        983103,
                        1,
                        (__int64)&KeyHandle,
                        0LL),
                appended = v40,
                v40 >= 0)
            && (!ResourceList || (v40 = PnpSetRegistryResourceList(KeyHandle), appended = v40, v40 >= 0))
            && (!v29 || (v40 = PnpSetRegistryRequirementsList(KeyHandle), appended = v40, v40 >= 0)) )
          {
            if ( ResourceAssigned )
            {
              PipSetDevNodeFlags((__int64)v21, 256);
              PnpSetRegistryDword(Handle, L"NoResourceAtInitTime");
              v30 = PnpDetermineResourceListSize(ResourceList);
              IopWriteAllocatedResourcesToRegistry(v21, ResourceList, v30);
            }
            else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
            {
              v51 = (unsigned int)PnpDetermineResourceListSize(ResourceList);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v51, 0x47706E50u);
              v53 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_70:
                appended = -1073741670;
                PipSetDevNodeProblem((__int64)v21, 3, -1073741670);
                goto LABEL_71;
              }
              memmove(PoolWithTag, ResourceList, v51);
              pszFormat = (NTSTRSAFE_PCWSTR)*((_QWORD *)v21 + 4);
              v54 = *((_QWORD *)pszFormat + 1);
              v64 = 0;
              appended = IoReportResourceUsageInternal(
                           0,
                           v55,
                           v54,
                           0,
                           dwFlags,
                           (__int64)pszFormat,
                           (__int64)v53,
                           v60,
                           v61,
                           (__int64)&v64);
              ExFreePoolWithTag(v53, 0x47706E50u);
              if ( appended < 0 || v64 )
              {
                if ( !PipIsDevNodeDNStarted((__int64)v21) )
                  PipSetDevNodeProblem(v56, 12, appended);
                appended = -1073741800;
              }
            }
            else
            {
              PipSetDevNodeFlags((__int64)v21, 256);
            }
LABEL_35:
            v31 = v62;
LABEL_36:
            if ( appended >= 0 )
            {
              *((_DWORD *)v21 + 165) = *(_DWORD *)(*((_QWORD *)v21 + 2) + 660LL);
              IopDoDeferredSetInterfaceState((__int64)v21);
              PipSetDevNodeState((__int64)v21, 775);
              if ( v31 )
                PipSetDevNodeFlags((__int64)v21, 0x80000000);
              *v83 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
              goto LABEL_40;
            }
            goto LABEL_71;
          }
          goto LABEL_90;
        }
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended < 0 )
        {
LABEL_40:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v72 )
            ZwClose(v72);
          if ( Handle )
            ZwClose(Handle);
          if ( *(_QWORD *)&cbMax[1] )
            PiPnpRtlEndOperation(*(char **)&cbMax[1]);
          return appended;
        }
        Length = Destination.Length;
        v70 = Destination.Length;
        v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( j = v24; ; v24 = j )
        {
          Destination.Length = Length;
          LODWORD(v59) = v19;
          ppszDestEnd = v24;
          RtlStringCchPrintfExW(v24, v23, &ppszDestEnd, 0LL, 0, L"%04u", v59);
          v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v63, 0);
          if ( appended < 0 )
            goto LABEL_71;
          if ( v63 )
            goto LABEL_23;
          v67 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  (_DWORD)Handle,
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v67) )
            break;
          ZwClose(Handle);
          Length = v70;
          ++v19;
        }
        v27 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)&Destination);
        v73 = v27;
        if ( v27 )
        {
          v21 = (char *)v27->DeviceObjectExtension->DeviceNode;
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v68 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_71;
        if ( v21 )
          goto LABEL_25;
        appended = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &v73);
        if ( appended < 0 )
          goto LABEL_71;
        v34 = v73;
        v35 = v73;
        v31 = 1;
        v62 = 1;
        v73->Flags |= 0x1000u;
        v36 = PipAllocateDeviceNode((__int64)v35, (void **)&v68);
        v21 = v68;
        if ( v36 == -1073740946 || !v68 )
        {
          IoDeleteDevice(v34);
          appended = -1073741670;
          goto LABEL_71;
        }
        if ( (v79->Flags & 4) == 0 )
        {
          v37 = ExAllocatePoolWithTag((POOL_TYPE)257, p_ServiceKeyName->Length, 0x48706E50u);
          *((_QWORD *)v21 + 8) = v37;
          if ( !v37 )
            goto LABEL_70;
          *((_WORD *)v21 + 29) = p_ServiceKeyName->Length;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_80;
        }
        DeviceInstancePath = PnpAllocateDeviceInstancePath(v21, (unsigned int)Destination.Length + 2);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
        {
LABEL_80:
          PipSetDevNodeProblem((__int64)v21, 3, DeviceInstancePath);
          goto LABEL_36;
        }
        v39 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
        appended = v39;
        if ( v39 >= 0 )
        {
          *(_WORD *)(*((_QWORD *)v21 + 6) + 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 20) >> 1)) = 0;
          v75 = 32;
          v40 = CmSetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  (__int64)Handle,
                  0xBu,
                  4u,
                  (__int64)&v75,
                  4u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v65[0] = -1;
          v40 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)v65,
                  1u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v40 = PnpUnicodeStringToWstr(&psz, cbMax, &p_ServiceKeyName->Length);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v41 = (wchar_t *)psz;
          appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
          if ( appended < 0 )
          {
            PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
LABEL_88:
            v42 = appended;
            goto LABEL_91;
          }
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *((_QWORD *)v21 + 6),
                       (__int64)Handle,
                       5u,
                       1u,
                       (__int64)v41,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
          if ( appended < 0 )
            goto LABEL_88;
          v72 = 0LL;
          v40 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  0x13u,
                  0,
                  983103,
                  1,
                  (__int64)&v72,
                  0LL);
          appended = v40;
          if ( v40 < 0 || (v40 = PnpSetRegistryDword(v72, L"DeviceReported"), appended = v40, v40 < 0) )
          {
LABEL_90:
            v42 = v40;
LABEL_91:
            v43 = 19;
            goto LABEL_92;
          }
          v46 = v79;
          if ( (v79->Flags & 4) == 0 )
          {
            LOBYTE(v45) = 1;
            PpDeviceRegistration((__int64)&Destination, v45, (__int64)(v21 + 56), 1);
          }
          v47 = (UNICODE_STRING *)v74;
          if ( (v46->Flags & 4) == 0 )
            v47 = p_ServiceKeyName;
          LegacyDeviceIds = PpCreateLegacyDeviceIds(v34, v47, ResourceList);
          appended = LegacyDeviceIds;
          v44 = (__int64)v21;
          if ( LegacyDeviceIds < 0 )
          {
            v42 = LegacyDeviceIds;
            v43 = 19;
            goto LABEL_94;
          }
          PipSetDevNodeFlags((__int64)v21, 17);
          *((_DWORD *)v21 + 165) = *(_DWORD *)(IopRootDeviceNode + 660);
          PipSetDevNodeState((__int64)v21, 770);
          PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v21);
          v39 = PnpMapDeviceObjectToDeviceInstance((__int64)v34, (__int64)(v21 + 40));
          appended = v39;
          if ( v39 >= 0 )
          {
            ObfReferenceObject(v34);
            goto LABEL_31;
          }
        }
        v42 = v39;
        v43 = 3;
LABEL_92:
        v44 = (__int64)v21;
LABEL_94:
        PipSetDevNodeProblem(v44, v43, v42);
        goto LABEL_35;
      }
    }
  }
  return result;
}
