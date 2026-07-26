/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C00A1E20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0014890 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qZL @ 0x1C004FF8C (WPP_SF_qZL.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005A2D4 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisValidate60Protocol @ 0x1C00A1C9C (ndisValidate60Protocol.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00A1D1C (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisInitializeRef @ 0x1C00A2C40 (ndisInitializeRef.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A3EB4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A44E4 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // al
  char v10; // cl
  char v11; // al
  char v12; // cl
  char v13; // al
  char v14; // cl
  NDIS_STATUS v15; // edi
  unsigned __int8 MajorNdisVersion; // al
  _UNICODE_STRING *p_Name; // r12
  __int64 v18; // rdi
  _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 v20; // cl
  unsigned __int8 MinorNdisVersion; // dl
  unsigned int Flags; // eax
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  __int64 v25; // r8
  __int64 ProtocolDriver; // rax
  int v27; // eax
  __int64 v29; // [rsp+20h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v31; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v32; // [rsp+50h] [rbp-10h] BYREF
  char v33; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&String2.Length = 786442;
  *(_DWORD *)&v31.Length = 917516;
  String2.Buffer = L"TCPIP";
  *(_DWORD *)&v32.Length = 1310738;
  v31.Buffer = L"TCPIP6";
  v32.Buffer = L"NDISTEST6";
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_Z(0xAu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, &ProtocolCharacteristics->Name.Length);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, ndisInitializeNsiInitFn, 0LL, 0LL);
  ndisReferencePackage((__int64)&ndisPkgs);
  v8 = 0LL;
  if ( ProtocolCharacteristics->MajorNdisVersion != 6 )
    goto LABEL_55;
  LOBYTE(v7) = ProtocolCharacteristics->MinorNdisVersion;
  if ( (_BYTE)v7 == 2 )
    goto LABEL_55;
  if ( !(_BYTE)v7 )
    v8 = 120LL;
  v9 = (_BYTE)v7 == 1;
  if ( (_BYTE)v7 == 20 )
    v9 = 1;
  v10 = v9;
  if ( (_BYTE)v7 == 30 )
    v10 = 1;
  v11 = v10;
  if ( (_BYTE)v7 == 40 )
    v11 = 1;
  v12 = v11;
  if ( (_BYTE)v7 == 50 )
    v12 = 1;
  v13 = v12;
  if ( (_BYTE)v7 == 51 )
    v13 = 1;
  v14 = v13;
  if ( (_BYTE)v7 == 60 )
    v14 = 1;
  if ( !v14 )
  {
    if ( (_WORD)v8 )
      goto LABEL_25;
LABEL_55:
    v15 = -1073676284;
    goto LABEL_47;
  }
  if ( ProtocolCharacteristics->Header.Type != 0x95 || ProtocolCharacteristics->Header.Revision < 2u )
    goto LABEL_53;
  v8 = 128LL;
LABEL_25:
  if ( ProtocolCharacteristics->Header.Size < (unsigned __int16)v8 )
  {
LABEL_53:
    v15 = -1073676283;
    goto LABEL_47;
  }
  v15 = -1073676283;
  if ( (unsigned int)ndisValidate60Protocol((__int64)ProtocolCharacteristics, v7, v8) == -1073676283 )
    goto LABEL_47;
  MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
  if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
    && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
  {
    v15 = -1073741811;
    goto LABEL_47;
  }
  p_Name = &ProtocolCharacteristics->Name;
  v18 = (unsigned __int16)(ProtocolCharacteristics->Name.Length + 986);
  PoolWithTag = (_NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v18, 0x6270444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  memset(PoolWithTag, 0, (unsigned __int16)v18);
  v6->Bind._p = 0LL;
  v6->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
  v6->NotifyBindCompleteWorkItem.m_context = v6;
  v6->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<_NDIS_PROTOCOL_BLOCK,KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK>>::CallbackThunk;
  v6->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
  v6->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v6->NotifyBindCompleteWorkItem;
  v6->NotifyBindCompleteWorkItem.m_queued = 0;
  KeInitializeMutex(&v6->Mutex, 0xFFFFu);
  v6->Header.Size = v18;
  *(_WORD *)&v6->Header.Type = 259;
  v20 = ProtocolCharacteristics->MajorNdisVersion;
  v6->MajorNdisVersion = v20;
  MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
  v6->MinorNdisVersion = MinorNdisVersion;
  v6->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
  v6->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
  v6->Name.Buffer = (wchar_t *)&v6[1].Header.Type;
  v6->ProtocolDriverContext = ProtocolDriverContext;
  Flags = ProtocolCharacteristics->Flags;
  v6->Flags = Flags;
  if ( v20 <= 6u && (v20 != 6 || MinorNdisVersion < 0x32u) )
    v6->Flags = Flags & 0xF0000000;
  v6->Name.Length = p_Name->Length;
  v6->Name.MaximumLength = p_Name->Length;
  RtlUpcaseUnicodeString(&v6->Name, &ProtocolCharacteristics->Name, 0);
  v6->IsIPv4 = RtlCompareUnicodeString(&v6->Name, &String2, 0) == 0;
  v6->IsIPv6 = RtlCompareUnicodeString(&v6->Name, &v31, 0) == 0;
  v6->IsNdisTest6 = RtlCompareUnicodeString(&v6->Name, &v32, 0) == 0;
  v6->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
  v6->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
  v6->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
  v6->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
  v6->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
  v6->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
  v6->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
  v6->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
  v6->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
  v6->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
  v24 = ProtocolCharacteristics->MajorNdisVersion;
  if ( v24 > 6u || v24 == 6 && ProtocolCharacteristics->MinorNdisVersion )
    v6->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
  LOBYTE(v23) = 15;
  ndisInitializeRef(&v6->Ref, v23);
  LOBYTE(v25) = 1;
  ProtocolDriver = ndisBindGetProtocolDriver(&v33, &v6->Name, v25);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v6->Bind, ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v33);
  if ( !v6->Bind._p )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v6);
    ExFreePoolWithTag(v6, 0);
LABEL_59:
    v15 = -1073741670;
    goto LABEL_47;
  }
  *NdisProtocolHandle = v6;
  if ( ProtocolCharacteristics->SetOptionsHandler )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x56u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)v6);
    v27 = ProtocolCharacteristics->SetOptionsHandler(v6, v6->ProtocolDriverContext);
    v15 = v27;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x57u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)v6, v27);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x58u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)v6);
    v15 = 0;
  }
  if ( v15 )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v6);
    ExFreePoolWithTag(v6, 0);
    v6 = 0LL;
    *NdisProtocolHandle = 0LL;
  }
  else
  {
    ndisWriteDriverNDISVersionToServiceKey(
      v6->MajorNdisVersion,
      v6->MinorNdisVersion,
      1,
      v6->MajorDriverVersion,
      v6->MinorDriverVersion,
      (__int64)&v6->Name);
    ndisRegisterProtocolDriverCommon(v6);
    v15 = 0;
  }
LABEL_47:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    LODWORD(v29) = v15;
    WPP_SF_qZL(
      0xBu,
      &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids,
      (__int64)v6,
      &ProtocolCharacteristics->Name.Length,
      v29);
  }
  return v15;
}
