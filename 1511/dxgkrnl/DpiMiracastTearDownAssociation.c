/*
 * XREFs of DpiMiracastTearDownAssociation @ 0x1C00256C4
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025250 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C016E4B0 (DpiMiracastHandleStopSessionDone.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C016EBD0 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C016ECD0 (DpiMiracastStopSessionRequestCallback.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkSqmOptedIn @ 0x1C000BF30 (DxgkSqmOptedIn.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     DpIndicateChildStatus @ 0x1C0022A50 (DpIndicateChildStatus.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0023744 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C0023ECC (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     Template_qqzz @ 0x1C0027A30 (Template_qqzz.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C002A48C (TraceLoggingWriteMiracastSessionStop.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C016D340 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C016D7BC (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastPerfCleanupPerfTrack @ 0x1C01752A8 (DpiMiracastPerfCleanupPerfTrack.c)
 */

void __fastcall DpiMiracastTearDownAssociation(char *P, int a2, int a3, unsigned int a4, char a5)
{
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  MIRACAST_CHUNK_LIST *v16; // rcx
  MIRACAST_CHUNK_LIST *v17; // rcx
  MIRACAST_CHUNK_LIST *v18; // rcx
  MIRACAST_CHUNK_LIST *v19; // rcx
  MIRACAST_CHUNK_LIST *v20; // rcx
  MIRACAST_CHUNK_LIST *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r15
  const wchar_t *v26; // rdx
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  const wchar_t *v31; // rdx
  int v32; // r15d
  void *v33; // rcx
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v37[16]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v38[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v40[16]; // [rsp+180h] [rbp+80h] BYREF
  int v41; // [rsp+190h] [rbp+90h]
  int v42; // [rsp+198h] [rbp+98h]
  int v43; // [rsp+1A0h] [rbp+A0h]
  int v44; // [rsp+1A8h] [rbp+A8h]
  int v45; // [rsp+1B0h] [rbp+B0h]
  int v46; // [rsp+1B8h] [rbp+B8h]
  int v47; // [rsp+1C0h] [rbp+C0h]
  int v48; // [rsp+1C8h] [rbp+C8h]
  int v49; // [rsp+1D0h] [rbp+D0h]
  int v50; // [rsp+1D8h] [rbp+D8h]
  int v51; // [rsp+1E0h] [rbp+E0h]
  int v52; // [rsp+1E8h] [rbp+E8h]
  int v53; // [rsp+1F0h] [rbp+F0h]
  int v54; // [rsp+1F8h] [rbp+F8h]
  int v55; // [rsp+200h] [rbp+100h]
  int v56; // [rsp+208h] [rbp+108h]
  int v57; // [rsp+210h] [rbp+110h]
  int v58; // [rsp+218h] [rbp+118h]
  int v59; // [rsp+220h] [rbp+120h]
  int v60; // [rsp+228h] [rbp+128h]
  int v61; // [rsp+230h] [rbp+130h]
  int v62; // [rsp+238h] [rbp+138h]
  int v63; // [rsp+240h] [rbp+140h]
  int v64; // [rsp+248h] [rbp+148h]
  int v65; // [rsp+250h] [rbp+150h]
  int v66; // [rsp+258h] [rbp+158h]
  int v67; // [rsp+260h] [rbp+160h]
  int v68; // [rsp+268h] [rbp+168h]
  int v69; // [rsp+270h] [rbp+170h]
  int v70; // [rsp+278h] [rbp+178h]
  _BYTE v71[16]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v72[16]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v73[16]; // [rsp+2A0h] [rbp+1A0h] BYREF

  if ( !a5 )
    AcquireMiniportListMutex();
  if ( *((_DWORD *)P + 80) != a2 && a2 != -2 )
    goto LABEL_47;
  v9 = *((_QWORD *)P + 39);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 64);
    v34 = 0LL;
    v35 = 0LL;
    if ( !a5 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 483) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
      *((_QWORD *)P + 11) = KeGetCurrentThread();
    }
    *((_DWORD *)P + 74) = a3;
    if ( a4 <= 0x7F )
    {
      *((_DWORD *)P + 73) = *((_DWORD *)P + 72);
      *((_DWORD *)P + 72) = 0;
      DpiMiracastBroadcastDeviceStateChange(P);
    }
    DpiMiracastDdiMiracastDestroyContext(v11, *((_QWORD *)P + 41));
    DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 1, v12);
    if ( !P[471] && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      Template_qqzz(
        v13,
        &EventMiracastPerfTrackStartMiracastSessionNoSend,
        v14,
        *((unsigned int *)P + 80),
        *((_DWORD *)P + 51),
        *((_QWORD *)P + 32),
        *((_QWORD *)P + 29));
    v15 = *(_QWORD *)(v11 + 24);
    HIDWORD(v34) = *((_DWORD *)P + 84);
    LODWORD(v34) = 3;
    LOBYTE(v35) = 0;
    DpIndicateChildStatus(v15, (unsigned int *)&v34, v14);
    *((_QWORD *)P + 41) = 0LL;
    *((_DWORD *)P + 84) = -1;
    KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    *((_QWORD *)P + 39) = 0LL;
    *(_QWORD *)(v11 + 1896) = 0LL;
    *(_QWORD *)(v11 + 1904) = 0LL;
    *((_QWORD *)P + 33) = 0LL;
    *((_QWORD *)P + 34) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeFlushQueuedDpcs();
    v16 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 46);
    if ( v16 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v16);
    *((_QWORD *)P + 46) = 0LL;
    v17 = *(MIRACAST_CHUNK_LIST **)(v11 + 1920);
    if ( v17 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v17);
    v18 = *(MIRACAST_CHUNK_LIST **)(v11 + 1928);
    *(_QWORD *)(v11 + 1920) = 0LL;
    if ( v18 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v18);
    v19 = *(MIRACAST_CHUNK_LIST **)(v11 + 1936);
    *(_QWORD *)(v11 + 1928) = 0LL;
    if ( v19 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v19);
    *(_QWORD *)(v11 + 1936) = 0LL;
    v20 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 48);
    if ( v20 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v20);
    v21 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 49);
    *((_QWORD *)P + 48) = 0LL;
    if ( v21 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v21);
    *((_QWORD *)P + 49) = 0LL;
    DpiMiracastPerfCleanupPerfTrack(P);
    v22 = (struct _KEVENT *)*((_QWORD *)P + 44);
    P[473] = 0;
    if ( v22 )
    {
      KeSetEvent(v22, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 44));
      *((_QWORD *)P + 44) = 0LL;
    }
    v23 = (struct _KEVENT *)*((_QWORD *)P + 45);
    if ( v23 )
      KeSetEvent(v23, 0, 0);
    KeSetEvent(*((PRKEVENT *)P + 43), 0, 0);
    --dword_1C0047030;
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)P);
    v24 = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)P + 66) = MEMORY[0xFFFFF78000000014];
    v25 = (v24 - *((_QWORD *)P + 65)) / 10000000;
    if ( DxgkSqmOptedIn() )
    {
      v26 = (const wchar_t *)*((_QWORD *)P + 27);
      v38[6] = *((_DWORD *)P + 136);
      v38[10] = *((_DWORD *)P + 138);
      v38[14] = *((_DWORD *)P + 139);
      v38[18] = dword_1C0047060 - *((_DWORD *)P + 140);
      v38[22] = *((_DWORD *)P + 141);
      v38[26] = *((_DWORD *)P + 134);
      v38[30] = *((_QWORD *)P + 62) >> 16;
      v38[34] = *((_QWORD *)P + 63) >> 16;
      v38[38] = *((_QWORD *)P + 64) >> 16;
      v38[42] = *((_DWORD *)P + 122);
      v27 = *((_DWORD *)P + 137);
      v38[0] = 1;
      v38[4] = 1;
      v38[8] = 1;
      v38[12] = 1;
      v38[16] = 1;
      v38[20] = 1;
      v38[24] = 1;
      v38[28] = 1;
      v38[32] = 1;
      v38[36] = 1;
      v38[40] = 1;
      v38[44] = 1;
      v38[46] = v27;
      v38[2] = v25;
      DxgkSqmCreateStringStreamEntry((__int64)v39, v26);
      DxgkSqmCreateStringStreamEntry((__int64)v40, *((const wchar_t **)P + 28));
      v28 = *((_DWORD *)P + 145);
      v42 = *((_DWORD *)P + 135);
      v44 = *((_DWORD *)P + 190);
      v46 = *((_DWORD *)P + 191);
      v48 = *((_DWORD *)P + 192);
      v50 = *((_DWORD *)P + 193);
      v52 = *((_DWORD *)P + 142);
      v54 = *((_DWORD *)P + 143);
      v29 = (unsigned __int16)*((_DWORD *)P + 144);
      v58 = *((_DWORD *)P + 146);
      v30 = *((_DWORD *)P + 178);
      v56 = v29 + (v28 << 16);
      v60 = v30;
      v41 = 1;
      v43 = 1;
      v45 = 1;
      v47 = 1;
      v49 = 1;
      v51 = 1;
      v53 = 1;
      v55 = 1;
      v57 = 1;
      v59 = 1;
      v31 = (const wchar_t *)*((_QWORD *)P + 32);
      v62 = *((_DWORD *)P + 177);
      v64 = *((_DWORD *)P + 147);
      v66 = *((_DWORD *)P + 148);
      v68 = *((_DWORD *)P + 150);
      v70 = *((_DWORD *)P + 151);
      v61 = 1;
      v63 = 1;
      v65 = 1;
      v67 = 1;
      v69 = 1;
      DxgkSqmCreateStringStreamEntry((__int64)v71, v31);
      DxgkSqmCreateStringStreamEntry((__int64)v72, *((const wchar_t **)P + 30));
      DxgkSqmCreateStringStreamEntry((__int64)v73, *(const wchar_t **)(v11 + 3320));
      DxgkSqmAddToStream(12122LL, 32LL, v38);
    }
    TraceLoggingWriteMiracastSessionStop(P, a4, (unsigned int)v25);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 64), P, 0x20u);
    v32 = *((_DWORD *)P + 141);
    memset(P + 488, 0, 0x20uLL);
    v33 = (void *)*((_QWORD *)P + 32);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *((_QWORD *)P + 32) = 0LL;
    }
    if ( !a5 )
    {
      *((_QWORD *)P + 11) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
      if ( *(_BYTE *)(v11 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 2720LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
    memset(v37, 0, sizeof(v37));
    DxgkDiagInitializeCodePointPacket(v37, 72, a3, v32, a4);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37);
    goto LABEL_47;
  }
  if ( a4 > 0x7F )
  {
LABEL_47:
    if ( !a5 )
    {
      _InterlockedExchange64(&qword_1C0046D08, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    return;
  }
  if ( !a5 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    *((_QWORD *)P + 11) = KeGetCurrentThread();
  }
  v10 = *((_DWORD *)P + 72);
  if ( v10 )
  {
    *((_DWORD *)P + 73) = v10;
    *((_DWORD *)P + 72) = 0;
    *((_DWORD *)P + 74) = a3;
    DpiMiracastBroadcastDeviceStateChange(P);
  }
  if ( !a5 )
  {
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
    goto LABEL_47;
  }
}
