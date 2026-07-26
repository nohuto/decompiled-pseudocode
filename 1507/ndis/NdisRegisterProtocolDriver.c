/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C00ADE90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qZL @ 0x1C004AD70 (WPP_SF_qZL.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C0055C48 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A596C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ndisInitializeRef @ 0x1C00A68C4 (ndisInitializeRef.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00AE2D0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00AE4F4 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisValidate60Protocol @ 0x1C00AE5F0 (ndisValidate60Protocol.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v6; // rbx
  USHORT v7; // r8
  unsigned __int8 MinorNdisVersion; // dl
  bool v9; // al
  char v10; // cl
  char v11; // al
  char v12; // cl
  NDIS_STATUS v13; // edi
  unsigned __int8 MajorNdisVersion; // al
  _UNICODE_STRING *p_Name; // r12
  __int64 v16; // rdi
  _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // dl
  unsigned int Flags; // eax
  unsigned __int8 v21; // al
  _QWORD *ProtocolDriver; // rax
  int v23; // r8d
  int v24; // eax
  __int64 v26; // [rsp+20h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v28; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v29; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&String2.Length = 786442;
  *(_DWORD *)&v28.Length = 917516;
  String2.Buffer = L"TCPIP";
  *(_DWORD *)&v29.Length = 1310738;
  v28.Buffer = L"TCPIP6";
  v29.Buffer = L"NDISTEST6";
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_Z(0xAu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)&ProtocolCharacteristics->Name);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = 0;
  if ( ProtocolCharacteristics->MajorNdisVersion != 6 )
    goto LABEL_51;
  MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
    goto LABEL_51;
  if ( !MinorNdisVersion )
    v7 = 120;
  v9 = MinorNdisVersion == 1;
  if ( MinorNdisVersion == 20 )
    v9 = 1;
  v10 = v9;
  if ( MinorNdisVersion == 30 )
    v10 = 1;
  v11 = v10;
  if ( MinorNdisVersion == 40 )
    v11 = 1;
  v12 = v11;
  if ( MinorNdisVersion == 50 )
    v12 = 1;
  if ( !v12 )
  {
    if ( v7 )
      goto LABEL_21;
LABEL_51:
    v13 = -1073676284;
    goto LABEL_43;
  }
  if ( ProtocolCharacteristics->Header.Type != 0x95 || ProtocolCharacteristics->Header.Revision < 2u )
    goto LABEL_49;
  v7 = 128;
LABEL_21:
  if ( ProtocolCharacteristics->Header.Size < v7 )
  {
LABEL_49:
    v13 = -1073676283;
    goto LABEL_43;
  }
  v13 = -1073676283;
  if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) == -1073676283 )
    goto LABEL_43;
  MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
  if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
    && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_43;
  }
  p_Name = &ProtocolCharacteristics->Name;
  v16 = (unsigned __int16)(ProtocolCharacteristics->Name.Length + 986);
  PoolWithTag = (_NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v16, 0x6270444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_55;
  memset(PoolWithTag, 0, (unsigned __int16)v16);
  v6->Bind._p = 0LL;
  v6->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
  v6->NotifyBindCompleteWorkItem.m_context = v6;
  v6->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<_NDIS_PROTOCOL_BLOCK,KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK>>::CallbackThunk;
  v6->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
  v6->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v6->NotifyBindCompleteWorkItem;
  v6->NotifyBindCompleteWorkItem.m_queued = 0;
  KeInitializeMutex(&v6->Mutex, 0xFFFFu);
  v6->Header.Size = v16;
  *(_WORD *)&v6->Header.Type = 259;
  v18 = ProtocolCharacteristics->MajorNdisVersion;
  v6->MajorNdisVersion = v18;
  v19 = ProtocolCharacteristics->MinorNdisVersion;
  v6->MinorNdisVersion = v19;
  v6->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
  v6->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
  v6->Name.Buffer = (wchar_t *)&v6[1].Header.Type;
  v6->ProtocolDriverContext = ProtocolDriverContext;
  Flags = ProtocolCharacteristics->Flags;
  v6->Flags = Flags;
  if ( v18 <= 6u && (v18 != 6 || v19 < 0x32u) )
    v6->Flags = Flags & 0xF0000000;
  v6->Name.Length = p_Name->Length;
  v6->Name.MaximumLength = p_Name->Length;
  RtlUpcaseUnicodeString(&v6->Name, &ProtocolCharacteristics->Name, 0);
  v6->IsIPv4 = RtlCompareUnicodeString(&v6->Name, &String2, 0) == 0;
  v6->IsIPv6 = RtlCompareUnicodeString(&v6->Name, &v28, 0) == 0;
  v6->IsNdisTest6 = RtlCompareUnicodeString(&v6->Name, &v29, 0) == 0;
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
  v21 = ProtocolCharacteristics->MajorNdisVersion;
  if ( v21 > 6u || v21 == 6 && ProtocolCharacteristics->MinorNdisVersion )
    v6->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
  ndisInitializeRef((__int64)&v6->Ref, 15);
  ProtocolDriver = ndisBindGetProtocolDriver(&v30, &v6->Name, 1);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v6->Bind, ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v30);
  if ( !v6->Bind._p )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v6);
    ExFreePoolWithTag(v6, 0);
LABEL_55:
    v13 = -1073741670;
    goto LABEL_43;
  }
  *NdisProtocolHandle = v6;
  if ( ProtocolCharacteristics->SetOptionsHandler )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x56u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)v6);
    v24 = ProtocolCharacteristics->SetOptionsHandler(v6, v6->ProtocolDriverContext);
    v13 = v24;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x57u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)v6, v24);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x58u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)v6);
    v13 = 0;
  }
  if ( v13 )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v6);
    ExFreePoolWithTag(v6, 0);
    v6 = 0LL;
    *NdisProtocolHandle = 0LL;
  }
  else
  {
    LOBYTE(v23) = 1;
    ndisWriteDriverNDISVersionToServiceKey(
      v6->MajorNdisVersion,
      v6->MinorNdisVersion,
      v23,
      v6->MajorDriverVersion,
      v6->MinorDriverVersion,
      (__int64)&v6->Name);
    ndisRegisterProtocolDriverCommon(v6);
    v13 = 0;
  }
LABEL_43:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
  {
    LODWORD(v26) = v13;
    WPP_SF_qZL(
      0xBu,
      &WPP_0009299248ba37495192320194ebfcad_Traceguids,
      (__int64)v6,
      (__int64 *)&ProtocolCharacteristics->Name,
      v26);
  }
  return v13;
}
