/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C002D594
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C014F450 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C000B668 (RtlStringCchCopyW.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C002AC18 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C002ACCC (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C002B360 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_pxzqq @ 0x1C002E780 (Template_pxzqq.c)
 *     Template_qqqz @ 0x1C002E85C (Template_qqqz.c)
 *     Template_qqz @ 0x1C002E91C (Template_qqz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0031444 (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0031DD4 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0196B28 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C0196ED0 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C0196F7C (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0197174 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01973F8 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0197BB0 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastPerfCleanupPerfTrack @ 0x1C019EC5C (DpiMiracastPerfCleanupPerfTrack.c)
 *     DpiMiracastPerfInitialPerfTrack @ 0x1C019ECA0 (DpiMiracastPerfInitialPerfTrack.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _IO_TIMER *a2, void *a3)
{
  __int128 v3; // xmm0
  int v5; // r14d
  ULONG v6; // r15d
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rsi
  __int64 DeviceContextFromName; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  wchar_t *PoolWithTag; // rax
  __int64 v14; // rcx
  wchar_t *v15; // rdi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  NTSTATUS SystemThread; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned int v34; // r12d
  struct _DEVICE_OBJECT *v35; // rax
  struct _DEVICE_OBJECT *v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  const void *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  char v46; // cl
  char v47; // dl
  char v48; // r9
  char v49; // r10
  int v50; // ecx
  int v51; // ecx
  int v52; // r8d
  int v53; // edx
  int v54; // eax
  char v55; // al
  unsigned int v56; // eax
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // r8
  _DWORD *v60; // r12
  int Context; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  _DWORD *v70; // rax
  int v71; // ecx
  _DWORD *v72; // rax
  int v73; // ecx
  _DWORD *v74; // rax
  int v75; // ecx
  _DWORD *v76; // rax
  MIRACAST_CHUNK_LIST *v77; // rcx
  _DWORD *v78; // rdx
  __int64 v79; // rax
  _QWORD *v80; // rax
  MIRACAST_CHUNK_LIST *v81; // rax
  __int64 v82; // rax
  unsigned int v83; // r13d
  __int64 v84; // rcx
  _QWORD *v85; // r12
  __int64 v86; // rax
  int v87; // eax
  struct _KEVENT *v88; // rsi
  unsigned __int16 *v89; // rax
  int v90; // edx
  int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  MIRACAST_CHUNK_LIST *v95; // rcx
  MIRACAST_CHUNK_LIST *v96; // rcx
  MIRACAST_CHUNK_LIST *v97; // rcx
  MIRACAST_CHUNK_LIST *v98; // rcx
  MIRACAST_CHUNK_LIST *v99; // rcx
  MIRACAST_CHUNK_LIST *v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // r8
  void *v103; // rsi
  __int64 v104; // rdi
  PCLIENT_ID ClientId; // [rsp+20h] [rbp-E0h]
  PVOID StartContext; // [rsp+30h] [rbp-D0h]
  __int64 v108; // [rsp+38h] [rbp-C8h]
  struct _DEVICE_OBJECT DeviceObject; // [rsp+61h] [rbp-9Fh] BYREF

  *(PVPB *)((char *)&DeviceObject.Vpb + 7) = (PVPB)a1;
  *(PVOID *)((char *)&DeviceObject.DeviceExtension + 7) = a3;
  v3 = *(_OWORD *)(a1 + 536);
  *(PIO_TIMER *)((char *)&DeviceObject.Timer + 7) = a2;
  *(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3) = 0LL;
  *(_OWORD *)((char *)&DeviceObject.Queue.Wcb.NumberOfMapRegisters + 7) = v3;
  *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.NextDevice + 7) = 0LL;
  v5 = 2;
  v6 = 0;
  DeviceAttachmentBaseRef = 0LL;
  LOBYTE(DeviceObject.ReferenceCount) = 0;
  *(_WORD *)((char *)&DeviceObject.ReferenceCount + 1) = 0;
  DeviceObject.Size = 0;
  DeviceObject.Type = 0;
  *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 7) = (struct _DEVICE_OBJECT *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry((char *)&DeviceObject.Queue.Wcb.NumberOfMapRegisters + 7);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  v10 = DeviceContextFromName;
  if ( !DeviceContextFromName )
  {
    LODWORD(v11) = -1073741275;
    v6 = 2;
    v5 = -2147483642;
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_167;
  }
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(v10 + 88) = KeGetCurrentThread();
  if ( !*(_BYTE *)(v10 + 596) )
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v10 + 184));
  *(_QWORD *)(v10 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v10 + 32);
  DpiMiracastReleaseMiracastDeviceContext((int *)v10, v10);
  if ( DeviceAttachmentBaseRef )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x46CuLL, 0x74727044u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v11) = -1073741801;
      v16 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v16 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v16);
LABEL_8:
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      v6 = 15;
LABEL_9:
      v5 = -2147483647;
LABEL_167:
      v103 = *(PIO_TIMER *)((char *)&DeviceObject.Timer + 7);
      if ( *(PIO_TIMER *)((char *)&DeviceObject.Timer + 7) )
      {
        KeSetEvent(*(PRKEVENT *)((char *)&DeviceObject.Timer + 7), 0, 0);
        ObfDereferenceObject(v103);
      }
      goto LABEL_169;
    }
    *(_DWORD *)PoolWithTag = 4;
    *((_DWORD *)PoolWithTag + 26) = 0;
    v17 = RtlStringCchCopyW(PoolWithTag + 2, 0x32uLL, (NTSTRSAFE_PCWSTR)(a1 + 4));
    v18 = 0LL;
    v11 = v17;
    if ( v17 < 0
      || (SystemThread = PsCreateSystemThread(
                           (PHANDLE)((char *)&DeviceObject.CurrentIrp + 7),
                           0x1FFFFFu,
                           0LL,
                           0LL,
                           0LL,
                           DpiFdoStartAdapterThread,
                           v15),
          v11 = SystemThread,
          SystemThread < 0) )
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = v11;
      WdLogEvent5_WdError(v19);
      ExFreePoolWithTag(v15, 0x74727044u);
      goto LABEL_8;
    }
    *(_QWORD *)((char *)&DeviceObject.Characteristics + 3) = -100000000LL;
    v11 = ZwWaitForSingleObject(
            *(HANDLE *)((char *)&DeviceObject.CurrentIrp + 7),
            0,
            (PLARGE_INTEGER)((char *)&DeviceObject.Characteristics + 3));
    ZwClose(*(HANDLE *)((char *)&DeviceObject.CurrentIrp + 7));
    if ( (_DWORD)v11 == 258 )
    {
      memset((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 7, 0, 0x40uLL);
      v23 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v23 + 24) = 258LL;
      WdLogEvent5_WdError(v23);
      *(_OWORD *)((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 7) = 0x4000000006uLL;
      memset((char *)&DeviceObject.AlignmentRequirement + 7, 0, 28);
      *(KSPIN_LOCK *)((char *)&DeviceObject.DeviceQueue.Lock + 7) = 0x10200000045LL;
      *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)((char *)&DeviceObject.DeviceQueue.1 + 7) = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)0x1000000002LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 7));
    }
    else if ( (int)v11 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v29 + 24) = v11;
      WdLogEvent5_WdError(v29);
      v6 = 17;
      goto LABEL_9;
    }
  }
  AcquireMiniportListMutex();
  v24 = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  v25 = v24;
  if ( !v24 )
  {
    LODWORD(v11) = -1073741275;
    v6 = 2;
    v5 = -2147483642;
    v26 = WdLogNewEntry5_WdError(-1LL);
    *(_QWORD *)(v26 + 24) = -2147483642LL;
LABEL_17:
    WdLogEvent5_WdError(v26);
LABEL_18:
    v28 = *(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3);
    goto LABEL_91;
  }
  *(_DWORD *)(v24 + 804) = *(_DWORD *)(a1 + 524);
  v30 = *(_QWORD *)(v24 + 344);
  if ( v30 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_WORD *)(v30 + 2 * v31) );
  }
  else
  {
    LOWORD(v31) = 0;
  }
  v32 = *(_QWORD *)(v25 + 352);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
  }
  else
  {
    LOWORD(v33) = 0;
  }
  *(_DWORD *)((char *)&DeviceObject.DriverObject + 7) = (unsigned __int16)v31;
  v34 = 2 * ((unsigned __int16)v31 + (unsigned __int16)v33) + 68;
  v35 = (struct _DEVICE_OBJECT *)ExAllocatePoolWithTag(PagedPool, v34, 0x74727044u);
  *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.NextDevice + 7) = v35;
  if ( v35 )
  {
    v36 = v35;
    memset(v35, 0, 2 * ((unsigned __int16)v31 + (unsigned int)(unsigned __int16)v33) + 68);
    v36->ReferenceCount = v34;
    *(_DWORD *)&v36->Type = 19;
    LODWORD(v36->Timer) = 0;
    v36->CurrentIrp = 0LL;
    v36->DriverObject = 0LL;
    v36->NextDevice = 0LL;
    v36->AttachedDevice = 0LL;
    WORD2(v36->Vpb) = v31;
    HIWORD(v36->Vpb) = v33;
    if ( (_WORD)v31 )
      memmove(&v36->DeviceExtension, *(const void **)(v25 + 344), 2LL * (unsigned __int16)v31);
    if ( (_WORD)v33 )
      memmove(
        (char *)&v36->DeviceExtension + 2 * *(_DWORD *)((char *)&DeviceObject.DriverObject + 7) + 2,
        *(const void **)(v25 + 352),
        2LL * (unsigned __int16)v33);
  }
  v28 = *(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3);
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(v25 + 184)) < 0
    || !*(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3) )
  {
    LODWORD(v11) = -1073741637;
    v5 = -2147483647;
    v6 = 4;
    v94 = WdLogNewEntry5_WdError(v37);
    *(_QWORD *)(v94 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v94);
    goto LABEL_91;
  }
  BYTE2(DeviceObject.ReferenceCount) = 1;
  *(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 7) = (struct _DRIVER_OBJECT *)(*(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3)
                                                                                                + 3040LL);
  if ( *(_QWORD *)(*(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3) + 3040LL) )
  {
    LODWORD(v11) = -1073741637;
    v6 = 6;
    v5 = -2147483647;
    v38 = WdLogNewEntry5_WdError(v37);
    *(_QWORD *)(v38 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_91;
  }
  IoAcquireRemoveLockEx(
    (PIO_REMOVE_LOCK)(*(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3) + 64LL),
    (PVOID)v25,
    &File,
    1u,
    0x20u);
  BYTE1(DeviceObject.ReferenceCount) = 1;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v25 + 32);
  *(_QWORD *)(v25 + 88) = KeGetCurrentThread();
  LOBYTE(DeviceObject.ReferenceCount) = 1;
  *(_BYTE *)(v25 + 596) = 1;
  if ( *(_DWORD *)(v25 + 416) )
  {
    LODWORD(v11) = -1073741661;
    v5 = -2147483647;
    v6 = 6;
    v26 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v26 + 24) = v25;
    *(_QWORD *)(v26 + 32) = -2147483647LL;
    goto LABEL_17;
  }
  if ( !*(_QWORD *)(v25 + 408) )
  {
    LODWORD(v11) = -1073741275;
    v5 = -2147483642;
    v6 = 2;
    v40 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v40 + 24) = v25;
    WdLogEvent5_WdEvent(v40);
    goto LABEL_18;
  }
  *(_QWORD *)(v25 + 648) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v25 + 676) = *(_DWORD *)(v25 + 672);
  *(_DWORD *)(v25 + 672) = 0;
  *(_BYTE *)(v25 + 599) = 0;
  *(_DWORD *)(v25 + 668) = 0;
  *(_DWORD *)(v25 + 680) = 0;
  *(_DWORD *)(v25 + 688) = dword_1C0057220;
  v41 = *(__int64 *)((char *)&DeviceObject.Vpb + 7);
  *(_QWORD *)(v25 + 692) = 0LL;
  *(_DWORD *)(v25 + 664) = 0;
  *(_BYTE *)(v25 + 600) = 0;
  *(_QWORD *)(v25 + 700) = 0LL;
  *(_QWORD *)(v25 + 708) = 0LL;
  *(_QWORD *)(v25 + 796) = 0LL;
  LODWORD(v41) = *(_DWORD *)(v41 + 524);
  *(_DWORD *)(v25 + 716) = -1;
  *(_DWORD *)(v25 + 804) = v41;
  *(_DWORD *)(v25 + 720) = 0;
  HIBYTE(DeviceObject.Type) = 1;
  memset((void *)(v25 + 724), 0, 0x42uLL);
  v42 = *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 7);
  *(_DWORD *)(v25 + 792) = 256;
  memmove((void *)(v25 + 112), v42, 0x10uLL);
  if ( ++*(_DWORD *)(v25 + 448) >= 0xFFFFFFFE )
    *(_DWORD *)(v25 + 448) = 0;
  v28 = *(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_pxzqq(
      v43,
      &EventMiracastStartMiracastSession,
      v44,
      *(_QWORD *)(*(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3) + 48LL),
      *(_QWORD *)(v25 + 96),
      *(_QWORD *)(v25 + 152),
      *(_DWORD *)(v25 + 672),
      *(_DWORD *)(v25 + 680));
  *(_DWORD *)(v25 + 196) = *(_DWORD *)(*(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3) + 1108LL);
  *(_DWORD *)(v25 + 200) = *(_DWORD *)(v28 + 1112);
  v45 = *(_DWORD *)(v28 + 1104);
  if ( v45 == 1 )
  {
    *(_DWORD *)(v25 + 204) = (unsigned __int16)*(_DWORD *)(v28 + 1112) | (*(_DWORD *)(v28 + 1108) << 16);
  }
  else if ( v45 == 2 )
  {
    v46 = *(_BYTE *)(v28 + 1112);
    if ( ((unsigned __int8)(v46 - 48) <= 9u || (unsigned __int8)((v46 | 0x20) - 97) <= 5u)
      && ((v47 = *(_BYTE *)(v28 + 1113), (unsigned __int8)(v47 - 48) <= 9u) || (unsigned __int8)((v47 | 0x20) - 97) <= 5u)
      && ((v48 = *(_BYTE *)(v28 + 1114), (unsigned __int8)(v48 - 48) <= 9u) || (unsigned __int8)((v48 | 0x20) - 97) <= 5u)
      && ((v49 = *(_BYTE *)(v28 + 1115), (unsigned __int8)(v49 - 48) <= 9u) || (unsigned __int8)((v49 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v28 + 1112) - 48) > 9u )
        v51 = (v46 - 7) & 0xF;
      else
        v51 = v46 - 48;
      if ( (unsigned __int8)(v47 - 48) > 9u )
        v52 = (v47 - 7) & 0xF;
      else
        v52 = v47 - 48;
      if ( (unsigned __int8)(v48 - 48) > 9u )
        v53 = (v48 - 7) & 0xF;
      else
        v53 = v48 - 48;
      if ( (unsigned __int8)(v49 - 48) > 9u )
        v54 = (v49 - 7) & 0xF;
      else
        v54 = v49 - 48;
      v50 = v54 | (16 * (v53 | (16 * (v52 | (16 * v51)))));
    }
    else
    {
      v50 = *(unsigned __int16 *)(v28 + 1114);
    }
    v55 = *(_BYTE *)(v28 + 1108);
    if ( v55 == 32 || v55 == 95 )
    {
      v57 = *(_BYTE *)(v28 + 1109);
      if ( v57 == 32 || v57 == 95 )
        v56 = *(_DWORD *)(v28 + 1108) & 0xFFFF0000;
      else
        v56 = (*(_DWORD *)(v28 + 1108) & 0xFFFFFF00) << 8;
    }
    else
    {
      v56 = *(_DWORD *)(v28 + 1108) << 16;
    }
    *(_DWORD *)(v25 + 204) = v56 | v50;
  }
  else
  {
    *(_DWORD *)(v25 + 204) = 0;
  }
  DpiMiracastPerfReportGlobalConfiguration(v25);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    Template_qqz(
      v58,
      &EventMiracastPerfTrackStartMiracastSession,
      v59,
      *(unsigned int *)(v25 + 448),
      *(_DWORD *)(v25 + 204),
      *(_QWORD *)(v25 + 360),
      StartContext,
      v108);
  *(_BYTE *)(v25 + 598) = 0;
  *(struct _LIST_ENTRY **)((char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Flink + 7) = (struct _LIST_ENTRY *)DpiMiracastCbSendUserModeMessage;
  v60 = (_DWORD *)(v25 + 464);
  *(_QWORD *)(&DeviceObject.StackSize + 3) = v25;
  *(struct _LIST_ENTRY **)((char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Blink + 7) = (struct _LIST_ENTRY *)DpiMiracastCbReportChunkInfo;
  Context = DpiMiracastDdiMiracastCreateContext(v28, &DeviceObject.StackSize + 3, v25 + 456, v25 + 464);
  v11 = Context;
  if ( Context < 0 )
  {
    if ( Context == -1073740024 )
    {
      v6 = 7;
      v5 = -2147483646;
    }
    else
    {
      v6 = 8;
      v5 = -2147483647;
    }
    v64 = WdLogNewEntry5_WdError(v62);
    *(_QWORD *)(v64 + 24) = v11;
    WdLogEvent5_WdError(v64);
    *v60 = -1;
    *(_QWORD *)(v25 + 456) = 0LL;
    goto LABEL_91;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(v25, 0, v63);
  v66 = *(_DWORD *)(v28 + 3032);
  LOBYTE(DeviceObject.Size) = 1;
  if ( *v60 != v66 )
  {
    LODWORD(v11) = -1073741811;
    v5 = -2147483647;
    v6 = 9;
    v67 = WdLogNewEntry5_WdError(v65);
    *(_QWORD *)(v67 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v67);
    goto LABEL_91;
  }
  *(_DWORD *)(v25 + 428) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(v25 + 597) = 0;
  *(_QWORD *)(v25 + 504) = 0LL;
  *(_WORD *)(v28 + 3056) = 0;
  *(_DWORD *)(v28 + 3060) = 0;
  v70 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v70 )
  {
    v71 = *(_DWORD *)(v28 + 3024);
    v70[4] = 0;
    v70[5] = v71;
    *((_QWORD *)v70 + 1) = v70;
    *(_QWORD *)v70 = v70;
  }
  else
  {
    v70 = 0LL;
  }
  *(_QWORD *)(v25 + 496) = v70;
  v72 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v72 )
  {
    v73 = *(_DWORD *)(v28 + 3024);
    v72[4] = 0;
    v72[5] = v73;
    *((_QWORD *)v72 + 1) = v72;
    *(_QWORD *)v72 = v72;
  }
  else
  {
    v72 = 0LL;
  }
  *(_QWORD *)(v28 + 3064) = v72;
  v74 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v74 )
  {
    v75 = *(_DWORD *)(v28 + 3024);
    v74[4] = 0;
    v74[5] = v75;
    *((_QWORD *)v74 + 1) = v74;
    *(_QWORD *)v74 = v74;
  }
  else
  {
    v74 = 0LL;
  }
  *(_QWORD *)(v28 + 3072) = v74;
  v76 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v78 = v76;
  if ( v76 )
  {
    v77 = (MIRACAST_CHUNK_LIST *)*(unsigned int *)(v28 + 3024);
    v76[4] = 0;
    v76[5] = (_DWORD)v77;
    *((_QWORD *)v76 + 1) = v76;
    *(_QWORD *)v76 = v76;
  }
  else
  {
    v78 = 0LL;
  }
  *(_QWORD *)(v28 + 3080) = v78;
  if ( !*(_QWORD *)(v25 + 496) )
    goto LABEL_130;
  v77 = *(MIRACAST_CHUNK_LIST **)(v28 + 3064);
  if ( !v77 || !*(_QWORD *)(v28 + 3072) || !v78 )
    goto LABEL_130;
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v77, 0x14u) )
  {
LABEL_111:
    v6 = 11;
LABEL_112:
    v5 = -2147483647;
    LODWORD(v11) = -1073741801;
    v79 = WdLogNewEntry5_WdLowResource(v77);
    *(_QWORD *)(v79 + 24) = -2147483647LL;
    WdLogEvent5_WdLowResource(v79);
    goto LABEL_91;
  }
  *(_DWORD *)(v28 + 3060) = 20;
  v80 = operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v80 )
  {
    v80[2] = 0LL;
    v80[1] = v80;
    *v80 = v80;
  }
  else
  {
    v80 = 0LL;
  }
  *(_QWORD *)(v25 + 512) = v80;
  v81 = (MIRACAST_CHUNK_LIST *)operator new(0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v77 = v81;
  if ( v81 )
  {
    *((_QWORD *)v81 + 2) = 0LL;
    *((_QWORD *)v81 + 1) = v81;
    *(_QWORD *)v81 = v81;
  }
  else
  {
    v77 = 0LL;
  }
  v82 = *(_QWORD *)(v25 + 512);
  *(_QWORD *)(v25 + 520) = v77;
  if ( !v82 || !v77 )
  {
LABEL_130:
    v6 = 10;
    goto LABEL_112;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v77, 0x14u) )
    goto LABEL_111;
  DpiMiracastPerfInitialPerfTrack((PVOID)v25);
  KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, (PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.1 + 23));
  *(_QWORD *)(v25 + 440) = *(_QWORD *)(v28 + 24);
  **(_QWORD **)((char *)&DeviceObject.DriverObject + 7) = v25;
  *(_QWORD *)(v28 + 3048) = *(_QWORD *)(v25 + 96);
  *(_QWORD *)(v25 + 384) = *(_QWORD *)(v28 + 4464);
  *(_QWORD *)(v25 + 392) = *(_QWORD *)(v28 + 4472);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.1 + 23));
  HIBYTE(DeviceObject.Size) = 1;
  v83 = *(unsigned __int16 *)(v28 + 4496) + 64;
  *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 7) = (struct _DEVICE_OBJECT *)(v28 + 4496);
  v85 = ExAllocatePoolWithTag(PagedPool, v83, 0x74727044u);
  if ( v85 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 24));
    _InterlockedXor((volatile signed __int32 *)(v25 + 28), v25);
    v87 = *(_DWORD *)(v25 + 416);
    v88 = *(struct _KEVENT **)((char *)&DeviceObject.Timer + 7);
    *(_QWORD *)(v25 + 480) = *(PIO_TIMER *)((char *)&DeviceObject.Timer + 7);
    *(_DWORD *)(v25 + 420) = v87;
    *(_DWORD *)(v25 + 416) = 1;
    ++dword_1C00571F0;
    KeClearEvent(*(PRKEVENT *)(v25 + 472));
    if ( v88 )
      KeClearEvent(v88);
    memset(v85, 0, v83);
    v28 = *(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3);
    *v85 = v25;
    *((_DWORD *)v85 + 2) = *(_DWORD *)(v25 + 448);
    *(_QWORD *)((char *)v85 + 12) = *(_QWORD *)(v25 + 96);
    *(_QWORD *)((char *)v85 + 20) = *(_QWORD *)(v28 + 2536);
    *((_DWORD *)v85 + 7) = *(_DWORD *)(v25 + 448);
    *((_DWORD *)v85 + 8) = dword_1C00571F4;
    *((_BYTE *)v85 + 36) = *(_BYTE *)(v28 + 2556);
    *((_BYTE *)v85 + 37) = 0;
    v89 = *(unsigned __int16 **)((char *)&DeviceObject.AttachedDevice + 7);
    *(_OWORD *)(v85 + 5) = *(_OWORD *)(v25 + 112);
    memmove(v85 + 7, *(const void **)(v28 + 4504), *v89);
    LODWORD(ClientId) = v83 - 12;
    v91 = DpiMiracastSendAsyncUserModeRequest(
            v25,
            v90,
            2295812,
            (int)v85 + 12,
            (size_t)ClientId,
            0LL,
            0,
            (__int64)DpiMiracastStartSessionRequestCallback,
            (__int64)v85,
            &DeviceObject,
            v25 + 432);
    v11 = v91;
    if ( v91 >= 0 )
    {
      *(_DWORD *)(v25 + 424) = 2;
      DpiMiracastBroadcastDeviceStateChange(v25);
LABEL_155:
      *(_QWORD *)(v25 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v25 + 32);
      goto LABEL_156;
    }
    v5 = -2147483647;
    v6 = 13;
    v93 = WdLogNewEntry5_WdError(v92);
    *(_QWORD *)(v93 + 24) = v11;
    WdLogEvent5_WdError(v93);
    *(_DWORD *)(v25 + 416) = *(_DWORD *)(v25 + 420);
    --dword_1C00571F0;
    if ( !LOBYTE(DeviceObject.Type) )
    {
      ExFreePoolWithTag(v85, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)v25, v25);
    }
  }
  else
  {
    LODWORD(v11) = -1073741801;
    v6 = 12;
    v5 = -2147483647;
    v86 = WdLogNewEntry5_WdLowResource(v84);
    *(_QWORD *)(v86 + 24) = -2147483647LL;
    WdLogEvent5_WdLowResource(v86);
  }
