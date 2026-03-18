/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C0026540
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C0130CF0 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0023744 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C00237F8 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C0023EA0 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_pxzqq @ 0x1C002783C (Template_pxzqq.c)
 *     Template_qqqzz @ 0x1C0027918 (Template_qqqzz.c)
 *     Template_qqzz @ 0x1C0027A30 (Template_qqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0029FFC (TraceLoggingWriteMiracastSessionStart.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C016D340 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C016D710 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C016D7BC (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C016D9B4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C016DC30 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C016E5A0 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastPerfCleanupPerfTrack @ 0x1C01752A8 (DpiMiracastPerfCleanupPerfTrack.c)
 *     DpiMiracastPerfInitialPerfTrack @ 0x1C01752EC (DpiMiracastPerfInitialPerfTrack.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, __int64 a2, void *a3)
{
  __int128 v3; // xmm0
  int v5; // r14d
  unsigned int v6; // r15d
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rdi
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r9
  const WCHAR *v10; // r13
  __int64 DeviceContextFromName; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rsi
  _DWORD *StartContext; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rsi
  _QWORD *v23; // rax
  NTSTATUS SystemThread; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned int v40; // r13d
  struct _DEVICE_OBJECT *PoolWithTag; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  const void *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // eax
  int v53; // ecx
  char v54; // cl
  char v55; // dl
  char v56; // r9
  char v57; // r10
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // eax
  char v62; // al
  unsigned int v63; // eax
  char v64; // al
  __int64 v65; // rcx
  __int64 v66; // r8
  _DWORD *v67; // r13
  int Context; // eax
  __int64 v69; // rcx
  __int64 v70; // r8
  _QWORD *v71; // rax
  __int64 v72; // rcx
  int v73; // eax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  _DWORD *v77; // rax
  int v78; // ecx
  _DWORD *v79; // rax
  int v80; // ecx
  _DWORD *v81; // rax
  int v82; // ecx
  _DWORD *v83; // rax
  MIRACAST_CHUNK_LIST *v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  _DWORD *v87; // rdx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  MIRACAST_CHUNK_LIST *v90; // rax
  __int64 v91; // rax
  size_t v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  _QWORD *v97; // r13
  _QWORD *v98; // rax
  int v99; // eax
  struct _KEVENT *v100; // rsi
  unsigned __int16 *v101; // rax
  int v102; // edx
  int v103; // eax
  __int64 v104; // rcx
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  MIRACAST_CHUNK_LIST *v107; // rcx
  MIRACAST_CHUNK_LIST *v108; // rcx
  MIRACAST_CHUNK_LIST *v109; // rcx
  MIRACAST_CHUNK_LIST *v110; // rcx
  MIRACAST_CHUNK_LIST *v111; // rcx
  MIRACAST_CHUNK_LIST *v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // r8
  void *v115; // rdi
  __int64 v116; // rdi
  UINT32 cData[2]; // [rsp+20h] [rbp-E0h]
  char v119; // [rsp+60h] [rbp-A0h]
  char v120; // [rsp+61h] [rbp-9Fh]
  struct _DEVICE_OBJECT pData; // [rsp+62h] [rbp-9Eh] BYREF

  *(PVOID *)((char *)&pData.DeviceExtension + 6) = a3;
  v3 = *(_OWORD *)(a1 + 536);
  *(_QWORD *)((char *)&pData.Characteristics + 2) = a2;
  *(PIO_TIMER *)((char *)&pData.Timer + 6) = (PIO_TIMER)a1;
  v5 = 2;
  *(_QWORD *)((char *)&pData.ReferenceCount + 2) = 0LL;
  *(struct _DEVICE_OBJECT **)((char *)&pData.NextDevice + 6) = 0LL;
  v6 = 0;
  DeviceAttachmentBaseRef = 0LL;
  v119 = 0;
  v120 = 0;
  pData.Size = 0;
  LOWORD(pData.ReferenceCount) = 0;
  pData.Type = 0;
  *(struct _DEVICE_OBJECT **)((char *)&pData.AttachedDevice + 6) = (struct _DEVICE_OBJECT *)(a1 + 536);
  *(_OWORD *)(&pData.StackSize + 2) = v3;
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    *(_QWORD *)(&pData.Spare1 + 2) = 16LL;
    *(struct _LIST_ENTRY **)((char *)&pData.DeviceLock.Header.WaitListHead.Blink + 6) = (struct _LIST_ENTRY *)(&pData.StackSize + 2);
    TlgWrite(
      v8,
      &unk_1C0030177,
      (LPCGUID)(&pData.StackSize + 2),
      v9,
      3u,
      (EVENT_DATA_DESCRIPTOR *)((char *)&pData.ActiveThreadCount + 6));
  }
  v10 = (const WCHAR *)(a1 + 4);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  v13 = DeviceContextFromName;
  if ( !DeviceContextFromName )
  {
    LODWORD(v14) = -1073741275;
    v5 = -2147483642;
    v6 = 2;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v15[4] = DpiMiracastGetDeviceContextFromName;
    v15[3] = DxgkMiracastStartMiracastSession;
    v15[5] = -2147483642LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_169;
  }
  v16 = DeviceContextFromName + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(v13 + 88) = KeGetCurrentThread();
  if ( !*(_BYTE *)(v13 + 468) )
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v13 + 184));
  *(_QWORD *)(v13 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v16);
  DpiMiracastReleaseMiracastDeviceContext((int *)v13, v13);
  if ( DeviceAttachmentBaseRef )
  {
    StartContext = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v22 = StartContext;
    if ( !StartContext )
    {
      LODWORD(v14) = -1073741801;
      v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
      v23[3] = DxgkMiracastStartMiracastSession;
      v23[4] = ExAllocatePoolWithTag;
      v23[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v23);
LABEL_11:
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      v6 = 15;
LABEL_12:
      v5 = -2147483647;
LABEL_169:
      v115 = *(void **)((char *)&pData.Characteristics + 2);
      if ( *(_QWORD *)((char *)&pData.Characteristics + 2) )
      {
        KeSetEvent(*(PRKEVENT *)((char *)&pData.Characteristics + 2), 0, 0);
        ObfDereferenceObject(v115);
      }
      goto LABEL_171;
    }
    *StartContext = 4;
    *((_QWORD *)StartContext + 1) = DeviceAttachmentBaseRef;
    SystemThread = PsCreateSystemThread(
                     (PHANDLE)((char *)&pData.CurrentIrp + 6),
                     0x1FFFFFu,
                     0LL,
                     0LL,
                     0LL,
                     DpiFdoStartAdapterThread,
                     StartContext);
    v14 = SystemThread;
    if ( SystemThread < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v26[3] = DxgkMiracastStartMiracastSession;
      v26[4] = PsCreateSystemThread;
      v26[5] = v14;
      WdLogEvent5_WdError(v26);
      ExFreePoolWithTag(v22, 0x74727044u);
      goto LABEL_11;
    }
    *(PVPB *)((char *)&pData.Vpb + 6) = (PVPB)-100000000LL;
    v14 = ZwWaitForSingleObject(*(HANDLE *)((char *)&pData.CurrentIrp + 6), 0, (PLARGE_INTEGER)((char *)&pData.Vpb + 6));
    ZwClose(*(HANDLE *)((char *)&pData.CurrentIrp + 6));
    if ( (_DWORD)v14 == 258 )
    {
      memset((char *)&pData.Dpc.0 + 6, 0, 0x40uLL);
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v29[3] = DxgkMiracastStartMiracastSession;
      v29[4] = ZwWaitForSingleObject;
      v29[5] = 258LL;
      WdLogEvent5_WdError(v29);
      DxgkDiagInitializeCodePointPacket(
        (union _KDPC::$6963FFE55BC4627E7AE37E9650A61BA0 *)((char *)&pData.Dpc.0 + 6),
        69,
        258,
        2,
        0x10u);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((char *)&pData.Dpc.0 + 6));
    }
    else if ( (int)v14 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v35[3] = DxgkMiracastStartMiracastSession;
      v35[4] = ZwWaitForSingleObject;
      v35[5] = v14;
      WdLogEvent5_WdError(v35);
      v6 = 17;
      goto LABEL_12;
    }
  }
  AcquireMiniportListMutex();
  v30 = DpiMiracastGetDeviceContextFromName(v10);
  v31 = v30;
  if ( !v30 )
  {
    LODWORD(v14) = -1073741275;
    v6 = 2;
    v5 = -2147483642;
    v32 = (_QWORD *)WdLogNewEntry5_WdError(-1LL);
    v32[4] = DpiMiracastGetDeviceContextFromName;
    v32[5] = -2147483642LL;
LABEL_19:
    v32[3] = DxgkMiracastStartMiracastSession;
    WdLogEvent5_WdError(v32);
LABEL_20:
    v34 = *(_QWORD *)((char *)&pData.ReferenceCount + 2);
    goto LABEL_93;
  }
  *(_DWORD *)(v30 + 712) = (*(_DWORD **)((char *)&pData.Timer + 6))[131];
  v36 = *(_QWORD *)(v30 + 216);
  if ( v36 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *(_WORD *)(v36 + 2 * v37) );
  }
  else
  {
    LOWORD(v37) = 0;
  }
  v38 = *(_QWORD *)(v31 + 224);
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *(_WORD *)(v38 + 2 * v39) );
  }
  else
  {
    LOWORD(v39) = 0;
  }
  *(_DWORD *)((char *)&pData.DriverObject + 6) = (unsigned __int16)v37;
  v40 = 2 * ((unsigned __int16)v37 + (unsigned __int16)v39) + 68;
  PoolWithTag = (struct _DEVICE_OBJECT *)ExAllocatePoolWithTag(PagedPool, v40, 0x74727044u);
  *(struct _DEVICE_OBJECT **)((char *)&pData.NextDevice + 6) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v40);
    v42 = *(__int64 *)((char *)&pData.NextDevice + 6);
    (*(struct _DEVICE_OBJECT **)((char *)&pData.NextDevice + 6))->ReferenceCount = v40;
    v43 = v42 + 64;
    *(_DWORD *)v42 = 19;
    *(_DWORD *)(v42 + 40) = 0;
    *(_QWORD *)(v42 + 32) = 0LL;
    *(_QWORD *)(v42 + 8) = 0LL;
    *(_QWORD *)(v42 + 16) = 0LL;
    *(_QWORD *)(v42 + 24) = 0LL;
    *(_WORD *)(v42 + 60) = v37;
    *(_WORD *)(v42 + 62) = v39;
    if ( (_WORD)v37 )
      memmove((void *)(v42 + 64), *(const void **)(v31 + 216), 2LL * (unsigned __int16)v37);
    if ( (_WORD)v39 )
      memmove(
        (void *)(v43 + 2LL * (*(_DWORD *)((char *)&pData.DriverObject + 6) + 1)),
        *(const void **)(v31 + 224),
        2LL * (unsigned __int16)v39);
  }
  v34 = *(_QWORD *)((char *)&pData.ReferenceCount + 2);
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(v31 + 184)) < 0
    || !*(_QWORD *)((char *)&pData.ReferenceCount + 2) )
  {
    LODWORD(v14) = -1073741637;
    v5 = -2147483647;
    v6 = 4;
    v106 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    v106[3] = DxgkMiracastStartMiracastSession;
    v106[4] = 0LL;
    v106[5] = -2147483647LL;
    WdLogEvent5_WdError(v106);
    goto LABEL_93;
  }
  HIBYTE(pData.Type) = 1;
  *(struct _DRIVER_OBJECT **)((char *)&pData.DriverObject + 6) = (struct _DRIVER_OBJECT *)(*(_QWORD *)((char *)&pData.ReferenceCount + 2)
                                                                                         + 1896LL);
  if ( *(_QWORD *)(*(_QWORD *)((char *)&pData.ReferenceCount + 2) + 1896LL) )
  {
    LODWORD(v14) = -1073741637;
    v6 = 6;
    v5 = -2147483647;
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    v45[3] = DxgkMiracastStartMiracastSession;
    v45[4] = 0LL;
    v45[5] = -2147483647LL;
    WdLogEvent5_WdError(v45);
    goto LABEL_93;
  }
  IoAcquireRemoveLockEx(
    (PIO_REMOVE_LOCK)(*(_QWORD *)((char *)&pData.ReferenceCount + 2) + 64LL),
    (PVOID)v31,
    &File,
    1u,
    0x20u);
  v120 = 1;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v31 + 32);
  *(_QWORD *)(v31 + 88) = KeGetCurrentThread();
  v119 = 1;
  *(_BYTE *)(v31 + 468) = 1;
  if ( *(_DWORD *)(v31 + 288) )
  {
    LODWORD(v14) = -1073741661;
    v5 = -2147483647;
    v6 = 6;
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v46);
    v32[4] = v31;
    v32[5] = -2147483647LL;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(v31 + 280) )
  {
    LODWORD(v14) = -1073741275;
    v5 = -2147483642;
    v6 = 2;
    v47 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v47 + 24) = DxgkMiracastStartMiracastSession;
    *(_QWORD *)(v47 + 32) = v31;
    WdLogEvent5_WdEvent(v47);
    goto LABEL_20;
  }
  *(_QWORD *)(v31 + 520) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v31 + 548) = *(_DWORD *)(v31 + 544);
  *(_DWORD *)(v31 + 544) = 0;
  *(_BYTE *)(v31 + 471) = 0;
  *(_DWORD *)(v31 + 540) = 0;
  *(_DWORD *)(v31 + 552) = 0;
  *(_DWORD *)(v31 + 560) = dword_1C0047060;
  v48 = *(__int64 *)((char *)&pData.Timer + 6);
  *(_QWORD *)(v31 + 564) = 0LL;
  *(_DWORD *)(v31 + 536) = 0;
  *(_BYTE *)(v31 + 472) = 0;
  *(_QWORD *)(v31 + 572) = 0LL;
  *(_QWORD *)(v31 + 580) = 0LL;
  *(_QWORD *)(v31 + 588) = 0LL;
  *(_QWORD *)(v31 + 600) = 0LL;
  *(_QWORD *)(v31 + 704) = 0LL;
  LODWORD(v48) = *(_DWORD *)(v48 + 524);
  *(_DWORD *)(v31 + 624) = -1;
  *(_DWORD *)(v31 + 712) = v48;
  *(_DWORD *)(v31 + 628) = 0;
  HIBYTE(pData.Size) = 1;
  memset((void *)(v31 + 632), 0, 0x42uLL);
  v49 = *(struct _DEVICE_OBJECT **)((char *)&pData.AttachedDevice + 6);
  *(_DWORD *)(v31 + 700) = 256;
  memmove((void *)(v31 + 112), v49, 0x10uLL);
  if ( ++*(_DWORD *)(v31 + 320) >= 0xFFFFFFFE )
    *(_DWORD *)(v31 + 320) = 0;
  v34 = *(_QWORD *)((char *)&pData.ReferenceCount + 2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_pxzqq(
      v50,
      &EventMiracastStartMiracastSession,
      v51,
      *(_QWORD *)(*(_QWORD *)((char *)&pData.ReferenceCount + 2) + 48LL),
      *(_QWORD *)(v31 + 96),
      *(_QWORD *)(v31 + 152),
      *(_DWORD *)(v31 + 544),
      *(_DWORD *)(v31 + 552));
  *(_DWORD *)(v31 + 196) = *(_DWORD *)(*(_QWORD *)((char *)&pData.ReferenceCount + 2) + 1060LL);
  *(_DWORD *)(v31 + 200) = *(_DWORD *)(v34 + 1064);
  v52 = *(_DWORD *)(v34 + 1056);
  if ( v52 == 1 )
  {
    v53 = (unsigned __int16)*(_DWORD *)(v34 + 1064);
  }
  else
  {
    if ( v52 != 2 )
    {
      *(_DWORD *)(v31 + 204) = 0;
      goto LABEL_84;
    }
    v54 = *(_BYTE *)(v34 + 1064);
    if ( ((unsigned __int8)(v54 - 48) <= 9u || (unsigned __int8)((v54 | 0x20) - 97) <= 5u)
      && ((v55 = *(_BYTE *)(v34 + 1065), (unsigned __int8)(v55 - 48) <= 9u) || (unsigned __int8)((v55 | 0x20) - 97) <= 5u)
      && ((v56 = *(_BYTE *)(v34 + 1066), (unsigned __int8)(v56 - 48) <= 9u) || (unsigned __int8)((v56 | 0x20) - 97) <= 5u)
      && ((v57 = *(_BYTE *)(v34 + 1067), (unsigned __int8)(v57 - 48) <= 9u) || (unsigned __int8)((v57 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v34 + 1064) - 48) > 9u )
        v58 = (v54 - 7) & 0xF;
      else
        v58 = v54 - 48;
      if ( (unsigned __int8)(v55 - 48) > 9u )
        v59 = (v55 - 7) & 0xF;
      else
        v59 = v55 - 48;
      if ( (unsigned __int8)(v56 - 48) > 9u )
        v60 = (v56 - 7) & 0xF;
      else
        v60 = v56 - 48;
      if ( (unsigned __int8)(v57 - 48) > 9u )
        v61 = (v57 - 7) & 0xF;
      else
        v61 = v57 - 48;
      v53 = v61 | (16 * (v60 | (16 * (v59 | (16 * v58)))));
    }
    else
    {
      v53 = *(unsigned __int16 *)(v34 + 1066);
    }
    v62 = *(_BYTE *)(v34 + 1060);
    if ( v62 == 32 || v62 == 95 )
    {
      v64 = *(_BYTE *)(v34 + 1061);
      if ( v64 == 32 || v64 == 95 )
        v63 = *(_DWORD *)(v34 + 1060) & 0xFFFF0000;
      else
        v63 = (*(_DWORD *)(v34 + 1060) & 0xFFFFFF00) << 8;
      goto LABEL_82;
    }
  }
  v63 = *(_DWORD *)(v34 + 1060) << 16;
LABEL_82:
  *(_DWORD *)(v31 + 204) = v63 | v53;
LABEL_84:
  DpiMiracastPerfReportGlobalConfiguration(v31);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    Template_qqzz(
      v65,
      &EventMiracastPerfTrackStartMiracastSession,
      v66,
      *(unsigned int *)(v31 + 320),
      *(_DWORD *)(v31 + 204),
      0LL,
      *(_QWORD *)(v31 + 232));
  *(_BYTE *)(v31 + 470) = 0;
  *(_QWORD *)((char *)&pData.Queue.Wcb.NumberOfMapRegisters + 6) = DpiMiracastCbSendUserModeMessage;
  v67 = (_DWORD *)(v31 + 336);
  *(PVOID *)((char *)&pData.Queue.Wcb.DeviceContext + 6) = (PVOID)v31;
  *(PVOID *)((char *)&pData.Queue.Wcb.DeviceObject + 6) = DpiMiracastCbReportChunkInfo;
  Context = DpiMiracastDdiMiracastCreateContext(v34, (char *)&pData.Queue.Wcb.DeviceContext + 6, v31 + 328, v31 + 336);
  v14 = Context;
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
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v69);
    v71[4] = DpiMiracastDdiMiracastCreateContext;
    v71[3] = DxgkMiracastStartMiracastSession;
    v71[5] = v14;
    WdLogEvent5_WdError(v71);
    *v67 = -1;
    *(_QWORD *)(v31 + 328) = 0LL;
    goto LABEL_93;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(v31, 0, v70);
  v73 = *(_DWORD *)(v34 + 1888);
  LOBYTE(pData.Size) = 1;
  if ( *v67 != v73 )
  {
    LODWORD(v14) = -1073741811;
    v5 = -2147483647;
    v6 = 9;
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v72);
    v74[4] = DpiMiracastDdiMiracastCreateContext;
    v74[3] = DxgkMiracastStartMiracastSession;
    v74[5] = -2147483647LL;
    WdLogEvent5_WdError(v74);
    goto LABEL_93;
  }
  *(_DWORD *)(v31 + 300) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(v31 + 469) = 0;
  *(_QWORD *)(v31 + 376) = 0LL;
  *(_WORD *)(v34 + 1912) = 0;
  *(_DWORD *)(v34 + 1916) = 0;
  v77 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v77 )
  {
    v78 = *(_DWORD *)(v34 + 1880);
    v77[4] = 0;
    v77[5] = v78;
    *((_QWORD *)v77 + 1) = v77;
    *(_QWORD *)v77 = v77;
  }
  else
  {
    v77 = 0LL;
  }
  *(_QWORD *)(v31 + 368) = v77;
  v79 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v79 )
  {
    v80 = *(_DWORD *)(v34 + 1880);
    v79[4] = 0;
    v79[5] = v80;
    *((_QWORD *)v79 + 1) = v79;
    *(_QWORD *)v79 = v79;
  }
  else
  {
    v79 = 0LL;
  }
  *(_QWORD *)(v34 + 1920) = v79;
  v81 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v81 )
  {
    v82 = *(_DWORD *)(v34 + 1880);
    v81[4] = 0;
    v81[5] = v82;
    *((_QWORD *)v81 + 1) = v81;
    *(_QWORD *)v81 = v81;
  }
  else
  {
    v81 = 0LL;
  }
  *(_QWORD *)(v34 + 1928) = v81;
  v83 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v87 = v83;
  if ( v83 )
  {
    v84 = (MIRACAST_CHUNK_LIST *)*(unsigned int *)(v34 + 1880);
    v83[4] = 0;
    v83[5] = (_DWORD)v84;
    *((_QWORD *)v83 + 1) = v83;
    *(_QWORD *)v83 = v83;
  }
  else
  {
    v87 = 0LL;
  }
  *(_QWORD *)(v34 + 1936) = v87;
  if ( !*(_QWORD *)(v31 + 368) )
    goto LABEL_132;
  v84 = *(MIRACAST_CHUNK_LIST **)(v34 + 1920);
  if ( !v84 || !*(_QWORD *)(v34 + 1928) || !v87 )
    goto LABEL_132;
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v84, 0x14u) )
  {
LABEL_113:
    v6 = 11;
LABEL_114:
    v5 = -2147483647;
    LODWORD(v14) = -1073741801;
    v88 = (_QWORD *)WdLogNewEntry5_WdLowResource(v84, v87, v85, v86);
    v88[3] = DxgkMiracastStartMiracastSession;
    v88[4] = ExAllocatePoolWithTag;
    v88[5] = -2147483647LL;
    WdLogEvent5_WdLowResource(v88);
    goto LABEL_93;
  }
  *(_DWORD *)(v34 + 1916) = 20;
  v89 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v89 )
  {
    v89[2] = 0LL;
    v89[1] = v89;
    *v89 = v89;
  }
  else
  {
    v89 = 0LL;
  }
  *(_QWORD *)(v31 + 384) = v89;
  v90 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v84 = v90;
  if ( v90 )
  {
    *((_QWORD *)v90 + 2) = 0LL;
    *((_QWORD *)v90 + 1) = v90;
    *(_QWORD *)v90 = v90;
  }
  else
  {
    v84 = 0LL;
  }
  v91 = *(_QWORD *)(v31 + 384);
  *(_QWORD *)(v31 + 392) = v84;
  if ( !v91 || !v84 )
  {
LABEL_132:
    v6 = 10;
    goto LABEL_114;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v84, 0x14u) )
    goto LABEL_113;
  DpiMiracastPerfInitialPerfTrack((PVOID)v31);
  KeAcquireInStackQueuedSpinLock(
    &qword_1C0047008,
    (PKLOCK_QUEUE_HANDLE)((char *)&pData.Queue.Wcb.DmaWaitEntry.Blink + 6));
  *(_QWORD *)(v31 + 312) = *(_QWORD *)(v34 + 24);
  **(_QWORD **)((char *)&pData.DriverObject + 6) = v31;
  *(_QWORD *)(v34 + 1904) = *(_QWORD *)(v31 + 96);
  *(_QWORD *)(v31 + 264) = *(_QWORD *)(v34 + 3312);
  *(_QWORD *)(v31 + 272) = *(_QWORD *)(v34 + 3320);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)&pData.Queue.Wcb.DmaWaitEntry.Blink + 6));
  LOBYTE(pData.ReferenceCount) = 1;
  *(struct _DEVICE_OBJECT **)((char *)&pData.AttachedDevice + 6) = (struct _DEVICE_OBJECT *)(v34 + 3344);
  *(_DWORD *)((char *)&pData.DriverObject + 6) = *(unsigned __int16 *)(v34 + 3344) + 64;
  v92 = *(unsigned int *)((char *)&pData.DriverObject + 6);
  v97 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)((char *)&pData.DriverObject + 6), 0x74727044u);
  if ( v97 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 24));
    _InterlockedXor((volatile signed __int32 *)(v31 + 28), v31);
    v99 = *(_DWORD *)(v31 + 288);
    v100 = *(struct _KEVENT **)((char *)&pData.Characteristics + 2);
    *(_QWORD *)(v31 + 352) = *(_QWORD *)((char *)&pData.Characteristics + 2);
    *(_DWORD *)(v31 + 292) = v99;
    *(_DWORD *)(v31 + 288) = 1;
    ++dword_1C0047030;
    KeClearEvent(*(PRKEVENT *)(v31 + 344));
    if ( v100 )
      KeClearEvent(v100);
    memset(v97, 0, v92);
    v34 = *(_QWORD *)((char *)&pData.ReferenceCount + 2);
    *v97 = v31;
    *((_DWORD *)v97 + 2) = *(_DWORD *)(v31 + 320);
    *(_QWORD *)((char *)v97 + 12) = *(_QWORD *)(v31 + 96);
    *(_QWORD *)((char *)v97 + 20) = *(_QWORD *)(v34 + 1456);
    *((_DWORD *)v97 + 7) = *(_DWORD *)(v31 + 320);
    *((_DWORD *)v97 + 8) = dword_1C0047034;
    *((_BYTE *)v97 + 36) = *(_BYTE *)(v34 + 1476);
    *((_BYTE *)v97 + 37) = BYTE1(pData.ReferenceCount);
    v101 = *(unsigned __int16 **)((char *)&pData.AttachedDevice + 6);
    *(_OWORD *)(v97 + 5) = *(_OWORD *)(v31 + 112);
    memmove(v97 + 7, *(const void **)(v34 + 3352), *v101);
    LOBYTE(v102) = 1;
    cData[0] = *(_DWORD *)((char *)&pData.DriverObject + 6) - 12;
    v103 = DpiMiracastSendAsyncUserModeRequest(
             v31,
             v102,
             2295812,
             (int)v97 + 12,
             *(size_t *)cData,
             0LL,
             0,
             (__int64)DpiMiracastStartSessionRequestCallback,
             (__int64)v97,
             &pData,
             v31 + 304);
    v14 = v103;
    if ( v103 >= 0 )
    {
      *(_DWORD *)(v31 + 296) = 2;
      DpiMiracastBroadcastDeviceStateChange(v31);
LABEL_157:
      *(_QWORD *)(v31 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v31 + 32);
      goto LABEL_158;
    }
    v5 = -2147483647;
    v6 = 13;
    v105 = (_QWORD *)WdLogNewEntry5_WdError(v104);
    v105[4] = DpiMiracastSendAsyncUserModeRequest;
    v105[3] = DxgkMiracastStartMiracastSession;
    v105[5] = v14;
    WdLogEvent5_WdError(v105);
    *(_DWORD *)(v31 + 288) = *(_DWORD *)(v31 + 292);
    --dword_1C0047030;
    if ( !LOBYTE(pData.Type) )
    {
      ExFreePoolWithTag(v97, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)v31, v31);
    }
  }
  else
  {
    LODWORD(v14) = -1073741801;
    v6 = 12;
    v5 = -2147483647;
    v98 = (_QWORD *)WdLogNewEntry5_WdLowResource(v94, v93, v95, v96);
    v98[4] = ExAllocatePoolWithTag;
    v98[3] = DxgkMiracastStartMiracastSession;
    v98[5] = -2147483647LL;
    WdLogEvent5_WdLowResource(v98);
  }
