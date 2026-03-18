/*
 * XREFs of IopInitializeBootDrivers @ 0x1407B872C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     HeadlessKernelAddLogEntry @ 0x1401539BC (HeadlessKernelAddLogEntry.c)
 *     PnpUnlockDeviceActionQueue @ 0x140156FFC (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1401570B4 (PnpLockDeviceActionQueue.c)
 *     PnpBootDeviceWait @ 0x14015DD04 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     _memicmp @ 0x14017DF80 (_memicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     Template_qzq @ 0x1401FA008 (Template_qzq.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCreateKey @ 0x1404DDA14 (_PnpCtxRegCreateKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 *     PipHardwareConfigGetIndex @ 0x14058F3C0 (PipHardwareConfigGetIndex.c)
 *     IopOpenRegistryKeyEx @ 0x14058F9E4 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14058FA20 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14058FA44 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     _PnpCtxRegCloseKey @ 0x14071233C (_PnpCtxRegCloseKey.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1407B5D90 (PipUnloadEarlyLaunchDrivers.c)
 *     IopCreateArcNames @ 0x1407B5FE8 (IopCreateArcNames.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 *     PipInitializeCoreDriversAndElam @ 0x1407B7DC8 (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x1407B7E64 (PnpWaitForDevicesToStart.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1407B7E7C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitializeDriverDependentDLLs @ 0x1407B8164 (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x1407B8580 (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x1407B8F6C (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1407B97AC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1407B98BC (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1407B9904 (PipLookupGroupName.c)
 *     IopAllocateLegacyBootResources @ 0x1407D5598 (IopAllocateLegacyBootResources.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1407E3BCC (IopCallBootDriverReinitializationRoutines.c)
 *     VhdiGetDiskParameters @ 0x1407FC834 (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 */

