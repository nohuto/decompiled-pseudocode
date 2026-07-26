/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C00A70D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001EBD4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C004B5F0 (WPP_SF_qZL.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C0055AE8 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisInitializeRef @ 0x1C00A01A0 (ndisInitializeRef.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A22E4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A5910 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00A74FC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisValidate60Protocol @ 0x1C00A75F8 (ndisValidate60Protocol.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  __int64 v6; // rbx
  USHORT v7; // r8
  unsigned __int8 MinorNdisVersion; // dl
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
  PVOID PoolWithTag; // rax
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // dl
  unsigned int Flags; // eax
  unsigned __int8 v23; // al
  volatile signed __int32 **ProtocolDriver; // rax
  int v25; // r8d
  int v26; // eax
  __int64 v28; // [rsp+20h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v30; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v31; // [rsp+50h] [rbp-10h] BYREF
  volatile signed __int32 *v32; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&String2.Length = 786442;
  *(_DWORD *)&v30.Length = 917516;
  String2.Buffer = L"TCPIP";
  *(_DWORD *)&v31.Length = 1310738;
  v30.Buffer = L"TCPIP6";
  v31.Buffer = L"NDISTEST6";
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_Z(0xAu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64 *)&ProtocolCharacteristics->Name);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, ndisInitializeNsiInitFn, 0LL, 0LL);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = 0;
  if ( ProtocolCharacteristics->MajorNdisVersion != 6 )
    goto LABEL_55;
  MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
    goto LABEL_55;
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
  v13 = v12;
  if ( MinorNdisVersion == 51 )
    v13 = 1;
  v14 = v13;
  if ( MinorNdisVersion == 60 )
    v14 = 1;
  if ( !v14 )
  {
    if ( v7 )
      goto LABEL_25;
LABEL_55:
    v15 = -1073676284;
    goto LABEL_47;
  }
  if ( ProtocolCharacteristics->Header.Type != 0x95 || ProtocolCharacteristics->Header.Revision < 2u )
    goto LABEL_53;
  v7 = 128;
LABEL_25:
  if ( ProtocolCharacteristics->Header.Size < v7 )
  {
LABEL_53:
    v15 = -1073676283;
    goto LABEL_47;
  }
  v15 = -1073676283;
  if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) == -1073676283 )
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v18, 0x6270444Eu);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  memset(PoolWithTag, 0, (unsigned __int16)v18);
  *(_QWORD *)(v6 + 920) = 0LL;
  *(_QWORD *)(v6 + 968) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
  *(_QWORD *)(v6 + 960) = v6;
  *(_QWORD *)(v6 + 944) = KWorkItemBase<_NDIS_PROTOCOL_BLOCK,KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK>>::CallbackThunk;
  *(_QWORD *)(v6 + 928) = 0LL;
  *(_QWORD *)(v6 + 952) = v6 + 928;
  *(_DWORD *)(v6 + 976) = 0;
  KeInitializeMutex((PRKMUTEX)(v6 + 360), 0xFFFFu);
  *(_WORD *)(v6 + 2) = v18;
  *(_WORD *)v6 = 259;
  v20 = ProtocolCharacteristics->MajorNdisVersion;
  *(_BYTE *)(v6 + 56) = v20;
  v21 = ProtocolCharacteristics->MinorNdisVersion;
  *(_BYTE *)(v6 + 57) = v21;
  *(_BYTE *)(v6 + 58) = ProtocolCharacteristics->MajorDriverVersion;
  *(_BYTE *)(v6 + 59) = ProtocolCharacteristics->MinorDriverVersion;
  *(_QWORD *)(v6 + 80) = v6 + 984;
  *(_QWORD *)(v6 + 8) = ProtocolDriverContext;
  Flags = ProtocolCharacteristics->Flags;
  *(_DWORD *)(v6 + 64) = Flags;
  if ( v20 <= 6u && (v20 != 6 || v21 < 0x32u) )
    *(_DWORD *)(v6 + 64) = Flags & 0xF0000000;
  *(_WORD *)(v6 + 72) = p_Name->Length;
  *(_WORD *)(v6 + 74) = p_Name->Length;
  RtlUpcaseUnicodeString((PUNICODE_STRING)(v6 + 72), &ProtocolCharacteristics->Name, 0);
  *(_BYTE *)(v6 + 88) = RtlCompareUnicodeString((PCUNICODE_STRING)(v6 + 72), &String2, 0) == 0;
  *(_BYTE *)(v6 + 89) = RtlCompareUnicodeString((PCUNICODE_STRING)(v6 + 72), &v30, 0) == 0;
  *(_BYTE *)(v6 + 90) = RtlCompareUnicodeString((PCUNICODE_STRING)(v6 + 72), &v31, 0) == 0;
  *(_QWORD *)(v6 + 96) = ProtocolCharacteristics->BindAdapterHandlerEx;
  *(_QWORD *)(v6 + 104) = ProtocolCharacteristics->UnbindAdapterHandlerEx;
  *(_QWORD *)(v6 + 112) = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
  *(_QWORD *)(v6 + 120) = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
  *(_QWORD *)(v6 + 128) = ProtocolCharacteristics->NetPnPEventHandler;
  *(_QWORD *)(v6 + 144) = ProtocolCharacteristics->UninstallHandler;
  *(_QWORD *)(v6 + 160) = ProtocolCharacteristics->StatusHandlerEx;
  *(_QWORD *)(v6 + 176) = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
  *(_QWORD *)(v6 + 184) = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
  *(_QWORD *)(v6 + 320) = ProtocolCharacteristics->OidRequestCompleteHandler;
  v23 = ProtocolCharacteristics->MajorNdisVersion;
  if ( v23 > 6u || v23 == 6 && ProtocolCharacteristics->MinorNdisVersion )
    *(_QWORD *)(v6 + 872) = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
  ndisInitializeRef(v6 + 32, 15);
  ProtocolDriver = (volatile signed __int32 **)ndisBindGetProtocolDriver(
                                                 &v32,
                                                 (const struct _UNICODE_STRING *)(v6 + 72),
                                                 1);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=((volatile signed __int32 **)(v6 + 920), ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v32);
  if ( !*(_QWORD *)(v6 + 920) )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'((_NDIS_PROTOCOL_BLOCK *)v6);
    ExFreePoolWithTag((PVOID)v6, 0);