LABEL_91:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    if ( v25 )
    {
      v68 = *(_QWORD *)(v25 + 360);
      v69 = *(unsigned int *)(v25 + 204);
    }
    else
    {
      v68 = 0LL;
      v69 = 0LL;
    }
    Template_qqqz(v69, &EventMiracastStartMiracastSessionFail, v27, v6, v11, v69, v68);
  }
  if ( HIBYTE(DeviceObject.Type) )
  {
    *(_DWORD *)(v25 + 424) = v5;
    *(_DWORD *)(v25 + 800) = v6;
    if ( LOBYTE(DeviceObject.Size) )
    {
      DpiMiracastDdiMiracastDestroyContext(v28, *(_QWORD *)(v25 + 456));
      *(_DWORD *)(v25 + 464) = -1;
      *(_QWORD *)(v25 + 456) = 0LL;
    }
    if ( HIBYTE(DeviceObject.Size) )
    {
      *(_QWORD *)(v25 + 480) = 0LL;
      KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, (PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.1 + 23));
      *(_QWORD *)(v25 + 440) = 0LL;
      *(_QWORD *)(v28 + 3040) = 0LL;
      *(_QWORD *)(v28 + 3048) = 0LL;
      *(_QWORD *)(v25 + 384) = 0LL;
      *(_QWORD *)(v25 + 392) = 0LL;
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.1 + 23));
      KeFlushQueuedDpcs();
    }
    v95 = *(MIRACAST_CHUNK_LIST **)(v25 + 496);
    if ( v95 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v95);
      *(_QWORD *)(v25 + 496) = 0LL;
    }
    v96 = *(MIRACAST_CHUNK_LIST **)(v28 + 3064);
    if ( v96 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v96);
      *(_QWORD *)(v28 + 3064) = 0LL;
    }
    v97 = *(MIRACAST_CHUNK_LIST **)(v28 + 3072);
    if ( v97 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v97);
      *(_QWORD *)(v28 + 3072) = 0LL;
    }
    v98 = *(MIRACAST_CHUNK_LIST **)(v28 + 3080);
    if ( v98 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v98);
      *(_QWORD *)(v28 + 3080) = 0LL;
    }
    v99 = *(MIRACAST_CHUNK_LIST **)(v25 + 512);
    if ( v99 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v99);
      *(_QWORD *)(v25 + 512) = 0LL;
    }
    v100 = *(MIRACAST_CHUNK_LIST **)(v25 + 520);
    if ( v100 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v100);
      *(_QWORD *)(v25 + 520) = 0LL;
    }
    DpiMiracastPerfCleanupPerfTrack(v25);
    KeSetEvent(*(PRKEVENT *)(v25 + 472), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqz(
        v101,
        &EventMiracastPerfTrackStartMiracastSessionFailed,
        v102,
        *(unsigned int *)(v25 + 448),
        *(_DWORD *)(v25 + 204),
        *(_QWORD *)(v25 + 360),
        StartContext,
        v108);
    TraceLoggingWriteMiracastSessionStart(v25);
  }
  if ( LOBYTE(DeviceObject.ReferenceCount) )
    goto LABEL_155;
