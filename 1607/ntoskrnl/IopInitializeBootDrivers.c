/*
 * XREFs of IopInitializeBootDrivers @ 0x14079B23C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x1400AEE00 (PnpDiagnosticTrace.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     HeadlessKernelAddLogEntry @ 0x14010B72C (HeadlessKernelAddLogEntry.c)
 *     PnpUnlockDeviceActionQueue @ 0x140110C5C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140110CE8 (PnpLockDeviceActionQueue.c)
 *     PnpBootDeviceWait @ 0x14013C3F0 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     _memicmp @ 0x140159858 (_memicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     Template_qzq @ 0x1401CCB84 (Template_qzq.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PipHardwareConfigGetIndex @ 0x140550040 (PipHardwareConfigGetIndex.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140550BC8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140550BEC (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     _PnpCtxRegCloseKey @ 0x1406D7150 (_PnpCtxRegCloseKey.c)
 *     IopCreateArcNames @ 0x140798AF8 (IopCreateArcNames.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     PipInitializeCoreDriversAndElam @ 0x14079A9D8 (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x14079AA9C (PnpWaitForDevicesToStart.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x14079AAB4 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitializeDriverDependentDLLs @ 0x14079ACD0 (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x14079B090 (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x14079C094 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x14079C1A4 (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x14079C1EC (PipLookupGroupName.c)
 *     IopAllocateLegacyBootResources @ 0x1407AB328 (IopAllocateLegacyBootResources.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1407B8F80 (IopCallBootDriverReinitializationRoutines.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1407BC3E0 (PipUnloadEarlyLaunchDrivers.c)
 *     VhdiGetDiskParameters @ 0x1407D2808 (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x1407D3C00 (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(UNICODE_STRING *a1)
{
  UNICODE_STRING *v1; // r13
  NTSTATUS RegistryValue; // ebx
  _QWORD *v3; // r15
  int GroupOrderIndex; // eax
  char *v5; // rdx
  unsigned int v6; // r8d
  unsigned __int16 i; // cx
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  const UNICODE_STRING *v13; // r12
  UNICODE_STRING *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rcx
  UNICODE_STRING *v17; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rdi
  unsigned int v20; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v22; // rdx
  __int64 *j; // rcx
  unsigned __int16 v24; // r14
  __int64 v25; // r12
  _QWORD *v26; // rbx
  int v27; // eax
  unsigned int v28; // edi
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int Index; // eax
  int v33; // r12d
  unsigned int v34; // r8d
  unsigned __int16 v35; // r15
  __int64 v36; // r13
  _QWORD **v37; // rdx
  __int64 v39; // rdi
  _QWORD *v40; // rsi
  __int64 v41; // rax
  int started; // eax
  void *v43; // rcx
  ULONG v44; // r8d
  char v45; // r9
  _QWORD *v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rdi
  wchar_t *Buffer; // rax
  wchar_t *k; // rcx
  int DiskParameters; // ebx
  _WORD *v52; // r15
  __int64 v53; // r14
  __int64 v54; // rax
  SIZE_T v55; // rbx
  wchar_t *v56; // rax
  wchar_t *v57; // rsi
  wchar_t *v58; // rax
  wchar_t *v59; // rsi
  NTSTATUS v60; // eax
  __int64 v61; // r9
  PVOID v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned __int16 *v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  PVOID v69; // r14
  void *dwFlags; // [rsp+28h] [rbp-E0h]
  _DWORD *v71; // [rsp+38h] [rbp-D0h]
  __int64 v72; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  void *Src; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v78; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v79; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  void *v83; // [rsp+D0h] [rbp-38h]
  __int64 *v84; // [rsp+D8h] [rbp-30h]
  int v85; // [rsp+E0h] [rbp-28h] BYREF
  const wchar_t *v86; // [rsp+E8h] [rbp-20h]
  _BYTE v87[144]; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t pszDest[64]; // [rsp+188h] [rbp+80h] BYREF

  v1 = a1;
  Src = a1;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v79.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v79.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v79, 0x20019u) >= 0
    || (*(_DWORD *)&v79.Length = 8257660,
        v79.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v79, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam(v1);
  PipInitComputerIds((__int64)v1);
  v85 = 2097182;
  v86 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)qword_1407BEE30;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v85,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    (__int64)&v1[1],
    0,
    0);
  v3 = Object;
  if ( !Object )
    return 0LL;
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  LODWORD(v72) = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
    goto LABEL_94;
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v5 = (char *)IopGroupTable;
  if ( !IopGroupTable )
    goto LABEL_94;
  v6 = IopGroupIndex;
  for ( i = 0; i < v6; *(_QWORD *)v9 = v9 )
  {
    v8 = i++;
    v9 = &v5[16 * v8];
    *((_QWORD *)v9 + 1) = v9;
  }
  PipInitializeDriverDependentDLLs(2, (__int64)v1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v10 = PiInitGroupOrderTableCount;
  v11 = 0;
  v12 = 0;
  if ( PiInitGroupOrderTableCount )
  {
    v13 = (const UNICODE_STRING *)PiInitGroupOrderTable;
    while ( 1 )
    {
      if ( RtlCompareUnicodeString(&v13[v12], &DestinationString, 1u) )
      {
        if ( RtlCompareUnicodeString(&v13[v12], &String2, 1u) )
          goto LABEL_16;
        LOWORD(v72) = v12;
      }
      ++v11;
LABEL_16:
      if ( v11 < 2u && ++v12 < v10 )
        continue;
      v3 = Object;
      v1 = (UNICODE_STRING *)Src;
      break;
    }
  }
  v14 = *(UNICODE_STRING **)&v1[3].Length;
  while ( v14 != &v1[3] )
  {
    v17 = v14;
    v14 = *(UNICODE_STRING **)&v14->Length;
    if ( SLODWORD(v17[3].Buffer) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6E697050u);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        v19[1] = v19;
        *v19 = v19;
        v19[3] = v17;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v17 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v19, 0);
        }
        else
        {
          v19[4] = Handle;
          v20 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v19 + 22) = DriverTagPriority;
          v22 = (__int64 **)((char *)IopGroupTable + 16 * v20);
          for ( j = *v22; j != (__int64 *)v22 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v15 = (__int64 *)j[1];
          v16 = *v15;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            __fastfail(3u);
          *v19 = v16;
          v19[1] = v15;
          *(_QWORD *)(v16 + 8) = v19;
          *v15 = (__int64)v19;
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1);
  v24 = 0;
  if ( IopGroupIndex )
  {
    while ( 1 )
    {
      v25 = 16LL * v24;
      v26 = *(_QWORD **)((char *)IopGroupTable + v25);
      if ( v26 != (_QWORD *)((char *)IopGroupTable + v25) )
        break;
LABEL_34:
      if ( v24 == (_WORD)v72 )
      {
        IopAllocateLegacyBootResources(0LL, 0LL);
        IopBootConfigsReserved = 1;
        IopAllocateBootResourcesRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IopAllocateBootResources;
      }
      if ( ++v24 >= (unsigned int)IopGroupIndex )
        goto LABEL_37;
    }
    v39 = 0LL;
    while ( 1 )
    {
      Handle = (HANDLE)v26[4];
      v40 = (_QWORD *)v26[3];
      Src = v40;
      v41 = v40[6];
      *((_BYTE *)v26 + 47) = 1;
      *(_QWORD *)&String2.Length = v41;
      if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
        break;
      *((_BYTE *)v26 + 46) = 1;
LABEL_69:
      if ( !*((_BYTE *)v26 + 46) )
      {
        PnpLockDeviceActionQueue();
        PipApplyFunctionToServiceInstances(v43, (UNICODE_STRING *)(v3[6] + 24LL), v44, v45, dwFlags, (__int64)v3, v71);
        PnpUnlockDeviceActionQueue();
        PnpWaitForEmptyDeviceActionQueue();
        PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL);
      }
      if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
        goto LABEL_94;
      v26 = (_QWORD *)*v26;
      if ( v26 == (_QWORD *)((char *)IopGroupTable + v25) )
        goto LABEL_34;
    }
    if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
    {
      v40 = P;
      if ( *((_DWORD *)P + 3) )
      {
        DestinationString.Length = *((_WORD *)P + 6);
        DestinationString.MaximumLength = DestinationString.Length;
        DestinationString.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
        v39 = PipLookupGroupName(&DestinationString);
      }
      ExFreePoolWithTag(v40, 0);
      LODWORD(v40) = (_DWORD)Src;
    }
    v3 = 0LL;
    if ( (unsigned int)PipCheckDependencies(Handle) )
    {
      v3 = (_QWORD *)v26[2];
      Object = v3;
      if ( v3 )
        goto LABEL_65;
      if ( !*((_BYTE *)v26 + 46) )
      {
        started = PnpInitializeBootStartDriver(
                    (unsigned int)&Destination,
                    (int)v40 + 32,
                    *(_QWORD *)(*(_QWORD *)&String2.Length + 56LL),
                    *(_DWORD *)&String2.Length,
                    (__int64)&v1[1],
                    0,
                    1);
        v3 = Object;
        *((_DWORD *)v26 + 10) = started;
        if ( v3 )
        {
          ObfReferenceObjectWithTag(v3, 0x746C6644u);
LABEL_65:
          if ( v39 )
            ++*(_DWORD *)(v39 + 28);
          v26[2] = v3;
          goto LABEL_68;
        }
      }
    }
    *((_BYTE *)v26 + 46) = 1;
LABEL_68:
    ExFreePoolWithTag(Destination.Buffer, 0);
    v39 = 0LL;
    goto LABEL_69;
  }
LABEL_37:
  PnpNotifyEarlyLaunchStatusUpdate(2);
  PipUnloadEarlyLaunchDrivers(v1);
  PnPBootDriversLoaded = 1;
  PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL);
  if ( !PnpWaitForDevicesToStart()
    || (unsigned __int8)IopCallBootDriverReinitializationRoutines() && !PnpWaitForDevicesToStart() )
  {
    goto LABEL_94;
  }
  v27 = memicmp(v1[11].Buffer, "ramdisk(", 8uLL) ? -1073741275 : RamdiskStart(v1);
  if ( v27 >= 0 && !PnpWaitForDevicesToStart() )
    goto LABEL_94;
  v28 = 0;
  v29 = strstr((const char *)v1[11].Buffer, "vdisk(");
  if ( v29 && strstr(v29 + 1, "partition(") )
  {
    Buffer = v1[14].Buffer;
    for ( k = *(wchar_t **)Buffer; ; k = *(wchar_t **)k )
    {
      if ( k == Buffer )
        goto LABEL_44;
      if ( *((_QWORD *)k + 7) )
        break;
    }
    DiskParameters = VhdiGetDiskParameters(*((_QWORD *)k + 7), v87, &String2, &Src);
    if ( DiskParameters >= 0 )
    {
      v52 = Src;
      *(_QWORD *)&DestinationString.Length = v87;
      DestinationString.Buffer = *(wchar_t **)&String2.Length;
      v83 = Src;
      v84 = &v72;
      DiskParameters = PnpBootDeviceWait(
                         (__int64)v1,
                         (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&VhdiInitializeBootDisk,
                         (__int64)&DestinationString);
      if ( DiskParameters >= 0 )
      {
        v53 = -1LL;
        v54 = -1LL;
        do
          ++v54;
        while ( v52[v54] );
        v55 = (unsigned int)(2 * v54 + 58);
        v56 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v55, 0x42646856u);
        v57 = v56;
        if ( !v56 )
        {
          v28 = 3;
          DiskParameters = -1073741801;
          goto LABEL_133;
        }
        DiskParameters = RtlStringCbPrintfW(v56, v55, L"\\\\Device\\HarddiskVolume%d%ws", (unsigned int)v72, v52);
        if ( DiskParameters >= 0 )
        {
          DiskParameters = VhdiMountVhdFile(v57);
          if ( DiskParameters < 0 )
          {
            v28 = 5;
          }
          else
          {
            NtVhdBootFile = (__int64)v57;
            do
              ++v53;
            while ( v52[v53] );
            v58 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * v53 + 84), 0x42646856u);
            v59 = v58;
            if ( !v58 )
            {
              v28 = 7;
              DiskParameters = -1073741801;
              goto LABEL_133;
            }
            memset(v58, 0, (unsigned int)(2 * v53 + 84));
            DiskParameters = RtlStringCbPrintfW(v59 + 4, 0x48uLL, L"\\Device\\HarddiskVolume%lu", (unsigned int)v72);
            if ( DiskParameters >= 0 )
            {
              *((_DWORD *)v59 + 1) = 80;
              memmove(v59 + 40, v52, 2LL * (unsigned int)(v53 + 1));
              off_1402F4A08 = v59;
              *(_BYTE *)v59 = 1;
              LODWORD(dword_1402F8D5C) = 2 * v53 + 84;
            }
            else
            {
              v28 = 8;
            }
          }
        }
        else
        {
          v28 = 4;
        }
      }
      else
      {
        v28 = 2;
      }
    }
    else
    {
      v28 = 1;
    }
    if ( DiskParameters < 0 )
LABEL_133:
      KeBugCheckEx(0x12Fu, v28, DiskParameters, 0LL, 0LL);
  }
LABEL_44:
  if ( !PnpWaitForDevicesToStart() )
  {
LABEL_94:
    HeadlessKernelAddLogEntry();
    return 0LL;
  }
  if ( (int)IopCreateArcNames((__int64)v1) < 0 )
    return 0LL;
  PnpBootDeviceWait((__int64)v1, IopMarkBootPartition, 0LL);
  v31 = *(_QWORD *)&v1[15].Length;
  PnPBootDriversInitialized = 1;
  if ( (*(_DWORD *)(v31 + 116) & 0x400) != 0
    && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
  {
    return 0LL;
  }
  pszDest[0] = 0;
  Index = PipHardwareConfigGetIndex(v30, &v72);
  v33 = v72;
  if ( Index >= 0 )
  {
    LODWORD(v71) = v72;
    Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v71);
  }
  v34 = IopGroupIndex;
  v35 = 0;
  if ( IopGroupIndex )
  {
    v36 = Index;
    do
    {
      while ( 1 )
      {
        v37 = (_QWORD **)((char *)IopGroupTable + 16 * v35);
        if ( *v37 == v37 )
          break;
        v46 = *v37;
        v47 = (_QWORD *)**v37;
        if ( (_QWORD **)(*v37)[1] != v37 || (_QWORD *)v47[1] != v46 )
          __fastfail(3u);
        *v37 = v47;
        v47[1] = v37;
        v48 = v46[2];
        if ( v36 >= 0 && !*((_BYTE *)v46 + 46) && !*(_QWORD *)(v48 + 8) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v48 + 48) + 8LL) )
          {
            if ( (*(_DWORD *)(v48 + 16) & 0x408) == 0 )
            {
              v60 = IopGetRegistryValue((HANDLE)v46[4], L"Start", 0, &P);
              if ( v60 >= 0 )
              {
                v62 = P;
                if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                {
                  LODWORD(v75) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                  if ( !(_DWORD)v75 )
                  {
                    LODWORD(v75) = 3;
                    if ( (int)PnpCtxRegCreateKey(
                                *(__int64 *)&PiPnpRtlCtx,
                                (char *)v46[4],
                                L"StartOverride",
                                v61,
                                2u,
                                0LL,
                                &v78,
                                0LL) >= 0 )
                    {
                      PnpCtxRegSetValue(v63, v78, pszDest, 4u, &v75, 4u);
                      PnpCtxRegCloseKey(v64, v78);
                      v78 = 0LL;
                      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x800000) != 0 )
                      {
                        v65 = (unsigned __int16 *)(*(_QWORD *)(v48 + 48) + 24LL);
                        Object = 0LL;
                        if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v65) >= 0 )
                        {
                          v69 = Object;
                          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x800000) != 0 )
                            Template_qzq(v67, v66, v68, v33, (const wchar_t *)Object, v75);
                          PnpUnicodeStringToWstrFree(v69, *(_QWORD *)(v48 + 48) + 24LL);
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v62, 0);
              }
            }
          }
        }
        if ( v48 )
          ObfDereferenceObjectWithTag((PVOID)v48, 0x746C6644u);
        if ( *((_BYTE *)v46 + 46) )
          *(_DWORD *)(*(_QWORD *)(v46[3] + 48LL) + 104LL) |= 0x20000u;
        ZwClose((HANDLE)v46[4]);
        ExFreePoolWithTag(v46, 0);
        v34 = IopGroupIndex;
      }
      ++v35;
    }
    while ( v35 < v34 );
  }
  ExFreePoolWithTag(IopGroupTable, 0);
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
  return 1LL;
}
