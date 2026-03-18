/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C00269F0
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDeviceEx @ 0x1C012A7C0 (DxgkNetDispStartMiracastDisplayDeviceEx.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0023C0C (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C0023CC0 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C0024370 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_pxzqq @ 0x1C0027C48 (Template_pxzqq.c)
 *     Template_qqqzz @ 0x1C0027D24 (Template_qqqzz.c)
 *     Template_qqzz @ 0x1C0027E3C (Template_qqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029F90 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C002A394 (TraceLoggingWriteMiracastSessionStart.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0168BD0 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C0168F90 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C016903C (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0169234 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01694B0 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0169E20 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastPerfCleanupPerfTrack @ 0x1C0170A28 (DpiMiracastPerfCleanupPerfTrack.c)
 *     DpiMiracastPerfInitialPerfTrack @ 0x1C0170A6C (DpiMiracastPerfInitialPerfTrack.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(unsigned __int64 a1, KPROCESSOR_MODE a2, struct _LIST_ENTRY *a3)
{
  KPROCESSOR_MODE v4; // bl
  __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // r15d
  NTSTATUS SystemThread; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  void *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  NTSTATUS (__fastcall *v19)(void *, ACCESS_MASK, struct _OBJECT_TYPE *, KPROCESSOR_MODE, PVOID *, POBJECT_HANDLE_INFORMATION); // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 DeviceContextFromName; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // r13d
  struct _IO_TIMER *PoolWithTag; // rax
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  int v42; // ecx
  char v43; // cl
  char v44; // dl
  char v45; // r9
  char v46; // r10
  int v47; // ecx
  int v48; // r8d
  int v49; // edx
  int v50; // eax
  char v51; // al
  unsigned int v52; // eax
  char v53; // al
  __int64 v54; // rcx
  __int64 v55; // r8
  _DWORD *v56; // r13
  int Context; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // rcx
  int v62; // eax
  _DWORD *v63; // rax
  int v64; // ecx
  _DWORD *v65; // rax
  int v66; // ecx
  _DWORD *v67; // rax
  int v68; // ecx
  _DWORD *v69; // rax
  MIRACAST_CHUNK_LIST *v70; // rcx
  _DWORD *v71; // rdx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  MIRACAST_CHUNK_LIST *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // r13
  _QWORD *v77; // rax
  int v78; // eax
  struct _KEVENT *v79; // rsi
  unsigned __int16 *v80; // rax
  int v81; // edx
  int v82; // eax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  MIRACAST_CHUNK_LIST *v86; // rcx
  MIRACAST_CHUNK_LIST *v87; // rcx
  MIRACAST_CHUNK_LIST *v88; // rcx
  MIRACAST_CHUNK_LIST *v89; // rcx
  MIRACAST_CHUNK_LIST *v90; // rcx
  MIRACAST_CHUNK_LIST *v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // r8
  void *v94; // rdi
  __int64 v95; // rdi
  PCLIENT_ID ClientId; // [rsp+20h] [rbp-E0h]
  char v98; // [rsp+50h] [rbp-B0h]
  char v100; // [rsp+52h] [rbp-AEh]
  struct _DEVICE_OBJECT DeviceObject; // [rsp+53h] [rbp-ADh] BYREF

  *(_OWORD *)((char *)&DeviceObject.CurrentIrp + 5) = a1;
  *(struct _LIST_ENTRY **)((char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Flink + 5) = a3;
  v4 = a2;
  *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 5) = 0LL;
  v5 = 0LL;
  v6 = 2;
  *(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5) = 0LL;
  v7 = 0LL;
  v8 = 0;
  v100 = 0;
  DeviceObject.Size = 0;
  LOWORD(DeviceObject.ReferenceCount) = 0;
  v98 = 0;
  DeviceObject.Type = 0;
  if ( byte_1C0046C93 )
  {
    SystemThread = PsCreateSystemThread(
                     (PHANDLE)((char *)&DeviceObject.Characteristics + 1),
                     0x1FFFFFu,
                     0LL,
                     0LL,
                     0LL,
                     DpiFdoStartAdapterThread,
                     (PVOID)4);
    v11 = SystemThread;
    if ( SystemThread < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v12[3] = &DxgkMiracastStartMiracastSession;
      v12[4] = PsCreateSystemThread;
      v12[5] = v11;
      WdLogEvent5_WdError(v12);
      v8 = 15;
LABEL_4:
      v6 = -2147483647;
      goto LABEL_163;
    }
    *(_QWORD *)(&DeviceObject.StackSize + 1) = -100000000LL;
    v11 = ZwWaitForSingleObject(
            *(HANDLE *)((char *)&DeviceObject.Characteristics + 1),
            0,
            (PLARGE_INTEGER)(&DeviceObject.StackSize + 1));
    ZwClose(*(HANDLE *)((char *)&DeviceObject.Characteristics + 1));
    if ( (_DWORD)v11 == 258 )
    {
      memset((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 5, 0, 0x40uLL);
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v15[3] = &DxgkMiracastStartMiracastSession;
      v15[4] = ZwWaitForSingleObject;
      v15[5] = 258LL;
      WdLogEvent5_WdError(v15);
      DxgkDiagInitializeCodePointPacket((PVOID *)((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 5), 69, 258, 2, 0x10u);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((char *)&DeviceObject.Queue.Wcb.CurrentIrp + 5));
    }
    else if ( (int)v11 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v23[3] = &DxgkMiracastStartMiracastSession;
      v23[4] = ZwWaitForSingleObject;
      v23[5] = v11;
      WdLogEvent5_WdError(v23);
      v8 = 17;
      goto LABEL_4;
    }
    v4 = a2;
  }
  AcquireMiniportListMutex();
  v16 = *(void **)(a1 + 528);
  if ( v16 )
  {
    LODWORD(v11) = ObReferenceObjectByHandle(
                     v16,
                     0x1F0003u,
                     (POBJECT_TYPE)ExEventObjectType,
                     v4,
                     (PVOID *)((char *)&DeviceObject.DeviceExtension + 5),
                     0LL);
    *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 5) = *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.DeviceExtension + 5);
    if ( (int)v11 < 0 )
    {
      v8 = 1;
      v6 = -2147483640;
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v19 = ObReferenceObjectByHandle;
      v18[5] = -2147483640LL;
LABEL_11:
      v18[4] = v19;
      v18[3] = &DxgkMiracastStartMiracastSession;
      WdLogEvent5_WdError(v18);
      goto LABEL_12;
    }
  }
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  v7 = DeviceContextFromName;
  if ( !DeviceContextFromName )
  {
    LODWORD(v11) = -1073741275;
    v8 = 2;
    v6 = -2147483642;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v19 = (NTSTATUS (__fastcall *)(void *, ACCESS_MASK, struct _OBJECT_TYPE *, KPROCESSOR_MODE, PVOID *, POBJECT_HANDLE_INFORMATION))DpiMiracastGetDeviceContextFromName;
    v18[5] = -2147483642LL;
    goto LABEL_11;
  }
  *(_DWORD *)(DeviceContextFromName + 704) = *(_DWORD *)(a1 + 524);
  v25 = *(_QWORD *)(DeviceContextFromName + 216);
  if ( v25 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(v25 + 2 * v5) );
  }
  v26 = *(_QWORD *)(v7 + 224);
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(v26 + 2 * v27) );
  }
  else
  {
    LOWORD(v27) = 0;
  }
  *(_DWORD *)((char *)&DeviceObject.NextDevice + 5) = (unsigned __int16)v5;
  v28 = 2 * ((unsigned __int16)v5 + (unsigned __int16)v27) + 68;
  PoolWithTag = (struct _IO_TIMER *)ExAllocatePoolWithTag(PagedPool, v28, 0x74727044u);
  *(PIO_TIMER *)((char *)&DeviceObject.Timer + 5) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v28);
    v30 = *(__int64 *)((char *)&DeviceObject.Timer + 5);
    (*(_DWORD **)((char *)&DeviceObject.Timer + 5))[1] = v28;
    v31 = v30 + 64;
    *(_DWORD *)v30 = 19;
    *(_DWORD *)(v30 + 40) = 0;
    *(_QWORD *)(v30 + 32) = 0LL;
    *(_QWORD *)(v30 + 8) = 0LL;
    *(_QWORD *)(v30 + 16) = 0LL;
    *(_QWORD *)(v30 + 24) = 0LL;
    *(_WORD *)(v30 + 60) = v5;
    *(_WORD *)(v30 + 62) = v27;
    if ( (_WORD)v5 )
      memmove((void *)(v30 + 64), *(const void **)(v7 + 216), 2LL * (unsigned __int16)v5);
    if ( (_WORD)v27 )
      memmove(
        (void *)(v31 + 2LL * (*(_DWORD *)((char *)&DeviceObject.NextDevice + 5) + 1)),
        *(const void **)(v7 + 224),
        2LL * (unsigned __int16)v27);
  }
  v5 = *(__int64 *)((char *)&DeviceObject.DriverObject + 5);
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(v7 + 184)) < 0
    || !*(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5) )
  {
    LODWORD(v11) = -1073741637;
    v6 = -2147483647;
    v8 = 4;
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v85[3] = &DxgkMiracastStartMiracastSession;
    v85[4] = 0LL;
    v85[5] = -2147483647LL;
    WdLogEvent5_WdError(v85);
    goto LABEL_12;
  }
  HIBYTE(DeviceObject.Size) = 1;
  *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.NextDevice + 5) = (struct _DEVICE_OBJECT *)&(*(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5))[5].MajorFunction[8];
  if ( (*(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5))[5].MajorFunction[8] )
  {
    LODWORD(v11) = -1073741637;
    v8 = 6;
    v6 = -2147483647;
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v33[3] = &DxgkMiracastStartMiracastSession;
    v33[4] = 0LL;
    v33[5] = -2147483647LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_12;
  }
  IoAcquireRemoveLockEx(
    (PIO_REMOVE_LOCK)&(*(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5))->DriverName.Buffer,
    (PVOID)v7,
    &File,
    1u,
    0x20u);
  HIBYTE(DeviceObject.Type) = 1;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v7 + 32);
  *(_QWORD *)(v7 + 88) = KeGetCurrentThread();
  v100 = 1;
  if ( *(_DWORD *)(v7 + 288) )
  {
    LODWORD(v11) = -1073741661;
    v6 = -2147483647;
    v8 = 6;
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v35[3] = &DxgkMiracastStartMiracastSession;
    v35[4] = v7;
    v35[5] = -2147483647LL;
    WdLogEvent5_WdError(v35);
LABEL_38:
    v5 = *(__int64 *)((char *)&DeviceObject.DriverObject + 5);
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(v7 + 280) )
  {
    LODWORD(v11) = -1073741275;
    v6 = -2147483642;
    v8 = 2;
    v36 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v36 + 24) = &DxgkMiracastStartMiracastSession;
    *(_QWORD *)(v36 + 32) = v7;
    WdLogEvent5_WdEvent(v36);
    goto LABEL_38;
  }
  v37 = *(__int64 *)((char *)&DeviceObject.CurrentIrp + 5);
  *(_QWORD *)(v7 + 512) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v7 + 540) = *(_DWORD *)(v7 + 536);
  *(_DWORD *)(v7 + 536) = 0;
  *(_BYTE *)(v7 + 462) = 0;
  *(_DWORD *)(v7 + 532) = 0;
  *(_DWORD *)(v7 + 544) = 0;
  *(_DWORD *)(v7 + 552) = dword_1C0046FE0;
  *(_QWORD *)(v7 + 556) = 0LL;
  *(_DWORD *)(v7 + 528) = 0;
  *(_BYTE *)(v7 + 463) = 0;
  *(_QWORD *)(v7 + 564) = 0LL;
  *(_QWORD *)(v7 + 572) = 0LL;
  *(_QWORD *)(v7 + 580) = 0LL;
  *(_QWORD *)(v7 + 592) = 0LL;
  *(_QWORD *)(v7 + 696) = 0LL;
  v38 = *(_DWORD *)(v37 + 524);
  *(_DWORD *)(v7 + 616) = -1;
  *(_DWORD *)(v7 + 704) = v38;
  *(_DWORD *)(v7 + 620) = 0;
  LOBYTE(DeviceObject.ReferenceCount) = 1;
  memset((void *)(v7 + 624), 0, 0x42uLL);
  *(_DWORD *)(v7 + 692) = 256;
  memmove((void *)(v7 + 112), (const void *)(v37 + 536), 0x10uLL);
  if ( ++*(_DWORD *)(v7 + 312) >= 0xFFFFFFFE )
    *(_DWORD *)(v7 + 312) = 0;
  v5 = *(__int64 *)((char *)&DeviceObject.DriverObject + 5);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_pxzqq(
      v39,
      &EventMiracastStartMiracastSession,
      v40,
      (*(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5))->DriverExtension,
      *(_QWORD *)(v7 + 96),
      *(_QWORD *)(v7 + 152),
      *(_DWORD *)(v7 + 536),
      *(_DWORD *)(v7 + 544));
  *(_DWORD *)(v7 + 196) = *(&(*(struct _DRIVER_OBJECT **)((char *)&DeviceObject.DriverObject + 5))[3].Flags + 1);
  *(_DWORD *)(v7 + 200) = *(_DWORD *)(v5 + 1032);
  v41 = *(_DWORD *)(v5 + 1024);
  if ( v41 == 1 )
  {
    v42 = (unsigned __int16)*(_DWORD *)(v5 + 1032);
  }
  else
  {
    if ( v41 != 2 )
    {
      *(_DWORD *)(v7 + 204) = 0;
      goto LABEL_79;
    }
    v43 = *(_BYTE *)(v5 + 1032);
    if ( ((unsigned __int8)(v43 - 48) <= 9u || (unsigned __int8)((v43 | 0x20) - 97) <= 5u)
      && ((v44 = *(_BYTE *)(v5 + 1033), (unsigned __int8)(v44 - 48) <= 9u) || (unsigned __int8)((v44 | 0x20) - 97) <= 5u)
      && ((v45 = *(_BYTE *)(v5 + 1034), (unsigned __int8)(v45 - 48) <= 9u) || (unsigned __int8)((v45 | 0x20) - 97) <= 5u)
      && ((v46 = *(_BYTE *)(v5 + 1035), (unsigned __int8)(v46 - 48) <= 9u) || (unsigned __int8)((v46 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v5 + 1032) - 48) > 9u )
        v47 = (v43 - 7) & 0xF;
      else
        v47 = v43 - 48;
      if ( (unsigned __int8)(v44 - 48) > 9u )
        v48 = (v44 - 7) & 0xF;
      else
        v48 = v44 - 48;
      if ( (unsigned __int8)(v45 - 48) > 9u )
        v49 = (v45 - 7) & 0xF;
      else
        v49 = v45 - 48;
      if ( (unsigned __int8)(v46 - 48) > 9u )
        v50 = (v46 - 7) & 0xF;
      else
        v50 = v46 - 48;
      v42 = v50 | (16 * (v49 | (16 * (v48 | (16 * v47)))));
    }
    else
    {
      v42 = *(unsigned __int16 *)(v5 + 1034);
    }
    v51 = *(_BYTE *)(v5 + 1028);
    if ( v51 == 32 || v51 == 95 )
    {
      v53 = *(_BYTE *)(v5 + 1029);
      if ( v53 == 32 || v53 == 95 )
        v52 = *(_DWORD *)(v5 + 1028) & 0xFFFF0000;
      else
        v52 = (*(_DWORD *)(v5 + 1028) & 0xFFFFFF00) << 8;
      goto LABEL_77;
    }
  }
  v52 = *(_DWORD *)(v5 + 1028) << 16;