__int64 __fastcall IopInitializeBootDrivers(char *a1)
{
  REGHANDLE v1; // rbx
  char *v2; // r13
  NTSTATUS RegistryValue; // ebx
  _QWORD *v4; // r15
  int GroupOrderIndex; // eax
  char *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int16 i; // cx
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // di
  const UNICODE_STRING *v14; // r12
  char *v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rcx
  UNICODE_STRING *v18; // rbx
  __int64 *PoolWithTag; // rax
  __int64 *v20; // rdi
  unsigned int v21; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v23; // rdx
  __int64 *j; // rcx
  unsigned __int16 v25; // r14
  __int64 v26; // r12
  _QWORD *v27; // rbx
  int v28; // eax
  unsigned int v29; // edi
  char *v30; // rax
  __int64 v31; // rcx
  int Index; // eax
  int v33; // r12d
  unsigned int v34; // r8d
  unsigned __int16 v35; // r15
  __int64 v36; // r13
  _QWORD **v37; // rdx
  REGHANDLE v38; // rbx
  __int64 v40; // rdi
  _QWORD *v41; // rsi
  __int64 v42; // rax
  int started; // eax
  void *v44; // rcx
  ULONG v45; // r8d
  char v46; // r9
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rdi
  _QWORD *v50; // rax
  _QWORD *k; // rcx
  int DiskParameters; // ebx
  _WORD *v53; // r15
  __int64 v54; // r14
  __int64 v55; // rax
  SIZE_T v56; // rbx
  wchar_t *v57; // rax
  wchar_t *v58; // rsi
  wchar_t *v59; // rax
  wchar_t *v60; // rsi
  NTSTATUS v61; // eax
  __int64 v62; // r9
  PVOID v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned __int16 *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  PVOID v70; // r14
  void *dwFlags; // [rsp+28h] [rbp-E0h]
  _DWORD *v72; // [rsp+38h] [rbp-D0h]
  __int64 v73; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+70h] [rbp-98h] BYREF
  void *Src; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h] BYREF
  void *v79; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v80; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  void *v84; // [rsp+D0h] [rbp-38h]
  __int64 *v85; // [rsp+D8h] [rbp-30h]
  int v86; // [rsp+E0h] [rbp-28h] BYREF
  const wchar_t *v87; // [rsp+E8h] [rbp-20h]
  _BYTE v88[144]; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t pszDest[64]; // [rsp+188h] [rbp+80h] BYREF

  v1 = PnpEtwHandle;
  Src = a1;
  v2 = a1;
  Object = 0LL;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_BootStart_Start) )
    EtwWrite(v1, &KMPnPEvt_BootStart_Start, 0LL, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  *(_DWORD *)&v80.Length = 8388734;
  v80.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v80, 0x20019u) >= 0
    || (*(_DWORD *)&v80.Length = 8257660,
        v80.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v80, 0x20019u) >= 0) )
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
  PipInitializeCoreDriversAndElam((__int64)v2);
  PipInitComputerIds((__int64)v2);
  v86 = 2097182;
  v87 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)&word_1407EACC0;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v86,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    (__int64)(v2 + 16),
    0,
    0);
  v4 = Object;
  if ( !Object )
    return 0LL;
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  LODWORD(v73) = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
    goto LABEL_99;
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
    goto LABEL_99;
  v7 = IopGroupIndex;
  for ( i = 0; i < v7; *(_QWORD *)v10 = v10 )
  {
    v9 = i++;
    v10 = &v6[16 * v9];
    *((_QWORD *)v10 + 1) = v10;
  }
  PipInitializeDriverDependentDLLs(2, (__int64)v2);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v11 = PiInitGroupOrderTableCount;
  v12 = 0;
  v13 = 0;
  if ( PiInitGroupOrderTableCount )
  {
    v14 = (const UNICODE_STRING *)PiInitGroupOrderTable;
    while ( 1 )
    {
      if ( RtlCompareUnicodeString(&v14[v13], &DestinationString, 1u) )
      {
        if ( RtlCompareUnicodeString(&v14[v13], &String2, 1u) )
          goto LABEL_19;
        LOWORD(v73) = v13;
      }
      ++v12;
LABEL_19:
      if ( v12 < 2u && ++v13 < v11 )
        continue;
      v4 = Object;
      v2 = (char *)Src;
      break;
    }
  }
  v15 = (char *)*((_QWORD *)v2 + 6);
  while ( v15 != v2 + 48 )
  {
    v18 = (UNICODE_STRING *)v15;
    v15 = *(char **)v15;
    if ( SLODWORD(v18[3].Buffer) >= 0 )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6E697050u);
      v20 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        v20[1] = (__int64)v20;
        *v20 = (__int64)v20;
        v20[3] = (__int64)v18;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v18 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v20, 0);
        }
        else
        {
          v20[4] = (__int64)Handle;
          v21 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v20 + 22) = DriverTagPriority;
          v23 = (__int64 **)((char *)IopGroupTable + 16 * v21);
          for ( j = *v23; j != (__int64 *)v23 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v16 = (__int64 *)j[1];
          v17 = *v16;
          *v20 = *v16;
          v20[1] = (__int64)v16;
          if ( *(__int64 **)(v17 + 8) != v16 )
            __fastfail(3u);
          *(_QWORD *)(v17 + 8) = v20;
          *v16 = (__int64)v20;
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1);
  v25 = 0;
  if ( IopGroupIndex )
  {
    while ( 1 )
    {
      v26 = 16LL * v25;
      v27 = *(_QWORD **)((char *)IopGroupTable + v26);
      if ( v27 != (_QWORD *)((char *)IopGroupTable + v26) )
        break;
LABEL_37:
      if ( v25 == (_WORD)v73 )
      {
        IopAllocateLegacyBootResources(0LL, 0LL);
        IopBootConfigsReserved = 1;
        IopAllocateBootResourcesRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IopAllocateBootResources;
      }
      if ( ++v25 >= (unsigned int)IopGroupIndex )
        goto LABEL_40;
    }
    v40 = 0LL;
    while ( 1 )
    {
      Handle = (HANDLE)v27[4];
      v41 = (_QWORD *)v27[3];
      Src = v41;
      v42 = v41[6];
      *((_BYTE *)v27 + 47) = 1;
      *(_QWORD *)&String2.Length = v42;
      if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
        break;
      *((_BYTE *)v27 + 46) = 1;
LABEL_74:
      if ( !*((_BYTE *)v27 + 46) )
      {
        PnpLockDeviceActionQueue();
        PipApplyFunctionToServiceInstances(v44, (UNICODE_STRING *)(v4[6] + 24LL), v45, v46, dwFlags, (__int64)v4, v72);
        PnpUnlockDeviceActionQueue();
        PnpWaitForEmptyDeviceActionQueue();
        PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL);
      }
      if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
        goto LABEL_99;
      v27 = (_QWORD *)*v27;
      if ( v27 == (_QWORD *)((char *)IopGroupTable + v26) )
        goto LABEL_37;
    }
    if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
    {
      v41 = P;
      if ( *((_DWORD *)P + 3) )
      {
        DestinationString.Length = *((_WORD *)P + 6);
        DestinationString.MaximumLength = DestinationString.Length;
        DestinationString.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
        v40 = PipLookupGroupName(&DestinationString);
      }
      ExFreePoolWithTag(v41, 0);
      LODWORD(v41) = (_DWORD)Src;
    }
    v4 = 0LL;
    if ( (unsigned int)PipCheckDependencies(Handle) )
    {
      v4 = (_QWORD *)v27[2];
      Object = v4;
      if ( v4 )
        goto LABEL_70;
      if ( !*((_BYTE *)v27 + 46) )
      {
        started = PnpInitializeBootStartDriver(
                    (unsigned int)&Destination,
                    (int)v41 + 32,
                    *(_QWORD *)(*(_QWORD *)&String2.Length + 56LL),
                    *(_DWORD *)&String2.Length,
                    (__int64)(v2 + 16),
                    0,
                    1);
        v4 = Object;
        *((_DWORD *)v27 + 10) = started;
        if ( v4 )
        {
          ObfReferenceObjectWithTag(v4, 0x746C6644u);
LABEL_70:
          if ( v40 )
            ++*(_DWORD *)(v40 + 28);
          v27[2] = v4;
          goto LABEL_73;
        }
      }
    }
    *((_BYTE *)v27 + 46) = 1;