LABEL_93:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    if ( v31 )
    {
      v75 = *(_QWORD *)(v31 + 232);
      v76 = *(unsigned int *)(v31 + 204);
    }
    else
    {
      v75 = 0LL;
      v76 = 0LL;
    }
    Template_qqqzz(v76, &EventMiracastStartMiracastSessionFail, v33, v6, v14, v76, 0LL, v75);
  }
  if ( HIBYTE(pData.Size) )
  {
    *(_DWORD *)(v31 + 296) = v5;
    *(_DWORD *)(v31 + 708) = v6;
    if ( LOBYTE(pData.Size) )
    {
      DpiMiracastDdiMiracastDestroyContext(v34, *(_QWORD *)(v31 + 328));
      *(_DWORD *)(v31 + 336) = -1;
      *(_QWORD *)(v31 + 328) = 0LL;
    }
    if ( LOBYTE(pData.ReferenceCount) )
    {
      *(_QWORD *)(v31 + 352) = 0LL;
      KeAcquireInStackQueuedSpinLock(
        &qword_1C0047008,
        (PKLOCK_QUEUE_HANDLE)((char *)&pData.Queue.Wcb.DmaWaitEntry.Blink + 6));
      *(_QWORD *)(v31 + 312) = 0LL;
      *(_QWORD *)(v34 + 1896) = 0LL;
      *(_QWORD *)(v34 + 1904) = 0LL;
      *(_QWORD *)(v31 + 264) = 0LL;
      *(_QWORD *)(v31 + 272) = 0LL;
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)&pData.Queue.Wcb.DmaWaitEntry.Blink + 6));
      KeFlushQueuedDpcs();
    }
    v107 = *(MIRACAST_CHUNK_LIST **)(v31 + 368);
    if ( v107 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v107);
      *(_QWORD *)(v31 + 368) = 0LL;
    }
    v108 = *(MIRACAST_CHUNK_LIST **)(v34 + 1920);
    if ( v108 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v108);
      *(_QWORD *)(v34 + 1920) = 0LL;
    }
    v109 = *(MIRACAST_CHUNK_LIST **)(v34 + 1928);
    if ( v109 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v109);
      *(_QWORD *)(v34 + 1928) = 0LL;
    }
    v110 = *(MIRACAST_CHUNK_LIST **)(v34 + 1936);
    if ( v110 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v110);
      *(_QWORD *)(v34 + 1936) = 0LL;
    }
    v111 = *(MIRACAST_CHUNK_LIST **)(v31 + 384);
    if ( v111 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v111);
      *(_QWORD *)(v31 + 384) = 0LL;
    }
    v112 = *(MIRACAST_CHUNK_LIST **)(v31 + 392);
    if ( v112 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v112);
      *(_QWORD *)(v31 + 392) = 0LL;
    }
    DpiMiracastPerfCleanupPerfTrack(v31);
    KeSetEvent(*(PRKEVENT *)(v31 + 344), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqzz(
        v113,
        &EventMiracastPerfTrackStartMiracastSessionFailed,
        v114,
        *(unsigned int *)(v31 + 320),
        *(_DWORD *)(v31 + 204),
        *(_QWORD *)(v31 + 256),
        *(_QWORD *)(v31 + 232));
    TraceLoggingWriteMiracastSessionStart(v31);
  }
  if ( v119 )
    goto LABEL_157;