LABEL_77:
  *(_DWORD *)(v7 + 204) = v52 | v42;
LABEL_79:
  DpiMiracastPerfReportGlobalConfiguration(v7);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    Template_qqzz(
      v54,
      &EventMiracastPerfTrackStartMiracastSession,
      v55,
      *(unsigned int *)(v7 + 312),
      *(_DWORD *)(v7 + 204),
      0LL,
      *(_QWORD *)(v7 + 232));
  *(_BYTE *)(v7 + 461) = 0;
  *(_QWORD *)((char *)&DeviceObject.Queue.Wcb.1 + 21) = DpiMiracastCbSendUserModeMessage;
  v56 = (_DWORD *)(v7 + 328);
  *(struct _LIST_ENTRY **)((char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Blink + 5) = (struct _LIST_ENTRY *)v7;
  *(PDRIVER_CONTROL *)((char *)&DeviceObject.Queue.Wcb.DeviceRoutine + 5) = (PDRIVER_CONTROL)DpiMiracastCbReportChunkInfo;
  Context = DpiMiracastDdiMiracastCreateContext(
              v5,
              (char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Blink + 5,
              v7 + 320,
              v7 + 328);
  v11 = Context;
  if ( Context < 0 )
  {
    if ( Context == -1073740024 )
    {
      v8 = 7;
      v6 = -2147483646;
    }
    else
    {
      v8 = 8;
      v6 = -2147483647;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v58);
    v60[4] = DpiMiracastDdiMiracastCreateContext;
    v60[3] = &DxgkMiracastStartMiracastSession;
    v60[5] = v11;
    WdLogEvent5_WdError(v60);
    *v56 = -1;
    *(_QWORD *)(v7 + 320) = 0LL;
    goto LABEL_12;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(v7, 0, v59);
  v62 = *(_DWORD *)(v5 + 1848);
  LOBYTE(DeviceObject.Size) = 1;
  if ( *v56 != v62 )
  {
    LODWORD(v11) = -1073741811;
    v6 = -2147483647;
    v8 = 9;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v61);
    v19 = (NTSTATUS (__fastcall *)(void *, ACCESS_MASK, struct _OBJECT_TYPE *, KPROCESSOR_MODE, PVOID *, POBJECT_HANDLE_INFORMATION))DpiMiracastDdiMiracastCreateContext;
    v18[5] = -2147483647LL;
    goto LABEL_11;
  }
  *(_DWORD *)(v7 + 300) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(v7 + 460) = 0;
  *(_QWORD *)(v7 + 368) = 0LL;
  *(_WORD *)(v5 + 1872) = 0;
  *(_DWORD *)(v5 + 1876) = 0;
  v63 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v63 )
  {
    v64 = *(_DWORD *)(v5 + 1840);
    v63[4] = 0;
    v63[5] = v64;
    *((_QWORD *)v63 + 1) = v63;
    *(_QWORD *)v63 = v63;
  }
  else
  {
    v63 = 0LL;
  }
  *(_QWORD *)(v7 + 360) = v63;
  v65 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v65 )
  {
    v66 = *(_DWORD *)(v5 + 1840);
    v65[4] = 0;
    v65[5] = v66;
    *((_QWORD *)v65 + 1) = v65;
    *(_QWORD *)v65 = v65;
  }
  else
  {
    v65 = 0LL;
  }
  *(_QWORD *)(v5 + 1880) = v65;
  v67 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v67 )
  {
    v68 = *(_DWORD *)(v5 + 1840);
    v67[4] = 0;
    v67[5] = v68;
    *((_QWORD *)v67 + 1) = v67;
    *(_QWORD *)v67 = v67;
  }
  else
  {
    v67 = 0LL;
  }
  *(_QWORD *)(v5 + 1888) = v67;
  v69 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  v71 = v69;
  if ( v69 )
  {
    v70 = (MIRACAST_CHUNK_LIST *)*(unsigned int *)(v5 + 1840);
    v69[4] = 0;
    v69[5] = (_DWORD)v70;
    *((_QWORD *)v69 + 1) = v69;
    *(_QWORD *)v69 = v69;
  }
  else
  {
    v71 = 0LL;
  }
  *(_QWORD *)(v5 + 1896) = v71;
  if ( !*(_QWORD *)(v7 + 360) )
    goto LABEL_124;
  v70 = *(MIRACAST_CHUNK_LIST **)(v5 + 1880);
  if ( !v70 || !*(_QWORD *)(v5 + 1888) || !v71 )
    goto LABEL_124;
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v70, 0x14u) )
  {
LABEL_105:
    v8 = 11;
LABEL_106:
    v6 = -2147483647;
    LODWORD(v11) = -1073741801;
    v72 = (_QWORD *)WdLogNewEntry5_WdLowResource(v70);
    v72[3] = &DxgkMiracastStartMiracastSession;
    v72[4] = ExAllocatePoolWithTag;
    v72[5] = -2147483647LL;
    WdLogEvent5_WdLowResource(v72);
    goto LABEL_12;
  }
  *(_DWORD *)(v5 + 1876) = 20;
  v73 = operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v73 )
  {
    v73[2] = 0LL;
    v73[1] = v73;
    *v73 = v73;
  }
  else
  {
    v73 = 0LL;
  }
  *(_QWORD *)(v7 + 376) = v73;
  v74 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v74 )
  {
    *((_QWORD *)v74 + 2) = 0LL;
    *((_QWORD *)v74 + 1) = v74;
    *(_QWORD *)v74 = v74;
  }
  else
  {
    v74 = 0LL;
  }
  *(_QWORD *)(v7 + 384) = v74;
  if ( !*(_QWORD *)(v7 + 376) || !v74 )
  {
LABEL_124:
    v8 = 10;
    goto LABEL_106;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v74, 0x14u) )
    goto LABEL_105;
  DpiMiracastPerfInitialPerfTrack((PVOID)v7);
  KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.DeviceContext + 5));
  *(_QWORD *)(v7 + 304) = *(_QWORD *)(v5 + 24);
  **(_QWORD **)((char *)&DeviceObject.NextDevice + 5) = v7;
  *(_QWORD *)(v5 + 1864) = *(_QWORD *)(v7 + 96);
  *(_QWORD *)(v7 + 264) = *(_QWORD *)(v5 + 3248);
  *(_QWORD *)(v7 + 272) = *(_QWORD *)(v5 + 3256);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.DeviceContext + 5));
  v98 = 1;
  *(PVPB *)((char *)&DeviceObject.Vpb + 5) = (PVPB)(v5 + 3280);
  *(_DWORD *)((char *)&DeviceObject.NextDevice + 5) = *(unsigned __int16 *)(v5 + 3280) + 64;
  *(struct _IRP **)((char *)&DeviceObject.CurrentIrp + 5) = (struct _IRP *)*(unsigned int *)((char *)&DeviceObject.NextDevice
                                                                                           + 5);
  v76 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)((char *)&DeviceObject.NextDevice + 5), 0x74727044u);
  if ( !v76 )
  {
    LODWORD(v11) = -1073741801;
    v8 = 12;
    v6 = -2147483647;
    v77 = (_QWORD *)WdLogNewEntry5_WdLowResource(v75);
    v77[4] = ExAllocatePoolWithTag;
    v77[3] = &DxgkMiracastStartMiracastSession;
    v77[5] = -2147483647LL;
    WdLogEvent5_WdLowResource(v77);
    goto LABEL_12;
  }
  _InterlockedAdd((volatile signed __int32 *)(v7 + 24), 1u);
  _InterlockedXor((volatile signed __int32 *)(v7 + 28), v7);
  v78 = *(_DWORD *)(v7 + 288);
  v79 = *(struct _KEVENT **)((char *)&DeviceObject.AttachedDevice + 5);
  *(_QWORD *)(v7 + 344) = *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 5);
  *(_DWORD *)(v7 + 292) = v78;
  *(_DWORD *)(v7 + 288) = 1;
  ++dword_1C0046FB0;
  KeClearEvent(*(PRKEVENT *)(v7 + 336));
  if ( v79 )
    KeClearEvent(v79);
  memset(v76, 0, *(size_t *)((char *)&DeviceObject.CurrentIrp + 5));
  v5 = *(__int64 *)((char *)&DeviceObject.DriverObject + 5);
  *v76 = v7;
  *((_DWORD *)v76 + 2) = *(_DWORD *)(v7 + 312);
  *(_QWORD *)((char *)v76 + 12) = *(_QWORD *)(v7 + 96);
  *(_QWORD *)((char *)v76 + 20) = *(_QWORD *)(v5 + 1416);
  *((_DWORD *)v76 + 7) = *(_DWORD *)(v7 + 312);
  *((_DWORD *)v76 + 8) = dword_1C0046FB4;
  *((_BYTE *)v76 + 36) = *(_BYTE *)(v5 + 1436);
  *((_BYTE *)v76 + 37) = BYTE1(DeviceObject.ReferenceCount);
  v80 = *(unsigned __int16 **)((char *)&DeviceObject.Vpb + 5);
  *(_OWORD *)(v76 + 5) = *(_OWORD *)(v7 + 112);
  memmove(v76 + 7, *(const void **)(v5 + 3288), *v80);
  LOBYTE(v81) = 1;
  LODWORD(ClientId) = *(_DWORD *)((char *)&DeviceObject.NextDevice + 5) - 12;
  v82 = DpiMiracastSendAsyncUserModeRequest(
          v7,
          v81,
          2295812,
          (int)v76 + 12,
          (size_t)ClientId,
          0LL,
          0,
          (__int64)DpiMiracastStartSessionRequestCallback,
          (__int64)v76,
          &DeviceObject);
  v11 = v82;
  if ( v82 < 0 )
  {
    v6 = -2147483647;
    v8 = 13;
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v83);
    v84[4] = DpiMiracastSendAsyncUserModeRequest;
    v84[3] = &DxgkMiracastStartMiracastSession;
    v84[5] = v11;
    WdLogEvent5_WdError(v84);
    *(_DWORD *)(v7 + 288) = *(_DWORD *)(v7 + 292);
    --dword_1C0046FB0;
    if ( !LOBYTE(DeviceObject.Type) )
    {
      ExFreePoolWithTag(v76, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)v7, v7);
    }
