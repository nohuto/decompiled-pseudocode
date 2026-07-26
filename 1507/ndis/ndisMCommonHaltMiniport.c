/*
 * XREFs of ndisMCommonHaltMiniport @ 0x1C00E6698
 * Callers:
 *     ndisMHaltMiniport @ 0x1C009BCB4 (ndisMHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisPmHaltMiniport @ 0x1C00F50D4 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisMAbortRequests @ 0x1C000F50C (ndisMAbortRequests.c)
 *     ndisMAbortPackets @ 0x1C000F564 (ndisMAbortPackets.c)
 *     ndisMDeQueueWorkItem @ 0x1C000F614 (ndisMDeQueueWorkItem.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C000F62C (ndisCancelWakeUpDpcTimer.c)
 *     ndisWaitForResetCompletion @ 0x1C000F6D8 (ndisWaitForResetCompletion.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001923C (ndisCancelMediaDisconnectTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C0043EEC (WPP_SF_LqZ.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BD10 (ndisDereferenceDmaAdapter.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ndisMInvokeHalt @ 0x1C009BD28 (ndisMInvokeHalt.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00B032C (ndisCancelInitModeTimeoutTimer.c)
 *     ndisNDKCleanup @ 0x1C00D7A14 (ndisNDKCleanup.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00D7F24 (ndisNdkPcwMiniportCleanup.c)
 *     ndisSelectiveSuspendFree @ 0x1C00DCBC8 (ndisSelectiveSuspendFree.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00E0A64 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

void __fastcall ndisMCommonHaltMiniport(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  void (__fastcall *v2)(__int64, struct _NDIS_PACKET **, unsigned int); // r12
  char v3; // r13
  KIRQL v6; // al
  _NDIS_HALT_ACTION v7; // ebx
  __int64 v8; // rcx
  KIRQL v9; // al
  KIRQL v10; // r14
  char v11; // si
  KIRQL v12; // al
  KIRQL v13; // r14
  char v14; // si
  KIRQL v15; // al
  KIRQL v16; // si
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  KIRQL v20; // al
  __int64 v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  char v24; // bl
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  struct _NDIS_PD_BLOCK *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  KIRQL v43; // al
  __int64 v44; // rdx
  struct _NDIS_STACK_RESERVED *v45; // r8
  KIRQL v46; // si
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rcx
  void *v51; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  unsigned int i; // [rsp+90h] [rbp+40h]
  unsigned int j; // [rsp+90h] [rbp+40h]
  char v57; // [rsp+98h] [rbp+48h]
  unsigned int k; // [rsp+98h] [rbp+48h]
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+50h] BYREF

  v57 = a2;
  v2 = ndisMDummyIndicatePacket;
  v3 = a2 & 0x10;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, BugCheckParameter2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_DWORD *)(BugCheckParameter2 + 124) |= 0xA0000u;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v6);
  ndisWaitForResetCompletion(BugCheckParameter2);
  if ( (a2 & 4) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 360), 0);
  if ( (a2 & 0x40) != 0 )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 4208), 0);
  if ( (a2 & 0x100) != 0 && *(_QWORD *)(BugCheckParameter2 + 4896) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(BugCheckParameter2 + 4888), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(BugCheckParameter2 + 4888));
    *(_QWORD *)(BugCheckParameter2 + 4896) = 0LL;
  }
  v7 = NdisHaltDevicePoweredDown;
  if ( (a2 & 2) != 0 )
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 3880), 2u);
  if ( (a2 & 8) != 0 )
    ndisCancelWakeUpDpcTimer(BugCheckParameter2);
  ndisCancelInitModeTimeoutTimer(BugCheckParameter2, 1);
  v8 = *(_QWORD *)(BugCheckParameter2 + 4160);
  if ( v8 )
    ndisNdkPcwMiniportCleanup(v8);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v10 = v9;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1442856;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v10);
    for ( i = 0; i < 0x32; ++i )
      ;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1860) = 1442856;
  *(_QWORD *)(BugCheckParameter2 + 1864) = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 2200) != BugCheckParameter2 + 2200
    || (*(_DWORD *)(BugCheckParameter2 + 4484) & 1) != 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = 1;
    *(_QWORD *)(BugCheckParameter2 + 1616) = &Event;
  }
  else
  {
    v11 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1856) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v10);
  if ( v11 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v13 = v12;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1442881;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v13);
    for ( j = 0; j < 0x32; ++j )
      ;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1860) = 1442881;
  *(_QWORD *)(BugCheckParameter2 + 1864) = KeGetCurrentThread();
  if ( *(_DWORD *)(BugCheckParameter2 + 4312) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = 1;
    *(_QWORD *)(BugCheckParameter2 + 4320) = &Event;
  }
  else
  {
    v14 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1856) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v13);
  if ( v14 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  v16 = v15;
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 1856) = 1442906;
  if ( *(_DWORD *)(BugCheckParameter2 + 3164) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 3176) = &Event;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v16);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 3176) = 0LL;
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v15);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
  {
    v2 = *(void (__fastcall **)(__int64, struct _NDIS_PACKET **, unsigned int))(BugCheckParameter2 + 432);
    *(_QWORD *)(BugCheckParameter2 + 432) = ndisMDummyIndicatePacket;
    while ( *(_DWORD *)(BugCheckParameter2 + 1828) )
      NdisMSleep(0x3E8u);
  }
  if ( v3 )
  {
    v17 = *(_DWORD *)(BugCheckParameter2 + 120);
    if ( v17 >= 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x100) != 0 )
      {
        v7 = NdisHaltDeviceFailed;
      }
      else
      {
        v7 = NdisHaltDeviceSurpriseRemoved;
        if ( (v17 & 0x8000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1520) == 3 )
        {
          v7 = NdisHaltDeviceInstanceDeInitialized;
        }
        else
        {
          v18 = *(_DWORD *)(BugCheckParameter2 + 1520);
          if ( v18 != 6 )
          {
            v19 = 0;
            if ( v18 == 3 )
              v19 = 6;
            v7 = v19;
          }
        }
      }
    }
  }
  else
  {
    v7 = NdisHaltDeviceInitializationFailed;
  }
  if ( (unsigned __int8)byte_1C0085310 >= 4u )
    WPP_SF_LqZ(
      0x1Cu,
      &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids,
      v7,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 3912));
  if ( *(_BYTE *)(BugCheckParameter2 + 32) < 6u )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(BugCheckParameter2 + 3816) + 144LL))(*(_QWORD *)(BugCheckParameter2 + 24));
  else
    ndisMInvokeHalt(BugCheckParameter2, v7);
  *(_DWORD *)(BugCheckParameter2 + 2256) = 1;
  ndisLogMiniportEvent(BugCheckParameter2, 0x34u);
  if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    *(_QWORD *)(BugCheckParameter2 + 432) = v2;
  *(_DWORD *)(BugCheckParameter2 + 124) &= ~0x80000u;
  ndisCancelMediaDisconnectTimer(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40) != 0 )
      ndisDereferenceDmaAdapter(*(PVOID *)(BugCheckParameter2 + 504));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
    v21 = *(_QWORD *)(BugCheckParameter2 + 504);
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1443026;
    if ( v21 )
    {
      *(_QWORD *)(v21 + 80) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v20);
      KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v20);
    }
    *(_DWORD *)(BugCheckParameter2 + 120) &= ~0x40u;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2752) )
    *(_QWORD *)(BugCheckParameter2 + 2752) = 0LL;
  while ( *(_QWORD *)(BugCheckParameter2 + 960) )
  {
    v48 = *(_QWORD **)(BugCheckParameter2 + 960);
    if ( v48 )
      *(_QWORD *)(BugCheckParameter2 + 960) = *v48;
    ExFreePoolWithTag(v48, 0);
  }
  while ( *(_QWORD *)(BugCheckParameter2 + 968) )
  {
    v49 = *(_QWORD **)(BugCheckParameter2 + 968);
    if ( v49 )
      *(_QWORD *)(BugCheckParameter2 + 968) = *v49;
    ExFreePoolWithTag(v49, 0);
  }
  while ( *(_QWORD *)(BugCheckParameter2 + 976) )
  {
    v50 = *(_QWORD **)(BugCheckParameter2 + 976);
    if ( v50 )
      *(_QWORD *)(BugCheckParameter2 + 976) = *v50;
    ExFreePoolWithTag(v50, 0);
  }
  v22 = *(void **)(BugCheckParameter2 + 768);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(BugCheckParameter2 + 768) = 0LL;
  }
  v23 = *(void **)(BugCheckParameter2 + 2776);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    *(_QWORD *)(BugCheckParameter2 + 2776) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 2784) = 0;
  }
  v24 = v57;
  if ( v57 < 0 )
  {
    v51 = *(void **)(BugCheckParameter2 + 3448);
    if ( v51 )
    {
      ExFreePoolWithTag(v51, 0);
      *(_QWORD *)(BugCheckParameter2 + 3448) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 3456) = 0;
    }
  }
  v25 = *(void **)(BugCheckParameter2 + 3528);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    *(_QWORD *)(BugCheckParameter2 + 3528) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 3536) = 0;
  }
  v26 = *(void **)(BugCheckParameter2 + 3560);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *(_QWORD *)(BugCheckParameter2 + 3560) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 3568) = 0;
  }
  v27 = *(void **)(BugCheckParameter2 + 4824);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(BugCheckParameter2 + 4824) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4832) = 0;
  }
  v28 = *(void **)(BugCheckParameter2 + 3584);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(BugCheckParameter2 + 3584) = 0LL;
  }
  v29 = *(void **)(BugCheckParameter2 + 3592);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(BugCheckParameter2 + 3592) = 0LL;
  }
  v30 = *(void **)(BugCheckParameter2 + 3600);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(BugCheckParameter2 + 3600) = 0LL;
  }
  v31 = *(void **)(BugCheckParameter2 + 3608);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(BugCheckParameter2 + 3608) = 0LL;
  }
  v32 = *(void **)(BugCheckParameter2 + 3616);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(BugCheckParameter2 + 3616) = 0LL;
  }
  v33 = *(void **)(BugCheckParameter2 + 3624);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    *(_QWORD *)(BugCheckParameter2 + 3624) = 0LL;
  }
  v34 = *(void **)(BugCheckParameter2 + 4664);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter2 + 4664) = 0LL;
  }
  v35 = *(void **)(BugCheckParameter2 + 4672);
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    *(_QWORD *)(BugCheckParameter2 + 4672) = 0LL;
  }
  v36 = *(void **)(BugCheckParameter2 + 4968);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(BugCheckParameter2 + 4968) = 0LL;
  }
  v37 = *(void **)(BugCheckParameter2 + 4976);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(BugCheckParameter2 + 4976) = 0LL;
  }
  v38 = *(void **)(BugCheckParameter2 + 4984);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(BugCheckParameter2 + 4984) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 4992) = 0;
  }
  v39 = *(void **)(BugCheckParameter2 + 5000);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(BugCheckParameter2 + 5000) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 5008) = 0;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 4160) )
  {
    ndisNDKCleanup((struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2);
    *(_QWORD *)(BugCheckParameter2 + 4160) = 0LL;
  }
  v40 = *(struct _NDIS_PD_BLOCK **)(BugCheckParameter2 + 5504);
  if ( v40 )
    ndisPDCleanupPDBlock(v40);
  v41 = *(void **)(BugCheckParameter2 + 4632);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(BugCheckParameter2 + 4632) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 4512) )
    ndisSelectiveSuspendFree(BugCheckParameter2);
  if ( (struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  v42 = *(void **)(BugCheckParameter2 + 3192);
  if ( v42 )
    memset(v42, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( *(_QWORD *)(BugCheckParameter2 + 560) )
    goto LABEL_159;
  if ( *(_QWORD *)(BugCheckParameter2 + 112) )
    goto LABEL_155;
  if ( *(_QWORD *)(BugCheckParameter2 + 784) )
  {
LABEL_159:
    if ( !*(_QWORD *)(BugCheckParameter2 + 112) )
    {
      v53 = *(_QWORD *)(BugCheckParameter2 + 3912);
      if ( *(_QWORD *)(BugCheckParameter2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v53, "Halting without deregistering interrupt");
        KeBugCheckEx(0x7Cu, v3 != 0 ? 8 : 13, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v53, "Halting without deregistering timer");
      KeBugCheckEx(0x7Cu, v3 != 0 ? 9 : 14, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 560), 0LL);
    }
LABEL_155:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(BugCheckParameter2 + 3912),
      "Halting without deregistering interrupt");
    KeBugCheckEx(0x7Cu, v3 != 0 ? 8 : 13, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 112), 0LL);
  }
  v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
  *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  v46 = v43;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1856) = 1443324;
    if ( !*(_BYTE *)(BugCheckParameter2 + 89) )
      break;
    *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v46);
    for ( k = 0; k < 0x32; ++k )
      ;
    v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 96));
    *(_QWORD *)(BugCheckParameter2 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 1;
  *(_DWORD *)(BugCheckParameter2 + 1860) = 1443324;
  *(_QWORD *)(BugCheckParameter2 + 1864) = KeGetCurrentThread();
  ndisMAbortPackets(BugCheckParameter2, v44, v45);
  ndisMDeQueueWorkItem(BugCheckParameter2, 0, 0LL, 0LL);
  ndisMAbortRequests(BugCheckParameter2);
  if ( (v24 & 0x20) != 0 )
  {
    v47 = *(_QWORD **)(BugCheckParameter2 + 512);
    *(_QWORD *)(BugCheckParameter2 + 512) = 0LL;
    if ( v47 )
    {
      do
      {
        v52 = (_QWORD *)*v47;
        ExFreePoolWithTag(v47, 0);
        v47 = v52;
      }
      while ( v52 );
    }
  }
  *(_BYTE *)(BugCheckParameter2 + 89) = 0;
  *(_QWORD *)(BugCheckParameter2 + 1856) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 1864) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 96), v46);
  *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Du, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, BugCheckParameter2);
}