LABEL_59:
    v15 = -1073741670;
    goto LABEL_47;
  }
  *NdisProtocolHandle = (PVOID)v6;
  if ( ProtocolCharacteristics->SetOptionsHandler )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x56u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v6);
    v26 = ProtocolCharacteristics->SetOptionsHandler((void *)v6, *(void **)(v6 + 8));
    v15 = v26;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x57u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v6, v26);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x58u, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, v6);
    v15 = 0;
  }
  if ( v15 )
  {
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'((_NDIS_PROTOCOL_BLOCK *)v6);
    ExFreePoolWithTag((PVOID)v6, 0);
    v6 = 0LL;
    *NdisProtocolHandle = 0LL;
  }
  else
  {
    LOBYTE(v25) = 1;
    ndisWriteDriverNDISVersionToServiceKey(
      *(unsigned __int8 *)(v6 + 56),
      *(unsigned __int8 *)(v6 + 57),
      v25,
      *(unsigned __int8 *)(v6 + 58),
      *(unsigned __int8 *)(v6 + 59),
      v6 + 72);
    ndisRegisterProtocolDriverCommon((struct _NDIS_PROTOCOL_BLOCK *)v6);
    v15 = 0;
  }
LABEL_47:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
  {
    LODWORD(v28) = v15;
    WPP_SF_qZL(
      0xBu,
      &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids,
      v6,
      (__int64 *)&ProtocolCharacteristics->Name,
      v28);
  }
  return v15;
}
