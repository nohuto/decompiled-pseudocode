/*
 * XREFs of NdisRegisterProtocol @ 0x1C00D02D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C004AD70 (WPP_SF_qZL.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A596C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ndisInitializeRef @ 0x1C00A68C4 (ndisInitializeRef.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00AE2D0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00AE4F4 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00C5464 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ndisValidateLegacyProtocols @ 0x1C00D0974 (ndisValidateLegacyProtocols.c)
 */

__int64 __fastcall NdisRegisterProtocol(int *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v4; // ebx
  __int64 v9; // rdi
  unsigned __int16 v11; // ax
  _WORD *v12; // r14
  volatile signed __int32 **ProtocolDriver; // rax
  unsigned __int16 v14; // bp
  PVOID PoolWithTag; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  volatile signed __int32 *v17; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v18; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v17 = 0LL;
  v9 = 0LL;
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( (unsigned __int8)byte_1C008530C >= 4u )
    WPP_SF_Z(0xEu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)(a3 + 88));
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(_BYTE *)a3 < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_7:
    v4 = -1073676284;
    goto LABEL_8;
  }
  if ( *(_BYTE *)a3 != 4 || *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)a3 != 5 || *(_BYTE *)(a3 + 1) > 1u )
      goto LABEL_7;
    v11 = 208;
  }
  else
  {
    v11 = 144;
  }
  if ( a4 >= v11 && (unsigned __int8)ndisValidateLegacyProtocols(a3) )
  {
    v12 = (_WORD *)(a3 + 88);
    ProtocolDriver = (volatile signed __int32 **)ndisBindGetProtocolDriver(
                                                   &v18,
                                                   (const struct _UNICODE_STRING *)(a3 + 88),
                                                   1);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v17, ProtocolDriver);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v18);
    if ( v17
      && (v14 = *v12 + 986,
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x6270444Eu),
          (v9 = (__int64)PoolWithTag) != 0) )
    {
      memset(PoolWithTag, 0, v14);
      *(_QWORD *)(v9 + 920) = 0LL;
      *(_QWORD *)(v9 + 968) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
      *(_QWORD *)(v9 + 960) = v9;
      *(_QWORD *)(v9 + 944) = KWorkItemBase<_NDIS_PROTOCOL_BLOCK,KCoalescingWorkItem<_NDIS_PROTOCOL_BLOCK>>::CallbackThunk;
      *(_QWORD *)(v9 + 952) = v9 + 928;
      *(_QWORD *)(v9 + 928) = 0LL;
      *(_DWORD *)(v9 + 976) = 0;
      if ( (volatile signed __int32 **)(v9 + 920) != &v17 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset((volatile signed __int32 **)(v9 + 920), v17);
      KeInitializeMutex((PRKMUTEX)(v9 + 360), 0xFFFFu);
      *(_WORD *)v9 = 259;
      *(_WORD *)(v9 + 2) = v14;
      *(_BYTE *)(v9 + 56) = *(_BYTE *)a3;
      *(_BYTE *)(v9 + 57) = *(_BYTE *)(a3 + 1);
      *(_QWORD *)(v9 + 80) = v9 + 984;
      *(_DWORD *)(v9 + 60) = *(_DWORD *)(a3 + 4);
      *(_DWORD *)(v9 + 64) = *(_DWORD *)(a3 + 4) & 0xF0000000;
      *(_WORD *)(v9 + 72) = *v12;
      *(_WORD *)(v9 + 74) = *v12;
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v9 + 72), (PCUNICODE_STRING)(a3 + 88), 0);
      *(_QWORD *)(v9 + 224) = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(v9 + 232) = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(v9 + 240) = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(v9 + 248) = *(_QWORD *)(a3 + 32);
      *(_QWORD *)(v9 + 256) = *(_QWORD *)(a3 + 40);
      *(_QWORD *)(v9 + 152) = *(_QWORD *)(a3 + 48);
      *(_QWORD *)(v9 + 264) = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(v9 + 272) = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(v9 + 160) = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(v9 + 168) = *(_QWORD *)(a3 + 80);
      if ( *(_BYTE *)a3 >= 4u )
      {
        *(_QWORD *)(v9 + 280) = *(_QWORD *)(a3 + 104);
        *(_QWORD *)(v9 + 288) = *(_QWORD *)(a3 + 112);
        *(_QWORD *)(v9 + 296) = *(_QWORD *)(a3 + 120);
        *(_QWORD *)(v9 + 128) = *(_QWORD *)(a3 + 128);
        *(_QWORD *)(v9 + 136) = *(_QWORD *)(a3 + 136);
      }
      if ( *(_BYTE *)a3 == 5 )
      {
        *(_QWORD *)(v9 + 304) = *(_QWORD *)(a3 + 176);
        *(_QWORD *)(v9 + 192) = *(_QWORD *)(a3 + 184);
        *(_QWORD *)(v9 + 312) = *(_QWORD *)(a3 + 192);
        *(_QWORD *)(v9 + 200) = *(_QWORD *)(a3 + 200);
      }
      *a2 = v9;
      ndisInitializeRef(v9 + 32, 15);
      ndisRegisterProtocolDriverCommon((struct _NDIS_PROTOCOL_BLOCK *)v9);
      ndisWriteDriverNDISVersionToServiceKey(
        *(unsigned __int8 *)(v9 + 56),
        *(unsigned __int8 *)(v9 + 57),
        0,
        0,
        0,
        v9 + 72);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073676283;
  }
LABEL_8:
  *a1 = v4;
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C008530C >= 4u )
  {
    LODWORD(v16) = v4;
    WPP_SF_qZL(0xFu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v9, (__int64 *)(a3 + 88), v16);
  }
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v17);
}