LABEL_73:
    ExFreePoolWithTag(Destination.Buffer, 0);
    v40 = 0LL;
    goto LABEL_74;
  }
LABEL_40:
  PnpNotifyEarlyLaunchStatusUpdate(2);
  PipUnloadEarlyLaunchDrivers((__int64)v2);
  PnPBootDriversLoaded = 1;
  PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL);
  if ( !PnpWaitForDevicesToStart()
    || (unsigned __int8)IopCallBootDriverReinitializationRoutines() && !PnpWaitForDevicesToStart() )
  {
    goto LABEL_99;
  }
  v28 = memicmp(*((const void **)v2 + 23), "ramdisk(", 8uLL) ? -1073741275 : RamdiskStart(v2);
  if ( v28 >= 0 && !PnpWaitForDevicesToStart() )
    goto LABEL_99;
  v29 = 0;
  v30 = strstr(*((const char **)v2 + 23), "vdisk(");
  if ( v30 && strstr(v30 + 1, "partition(") )
  {
    v50 = (_QWORD *)*((_QWORD *)v2 + 29);
    for ( k = (_QWORD *)*v50; ; k = (_QWORD *)*k )
    {
      if ( k == v50 )
        goto LABEL_47;
      if ( k[7] )
        break;
    }
    DiskParameters = VhdiGetDiskParameters(k[7], v88, &String2, &Src);
    if ( DiskParameters >= 0 )
    {
      v53 = Src;
      *(_QWORD *)&DestinationString.Length = v88;
      DestinationString.Buffer = *(wchar_t **)&String2.Length;
      v84 = Src;
      v85 = &v73;
      DiskParameters = PnpBootDeviceWait(
                         (__int64)v2,
                         (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&VhdiInitializeBootDisk,
                         (__int64)&DestinationString);
      if ( DiskParameters >= 0 )
      {
        v54 = -1LL;
        v55 = -1LL;
        do
          ++v55;
        while ( v53[v55] );
        v56 = (unsigned int)(2 * v55 + 58);
        v57 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v56, 0x42646856u);
        v58 = v57;
        if ( !v57 )
        {
          v29 = 3;
          DiskParameters = -1073741801;
          goto LABEL_138;
        }
        DiskParameters = RtlStringCbPrintfW(v57, v56, L"\\\\Device\\HarddiskVolume%d%ws", (unsigned int)v73, v53);
        if ( DiskParameters >= 0 )
        {
          DiskParameters = VhdiMountVhdFile(v58);
          if ( DiskParameters < 0 )
          {
            v29 = 5;
          }
          else
          {
            NtVhdBootFile = (__int64)v58;
            do
              ++v54;
            while ( v53[v54] );
            v59 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * v54 + 84), 0x42646856u);
            v60 = v59;
            if ( !v59 )
            {
              v29 = 7;
              DiskParameters = -1073741801;
              goto LABEL_138;
            }
            memset(v59, 0, (unsigned int)(2 * v54 + 84));
            DiskParameters = RtlStringCbPrintfW(v60 + 4, 0x48uLL, L"\\Device\\HarddiskVolume%lu", (unsigned int)v73);
            if ( DiskParameters >= 0 )
            {
              *((_DWORD *)v60 + 1) = 80;
              memmove(v60 + 40, v53, 2LL * (unsigned int)(v54 + 1));
              off_1403223C8 = v60;
              *(_BYTE *)v60 = 1;
              LODWORD(dword_1403223B0) = 2 * v54 + 84;
            }
            else
            {
              v29 = 8;
            }
          }
        }
        else
        {
          v29 = 4;
        }
      }
      else
      {
        v29 = 2;
      }
    }
    else
    {
      v29 = 1;
    }
    if ( DiskParameters < 0 )