LABEL_12:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      if ( v7 )
      {
        v21 = *(_QWORD *)(v7 + 232);
        v22 = *(unsigned int *)(v7 + 204);
      }
      else
      {
        v21 = 0LL;
        v22 = 0LL;
      }
      Template_qqqzz(v22, &EventMiracastStartMiracastSessionFail, v20, v8, v11, v22, 0LL, v21);
    }
    if ( LOBYTE(DeviceObject.ReferenceCount) )
    {
      *(_DWORD *)(v7 + 296) = v6;
      *(_DWORD *)(v7 + 700) = v8;
      if ( LOBYTE(DeviceObject.Size) )
      {
        DpiMiracastDdiMiracastDestroyContext(v5, *(_QWORD *)(v7 + 320));
        *(_DWORD *)(v7 + 328) = -1;
        *(_QWORD *)(v7 + 320) = 0LL;
      }
      if ( v98 )
      {
        *(_QWORD *)(v7 + 344) = 0LL;
        KeAcquireInStackQueuedSpinLock(
          &SpinLock,
          (PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.DeviceContext + 5));
        *(_QWORD *)(v7 + 304) = 0LL;
        *(_QWORD *)(v5 + 1856) = 0LL;
        *(_QWORD *)(v5 + 1864) = 0LL;
        *(_QWORD *)(v7 + 264) = 0LL;
        *(_QWORD *)(v7 + 272) = 0LL;
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((char *)&DeviceObject.Queue.Wcb.DeviceContext + 5));
        KeFlushQueuedDpcs();
      }
      v86 = *(MIRACAST_CHUNK_LIST **)(v7 + 360);
      if ( v86 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v86);
        *(_QWORD *)(v7 + 360) = 0LL;
      }
      v87 = *(MIRACAST_CHUNK_LIST **)(v5 + 1880);
      if ( v87 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v87);
        *(_QWORD *)(v5 + 1880) = 0LL;
      }
      v88 = *(MIRACAST_CHUNK_LIST **)(v5 + 1888);
      if ( v88 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v88);
        *(_QWORD *)(v5 + 1888) = 0LL;
      }
      v89 = *(MIRACAST_CHUNK_LIST **)(v5 + 1896);
      if ( v89 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v89);
        *(_QWORD *)(v5 + 1896) = 0LL;
      }
      v90 = *(MIRACAST_CHUNK_LIST **)(v7 + 376);
      if ( v90 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v90);
        *(_QWORD *)(v7 + 376) = 0LL;
      }
      v91 = *(MIRACAST_CHUNK_LIST **)(v7 + 384);
      if ( v91 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v91);
        *(_QWORD *)(v7 + 384) = 0LL;
      }
      DpiMiracastPerfCleanupPerfTrack(v7);
      KeSetEvent(*(PRKEVENT *)(v7 + 336), 0, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqzz(
          v92,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v93,
          *(unsigned int *)(v7 + 312),
          *(_DWORD *)(v7 + 204),
          *(_QWORD *)(v7 + 256),
          *(_QWORD *)(v7 + 232));
      TraceLoggingWriteMiracastSessionStart(v7);
    }
    if ( !v100 )
      goto LABEL_150;
    goto LABEL_149;
  }
  *(_DWORD *)(v7 + 296) = 2;
  DpiMiracastBroadcastDeviceStateChange(v7);
