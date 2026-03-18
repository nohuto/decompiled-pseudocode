/*
 * XREFs of ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006BFF0
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0068D60 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00360A0 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C006AB7C (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $1E5498178E6BFFD2FD5346FC9D35457C *DmaDescription; // rax
  unsigned __int16 ExtraSize; // r10
  $1E5498178E6BFFD2FD5346FC9D35457C *v10; // rax
  FxDmaPacketTransaction *v11; // r10
  unsigned __int16 v12; // cx
  FxObject *v13; // rax
  FxObject *v14; // rbx
  int v16; // edi
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  ExtraSize = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  if ( FxObjectHandleAlloc(
         FxDriverGlobals,
         ExDefaultNonPagedPoolType,
         0x138uLL,
         0,
         Attributes,
         ExtraSize,
         FxObjectTypeExternal) )
  {
    v10 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v12 = 0;
    if ( v10->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v12 = 128;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v11, FxDriverGlobals, 0x138u, v12, DmaEnabler);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v16 = FxObject::Commit(v14, (_FX_DRIVER_GLOBALS *)Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v16 < 0 )
      FxObject::DeleteFromFailedCreate(v14);
    else
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    return (unsigned int)v16;
  }
  else
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionPacket_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
