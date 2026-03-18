/*
 * XREFs of IopLoadDriver @ 0x1403BB9F8
 * Callers:
 *     IopLoadUnloadDriver @ 0x140494328 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x140003214 (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceObject @ 0x14001A954 (PnpDiagnosticTraceObject.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400D08F0 (PnpDiagnosticTraceDriverFullInfo.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400EFAFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     IopResurrectDriver @ 0x140126B90 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     KseShimDriverIoCallbacks @ 0x1403B6740 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1403B8F08 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x1403BB854 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     MmUnloadSystemImage @ 0x1403CBF50 (MmUnloadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x1403CD9BC (MiFreeDriverInitialization.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     PnpIsLegacyDriver @ 0x140493A14 (PnpIsLegacyDriver.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x1404C2EAC (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     PnpDriverStarted @ 0x140507F48 (PnpDriverStarted.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x1405F73EC (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x1405F8184 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406B2474 (VfXdvDriverCaptureIoCallbacks.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int16 *v7; // rsi
  NTSTATUS v8; // eax
  ULONG v9; // ecx
  PVOID PoolWithTagPriority; // rax
  int DriverNameFromKeyNode; // edi
  SIZE_T v12; // rdx
  PVOID PoolWithTag; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  _QWORD *v17; // rsi
  char *v18; // rdi
  PVOID v19; // rcx
  PIMAGE_NT_HEADERS v20; // rdx
  char *v21; // rax
  NTSTATUS v22; // eax
  char *v23; // rsi
  PVOID v24; // rax
  unsigned __int16 *v25; // rax
  unsigned __int16 *v26; // r14
  PVOID v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 (__fastcall **v31)(__int64, __int64); // rax
  __int64 v32; // rcx
  __int64 v34; // rdx
  int RegistryValue; // eax
  ULONG_PTR v36; // r9
  UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+60h] [rbp-A0h]
  int v39; // [rsp+68h] [rbp-98h] BYREF
  PVOID v40; // [rsp+70h] [rbp-90h]
  ULONG Length; // [rsp+78h] [rbp-88h] BYREF
  char v42[4]; // [rsp+7Ch] [rbp-84h]
  PVOID P; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v44; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  int v46; // [rsp+A0h] [rbp-60h] BYREF
  ULONG ReturnLength; // [rsp+A4h] [rbp-5Ch] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v49; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v51; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v52; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-28h] BYREF
  int *v54; // [rsp+E0h] [rbp-20h]
  ULONG v55; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v58; // [rsp+100h] [rbp+0h]
  UNICODE_STRING *v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+110h] [rbp+10h]
  __int128 v61; // [rsp+118h] [rbp+18h]
  _WORD KeyValueInformation[40]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v54 = a4;
  *a4 = 0;
  v38 = a2;
  Length = 0;
  v39 = 0;
  v40 = 0LL;
  *(_DWORD *)v42 = 0;
  v7 = 0LL;
  v44.Buffer = 0LL;
  *(_DWORD *)&v44.Length = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v46 = 0;
  v8 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v8 != -1073741789 && v8 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_48;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_48;
  }
  v9 = Length + 8;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v9,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20206F49u);
  P = PoolWithTagPriority;
  v7 = (unsigned __int16 *)PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_48;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, PoolWithTagPriority, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    Destination.Length = v7[6];
    Destination.MaximumLength = Destination.Length + 8;
    v12 = Destination.Length + 2LL;
    Destination.Buffer = v7 + 8;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = ExAllocatePoolWithTagPriority(
                      PagedPool,
                      v12,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x20206F49u);
    v40 = PoolWithTag;
    if ( PoolWithTag )
    {
      LOWORD(v39) = Destination.Length;
      HIWORD(v39) = Destination.Length + 2;
      memmove(PoolWithTag, Destination.Buffer, Destination.Length);
      *((_WORD *)v40 + ((unsigned __int64)Destination.Length >> 1)) = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v39);
      if ( InitSafeBootMode )
      {
        if ( v38 )
        {
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v55) < 0
            || (DestinationString.Length = KeyValueInformation[4] - 2,
                DestinationString.MaximumLength = KeyValueInformation[4] - 2,
                DestinationString.Buffer = &KeyValueInformation[6],
                !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
            {
              IopBootLog(&Destination);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(KeyHandle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopBuildFullDriverPath((unsigned __int16 *)&v39, KeyHandle, &Destination.Length);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v44);
        if ( DriverNameFromKeyNode < 0 )
          goto LABEL_48;
        v57 = 48;
        v58 = 0LL;
        v59 = &v44;
        v60 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x210;
        v61 = 0LL;
        ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
        SystemImage = MmLoadSystemImage((unsigned int)&Destination, 0, 0, 0, (__int64)&v49, (__int64)&BaseAddress);
        DriverNameFromKeyNode = SystemImage;
        if ( SystemImage < 0 )
        {
          if ( SystemImage == -1073741554 )
            goto LABEL_68;
          if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
          {
            DriverNameFromKeyNode = (a3 != 0) - 1073740949;
            IopLogBlockedDriverEvent(&Destination, v34, (unsigned int)DriverNameFromKeyNode);
          }
          if ( DriverNameFromKeyNode == -1073741554 )
          {
LABEL_68:
            DriverNameFromKeyNode = ObOpenObjectByName(
                                      (unsigned int)&v57,
                                      (_DWORD)IoDriverObjectType,
                                      0,
                                      0,
                                      0,
                                      0LL,
                                      (__int64)&Handle);
            if ( DriverNameFromKeyNode < 0 )
            {
              ExReleaseResourceLite(&IopDriverLoadResource);
              IopBootLog(&Destination);
              if ( DriverNameFromKeyNode == -1073741772 )
                DriverNameFromKeyNode = -1073740914;
              goto LABEL_48;
            }
            DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v51, 0LL);
            ZwClose(Handle);
            if ( DriverNameFromKeyNode >= 0 )
            {
              DriverNameFromKeyNode = IopResurrectDriver((__int64)v51);
              ObfDereferenceObject(v51);
            }
          }
        }
        else
        {
          v15 = RtlImageNtHeader(BaseAddress);
          *(_WORD *)v42 = v15->OptionalHeader.MinorImageVersion;
          *(_WORD *)&v42[2] = v15->OptionalHeader.MajorImageVersion;
          DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v39, KeyHandle, BaseAddress, a3, &v46);
          if ( DriverNameFromKeyNode >= 0 )
          {
            LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
            DriverNameFromKeyNode = ObCreateObject(
                                      v16,
                                      (_DWORD)IoDriverObjectType,
                                      (unsigned int)&v57,
                                      0,
                                      0,
                                      416,
                                      0,
                                      0,
                                      (__int64)&Object);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v17 = Object;
              memset(Object, 0, 0x1A0uLL);
              v17[6] = v17 + 42;
              v17[42] = v17;
              ReturnLength = 28;
              memset64(v17 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              v18 = (char *)BaseAddress;
              v19 = BaseAddress;
              *(_DWORD *)v17 = 22020100;
              v20 = RtlImageNtHeader(v19);
              *(_WORD *)v42 = v20->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v42[2] = v20->OptionalHeader.MajorImageVersion;
              v21 = &v18[v20->OptionalHeader.AddressOfEntryPoint];
              if ( (v20->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v17 + 4) |= 2u;
              v17[11] = v21;
              v17[5] = v49;
              v17[3] = v18;
              *((_DWORD *)v17 + 8) = v20->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObject(v17, 0LL, 1u, 0, 0LL, &Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode < 0 )
              {
                IopBootLog(&Destination);
LABEL_92:
                v7 = (unsigned __int16 *)P;
                goto LABEL_48;
              }
              v22 = ObReferenceObjectByHandle(
                      Handle,
                      0,
                      IoDriverObjectType,
                      KeGetCurrentThread()->PreviousMode,
                      &v52,
                      0LL);
              if ( v22 )
                KeBugCheckEx(0x11Fu, (ULONG_PTR)Handle, v22, (ULONG_PTR)v52, 0LL);
              ZwClose(Handle);
              v23 = (char *)v52;
              *((_QWORD *)v52 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
              if ( ViVerifierDriverAddedThunkListHead )
                v24 = ExAllocatePoolWithTagPriority(
                        NonPagedPoolNx,
                        v44.MaximumLength,
                        0x20206F49u,
                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
              else
                v24 = ExAllocatePoolWithTag(NonPagedPoolNx, v44.MaximumLength, 0x20206F49u);
              *((_QWORD *)v23 + 8) = v24;
              if ( v24 )
              {
                *((_WORD *)v23 + 29) = v44.MaximumLength;
                *((_WORD *)v23 + 28) = v44.Length;
                memmove(*((void **)v23 + 8), v44.Buffer, v44.MaximumLength);
              }
              if ( ViVerifierDriverAddedThunkListHead )
                v25 = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            0x1000uLL,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
              else
                v25 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x20206F49u);
              v26 = v25;
              if ( v25 )
              {
                DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v25, 0x1000u, &ReturnLength);
                if ( DriverNameFromKeyNode >= 0 )
                {
                  if ( v40 )
                  {
                    v27 = ViVerifierDriverAddedThunkListHead
                        ? ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            HIWORD(v39),
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                        : ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v39), 0x20206F49u);
                    *(_QWORD *)(*((_QWORD *)v23 + 6) + 32LL) = v27;
                    v28 = *((_QWORD *)v23 + 6);
                    if ( *(_QWORD *)(v28 + 32) )
                    {
                      *(_WORD *)(v28 + 26) = HIWORD(v39);
                      *(_WORD *)(*((_QWORD *)v23 + 6) + 24LL) = v39;
                      memmove(*(void **)(*((_QWORD *)v23 + 6) + 32LL), v40, HIWORD(v39));
                    }
                  }
                  if ( (v46 & 1) != 0 )
                    *((_DWORD *)v23 + 4) |= 0x100u;
                  PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, v26);
                  DriverNameFromKeyNode = (*((__int64 (__fastcall **)(char *, unsigned __int16 *))v23 + 11))(v23, v26);
                  if ( DriverNameFromKeyNode >= 0 )
                  {
                    VfXdvDriverCaptureIoCallbacks(v23);
                    KseShimDriverIoCallbacks(v23, v29, (__int64)&Destination);
                  }
                  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverInit_Stop, v26, DriverNameFromKeyNode);
                  v30 = 28LL;
                  *v54 = DriverNameFromKeyNode;
                  if ( DriverNameFromKeyNode < 0 )
                    DriverNameFromKeyNode = -1073740955;
                  v31 = (__int64 (__fastcall **)(__int64, __int64))(v23 + 112);
                  do
                  {
                    if ( !*v31 )
                      *v31 = IopInvalidDeviceRequest;
                    ++v31;
                    --v30;
                  }
                  while ( v30 );
                  ExFreePoolWithTag(v26, 0);
                  if ( DriverNameFromKeyNode >= 0 )
                  {
                    if ( !(unsigned int)PnpIsLegacyDriver(v23) )
                    {
                      DriverNameFromKeyNode = PnpDriverStarted(v32, KeyHandle, &v39);
                      if ( DriverNameFromKeyNode >= 0 )
                        goto LABEL_46;
                      if ( *((_QWORD *)v23 + 13) )
                      {
                        *((_DWORD *)v23 + 4) |= 1u;
                        (*((void (__fastcall **)(char *))v23 + 13))(v23);
                        IopBootLog(&Destination);
                      }
                    }
                    if ( DriverNameFromKeyNode >= 0 )
                    {
LABEL_46:
                      IopBootLog(&Destination);
                      MiFreeDriverInitialization(*((_QWORD *)v23 + 5));
                      IopReadyDeviceObjects(v23);
LABEL_47:
                      v7 = (unsigned __int16 *)P;
                      goto LABEL_48;
                    }
                  }
                  ObMakeTemporaryObject(v23);
                  ObfDereferenceObject(v23);
                  goto LABEL_47;
                }
                ObMakeTemporaryObject(v23);
                ObfDereferenceObject(v23);
                ExFreePoolWithTag(v26, 0);
                goto LABEL_92;
              }
              ObMakeTemporaryObject(v23);
              ObfDereferenceObject(v23);
              v7 = (unsigned __int16 *)P;
              DriverNameFromKeyNode = -1073741670;
              goto LABEL_48;
            }
          }
          MmUnloadSystemImage(v49);
        }
        ExReleaseResourceLite(&IopDriverLoadResource);
        IopBootLog(&Destination);
        goto LABEL_48;
      }
    }
    else
    {
      DriverNameFromKeyNode = -1073741670;
    }
    Destination.Buffer = 0LL;
  }
LABEL_48:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741554 && DriverNameFromKeyNode != -1073741218 )
  {
    PnpDriverLoadingFailed(KeyHandle);
    if ( DriverNameFromKeyNode != -1073740955 )
    {
      RegistryValue = IopGetRegistryValue(KeyHandle);
      if ( RegistryValue >= 0 )
      {
        if ( *((_DWORD *)v56 + 3)
          && CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)v56 + *((unsigned int *)v56 + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v36 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v36 = 0LL;
          if ( ((unsigned __int64)&v44 & -(__int64)(v44.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v44 & -(__int64)(v44.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v36, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(v56, 0);
      }
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v40 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v39,
      DriverNameFromKeyNode,
      (__int64)&v44,
      v42[0]);
    ExFreePoolWithTag(v40, 0);
  }
  if ( v44.Buffer )
    ExFreePoolWithTag(v44.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