LABEL_149:
  *(_QWORD *)(v7 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v7 + 32);
LABEL_150:
  if ( HIBYTE(DeviceObject.Type) && v6 < 0 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), (PVOID)v7, 0x20u);
  if ( HIBYTE(DeviceObject.Size) )
  {
    if ( *(_BYTE *)(v5 + 451) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 2680LL));
      v5 = *(__int64 *)((char *)&DeviceObject.DriverObject + 5);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 < 0 && v7 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v7, v7);
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( v6 < 0 )
  {
    v94 = *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 5);
    if ( *(struct _DEVICE_OBJECT **)((char *)&DeviceObject.AttachedDevice + 5) )
    {
      KeSetEvent(*(PRKEVENT *)((char *)&DeviceObject.AttachedDevice + 5), 0, 0);
      ObfDereferenceObject(v94);
    }
  }
LABEL_163:
  v95 = *(__int64 *)((char *)&DeviceObject.Timer + 5);
  **(_DWORD **)((char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Flink + 5) = v11;
  if ( v95 )
  {
    *(_DWORD *)(v95 + 48) = v11;
    *(_DWORD *)(v95 + 52) = v6;
    *(_DWORD *)(v95 + 56) = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v95);
    ExFreePoolWithTag((PVOID)v95, 0);
  }
  else
  {
    memset((char *)&DeviceObject.Dpc.0 + 5, 0, 0x40uLL);
    DxgkDiagInitializeCodePointPacket(
      (union _KDPC::$6963FFE55BC4627E7AE37E9650A61BA0 *)((char *)&DeviceObject.Dpc.0 + 5),
      69,
      v11,
      v6,
      v8);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)((char *)&DeviceObject.Dpc.0 + 5));
  }
  return (unsigned int)v6;
}