LABEL_158:
  if ( v120 && v5 < 0 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v34 + 64), (PVOID)v31, 0x20u);
  if ( HIBYTE(pData.Type) )
  {
    if ( *(_BYTE *)(v34 + 483) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v34 + 24) + 64LL) + 2720LL));
      v34 = *(_QWORD *)((char *)&pData.ReferenceCount + 2);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v34 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v5 < 0 && v31 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v31, v31);
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v5 < 0 )
    goto LABEL_169;
LABEL_171:
  v116 = *(__int64 *)((char *)&pData.NextDevice + 6);
  **(_DWORD **)((char *)&pData.DeviceExtension + 6) = v14;
  if ( v116 )
  {
    *(_DWORD *)(v116 + 48) = v14;
    *(_DWORD *)(v116 + 52) = v5;
    *(_DWORD *)(v116 + 56) = v6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v116);
    ExFreePoolWithTag((PVOID)v116, 0);
  }
  else
  {
    memset((char *)&pData.Queue.Wcb.CurrentIrp + 6, 0, 0x40uLL);
    DxgkDiagInitializeCodePointPacket((PVOID *)((char *)&pData.Queue.Wcb.CurrentIrp + 6), 69, v14, v5, v6);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((char *)&pData.Queue.Wcb.CurrentIrp + 6));
  }
  return (unsigned int)v5;
}