LABEL_138:
      KeBugCheckEx(0x12Fu, v29, DiskParameters, 0LL, 0LL);
  }
LABEL_47:
  if ( !PnpWaitForDevicesToStart() )
  {
LABEL_99:
    HeadlessKernelAddLogEntry();
    return 0LL;
  }
  if ( (int)IopCreateArcNames((__int64)v2) < 0 )
    return 0LL;
  PnpBootDeviceWait((__int64)v2, IopMarkBootPartition, 0LL);
  PnPBootDriversInitialized = 1;
  pszDest[0] = 0;
  Index = PipHardwareConfigGetIndex(v31, (__int64)&v73);
  v33 = v73;
  if ( Index >= 0 )
  {
    LODWORD(v72) = v73;
    Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v72);
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
        v47 = *v37;
        v48 = (_QWORD *)**v37;
        if ( (_QWORD **)(*v37)[1] != v37 || (_QWORD *)v48[1] != v47 )
          __fastfail(3u);
        *v37 = v48;
        v48[1] = v37;
        v49 = v47[2];
        if ( v36 >= 0 && !*((_BYTE *)v47 + 46) && !*(_QWORD *)(v49 + 8) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v49 + 48) + 8LL) )
          {
            if ( (*(_DWORD *)(v49 + 16) & 0x408) == 0 )
            {
              v61 = IopGetRegistryValue((HANDLE)v47[4], L"Start", 0, &P);
              if ( v61 >= 0 )
              {
                v63 = P;
                if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                {
                  LODWORD(v76) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                  if ( !(_DWORD)v76 )
                  {
                    LODWORD(v76) = 3;
                    if ( (int)PnpCtxRegCreateKey(
                                *(__int64 *)&PiPnpRtlCtx,
                                v47[4],
                                (__int64)L"StartOverride",
                                v62,
                                2u,
                                0LL,
                                (__int64)&v79,
                                0LL) >= 0 )
                    {
                      PnpCtxRegSetValue(v64, v79, pszDest, 4u, &v76, 4u);
                      PnpCtxRegCloseKey(v65, v79);
                      v79 = 0LL;
                      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x800000) != 0 )
                      {
                        v66 = (unsigned __int16 *)(*(_QWORD *)(v49 + 48) + 24LL);
                        Object = 0LL;
                        if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v66) >= 0 )
                        {
                          v70 = Object;
                          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x800000) != 0 )
                            Template_qzq(v68, v67, v69, v33, (const wchar_t *)Object, v76);
                          PnpUnicodeStringToWstrFree(v70, *(_QWORD *)(v49 + 48) + 24LL);
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v63, 0);
              }
            }
          }
        }
        if ( v49 )
          ObfDereferenceObjectWithTag((PVOID)v49, 0x746C6644u);
        if ( *((_BYTE *)v47 + 46) )
          *(_DWORD *)(*(_QWORD *)(v47[3] + 48LL) + 104LL) |= 0x20000u;
        ZwClose((HANDLE)v47[4]);
        ExFreePoolWithTag(v47, 0);
        v34 = IopGroupIndex;
      }
      ++v35;
    }
    while ( v35 < v34 );
  }
  ExFreePoolWithTag(IopGroupTable, 0);
  v38 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_BootStart_Stop) )
    EtwWrite(v38, &KMPnPEvt_BootStart_Stop, 0LL, 0, 0LL);
  return 1LL;
}
