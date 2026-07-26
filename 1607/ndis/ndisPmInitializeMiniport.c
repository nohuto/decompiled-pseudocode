/*
 * XREFs of ndisPmInitializeMiniport @ 0x1C00E621C
 * Callers:
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001B0C4 (ndisMSetIndicatePacketHandler.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001B2B4 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisSetWakeUpTimer @ 0x1C001B638 (ndisSetWakeUpTimer.c)
 *     ndisMDeQueueWorkItem @ 0x1C001BF3C (ndisMDeQueueWorkItem.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 *     WPP_SF_qZD @ 0x1C0062FC0 (WPP_SF_qZD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006C230 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C006C56C (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D368 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009E95C (ndisMDeregisterBugCheckHandler.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00AC45C (ndisMRegisterBugCheckHandler.c)
 *     ndisMInvokeInitialize @ 0x1C00AC4D4 (ndisMInvokeInitialize.c)
 *     ndisMNotifyMachineName @ 0x1C00AF9AC (ndisMNotifyMachineName.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00DC4F4 (ndisSelectiveSuspendInitialize.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _TlgProvider_t *a1)
{
  _NDIS_M_DRIVER_BLOCK *EnableCallback; // rdi
  _NDIS_SG_DMA_BLOCK *AnnotationFunc; // rcx
  unsigned __int8 MajorNdisVersion; // r13
  unsigned int v5; // esi
  unsigned __int8 RegHandle; // r12
  unsigned int v7; // eax
  PVOID v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _CM_RESOURCE_LIST *CallbackContext; // rax
  unsigned int v13; // edi
  KIRQL v14; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v16; // r14
  unsigned int v17; // esi
  _NDIS_MINIPORT_INTERRUPT *v18; // rax
  unsigned int v19; // esi
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v20; // rax
  unsigned __int8 KeywordAll; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v22; // rcx
  _NET_IF_MEDIA_CONNECT_STATE v23; // ecx
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v24; // rcx
  int v25; // edi
  _NDIS_IF_BLOCK *v26; // rcx
  unsigned int v27; // eax
  _UNICODE_STRING *ProviderMetadataPtr; // r9
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v29; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v33[12]; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD v34[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+118h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+120h] [rbp+18h]
  _DWORD v38[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v39[224]; // [rsp+148h] [rbp+40h] BYREF

  EnableCallback = (_NDIS_M_DRIVER_BLOCK *)a1[59].EnableCallback;
  v32 = 0;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)a1);
  AnnotationFunc = (_NDIS_SG_DMA_BLOCK *)a1[7].AnnotationFunc;
  if ( AnnotationFunc && AnnotationFunc->DmaAdapterRefCount == 1 && ((__int64)a1[1].AnnotationFunc & 0x240) != 0 )
  {
    AnnotationFunc->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1[7].AnnotationFunc);
    LODWORD(a1[1].AnnotationFunc) &= 0xFFFFFDBF;
  }
  MajorNdisVersion = EnableCallback->MajorNdisVersion;
  LODWORD(a1[1].AnnotationFunc) &= 0x7FCFFFDFu;
  v5 = (unsigned int)a1[1].AnnotationFunc;
  HIDWORD(a1[1].AnnotationFunc) &= ~0x10u;
  RegHandle = a1[14].RegHandle;
  ndisMDeQueueWorkItem((__int64)a1, 6, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 0, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 1, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 3, 0LL, 0LL);
  ndisMDeQueueWorkItem((__int64)a1, 4, 0LL, 0LL);
  a1[2].ProviderMetadataPtr = (const unsigned __int16 *)&a1[2];
  *(_QWORD *)&a1[2].LevelPlus1 = a1 + 2;
  HIDWORD(a1[61].KeywordAny) = 1;
  LODWORD(a1[35].KeywordAny) = 2;
  memset(v34, 0, sizeof(v34));
  memset(v39, 0, sizeof(v39));
  v7 = (__int64)a1[1].AnnotationFunc & 0xFFFFFFFE;
  LOBYTE(a1[1].KeywordAll) = 0;
  LODWORD(a1[1].AnnotationFunc) = v7 | 0x20000002;
  if ( MajorNdisVersion >= 6u )
  {
    v38[1] = a1[52].EnableCallback;
    v38[2] = HIDWORD(a1[52].EnableCallback);
    v38[3] = a1[52].CallbackContext;
    v38[4] = HIDWORD(a1[52].CallbackContext);
    CallbackContext = (_CM_RESOURCE_LIST *)a1[14].CallbackContext;
    v38[0] = 1311104;
    LODWORD(v34[0]) = 4194689;
    if ( CallbackContext )
      v34[1] = &CallbackContext->List[0].PartialResourceList;
    v34[2] = a1[30].AnnotationFunc;
    v34[3] = a1[65].ProviderMetadataPtr;
    v34[6] = v38;
    v34[5] = a1[63].CallbackContext;
    LODWORD(v34[4]) = a1[64].KeywordAny;
    v9 = ndisMInvokeInitialize(a1, (__int64)v34);
  }
  else
  {
    v8 = ndisMediumArray;
    *(_QWORD *)&a1[43].LevelPlus1 = v39;
    *(_DWORD *)(*(_QWORD *)&a1[64].LevelPlus1 + 1220LL) = 1;
    v9 = ((__int64 (__fastcall *)(_BYTE *, int *, PVOID, __int64, struct _TlgProvider_t *, unsigned __int64))EnableCallback->MiniportDriverCharacteristics.PauseHandler)(
           v33,
           &v32,
           v8,
           15LL,
           a1,
           a1[63].KeywordAll);
  }
  v13 = v9;
  if ( (unsigned __int8)byte_1C00895D0 >= 4u )
  {
    LODWORD(BugCheckParameter4) = v9;
    WPP_SF_qZD(v11, v10, (__int64)a1, (unsigned __int16 *)a1[61].ProviderMetadataPtr, BugCheckParameter4);
  }
  if ( v13 )
  {
    LODWORD(a1[35].KeywordAny) = 1;
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_qD(0x30u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)a1, v13);
    if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
      Template_jqxqqq(
        v11,
        &MiniportInitializeHandlerFailed,
        (const GUID *)&a1[63].RegHandle,
        (unsigned __int64)&a1[63].RegHandle,
        a1[64].KeywordAny,
        (char)a1[63].CallbackContext,
        v13,
        156,
        0);
  }
  else
  {
    if ( !*(_QWORD *)&a1[43].LevelPlus1 )
    {
      v13 = -1073741823;
      goto LABEL_57;
    }
    LODWORD(a1[35].KeywordAny) = 6;
    ndisMRegisterBugCheckHandler((char *)a1);
    v14 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
    CurrentThread = KeGetCurrentThread();
    HIDWORD(a1[1].AnnotationFunc) &= 0xFFFDBFFB;
    v16 = v14;
    a1[8].ProviderMetadataPtr = (const unsigned __int16 *)CurrentThread;
    LODWORD(CurrentThread) = (__int64)a1[1].AnnotationFunc & 0x20002040;
    LOBYTE(a1[14].RegHandle) = RegHandle;
    v17 = (unsigned int)CurrentThread | v5 & 0xDFFFDFFD;
    a1[29].LevelPlus1 = 1705393;
    LODWORD(a1[1].AnnotationFunc) = v17;
    if ( MajorNdisVersion < 6u )
    {
      v18 = (_NDIS_MINIPORT_INTERRUPT *)a1[1].CallbackContext;
      if ( !v18 || v18->IsrRequested || v18->SharedInterrupt )
        v19 = v17 & 0xFFFFFFFE;
      else
        v19 = v17 | 1;
      v20 = *(_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&a1[43].LevelPlus1;
      LODWORD(a1[1].AnnotationFunc) = v19;
      if ( (v19 & 0x20000000) != 0 )
        v20->MediaConnectState = MediaConnectStateConnected;
      else
        v20->MediaConnectState = MediaConnectStateDisconnected;
      *(_DWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 60LL) = 0;
      *(_QWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 24LL) = 0x40000000LL;
      *(_QWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 32LL) = 0x40000000LL;
      *(_QWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 40LL) = 0x40000000LL;
      *(_QWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 48LL) = 0x40000000LL;
    }
    KeywordAll = a1[1].KeywordAll;
    if ( (KeywordAll & 8) == 0 )
      LODWORD(a1[5].KeywordAll) = *(_DWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 56LL);
    if ( (KeywordAll & 0x10) == 0 )
    {
      v22 = *(_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&a1[43].LevelPlus1;
      a1[43].AnnotationFunc = (void (__fastcall *)())v22->RcvLinkSpeed;
      a1[43].CallbackContext = (void *)v22->XmitLinkSpeed;
      HIDWORD(a1[5].KeywordAll) = v22->MediaDuplexState;
      LODWORD(a1[12].CallbackContext) = v22->AutoNegotiationFlags;
    }
    if ( (KeywordAll & 1) == 0 )
    {
      v23 = *(_DWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 56LL);
      LODWORD(a1[7].RegHandle) = v23;
      if ( v23 == MediaConnectStateConnected )
        LODWORD(a1[1].AnnotationFunc) |= 0x20000000u;
      else
        LODWORD(a1[1].AnnotationFunc) &= ~0x20000000u;
    }
    if ( (KeywordAll & 2) == 0 )
    {
      v24 = *(_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&a1[43].LevelPlus1;
      a1[12].RegHandle = v24->RcvLinkSpeed;
      a1[12].KeywordAll = v24->XmitLinkSpeed;
    }
    if ( (KeywordAll & 4) == 0 )
      LODWORD(a1[7].EnableCallback) = *(_DWORD *)(*(_QWORD *)&a1[43].LevelPlus1 + 60LL);
    v25 = (unsigned __int8)ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, v16);
    if ( ((__int64)a1[1].AnnotationFunc & 0x20000000) != 0 )
      ndisMSetIndicatePacketHandler((__int64)a1);
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_q(0x31u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)a1);
    ndisSetWakeUpTimer((__int64)a1);
    a1[8].ProviderMetadataPtr = 0LL;
    a1[29].LevelPlus1 = 0;
    KeReleaseSpinLock(&a1[1].RegHandle, v16);
    ndisMDoOidRequest((unsigned __int8 *)a1);
    if ( !LODWORD(a1[7].KeywordAny) )
      ndisMNotifyMachineName((__int64)a1);
    if ( IoWMIRegistrationControl((PDEVICE_OBJECT)a1[60].EnableCallback, 1u) < 0
      && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
    {
      WPP_SF_q(0x32u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)a1);
    }
    if ( v25 && ndisMReferenceIfBlock((__int64)a1, 0xBu) )
    {
      v26 = *(_NDIS_IF_BLOCK **)&a1[64].LevelPlus1;
      ifOperStatusFlags = 0;
      v36 = 786816LL;
      HIDWORD(v36) = v26->ifOperStatus;
      ifOperStatusFlags = v26->ifOperStatusFlags;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v36;
      StatusIndication.SourceHandle = a1;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a1, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a1, MPIFREF_PMINIT);
    }
    ndisUpdatePMCurrentCapabilities((__int64)a1);
    v13 = 0;
    a1[24].AnnotationFunc = (void (__fastcall *)())MEMORY[0xFFFFF78000000320];
  }
  if ( v13 )
  {
LABEL_57:
    ndisMDeregisterBugCheckHandler((__int64)a1);
    if ( !a1[8].CallbackContext )
    {
      if ( a1[1].CallbackContext )
        goto LABEL_62;
      if ( !a1[12].KeywordAny )
      {
        v27 = (unsigned int)a1[1].AnnotationFunc;
        HIDWORD(a1[1].AnnotationFunc) |= 0x4000u;
        LODWORD(a1[1].AnnotationFunc) = v27 & 0x7FFFFFFE | 0x80000000;
        goto LABEL_72;
      }
    }
    if ( !a1[1].CallbackContext )
    {
      ProviderMetadataPtr = (_UNICODE_STRING *)a1[61].ProviderMetadataPtr;
      if ( a1[12].KeywordAny )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          ProviderMetadataPtr,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, a1[12].KeywordAny, 0LL);
      }
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        ProviderMetadataPtr,
        "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1[8].CallbackContext, 0LL);
    }
LABEL_62:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1[61].ProviderMetadataPtr,
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1[1].CallbackContext, 0LL);
  }
  ndisLogMiniportEvent((__int64)a1, 0x37u);
  if ( ((__int64)a1[16].EnableCallback & 2) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( a1[70].RegHandle )
    {
      ndisSelectiveSuspendClearStop((__int64)a1, 9);
      if ( a1[70].RegHandle )
        ndisSelectiveSuspendStop((struct _NDIS_MINIPORT_BLOCK *)a1, 7);
    }
  }
  if ( a1[70].EnableCallback )
    ndisAoAcPmInitTempRef((struct _NDIS_MINIPORT_BLOCK *)a1);
LABEL_72:
  v29 = *(_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&a1[43].LevelPlus1;
  if ( v29 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v29, 0);
    *(_QWORD *)&a1[43].LevelPlus1 = 0LL;
  }
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_qD(0x33u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)a1, v13);
  return v13;
}
