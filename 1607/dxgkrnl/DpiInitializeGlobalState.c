/*
 * XREFs of DpiInitializeGlobalState @ 0x1C01B7434
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 DpiInitializeGlobalState()
{
  unsigned __int64 v0; // rbp
  char v1; // si
  char v2; // r14
  unsigned __int8 v3; // al
  int RegistryValues; // eax
  int v5; // eax
  bool v6; // zf
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
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
  __int64 v22; // rcx
  __int64 v23; // rax
  HANDLE v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  HANDLE v27; // rax
  struct _KMUTANT *v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE v37[432]; // [rsp+230h] [rbp+230h] BYREF

  v0 = (unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v0 + 106) = 0LL;
  *(_DWORD *)(v0 + 114) = 0;
  v1 = 0;
  *(_WORD *)(v0 + 118) = 0;
  v2 = 0;
  v3 = g_IsMobileCore;
  *(_WORD *)(v0 + 104) = 0;
  byte_1C0056E97 = v3;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C0056E90 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C0056E91 = 1;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableDMD") >= 0 )
    byte_1C0056E92 = 1;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 288;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 288;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 67108868;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = L"MiracastDefaultRtspPort";
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 67108868;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = &dword_1C00571F4;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = &dword_1C00571F4;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = L"PlatformSupportMiracast";
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 8;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 8;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = L"SuspendAdapterTimerPeriod";
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 16;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 16;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = L"EnableMiracastPerfTrack";
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 12;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = 288;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 67108868;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 288;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = 67108868;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 12;
  dword_1C00571F4 = 7236;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 1;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 500000;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 4;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0LL;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 4;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 4;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 0LL;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = 4;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = 0;
  memset((void *)(v0 + 368), 0, 0x28uLL);
  RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v0 + 128, 0LL, 0LL);
  if ( RegistryValues < 0 || !dword_1C00571F4 )
    dword_1C00571F4 = 7236;
  if ( RegistryValues < 0 || (byte_1C0056E96 = 1, !*(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 8)) )
    byte_1C0056E96 = 0;
  v5 = *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  v6 = *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) == 0;
  dword_1C00571FC = 180;
  byte_1C0056E98 = !v6;
  dword_1C005720C = 180;
  dword_1C0057204 = 300;
  qword_1C00572C8 = -v5;
  dword_1C00571F8 = 6;
  dword_1C0057200 = 6;
  dword_1C0057208 = 55;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 24),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 24;
  *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
  *(_OWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
  v7 = ZwOpenKey((PHANDLE)((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56));
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_36;
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 24579;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 24), L"DxgKrnlVersion");
  v10 = ZwSetValueKey(*(HANDLE *)v0, (PUNICODE_STRING)(v0 + 24), 0, 4u, (PVOID)(v0 + 40), 4u);
  v9 = v10;
  if ( v10 < 0 )
  {
    ZwClose(*(HANDLE *)v0);
    goto LABEL_36;
  }
  *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 20496;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 24), L"MinDxgKrnlVersion");
  v9 = ZwSetValueKey(*(HANDLE *)v0, (PUNICODE_STRING)(v0 + 24), 0, 4u, (PVOID)(v0 + 44), 4u);
  ZwClose(*(HANDLE *)v0);
  if ( (int)v9 < 0 )
  {
LABEL_36:
    v32 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v32 + 24) = v9;
    WdLogEvent5_WdError(v32);
    goto LABEL_31;
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
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C0056EC0 = (__int64)&qword_1C0056EB8;
      qword_1C0056EB8 = (__int64)&qword_1C0056EB8;
      RtlInitUnicodeString(
        (PUNICODE_STRING)(v0 + 24),
        L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\TSDDD\\DEVICE0");
      *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
      *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 24;
      *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
      *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
      *(_OWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
      if ( ZwOpenKey(
             (PHANDLE)((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL),
             0x80000000,
             (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
      {
        v34 = WdLogNewEntry5_WdEvent(v22);
        *(_QWORD *)(v34 + 24) = 0LL;
        WdLogEvent5_WdEvent(v34);
        v24 = 0LL;
        *(_QWORD *)v0 = 0LL;
      }
      else
      {
        v23 = WdLogNewEntry5_WdEvent(v22);
        *(_QWORD *)(v23 + 24) = 0LL;
        WdLogEvent5_WdEvent(v23);
        ZwClose(*(HANDLE *)v0);
        v24 = *(HANDLE *)v0;
      }
      byte_1C0056ED0 = v24 != 0LL;
      RtlInitUnicodeString(
        (PUNICODE_STRING)(v0 + 24),
        L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 48;
      *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 24;
      *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
      *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 576;
      *(_OWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
      if ( ZwOpenKey(
             (PHANDLE)((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL),
             0x80000000,
             (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
      {
        v35 = WdLogNewEntry5_WdEvent(v25);
        *(_QWORD *)(v35 + 24) = 0LL;
        WdLogEvent5_WdEvent(v35);
        v27 = 0LL;
        *(_QWORD *)v0 = 0LL;
      }
      else
      {
        v26 = WdLogNewEntry5_WdEvent(v25);
        *(_QWORD *)(v26 + 24) = 0LL;
        WdLogEvent5_WdEvent(v26);
        ZwClose(*(HANDLE *)v0);
        v27 = *(HANDLE *)v0;
      }
      byte_1C0056ED2 = 0;
      byte_1C0056ED1 = v27 == 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      byte_1C0056EF0 = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x68uLL, 0x74727044u, 0);
      v1 = 1;
      v28 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      P = v28;
      if ( v28 )
      {
        KeInitializeMutex(v28, 0);
        dword_1C00570A0 = 0;
        qword_1C00570B0 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C0057018, SynchronizationTimer);
        KeInitializeDpc(&stru_1C0057058, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( IoWorkItem )
        {
          ExInitializeNPagedLookasideList(&stru_1C0056F80, 0LL, 0LL, 0x200u, 0x38uLL, 0x74727044u, 0);
          *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 2;
          *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 4;
          v2 = 1;
          if ( ((int (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 v0 + 20,
                 v0 + 48) < 0
            || (byte_1C0056E95 = 1, *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) == 2) )
          {
            byte_1C0056E95 = 0;
          }
          dword_1C0057174 = -1;
          byte_1C0056E94 = 0;
          KeInitializeSpinLock(&qword_1C00571C8);
          qword_1C00571D8 = (__int64)&qword_1C00571D0;
          qword_1C00571D0 = (__int64)&qword_1C00571D0;
          dword_1C00571F0 = 0;
          qword_1C00571E8 = (__int64)&qword_1C00571E0;
          qword_1C00571E0 = (__int64)&qword_1C00571E0;
          v29 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &qword_1C00571C0);
          v9 = v29;
          if ( v29 < 0 )
          {
            v36 = WdLogNewEntry5_WdError(v30);
            *(_QWORD *)(v36 + 24) = v9;
            WdLogEvent5_WdError(v36);
            qword_1C00571C0 = 0LL;
          }
          else
          {
            byte_1C0056E9C = 0;
          }
LABEL_31:
          if ( (int)v9 >= 0 )
            goto LABEL_32;
          goto LABEL_40;
        }
      }
    }
    LODWORD(v9) = -1073741801;
    v33 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v33 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v9) = -1073741670;
    v33 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v33 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v33);
LABEL_40:
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v2 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C0056F80);
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
  return (unsigned int)v9;
}
