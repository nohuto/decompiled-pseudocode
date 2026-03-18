/*
 * XREFs of DpiInitializeGlobalState @ 0x1C0188250
 * Callers:
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 DpiInitializeGlobalState()
{
  unsigned __int64 v0; // rbp
  char v1; // r14
  char v2; // r15
  int RegistryValues; // eax
  int v4; // eax
  bool v5; // zf
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v12; // rcx
  PPHYSICAL_MEMORY_RANGE v13; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v15; // r10d
  LONGLONG v16; // rdx
  PHYSICAL_ADDRESS *p_BaseAddress; // r9
  __int64 v18; // r11
  LONGLONG v19; // r9
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  HANDLE v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  HANDLE v33; // rax
  struct _KMUTANT *v34; // rax
  __int64 v35; // rcx
  NTSTATUS v36; // eax
  __int64 v37; // rcx
  _QWORD *v39; // rax
  void *v40; // rcx
  _QWORD *v41; // rax
  void *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _BYTE v46[432]; // [rsp+230h] [rbp+230h] BYREF

  v0 = (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v0 + 106) = 0LL;
  *(_WORD *)(v0 + 104) = 0;
  v1 = 0;
  *(_DWORD *)(v0 + 114) = 0;
  v2 = 0;
  *(_WORD *)(v0 + 118) = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C0046C50 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C0046C51 = 1;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableDMD") >= 0 )
    byte_1C0046C52 = 1;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 288;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 288;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 67108868;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = L"MiracastDefaultRtspPort";
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 67108868;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = &dword_1C0046FB4;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = &dword_1C0046FB4;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = L"PlatformSupportMiracast";
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 16;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 16;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = L"SuspendAdapterTimerPeriod";
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 8;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 8;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = L"EnableMiracastPerfTrack";
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 12;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = 288;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 67108868;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 288;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = 67108868;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 12;
  dword_1C0046FB4 = 7236;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 1;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 500000;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 4;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0LL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 4;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 4;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 0LL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = 4;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = 0;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 0LL;
  memset((void *)(v0 + 376), 0, 0x20uLL);
  RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v0 + 128, 0LL, 0LL);
  if ( RegistryValues < 0 || !dword_1C0046FB4 )
    dword_1C0046FB4 = 7236;
  if ( RegistryValues < 0 || (byte_1C0046C56 = 1, !*(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)) )
    byte_1C0046C56 = 0;
  v4 = *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v5 = *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) == 0;
  dword_1C0046FBC = 180;
  byte_1C0046C57 = !v5;
  dword_1C0046FCC = 180;
  dword_1C0046FC4 = 300;
  qword_1C0047070 = -v4;
  dword_1C0046FB8 = 6;
  dword_1C0046FC0 = 6;
  dword_1C0046FC8 = 55;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 24),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 24;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
  *(_OWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
  v6 = ZwOpenKey((PHANDLE)((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56));
  v8 = v6;
  if ( v6 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v40 = ZwOpenKey;
LABEL_38:
    v39[3] = DpiInitializeGlobalState;
    v39[4] = v40;
    v39[5] = v8;
    WdLogEvent5_WdError(v39);
    goto LABEL_31;
  }
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 20514;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 24), L"DxgKrnlVersion");
  v9 = ZwSetValueKey(*(HANDLE *)v0, (PUNICODE_STRING)(v0 + 24), 0, 4u, (PVOID)(v0 + 48), 4u);
  v8 = v9;
  if ( v9 < 0 )
  {
    ZwClose(*(HANDLE *)v0);
    goto LABEL_37;
  }
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 20496;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 24), L"MinDxgKrnlVersion");
  v8 = ZwSetValueKey(*(HANDLE *)v0, (PUNICODE_STRING)(v0 + 24), 0, 4u, (PVOID)(v0 + 40), 4u);
  ZwClose(*(HANDLE *)v0);
  if ( (int)v8 < 0 )
  {
LABEL_37:
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v40 = ZwSetValueKey;
    goto LABEL_38;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v13 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v15 = 0;
    if ( p_NumberOfBytes->QuadPart )
    {
      v16 = *(&DpGlobals + 1);
      p_BaseAddress = &v13->BaseAddress;
      v18 = DpGlobals;
      do
      {
        v18 += p_NumberOfBytes->QuadPart;
        DpGlobals = v18;
        v19 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v19 > v16 )
        {
          v16 = v19;
          *(&DpGlobals + 1) = v19;
        }
        p_BaseAddress = &v13[++v15].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
      }
      while ( p_BaseAddress[1].QuadPart );
    }
    ExFreePoolWithTag(v13, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_40;
    KeInitializeMutex(PoolWithTag, 0);
    qword_1C0046C80 = (__int64)&qword_1C0046C78;
    qword_1C0046C78 = (__int64)&qword_1C0046C78;
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 24),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\TSDDD\\DEVICE0");
    *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
    *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 24;
    *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
    *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
    *(_OWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
    if ( ZwOpenKey((PHANDLE)((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
    {
      v43 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
      *(_QWORD *)(v43 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v43 + 32) = 0LL;
      WdLogEvent5_WdEvent(v43);
      v27 = 0LL;
      *(_QWORD *)v0 = 0LL;
    }
    else
    {
      v26 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v26 + 32) = 0LL;
      WdLogEvent5_WdEvent(v26);
      ZwClose(*(HANDLE *)v0);
      v27 = *(HANDLE *)v0;
    }
    byte_1C0046C90 = v27 != 0LL;
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 24),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
    *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
    *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 24;
    *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
    *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
    *(_OWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
    if ( ZwOpenKey((PHANDLE)((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
    {
      v44 = WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
      *(_QWORD *)(v44 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v44 + 32) = 0LL;
      WdLogEvent5_WdEvent(v44);
      v33 = 0LL;
      *(_QWORD *)v0 = 0LL;
    }
    else
    {
      v32 = WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
      *(_QWORD *)(v32 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v32 + 32) = 0LL;
      WdLogEvent5_WdEvent(v32);
      ZwClose(*(HANDLE *)v0);
      v33 = *(HANDLE *)v0;
    }
    byte_1C0046C92 = 0;
    byte_1C0046C91 = v33 == 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    byte_1C0046CB0 = 0;
    ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x28uLL, 0x74727044u, 0);
    v1 = 1;
    v34 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    P = v34;
    if ( v34 )
    {
      KeInitializeMutex(v34, 0);
      dword_1C0046E60 = 0;
      qword_1C0046E70 = (__int64)&Entry;
      Entry = &Entry;
      KeInitializeTimerEx(&stru_1C0046DD8, SynchronizationTimer);
      KeInitializeDpc(&stru_1C0046E18, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
      IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( IoWorkItem )
      {
        ExInitializeNPagedLookasideList(&stru_1C0046D40, 0LL, 0LL, 0x200u, 0x38uLL, 0x74727044u, 0);
        *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 2;
        *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 4;
        v2 = 1;
        if ( ((int (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))HalDispatchTable->HalQuerySystemInformation)(
               9LL,
               4LL,
               v0 + 20,
               v0 + 44) < 0
          || (byte_1C0046C55 = 1, *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) == 2) )
        {
          byte_1C0046C55 = 0;
        }
        dword_1C0046F34 = -1;
        byte_1C0046C54 = 0;
        KeInitializeSpinLock(&SpinLock);
        qword_1C0046F98 = (__int64)&qword_1C0046F90;
        qword_1C0046F90 = (__int64)&qword_1C0046F90;
        dword_1C0046FB0 = 0;
        qword_1C0046FA8 = (__int64)&qword_1C0046FA0;
        qword_1C0046FA0 = (__int64)&qword_1C0046FA0;
        v36 = IoRegisterPlugPlayNotification(
                EventCategoryDeviceInterfaceChange,
                1u,
                &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                g_pDriverObject,
                (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                0LL,
                &qword_1C0046F80);
        v8 = v36;
        if ( v36 < 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v37);
          v45[4] = IoRegisterPlugPlayNotification;
          v45[3] = DpiInitializeGlobalState;
          v45[5] = v8;
          WdLogEvent5_WdError(v45);
          qword_1C0046F80 = 0LL;
        }
        else
        {
          byte_1C0046C5B = 0;
        }
LABEL_31:
        if ( (int)v8 >= 0 )
          goto LABEL_32;
        goto LABEL_43;
      }
      LODWORD(v8) = -1073741801;
      v41 = (_QWORD *)WdLogNewEntry5_WdLowResource(v35);
      v42 = IoAllocateWorkItem;
    }
    else
    {
LABEL_40:
      LODWORD(v8) = -1073741801;
      v41 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21);
      v42 = ExAllocatePoolWithTag;
    }
    v41[3] = DpiInitializeGlobalState;
    v41[4] = v42;
    v41[5] = -1073741801LL;
  }
  else
  {
    LODWORD(v8) = -1073741670;
    v41 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v41[3] = DpiInitializeGlobalState;
    v41[4] = MmGetPhysicalMemoryRanges;
    v41[5] = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v41);
LABEL_43:
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v2 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C0046D40);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_32:
  RtlFreeUnicodeString((PUNICODE_STRING)(v0 + 104));
  return (unsigned int)v8;
}
