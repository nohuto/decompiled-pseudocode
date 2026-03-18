/*
 * XREFs of DpiInitializeGlobalState @ 0x1C018D050
 * Callers:
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  PPHYSICAL_MEMORY_RANGE v15; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v17; // r10d
  LONGLONG v18; // rdx
  PHYSICAL_ADDRESS *p_BaseAddress; // r9
  __int64 v20; // r11
  LONGLONG v21; // r9
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  HANDLE v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  HANDLE v38; // rax
  struct _KMUTANT *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  NTSTATUS v44; // eax
  __int64 v45; // rcx
  _QWORD *v47; // rax
  void *v48; // rcx
  _QWORD *v49; // rax
  void *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _BYTE v54[432]; // [rsp+230h] [rbp+230h] BYREF

  v0 = (unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v0 + 106) = 0LL;
  *(_WORD *)(v0 + 104) = 0;
  v1 = 0;
  *(_DWORD *)(v0 + 114) = 0;
  v2 = 0;
  *(_WORD *)(v0 + 118) = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C0046CD0 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C0046CD1 = 1;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableDMD") >= 0 )
    byte_1C0046CD2 = 1;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 288;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 288;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 67108868;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = L"MiracastDefaultRtspPort";
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 67108868;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = &dword_1C0047034;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = &dword_1C0047034;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = L"PlatformSupportMiracast";
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 16;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 16;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = L"SuspendAdapterTimerPeriod";
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 8;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 8;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = L"EnableMiracastPerfTrack";
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 12;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = 288;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 67108868;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 288;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = 67108868;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 12;
  dword_1C0047034 = 7236;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 1;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 500000;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 4;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0LL;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 4;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 4;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 0LL;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = 4;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = 0;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 0LL;
  memset((void *)(v0 + 376), 0, 0x20uLL);
  RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v0 + 128, 0LL, 0LL);
  if ( RegistryValues < 0 || !dword_1C0047034 )
    dword_1C0047034 = 7236;
  if ( RegistryValues < 0 || (byte_1C0046CD6 = 1, !*(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)) )
    byte_1C0046CD6 = 0;
  v4 = *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v5 = *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) == 0;
  dword_1C004703C = 180;
  byte_1C0046CD7 = !v5;
  dword_1C004704C = 180;
  dword_1C0047044 = 300;
  qword_1C00470F0 = -v4;
  dword_1C0047038 = 6;
  dword_1C0047040 = 6;
  dword_1C0047048 = 55;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 24),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 24;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
  *(_OWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
  v6 = ZwOpenKey((PHANDLE)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56));
  v8 = v6;
  if ( v6 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v48 = ZwOpenKey;
LABEL_38:
    v47[3] = DpiInitializeGlobalState;
    v47[4] = v48;
    v47[5] = v8;
    WdLogEvent5_WdError(v47);
    goto LABEL_31;
  }
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 20515;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 24), L"DxgKrnlVersion");
  v9 = ZwSetValueKey(*(HANDLE *)v0, (PUNICODE_STRING)(v0 + 24), 0, 4u, (PVOID)(v0 + 48), 4u);
  v8 = v9;
  if ( v9 < 0 )
  {
    ZwClose(*(HANDLE *)v0);
    goto LABEL_37;
  }
  *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 20496;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 24), L"MinDxgKrnlVersion");
  v8 = ZwSetValueKey(*(HANDLE *)v0, (PUNICODE_STRING)(v0 + 24), 0, 4u, (PVOID)(v0 + 40), 4u);
  ZwClose(*(HANDLE *)v0);
  if ( (int)v8 < 0 )
  {
LABEL_37:
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v48 = ZwSetValueKey;
    goto LABEL_38;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v15 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v17 = 0;
    if ( p_NumberOfBytes->QuadPart )
    {
      v18 = *(&DpGlobals + 1);
      p_BaseAddress = &v15->BaseAddress;
      v20 = DpGlobals;
      do
      {
        v20 += p_NumberOfBytes->QuadPart;
        DpGlobals = v20;
        v21 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v21 > v18 )
        {
          v18 = v21;
          *(&DpGlobals + 1) = v21;
        }
        p_BaseAddress = &v15[++v17].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
      }
      while ( p_BaseAddress[1].QuadPart );
    }
    ExFreePoolWithTag(v15, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_40;
    KeInitializeMutex(PoolWithTag, 0);
    qword_1C0046D00 = (__int64)&qword_1C0046CF8;
    qword_1C0046CF8 = (__int64)&qword_1C0046CF8;
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 24),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\TSDDD\\DEVICE0");
    *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
    *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 24;
    *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
    *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
    *(_OWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
    if ( ZwOpenKey((PHANDLE)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
    {
      v51 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
      *(_QWORD *)(v51 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v51 + 32) = 0LL;
      WdLogEvent5_WdEvent(v51);
      v32 = 0LL;
      *(_QWORD *)v0 = 0LL;
    }
    else
    {
      v31 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
      *(_QWORD *)(v31 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v31 + 32) = 0LL;
      WdLogEvent5_WdEvent(v31);
      ZwClose(*(HANDLE *)v0);
      v32 = *(HANDLE *)v0;
    }
    byte_1C0046D10 = v32 != 0LL;
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 24),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
    *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
    *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 24;
    *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
    *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
    *(_OWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
    if ( ZwOpenKey((PHANDLE)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
    {
      v52 = WdLogNewEntry5_WdEvent(v34, v33, v35, v36);
      *(_QWORD *)(v52 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v52 + 32) = 0LL;
      WdLogEvent5_WdEvent(v52);
      v38 = 0LL;
      *(_QWORD *)v0 = 0LL;
    }
    else
    {
      v37 = WdLogNewEntry5_WdEvent(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = DpiInitializeGlobalState;
      *(_QWORD *)(v37 + 32) = 0LL;
      WdLogEvent5_WdEvent(v37);
      ZwClose(*(HANDLE *)v0);
      v38 = *(HANDLE *)v0;
    }
    byte_1C0046D12 = 0;
    byte_1C0046D11 = v38 == 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    byte_1C0046D30 = 0;
    ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x28uLL, 0x74727044u, 0);
    v1 = 1;
    v39 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    P = v39;
    if ( v39 )
    {
      KeInitializeMutex(v39, 0);
      dword_1C0046EE0 = 0;
      qword_1C0046EF0 = (__int64)&Entry;
      Entry = &Entry;
      KeInitializeTimerEx(&stru_1C0046E58, SynchronizationTimer);
      KeInitializeDpc(&stru_1C0046E98, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
      IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( IoWorkItem )
      {
        ExInitializeNPagedLookasideList(&stru_1C0046DC0, 0LL, 0LL, 0x200u, 0x38uLL, 0x74727044u, 0);
        *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 2;
        *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 4;
        v2 = 1;
        if ( ((int (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))HalDispatchTable->HalQuerySystemInformation)(
               9LL,
               4LL,
               v0 + 20,
               v0 + 44) < 0
          || (byte_1C0046CD5 = 1, *(_DWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) == 2) )
        {
          byte_1C0046CD5 = 0;
        }
        dword_1C0046FB4 = -1;
        byte_1C0046CD4 = 0;
        KeInitializeSpinLock(&qword_1C0047008);
        qword_1C0047018 = (__int64)&qword_1C0047010;
        qword_1C0047010 = (__int64)&qword_1C0047010;
        dword_1C0047030 = 0;
        qword_1C0047028 = (__int64)&qword_1C0047020;
        qword_1C0047020 = (__int64)&qword_1C0047020;
        v44 = IoRegisterPlugPlayNotification(
                EventCategoryDeviceInterfaceChange,
                1u,
                &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                g_pDriverObject,
                (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                0LL,
                &qword_1C0047000);
        v8 = v44;
        if ( v44 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v45);
          v53[4] = IoRegisterPlugPlayNotification;
          v53[3] = DpiInitializeGlobalState;
          v53[5] = v8;
          WdLogEvent5_WdError(v53);
          qword_1C0047000 = 0LL;
        }
        else
        {
          byte_1C0046CDB = 0;
        }
LABEL_31:
        if ( (int)v8 >= 0 )
          goto LABEL_32;
        goto LABEL_43;
      }
      LODWORD(v8) = -1073741801;
      v49 = (_QWORD *)WdLogNewEntry5_WdLowResource(v41, v40, v42, v43);
      v50 = IoAllocateWorkItem;
    }
    else
    {
LABEL_40:
      LODWORD(v8) = -1073741801;
      v49 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      v50 = ExAllocatePoolWithTag;
    }
    v49[3] = DpiInitializeGlobalState;
    v49[4] = v50;
    v49[5] = -1073741801LL;
  }
  else
  {
    LODWORD(v8) = -1073741670;
    v49 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, 0LL, v14);
    v49[3] = DpiInitializeGlobalState;
    v49[4] = MmGetPhysicalMemoryRanges;
    v49[5] = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v49);
LABEL_43:
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v2 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C0046DC0);
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
