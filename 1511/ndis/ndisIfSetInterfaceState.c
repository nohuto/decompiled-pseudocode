/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C001DA38
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C0017278 (ndisMSetGeneralAttributes.c)
 *     ndisUpdateOperationalStatus @ 0x1C001BF84 (ndisUpdateOperationalStatus.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPnPPortActivation @ 0x1C003B198 (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0044090 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018630 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C001DC98 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001DD3C (ndisMReferenceIfBlock.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001FF1C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C002489C (ndisIsDefaultPortStateOperational.c)
 */

char __fastcall ndisIfSetInterfaceState(const struct _TlgProvider_t *a1, __int64 a2, KIRQL a3)
{
  unsigned int KeywordAll_high; // esi
  char v4; // bp
  char v5; // r15
  _NET_IF_OPER_STATUS KeywordAll; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 KeywordAll_low; // rdx
  __int64 v11; // r12
  int v12; // r8d
  _DWORD *v13; // r14
  int v14; // r13d
  KIRQL v15; // cl

  KeywordAll_high = HIDWORD(a1[64].KeywordAll);
  v4 = 0;
  HIDWORD(a1[64].KeywordAll) = 0;
  v5 = a2;
  KeywordAll = a1[64].KeywordAll;
  if ( LODWORD(a1[35].KeywordAny) == 1 )
    goto LABEL_4;
  if ( LODWORD(a1[7].RegHandle) != 1 )
  {
    HIDWORD(a1[64].KeywordAll) = 2;
LABEL_4:
    LODWORD(a1[64].KeywordAll) = 2;
    goto LABEL_5;
  }
  if ( (unsigned __int8)ndisIsDefaultPortStateOperational() )
  {
    if ( (unsigned int)(LODWORD(a1[35].KeywordAny) - 5) <= 1 )
    {
      HIDWORD(a1[64].KeywordAll) |= 4u;
      LODWORD(a1[64].KeywordAll) = 5;
    }
    else
    {
      a1[64].KeywordAll = 1LL;
    }
  }
  else
  {
    HIDWORD(a1[64].KeywordAll) |= 1u;
    LODWORD(a1[64].KeywordAll) = 2;
  }
LABEL_5:
  if ( LODWORD(a1[64].KeywordAll) != KeywordAll || HIDWORD(a1[64].KeywordAll) != KeywordAll_high )
    NdisTraceLoggingDeviceStatusChange(a1);
  LOBYTE(a2) = 10;
  v8 = ndisMReferenceIfBlock(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    KeywordAll_low = LODWORD(a1[64].KeywordAll);
    v11 = v8 + 1112;
    v12 = *(_DWORD *)(v8 + 1112);
    v13 = (_DWORD *)(v8 + 1220);
    v14 = *(_DWORD *)(v8 + 1220);
    *(_DWORD *)(v8 + 1112) = KeywordAll_low;
    *(_DWORD *)(v8 + 1192) = HIDWORD(a1[64].KeywordAny);
    *(_DWORD *)(v8 + 1220) = a1[7].RegHandle;
    *(_DWORD *)(v8 + 1224) = a1[7].EnableCallback;
    *(_QWORD *)(v8 + 1208) = a1[12].RegHandle;
    *(_QWORD *)(v8 + 1200) = a1[12].KeywordAll;
    *(_DWORD *)(v8 + 1116) = HIDWORD(a1[64].KeywordAll);
    if ( v12 == (_DWORD)KeywordAll_low || (v4 = 1, !v5) )
    {
      v15 = a3;
    }
    else
    {
      a1[8].ProviderMetadataPtr = 0LL;
      a1[29].LevelPlus1 = 0;
      KeReleaseSpinLock(&a1[1].RegHandle, a3);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, v11, 8LL, 536LL);
      v15 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
      a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
      a1[29].LevelPlus1 = 2243779;
    }
    if ( v14 != *v13 && v5 )
    {
      a1[8].ProviderMetadataPtr = 0LL;
      a1[29].LevelPlus1 = 0;
      KeReleaseSpinLock(&a1[1].RegHandle, v15);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, v13, 4LL, 644LL);
      KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
      a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
      a1[29].LevelPlus1 = 2243792;
    }
    LOBYTE(KeywordAll_low) = 10;
    ndisMDereferenceIfBlock(a1, KeywordAll_low);
  }
  return v4;
}
