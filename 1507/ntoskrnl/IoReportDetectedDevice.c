/*
 * XREFs of IoReportDetectedDevice @ 0x14059B5E8
 * Callers:
 *     VerifierIoReportDetectedDevice @ 0x140742020 (VerifierIoReportDetectedDevice.c)
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1400CFD80 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1400CFDA4 (PipAreDriversLoaded.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PpDevNodeRemoveFromTree @ 0x14011C260 (PpDevNodeRemoveFromTree.c)
 *     PpDevNodeInsertIntoTree @ 0x14012C8F0 (PpDevNodeInsertIntoTree.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwDeleteKey @ 0x140180890 (ZwDeleteKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     PnpDetermineResourceListSize @ 0x14045D228 (PnpDetermineResourceListSize.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404D8C10 (PnpDeviceObjectToDeviceInstance.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14053503C (PnpCleanupDeviceRegistryValues.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     _CmCreateDevice @ 0x14054ED28 (_CmCreateDevice.c)
 *     IopDoDeferredSetInterfaceState @ 0x140550270 (IopDoDeferredSetInterfaceState.c)
 *     PipAllocateDeviceNode @ 0x1405532C0 (PipAllocateDeviceNode.c)
 *     PnpSetRegistryDword @ 0x14059B5A0 (PnpSetRegistryDword.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x14059BD58 (IopDuplicateDetection.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14059C324 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BE5F8 (PnpAllocateDeviceInstancePath.c)
 *     PpCreateLegacyDeviceIds @ 0x14067B474 (PpCreateLegacyDeviceIds.c)
 *     IoReportResourceUsageInternal @ 0x14067D0F0 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x14067DD40 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14067DD9C (PnpSetRegistryResourceList.c)
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
  __int64 v27; // rdx
  PDEVICE_OBJECT v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _DEVICE_OBJECT *v33; // rax
  __int64 v34; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v35; // r15
  unsigned int v36; // eax
  char v37; // r13
  struct _KTHREAD *v38; // rdx
  __int16 v39; // ax
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v42; // r12
  PDEVICE_OBJECT v43; // rcx
  int v44; // eax
  PVOID v45; // rax
  NTSTATUS DeviceInstancePath; // eax
  int v47; // eax
  int v48; // eax
  wchar_t *v49; // r13
  int v50; // r8d
  int v51; // edx
  __int64 v52; // rcx
  PDRIVER_OBJECT v53; // rdi
  UNICODE_STRING *v54; // rdx
  int LegacyDeviceIds; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // eax
  int v59; // ecx
  SIZE_T v60; // rdi
  PVOID PoolWithTag; // rax
  void *v62; // rsi
  __int64 v63; // r8
  int v64; // edx
  __int64 v65; // rcx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+38h] [rbp-C8h]
  int v70; // [rsp+40h] [rbp-C0h]
  char v71; // [rsp+50h] [rbp-B0h]
  char v72; // [rsp+51h] [rbp-AFh] BYREF
  char v73; // [rsp+52h] [rbp-AEh] BYREF
  char v74[5]; // [rsp+53h] [rbp-ADh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v76; // [rsp+60h] [rbp-A0h] BYREF
  char *v77; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  ULONG v79; // [rsp+80h] [rbp-80h]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v81; // [rsp+90h] [rbp-70h] BYREF
  PDEVICE_OBJECT v82; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v83[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int cbMax[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C0h] [rbp-40h] BYREF
  PIO_RESOURCE_REQUIREMENTS_LIST v87; // [rsp+C8h] [rbp-38h]
  PDRIVER_OBJECT v88; // [rsp+D0h] [rbp-30h]
  size_t pcbLength; // [rsp+D8h] [rbp-28h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t *j; // [rsp+E8h] [rbp-18h]
  PDEVICE_OBJECT *v92; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v87 = ResourceRequirements;
  DeviceNode = 0LL;
  v88 = DriverObject;
  DriverExtension = DriverObject->DriverExtension;
  v92 = DeviceObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  v79 = SlotNumber;
  memset(v83, 0, sizeof(v83));
  v81 = 0LL;
  v72 = 0;
  v77 = 0LL;
  v76 = 0;
  Handle = 0LL;
  Destination.Buffer = pszDest;
  *(_DWORD *)&Destination.Length = 26214400;
  KeyHandle = 0LL;
  v71 = 0;
  v82 = 0LL;
  *(_QWORD *)&cbMax[1] = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v77 = DeviceNode;
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
        v83[1] = i + 1;
        LOWORD(v83[0]) = p_ServiceKeyName->Length
                       - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        WORD1(v83[0]) = v83[0];
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
      v16 = (const UNICODE_STRING *)v83;
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
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, v79, &v77);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v76 = v77 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v77;
        if ( v77 )
        {
LABEL_25:
          if ( v76 )
          {
            if ( (unsigned int)PipAreDriversLoaded((__int64)v21)
              || (*((_DWORD *)v21 + 99) & 0x6000) != 0
              && ((v58 = *((_DWORD *)v21 + 101), v58 > 0x1C) || (v59 = 268697602, !_bittest(&v59, v58))) )
            {
              ObfDereferenceObject(*((PVOID *)v21 + 4));
              appended = -1073741810;
              goto LABEL_72;
            }
            if ( !v34 )
              PipClearDevNodeProblem((__int64)v21);
          }
          if ( !Handle )
          {
            appended = PnpDeviceObjectToDeviceInstance(*((_QWORD *)v21 + 4), (__int64)&Handle, 983103);
            if ( appended < 0 )
            {
LABEL_72:
              if ( v72 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v81 )
                  ZwDeleteKey(v81);
                if ( Handle )
                  ZwDeleteKey(Handle);
                PnpCleanupDeviceRegistryValues((__int64)(v21 + 40), v27, (__int64)v28, v29);
                PpDevNodeRemoveFromTree((__int64)v21);
                IoDeleteDevice(*((PDEVICE_OBJECT *)v21 + 4));
                ObfDereferenceObject(*((PVOID *)v21 + 4));
              }
              goto LABEL_40;
            }
          }
LABEL_31:
          v35 = v87;
          if ( !ResourceList && !v87
            || (v48 = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *((_QWORD *)v21 + 6),
                        0x14u,
                        0,
                        983103,
                        1,
                        (__int64)&KeyHandle,
                        0LL),
                appended = v48,
                v48 >= 0)
            && (!ResourceList || (v48 = PnpSetRegistryResourceList(KeyHandle), appended = v48, v48 >= 0))
            && (!v35 || (v48 = PnpSetRegistryRequirementsList(KeyHandle), appended = v48, v48 >= 0)) )
          {
            if ( ResourceAssigned )
            {
              PipSetDevNodeFlags((__int64)v21, 256);
              PnpSetRegistryDword(Handle, L"NoResourceAtInitTime");
              v36 = PnpDetermineResourceListSize(ResourceList);
              IopWriteAllocatedResourcesToRegistry(v21, ResourceList, v36);
            }
            else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
            {
              v60 = (unsigned int)PnpDetermineResourceListSize(ResourceList);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v60, 0x47706E50u);
              v62 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_71:
                appended = -1073741670;
                PipSetDevNodeProblem((__int64)v21, 3, -1073741670);
                goto LABEL_72;
              }
              memmove(PoolWithTag, ResourceList, v60);
              pszFormat = (NTSTRSAFE_PCWSTR)*((_QWORD *)v21 + 4);
              v63 = *((_QWORD *)pszFormat + 1);
              v73 = 0;
              appended = IoReportResourceUsageInternal(
                           0,
                           v64,
                           v63,
                           0,
                           dwFlags,
                           (__int64)pszFormat,
                           (__int64)v62,
                           v69,
                           v70,
                           (__int64)&v73);
              ExFreePoolWithTag(v62, 0x47706E50u);
              if ( appended < 0 || v73 )
              {
                if ( !PipIsDevNodeDNStarted((__int64)v21) )
                  PipSetDevNodeProblem(v65, 12, appended);
                appended = -1073741800;
              }
            }
            else
            {
              PipSetDevNodeFlags((__int64)v21, 256);
            }
LABEL_35:
            v37 = v71;
LABEL_36:
            if ( appended >= 0 )
            {
              *((_DWORD *)v21 + 165) = *(_DWORD *)(*((_QWORD *)v21 + 2) + 660LL);
              IopDoDeferredSetInterfaceState((__int64)v21);
              PipSetDevNodeState((__int64)v21, 775);
              if ( v37 )
                PipSetDevNodeFlags((__int64)v21, 0x80000000);
              *v92 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
              goto LABEL_40;
            }
            goto LABEL_72;
          }
          goto LABEL_91;
        }
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended < 0 )
        {
LABEL_40:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          v38 = KeGetCurrentThread();
          v39 = v38->KernelApcDisable + 1;
          v38->KernelApcDisable = v39;
          if ( !v39
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
            && !v38->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v81 )
            ZwClose(v81);
          if ( Handle )
            ZwClose(Handle);
          if ( *(_QWORD *)&cbMax[1] )
            PiPnpRtlEndOperation(*(char **)&cbMax[1]);
          return appended;
        }
        Length = Destination.Length;
        v79 = Destination.Length;
        v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( j = v24; ; v24 = j )
        {
          Destination.Length = Length;
          LODWORD(v68) = v19;
          ppszDestEnd = v24;
          RtlStringCchPrintfExW(v24, v23, &ppszDestEnd, 0LL, 0, L"%04u", v68);
          v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v72, 0);
          if ( appended < 0 )
            goto LABEL_72;
          if ( v72 )
          {
            v28 = v82;
            goto LABEL_23;
          }
          v76 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  (_DWORD)Handle,
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v76) )
            break;
          ZwClose(Handle);
          Length = v79;
          ++v19;
        }
        v33 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)&Destination, v30, v31, v32);
        v82 = v33;
        v28 = v33;
        if ( v33 )
        {
          v21 = (char *)v33->DeviceObjectExtension->DeviceNode;
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v77 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_72;
        if ( v21 )
          goto LABEL_25;
        appended = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &v82);
        if ( appended < 0 )
          goto LABEL_72;
        v42 = v82;
        v43 = v82;
        v37 = 1;
        v71 = 1;
        v82->Flags |= 0x1000u;
        v44 = PipAllocateDeviceNode((__int64)v43, (void **)&v77);
        v21 = v77;
        if ( v44 == -1073740946 || !v77 )
        {
          IoDeleteDevice(v42);
          appended = -1073741670;
          goto LABEL_72;
        }
        if ( (v88->Flags & 4) == 0 )
        {
          v45 = ExAllocatePoolWithTag((POOL_TYPE)257, p_ServiceKeyName->Length, 0x48706E50u);
          *((_QWORD *)v21 + 8) = v45;
          if ( !v45 )
            goto LABEL_71;
          *((_WORD *)v21 + 29) = p_ServiceKeyName->Length;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_81;
        }
        DeviceInstancePath = PnpAllocateDeviceInstancePath(v21, (unsigned int)Destination.Length + 2);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
        {
LABEL_81:
          PipSetDevNodeProblem((__int64)v21, 3, DeviceInstancePath);
          goto LABEL_36;
        }
        v47 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
        appended = v47;
        if ( v47 >= 0 )
        {
          *(_WORD *)(*((_QWORD *)v21 + 6) + 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 20) >> 1)) = 0;
          v84 = 32;
          v48 = CmSetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  (__int64)Handle,
                  0xBu,
                  4u,
                  (__int64)&v84,
                  4u,
                  0);
          appended = v48;
          if ( v48 < 0 )
            goto LABEL_91;
          v74[0] = -1;
          v48 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)v74,
                  1u,
                  0);
          appended = v48;
          if ( v48 < 0 )
            goto LABEL_91;
          v48 = PnpUnicodeStringToWstr(&psz, cbMax, &p_ServiceKeyName->Length);
          appended = v48;
          if ( v48 < 0 )
            goto LABEL_91;
          v49 = (wchar_t *)psz;
          appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
          if ( appended < 0 )
          {
            PnpUnicodeStringToWstrFree(v49, (__int64)p_ServiceKeyName);
LABEL_89:
            v50 = appended;
            goto LABEL_92;
          }
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *((_QWORD *)v21 + 6),
                       (__int64)Handle,
                       5u,
                       1u,
                       (__int64)v49,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v49, (__int64)p_ServiceKeyName);
          if ( appended < 0 )
            goto LABEL_89;
          v81 = 0LL;
          v48 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  0x13u,
                  0,
                  983103,
                  1,
                  (__int64)&v81,
                  0LL);
          appended = v48;
          if ( v48 < 0 || (v48 = PnpSetRegistryDword(v81, L"DeviceReported"), appended = v48, v48 < 0) )
          {
LABEL_91:
            v50 = v48;
LABEL_92:
            v51 = 19;
            goto LABEL_93;
          }
          v53 = v88;
          if ( (v88->Flags & 4) == 0 )
            PpDeviceRegistration((__int64)&Destination, 1, (UNICODE_STRING *)(v21 + 56), 1);
          v54 = (UNICODE_STRING *)v83;
          if ( (v53->Flags & 4) == 0 )
            v54 = p_ServiceKeyName;
          LegacyDeviceIds = PpCreateLegacyDeviceIds(v42, v54, ResourceList);
          appended = LegacyDeviceIds;
          v52 = (__int64)v21;
          if ( LegacyDeviceIds < 0 )
          {
            v50 = LegacyDeviceIds;
            v51 = 19;
            goto LABEL_95;
          }
          PipSetDevNodeFlags((__int64)v21, 17);
          *((_DWORD *)v21 + 165) = *(_DWORD *)(IopRootDeviceNode + 660);
          PipSetDevNodeState((__int64)v21, 770);
          PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v21);
          v47 = PnpMapDeviceObjectToDeviceInstance((__int64)v42, (__int64)(v21 + 40), v56, v57);
          appended = v47;
          if ( v47 >= 0 )
          {
            ObfReferenceObject(v42);
            goto LABEL_31;
          }
        }
        v50 = v47;
        v51 = 3;
LABEL_93:
        v52 = (__int64)v21;
LABEL_95:
        PipSetDevNodeProblem(v52, v51, v50);
        goto LABEL_35;
      }
    }
  }
  return result;
}