LABEL_156:
  if ( BYTE1(DeviceObject.ReferenceCount) && v5 < 0 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v28 + 64), (PVOID)v25, 0x20u);
  if ( BYTE2(DeviceObject.ReferenceCount) )
  {
    if ( *(_BYTE *)(v28 + 483) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) + 64LL) + 3872LL));
      v28 = *(_QWORD *)((char *)&DeviceObject.ReferenceCount + 3);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v28 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v5 < 0 && v25 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v25, v25);
  _InterlockedExchange64(&qword_1C0056EC8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v5 < 0 )
    goto LABEL_167;
LABEL_169:
  v104 = *(__int64 *)((char *)&DeviceObject.NextDevice + 7);
  **(_DWORD **)((char *)&DeviceObject.DeviceExtension + 7) = v11;
  if ( v104 )
  {
    *(_DWORD *)(v104 + 48) = v11;
    *(_DWORD *)(v104 + 52) = v5;
    *(_DWORD *)(v104 + 56) = v6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v104);
    ExFreePoolWithTag((PVOID)v104, 0);
  }
  else
  {
    memset((char *)&DeviceObject.Dpc.0 + 7, 0, 0x40uLL);
    *(_QWORD *)((char *)&DeviceObject.Dpc.0 + 7) = 0x4000000006LL;
    memset((char *)&DeviceObject.Dpc.DpcListEntry.Next + 7, 0, 36);
    *(_DWORD *)((char *)&DeviceObject.Dpc.SystemArgument2 + 7) = 69;
    *(_DWORD *)((char *)&DeviceObject.Dpc.DpcData + 3) = v11;
    *(_DWORD *)((char *)&DeviceObject.Dpc.DpcData + 7) = v5;
    *(ULONG *)((char *)&DeviceObject.ActiveThreadCount + 3) = v6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((char *)&DeviceObject.Dpc.0 + 7));
  }
  return (unsigned int)v5;
}
