/*
 * XREFs of IopLoadDriver @ 0x140572EA0
 * Callers:
 *     IopLoadUnloadDriver @ 0x140571B04 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     IopResurrectDriver @ 0x140153594 (IopResurrectDriver.c)
 *     HeadlessKernelAddLogEntry @ 0x1401539BC (HeadlessKernelAddLogEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtQueryObject @ 0x1404259B0 (NtQueryObject.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 *     PnpDriverStarted @ 0x140571F30 (PnpDriverStarted.c)
 *     IopReadyDeviceObjects @ 0x1405724BC (IopReadyDeviceObjects.c)
 *     PnpIsLegacyDriver @ 0x140572950 (PnpIsLegacyDriver.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     PnpPrepareDriverLoading @ 0x1405729F0 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x140572CFC (IopBuildFullDriverPath.c)
 *     MiFreeDriverInitialization @ 0x140573BE0 (MiFreeDriverInitialization.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x1406711E4 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14067211C (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407320D4 (VfXdvDriverCaptureIoCallbacks.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rbx
  void *v7; // r13
  NTSTATUS v8; // eax
  int DriverNameFromKeyNode; // esi
  ULONG v10; // ecx
  PVOID PoolWithTagPriority; // rax
  _WORD *v12; // rdi
  HANDLE v13; // r15
  ULONG_PTR v14; // r9
  SIZE_T v15; // rdx
  wchar_t *PoolWithTag; // rax
  REGHANDLE v17; // rdi
  int SystemImage; // eax
  __int64 v20; // rdx
  PIMAGE_NT_HEADERS v21; // rax
  int v22; // ecx
  _QWORD *v23; // rsi
  char *v24; // rdi
  PVOID v25; // rcx
  PIMAGE_NT_HEADERS v26; // rdx
  char *v27; // rax
  NTSTATUS v28; // eax
  char *v29; // r14
  PVOID v30; // rax
  unsigned __int16 *v31; // rax
  unsigned __int16 *v32; // r15
  PVOID v33; // rax
  __int64 v34; // rcx
  REGHANDLE v35; // rsi
  int v36; // edi
  unsigned __int16 v37; // ax
  __int64 v38; // rdx
  REGHANDLE v39; // r12
  int v40; // edi
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  __int64 (__fastcall **v43)(__int64, IRP *); // rax
  __int64 v44; // rcx
  wchar_t *v45; // rdi
  unsigned __int16 v46; // ax
  REGHANDLE v47; // r14
  __int16 v48; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v50; // [rsp+68h] [rbp-98h] BYREF
  ULONG Length; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+7Ch] [rbp-84h]
  __int16 v53; // [rsp+80h] [rbp-80h] BYREF
  __int16 v54; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v55; // [rsp+88h] [rbp-78h] BYREF
  __int16 v56; // [rsp+8Ch] [rbp-74h] BYREF
  UNICODE_STRING v57; // [rsp+90h] [rbp-70h] BYREF
  HANDLE KeyHandlea; // [rsp+A0h] [rbp-60h]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  int v60; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v61; // [rsp+B8h] [rbp-48h]
  PVOID BaseAddress; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v63; // [rsp+C8h] [rbp-38h] BYREF
  int v64; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D8h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+0h] BYREF
  PVOID v70; // [rsp+108h] [rbp+8h] BYREF
  ULONG v71; // [rsp+110h] [rbp+10h] BYREF
  PVOID P; // [rsp+118h] [rbp+18h] BYREF
  PVOID v73; // [rsp+120h] [rbp+20h]
  int *v74; // [rsp+128h] [rbp+28h]
  int v75; // [rsp+130h] [rbp+30h] BYREF
  __int64 v76; // [rsp+138h] [rbp+38h]
  UNICODE_STRING *v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]
  __int128 v79; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+160h] [rbp+60h] BYREF
  __int64 v81; // [rsp+170h] [rbp+70h]
  int v82; // [rsp+178h] [rbp+78h]
  int v83; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+180h] [rbp+80h] BYREF
  wchar_t *Buffer; // [rsp+190h] [rbp+90h]
  int v86; // [rsp+198h] [rbp+98h]
  int v87; // [rsp+19Ch] [rbp+9Ch]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v89; // [rsp+1B0h] [rbp+B0h]
  int v90; // [rsp+1B8h] [rbp+B8h]
  int v91; // [rsp+1BCh] [rbp+BCh]
  int *v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+1D0h] [rbp+D0h] BYREF
  wchar_t *v95; // [rsp+1E0h] [rbp+E0h]
  int v96; // [rsp+1E8h] [rbp+E8h]
  int v97; // [rsp+1ECh] [rbp+ECh]
  int *v98; // [rsp+1F0h] [rbp+F0h]
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  __int16 *v100; // [rsp+200h] [rbp+100h]
  __int64 v101; // [rsp+208h] [rbp+108h]
  wchar_t *v102; // [rsp+210h] [rbp+110h]
  int v103; // [rsp+218h] [rbp+118h]
  int v104; // [rsp+21Ch] [rbp+11Ch]
  int *v105; // [rsp+220h] [rbp+120h]
  __int64 v106; // [rsp+228h] [rbp+128h]
  _WORD KeyValueInformation[40]; // [rsp+230h] [rbp+130h] BYREF

  v4 = 0LL;
  v74 = a4;
  *a4 = 0;
  LOBYTE(v48) = a2;
  KeyHandlea = KeyHandle;
  Length = 0;
  *(_DWORD *)&v50.Length = 0;
  v50.Buffer = 0LL;
  v7 = 0LL;
  v52 = 0;
  v57.Buffer = 0LL;
  *(_DWORD *)&v57.Length = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v60 = 0;
  v8 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v8 != -2147483643 && v8 != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_12;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_12;
  }
  v10 = Length + 8;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v10,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20206F49u);
  v61 = PoolWithTagPriority;
  v12 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    goto LABEL_10;
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, PoolWithTagPriority, Length, &Length);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_103;
  Destination.Length = v12[6];
  Destination.MaximumLength = Destination.Length + 8;
  Destination.Buffer = v12 + 8;
  v15 = Destination.Length + 2LL;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTagPriority(
                               PagedPool,
                               v15,
                               0x20206F49u,
                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x20206F49u);
  v50.Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverNameFromKeyNode = -1073741670;
LABEL_101:
    Destination.Buffer = 0LL;
    goto LABEL_102;
  }
  v50.Length = Destination.Length;
  v50.MaximumLength = Destination.Length + 2;
  memmove(PoolWithTag, Destination.Buffer, Destination.Length);
  v50.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
  RtlAppendUnicodeToString(&Destination, L".SYS");
  HeadlessKernelAddLogEntry();
  v17 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverLoad_Start) )
  {
    v53 = v50.Length >> 1;
    *(_QWORD *)&UserData.Size = 2LL;
    UserData.Ptr = (ULONGLONG)&v53;
    Buffer = v50.Buffer;
    v86 = v50.Length;
    v87 = 0;
    EtwWrite(v17, &KMPnPEvt_DriverLoad_Start, 0LL, 2u, &UserData);
  }
  if ( (_BYTE)v48 )
  {
    if ( InitSafeBootMode )
    {
      RtlInitUnicodeString(&DestinationString, L"Group");
      memset(KeyValueInformation, 0, 0x4CuLL);
      if ( NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x4Cu, &v71) < 0
        || (DestinationString.Length = KeyValueInformation[4] - 2,
            DestinationString.MaximumLength = KeyValueInformation[4] - 2,
            DestinationString.Buffer = &KeyValueInformation[6],
            !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
        {
          IopBootLog(&Destination, 0);
          DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
          HeadlessKernelAddLogEntry();
          ObCloseHandle(KeyHandle, 0);
          return 3221226335LL;
        }
      }
    }
  }
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v50.Length, KeyHandle, &Destination.Length);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_101;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v57);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v75 = 48;
    v76 = 0LL;
    v77 = &v57;
    v78 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x210;
    v79 = 0LL;
    ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
    SystemImage = MmLoadSystemImage((unsigned int)&Destination, 0, 0, 0, (__int64)&v63, (__int64)&BaseAddress);
    DriverNameFromKeyNode = SystemImage;
    if ( SystemImage < 0 )
    {
      if ( SystemImage != -1073741554 )
      {
        if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
        {
          DriverNameFromKeyNode = (a3 != 0) - 1073740949;
          IopLogBlockedDriverEvent(&Destination, v20, (unsigned int)DriverNameFromKeyNode);
        }
        if ( DriverNameFromKeyNode != -1073741554 )
          goto LABEL_44;
      }
      DriverNameFromKeyNode = ObOpenObjectByName((__int64)&v75, (__int64)IoDriverObjectType, 0, 0LL, 0, 0LL, &Handle);
      if ( DriverNameFromKeyNode < 0 )
      {
        ExReleaseResourceLite(&IopDriverLoadResource);
        IopBootLog(&Destination, 0);
        if ( DriverNameFromKeyNode == -1073741772 )
          DriverNameFromKeyNode = -1073740914;
LABEL_102:
        if ( DriverNameFromKeyNode >= 0 )
          goto LABEL_104;
        goto LABEL_103;
      }
      DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
      ZwClose(Handle);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopResurrectDriver((__int64)Object);
        ObfDereferenceObject(Object);
      }
LABEL_44:
      ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_45:
      IopBootLog(&Destination, 0);
      goto LABEL_102;
    }
    v21 = RtlImageNtHeader(BaseAddress);
    v52 = v21->OptionalHeader.MinorImageVersion | (v21->OptionalHeader.MajorImageVersion << 16);
    DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v50, KeyHandle, BaseAddress, a3, &v60);
    if ( DriverNameFromKeyNode < 0
      || (LOBYTE(v22) = KeGetCurrentThread()->PreviousMode,
          DriverNameFromKeyNode = ObCreateObject(v22, (int)IoDriverObjectType, (int)&v75, 0),
          DriverNameFromKeyNode < 0) )
    {
      MmUnloadSystemImage(v63);
      goto LABEL_44;
    }
    v23 = v73;
    memset(v73, 0, 0x1A0uLL);
    v23[6] = v23 + 42;
    v23[42] = v23;
    ReturnLength = 28;
    memset64(v23 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    v24 = (char *)BaseAddress;
    v25 = BaseAddress;
    *(_DWORD *)v23 = 22020100;
    v26 = RtlImageNtHeader(v25);
    v52 = v26->OptionalHeader.MinorImageVersion | (v26->OptionalHeader.MajorImageVersion << 16);
    v27 = &v24[v26->OptionalHeader.AddressOfEntryPoint];
    if ( (v26->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
      *((_DWORD *)v23 + 4) |= 2u;
    v23[11] = v27;
    v23[5] = v63;
    v23[3] = v24;
    *((_DWORD *)v23 + 8) = v26->OptionalHeader.SizeOfImage;
    DriverNameFromKeyNode = ObInsertObject(v23, 0LL, 1u, 0, 0LL, &Handle);
    ExReleaseResourceLite(&IopDriverLoadResource);
    if ( DriverNameFromKeyNode < 0 )
      goto LABEL_45;
    v28 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, KeGetCurrentThread()->PreviousMode, &v70, 0LL);
    if ( v28 )
      KeBugCheckEx(0x11Fu, (ULONG_PTR)Handle, v28, (ULONG_PTR)v70, 0LL);
    ZwClose(Handle);
    v29 = (char *)v70;
    *((_QWORD *)v70 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
    if ( ViVerifierDriverAddedThunkListHead )
      v30 = ExAllocatePoolWithTagPriority(
              NonPagedPoolNx,
              v57.MaximumLength,
              0x20206F49u,
              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      v30 = ExAllocatePoolWithTag(NonPagedPoolNx, v57.MaximumLength, 0x20206F49u);
    *((_QWORD *)v29 + 8) = v30;
    if ( v30 )
    {
      *((_WORD *)v29 + 29) = v57.MaximumLength;
      *((_WORD *)v29 + 28) = v57.Length;
      memmove(*((void **)v29 + 8), v57.Buffer, v57.MaximumLength);
    }
    if ( ViVerifierDriverAddedThunkListHead )
      v31 = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                  NonPagedPoolNx,
                                  0x1000uLL,
                                  0x20206F49u,
                                  (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      v31 = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x20206F49u);
    v32 = v31;
    if ( !v31 )
    {
      ObMakeTemporaryObject(v29);
      ObfDereferenceObject(v29);
LABEL_10:
      DriverNameFromKeyNode = -1073741670;
LABEL_11:
      v7 = v61;
LABEL_12:
      HeadlessKernelAddLogEntry();
      goto LABEL_13;
    }
    DriverNameFromKeyNode = NtQueryObject(KeyHandlea, ObjectNameInformation, v31, 0x1000u, &ReturnLength);
    if ( DriverNameFromKeyNode < 0 )
    {
      ObMakeTemporaryObject(v29);
      ObfDereferenceObject(v29);
      ExFreePoolWithTag(v32, 0);
      goto LABEL_102;
    }
    if ( v50.Buffer )
    {
      v33 = ViVerifierDriverAddedThunkListHead
          ? ExAllocatePoolWithTagPriority(
              NonPagedPoolNx,
              v50.MaximumLength,
              0x20206F49u,
              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
          : ExAllocatePoolWithTag(NonPagedPoolNx, v50.MaximumLength, 0x20206F49u);
      *(_QWORD *)(*((_QWORD *)v29 + 6) + 32LL) = v33;
      v34 = *((_QWORD *)v29 + 6);
      if ( *(_QWORD *)(v34 + 32) )
      {
        *(_WORD *)(v34 + 26) = v50.MaximumLength;
        *(_WORD *)(*((_QWORD *)v29 + 6) + 24LL) = v50.Length;
        memmove(*(void **)(*((_QWORD *)v29 + 6) + 32LL), v50.Buffer, v50.MaximumLength);
      }
    }
    if ( (v60 & 1) != 0 )
      *((_DWORD *)v29 + 4) |= 0x100u;
    v35 = PnpEtwHandle;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverInit_Start) )
    {
      v36 = *v32;
      v37 = *v32;
      *(_QWORD *)&v80.Size = 2LL;
      v55 = v37 >> 1;
      v82 = v36;
      v80.Ptr = (ULONGLONG)&v55;
      v81 = *((_QWORD *)v32 + 1);
      v83 = 0;
      EtwWrite(v35, &KMPnPEvt_DriverInit_Start, 0LL, 2u, &v80);
    }
    DriverNameFromKeyNode = (*((__int64 (__fastcall **)(char *, unsigned __int16 *))v29 + 11))(v29, v32);
    if ( DriverNameFromKeyNode >= 0 )
    {
      VfXdvDriverCaptureIoCallbacks(v29);
      KseShimDriverIoCallbacks(v29, v38, &Destination);
    }
    v39 = PnpEtwHandle;
    v64 = DriverNameFromKeyNode;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverInit_Stop) )
    {
      v40 = *v32;
      v41 = *v32;
      *(_QWORD *)&v88.Size = 2LL;
      v56 = v41 >> 1;
      v90 = v40;
      v88.Ptr = (ULONGLONG)&v56;
      v89 = *((_QWORD *)v32 + 1);
      v92 = &v64;
      v91 = 0;
      v93 = 4LL;
      EtwWrite(v39, &KMPnPEvt_DriverInit_Stop, 0LL, 3u, &v88);
    }
    v42 = 28LL;
    *v74 = DriverNameFromKeyNode;
    if ( DriverNameFromKeyNode < 0 )
      DriverNameFromKeyNode = -1073740955;
    v43 = (__int64 (__fastcall **)(__int64, IRP *))(v29 + 112);
    do
    {
      if ( !*v43 )
        *v43 = IopInvalidDeviceRequest;
      ++v43;
      --v42;
    }
    while ( v42 );
    ExFreePoolWithTag(v32, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      if ( !(unsigned int)PnpIsLegacyDriver((__int64)v29) )
      {
        DriverNameFromKeyNode = PnpDriverStarted(v44, KeyHandlea, &v50);
        if ( DriverNameFromKeyNode >= 0 )
        {
LABEL_98:
          IopBootLog(&Destination, 1);
          MiFreeDriverInitialization(*((_QWORD *)v29 + 5));
          IopReadyDeviceObjects((__int64)v29);
          goto LABEL_102;
        }
        if ( *((_QWORD *)v29 + 13) )
        {
          *((_DWORD *)v29 + 4) |= 1u;
          (*((void (__fastcall **)(char *))v29 + 13))(v29);
          IopBootLog(&Destination, 0);
        }
      }
      if ( DriverNameFromKeyNode >= 0 )
        goto LABEL_98;
    }
    ObMakeTemporaryObject(v29);
    ObfDereferenceObject(v29);
    goto LABEL_102;
  }
LABEL_103:
  if ( DriverNameFromKeyNode != -1073741554 )
    goto LABEL_11;
LABEL_104:
  HeadlessKernelAddLogEntry();
  v7 = v61;
LABEL_13:
  v13 = KeyHandlea;
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073741554 )
  {
    PnpDriverLoadingFailed(KeyHandlea);
    if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(v13, L"ErrorControl", 0, &P) >= 0 )
    {
      if ( *((_DWORD *)P + 3)
        && CmFirstTime == 1
        && (unsigned int)(*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) - 2) <= 1 )
      {
        if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
          v14 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
        else
          v14 = 0LL;
        if ( ((unsigned __int64)&v57 & -(__int64)(v57.Buffer != 0LL)) != 0 )
          v4 = *(_QWORD *)(((unsigned __int64)&v57 & -(__int64)(v57.Buffer != 0LL)) + 8);
        KeBugCheckEx(0x5Au, 1uLL, v4, v14, DriverNameFromKeyNode);
      }
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v45 = v50.Buffer;
  if ( v50.Buffer )
  {
    v65 = v52;
    v54 = v50.Length >> 1;
    v94.Ptr = (ULONGLONG)&v54;
    v96 = v50.Length;
    v98 = &v67;
    v67 = DriverNameFromKeyNode;
    *(_QWORD *)&v94.Size = 2LL;
    v95 = v50.Buffer;
    v97 = 0;
    v99 = 4LL;
    if ( v57.Buffer )
    {
      v46 = v57.Length >> 1;
      v48 = v57.Length >> 1;
    }
    else
    {
      v46 = 0;
      v48 = 0;
    }
    v47 = PnpEtwHandle;
    v100 = &v48;
    v103 = 2 * v46;
    v105 = &v65;
    v101 = 2LL;
    v102 = v57.Buffer;
    v104 = 0;
    v106 = 4LL;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop) )
    {
      EtwWrite(v47, &KMPnPEvt_DriverLoad_Stop, 0LL, 6u, &v94);
      v45 = v50.Buffer;
    }
    ExFreePoolWithTag(v45, 0);
  }
  if ( v57.Buffer )
    ExFreePoolWithTag(v57.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(v13, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
