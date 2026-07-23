/*
 * XREFs of IoReportDetectedDevice @ 0x14055523C
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x140009350 (PipAreDriversLoaded.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     PpDevNodeRemoveFromTree @ 0x140084FB0 (PpDevNodeRemoveFromTree.c)
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     PpDevNodeInsertIntoTree @ 0x1400B1A6C (PpDevNodeInsertIntoTree.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwDeleteKey @ 0x14015BAF0 (ZwDeleteKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140483B88 (PnpCleanupDeviceRegistryValues.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PipAllocateDeviceNode @ 0x1404CB638 (PipAllocateDeviceNode.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     _CmCreateDevice @ 0x14050D534 (_CmCreateDevice.c)
 *     IopDoDeferredSetInterfaceState @ 0x14050D724 (IopDoDeferredSetInterfaceState.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpDetermineResourceListSize @ 0x14050F344 (PnpDetermineResourceListSize.c)
 *     PpDeviceRegistration @ 0x14050F4A8 (PpDeviceRegistration.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14051230C (PnpDeviceObjectToDeviceInstance.c)
 *     PnpSetRegistryDword @ 0x1405551F4 (PnpSetRegistryDword.c)
 *     IopIsReportedAlready @ 0x1405556E8 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x140555998 (IopDuplicateDetection.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140556210 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateDeviceInstancePath @ 0x14057B92C (PnpAllocateDeviceInstancePath.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A964 (PpCreateLegacyDeviceIds.c)
 *     IoReportResourceUsageInternal @ 0x14062C348 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x14062D320 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14062D37C (PnpSetRegistryResourceList.c)
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
  __int64 v25; // rcx
  __int16 v26; // ax
  struct _DEVICE_OBJECT *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  unsigned int v30; // eax
  char v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v37; // r12
  PDEVICE_OBJECT v38; // rcx
  int v39; // eax
  PVOID v40; // rax
  NTSTATUS DeviceInstancePath; // eax
  int v42; // eax
  int v43; // eax
  wchar_t *v44; // r13
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rdx
  PDRIVER_OBJECT v49; // rdi
  UNICODE_STRING *v50; // rdx
  int LegacyDeviceIds; // eax
  unsigned int v52; // eax
  int v53; // ecx
  SIZE_T v54; // rdi
  PVOID PoolWithTag; // rax
  void *v56; // rsi
  __int64 v57; // r8
  int v58; // edx
  __int64 v59; // rcx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-C8h]
  int v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+50h] [rbp-B0h]
  char v66; // [rsp+51h] [rbp-AFh] BYREF
  char v67; // [rsp+52h] [rbp-AEh] BYREF
  char v68[5]; // [rsp+53h] [rbp-ADh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v70; // [rsp+60h] [rbp-A0h] BYREF
  char *v71; // [rsp+68h] [rbp-98h] BYREF
  ULONG v72; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT v74; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v76; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v77[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v78; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int cbMax[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  PDRIVER_OBJECT v80; // [rsp+C0h] [rbp-40h]
  PIO_RESOURCE_REQUIREMENTS_LIST v81; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *j; // [rsp+D8h] [rbp-28h]
  STRSAFE_PCNZWCH psz; // [rsp+E0h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+E8h] [rbp-18h] BYREF
  PDEVICE_OBJECT *v86; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v81 = ResourceRequirements;
  DeviceNode = 0LL;
  v80 = DriverObject;
  DriverExtension = DriverObject->DriverExtension;
  v86 = DeviceObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  v72 = SlotNumber;
  memset(v77, 0, sizeof(v77));
  v76 = 0LL;
  v66 = 0;
  v71 = 0LL;
  v70 = 0;
  Handle = 0LL;
  Destination.Buffer = pszDest;
  *(_DWORD *)&Destination.Length = 26214400;
  KeyHandle = 0LL;
  v65 = 0;
  v74 = 0LL;
  P = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v71 = DeviceNode;
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
        v77[1] = i + 1;
        LOWORD(v77[0]) = p_ServiceKeyName->Length
                       - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        WORD1(v77[0]) = v77[0];
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
      v16 = (const UNICODE_STRING *)v77;
      if ( (DriverObject->Flags & 4) == 0 )
        v16 = p_ServiceKeyName;
      result = RtlAppendUnicodeStringToString(&Destination, v16);
      if ( result >= 0 )
      {
LABEL_7:
        appended = PiPnpRtlBeginOperation((__int64 **)&P);
        if ( appended < 0 )
          goto LABEL_40;
        PpDevNodeLockTree(1);
        if ( DeviceNode || (DriverObject->Flags & 4) != 0 )
        {
          v19 = 0;
        }
        else
        {
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, v72, &v71);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v70 = v71 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v71;
        if ( v71 )
        {
LABEL_25:
          if ( v70 )
          {
            if ( (unsigned int)PipAreDriversLoaded((__int64)v21)
              || (*((_DWORD *)v21 + 99) & 0x6000) != 0
              && ((v52 = *((_DWORD *)v21 + 101), v52 > 0x1C) || (v53 = 268697602, !_bittest(&v53, v52))) )
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
              if ( v66 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v76 )
                  ZwDeleteKey(v76);
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
          v29 = v81;
          if ( !ResourceList && !v81
            || (v43 = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *((_QWORD *)v21 + 6),
                        0x14u,
                        0,
                        983103,
                        1,
                        (__int64)&KeyHandle,
                        0LL),
                appended = v43,
                v43 >= 0)
            && (!ResourceList || (v43 = PnpSetRegistryResourceList(KeyHandle), appended = v43, v43 >= 0))
            && (!v29 || (v43 = PnpSetRegistryRequirementsList(KeyHandle), appended = v43, v43 >= 0)) )
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
              v54 = (unsigned int)PnpDetermineResourceListSize(ResourceList);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v54, 0x47706E50u);
              v56 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_70:
                appended = -1073741670;
                PipSetDevNodeProblem((__int64)v21, 3, -1073741670);
                goto LABEL_71;
              }
              memmove(PoolWithTag, ResourceList, v54);
              pszFormat = (NTSTRSAFE_PCWSTR)*((_QWORD *)v21 + 4);
              v57 = *((_QWORD *)pszFormat + 1);
              v67 = 0;
              appended = IoReportResourceUsageInternal(
                           0,
                           v58,
                           v57,
                           0,
                           dwFlags,
                           (__int64)pszFormat,
                           (__int64)v56,
                           v63,
                           v64,
                           (__int64)&v67);
              ExFreePoolWithTag(v56, 0x47706E50u);
              if ( appended < 0 || v67 )
              {
                if ( !PipIsDevNodeDNStarted((__int64)v21) )
                  PipSetDevNodeProblem(v59, 12, appended);
                appended = -1073741800;
              }
            }
            else
            {
              PipSetDevNodeFlags((__int64)v21, 256);
            }
LABEL_35:
            v31 = v65;
LABEL_36:
            if ( appended >= 0 )
            {
              *((_DWORD *)v21 + 165) = *(_DWORD *)(*((_QWORD *)v21 + 2) + 660LL);
              IopDoDeferredSetInterfaceState((__int64)v21);
              PipSetDevNodeState((__int64)v21, 775);
              if ( v31 )
                PipSetDevNodeFlags((__int64)v21, 0x80000000);
              *v86 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v76 )
            ZwClose(v76);
          if ( Handle )
            ZwClose(Handle);
          if ( P )
            PiPnpRtlEndOperation((char *)P);
          return appended;
        }
        Length = Destination.Length;
        v72 = Destination.Length;
        v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( j = v24; ; v24 = j )
        {
          Destination.Length = Length;
          LODWORD(v62) = v19;
          *(_QWORD *)&cbMax[1] = v24;
          RtlStringCchPrintfExW(v24, v23, (NTSTRSAFE_PWSTR *)&cbMax[1], 0LL, 0, L"%04u", v62);
          v25 = (__int64)(*(_QWORD *)&cbMax[1] - 2 * ((unsigned __int64)Destination.Length >> 1) - (_QWORD)pszDest) >> 1;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v66, 0);
          if ( appended < 0 )
            goto LABEL_71;
          if ( v66 )
            goto LABEL_23;
          v70 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  (_DWORD)Handle,
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v70) )
            break;
          ZwClose(Handle);
          Length = v72;
          ++v19;
        }
        v27 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)&Destination);
        v74 = v27;
        if ( v27 )
        {
          v21 = (char *)v27->DeviceObjectExtension->DeviceNode;
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v71 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_71;
        if ( v21 )
          goto LABEL_25;
        appended = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &v74);
        if ( appended < 0 )
          goto LABEL_71;
        v37 = v74;
        v38 = v74;
        v31 = 1;
        v65 = 1;
        v74->Flags |= 0x1000u;
        v39 = PipAllocateDeviceNode((__int64)v38, (void **)&v71);
        v21 = v71;
        if ( v39 == -1073740946 || !v71 )
        {
          IoDeleteDevice(v37);
          appended = -1073741670;
          goto LABEL_71;
        }
        if ( (v80->Flags & 4) == 0 )
        {
          v40 = ExAllocatePoolWithTag(PagedPool, p_ServiceKeyName->Length, 0x48706E50u);
          *((_QWORD *)v21 + 8) = v40;
          if ( !v40 )
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
        v42 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
        appended = v42;
        if ( v42 >= 0 )
        {
          *(_WORD *)(*((_QWORD *)v21 + 6) + 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 20) >> 1)) = 0;
          v78 = 32;
          v43 = CmSetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  (__int64)Handle,
                  0xBu,
                  4u,
                  (__int64)&v78,
                  4u,
                  0);
          appended = v43;
          if ( v43 < 0 )
            goto LABEL_90;
          v68[0] = -1;
          v43 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)v68,
                  1u,
                  0);
          appended = v43;
          if ( v43 < 0 )
            goto LABEL_90;
          v43 = PnpUnicodeStringToWstr(&psz, cbMax, &p_ServiceKeyName->Length);
          appended = v43;
          if ( v43 < 0 )
            goto LABEL_90;
          v44 = (wchar_t *)psz;
          appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
          if ( appended < 0 )
          {
            PnpUnicodeStringToWstrFree(v44, (__int64)p_ServiceKeyName);
LABEL_88:
            v45 = appended;
            goto LABEL_91;
          }
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *((_QWORD *)v21 + 6),
                       (__int64)Handle,
                       5u,
                       1u,
                       (__int64)v44,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v44, (__int64)p_ServiceKeyName);
          if ( appended < 0 )
            goto LABEL_88;
          v76 = 0LL;
          v43 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  0x13u,
                  0,
                  983103,
                  1,
                  (__int64)&v76,
                  0LL);
          appended = v43;
          if ( v43 < 0 || (v43 = PnpSetRegistryDword(v76, L"DeviceReported"), appended = v43, v43 < 0) )
          {
LABEL_90:
            v45 = v43;
LABEL_91:
            v46 = 19;
            goto LABEL_92;
          }
          v49 = v80;
          if ( (v80->Flags & 4) == 0 )
          {
            LOBYTE(v48) = 1;
            PpDeviceRegistration((__int64)&Destination, v48, (__int64)(v21 + 56), 1);
          }
          v50 = (UNICODE_STRING *)v77;
          if ( (v49->Flags & 4) == 0 )
            v50 = p_ServiceKeyName;
          LegacyDeviceIds = PpCreateLegacyDeviceIds(v37, v50, ResourceList);
          appended = LegacyDeviceIds;
          v47 = (__int64)v21;
          if ( LegacyDeviceIds < 0 )
          {
            v45 = LegacyDeviceIds;
            v46 = 19;
            goto LABEL_94;
          }
          PipSetDevNodeFlags((__int64)v21, 17);
          *((_DWORD *)v21 + 165) = *(_DWORD *)(IopRootDeviceNode + 660);
          PipSetDevNodeState((__int64)v21, 770);
          PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v21);
          v42 = PnpMapDeviceObjectToDeviceInstance((__int64)v37, (__int64)(v21 + 40));
          appended = v42;
          if ( v42 >= 0 )
          {
            ObfReferenceObject(v37);
            goto LABEL_31;
          }
        }
        v45 = v42;
        v46 = 3;
LABEL_92:
        v47 = (__int64)v21;
LABEL_94:
        PipSetDevNodeProblem(v47, v46, v45);
        goto LABEL_35;
      }
    }
  }
  return result;
}
