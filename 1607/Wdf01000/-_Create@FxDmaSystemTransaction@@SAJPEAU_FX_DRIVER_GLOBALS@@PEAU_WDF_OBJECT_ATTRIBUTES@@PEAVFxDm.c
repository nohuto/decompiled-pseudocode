/*
 * XREFs of ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006A244
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0065650 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002FE4C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0067334 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaSystemTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $573AD7123BB726F3889E56BBEE799ACF *DmaDescription; // rax
  unsigned __int16 ExtraSize; // r10
  FxDmaPacketTransaction *v10; // rbx
  $573AD7123BB726F3889E56BBEE799ACF *v11; // rax
  unsigned __int16 v12; // cx
  int v14; // edi
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  ExtraSize = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  v10 = (FxDmaPacketTransaction *)FxObjectHandleAlloc(
                                    FxDriverGlobals,
                                    ExDefaultNonPagedPoolType,
                                    0x158uLL,
                                    0,
                                    Attributes,
                                    ExtraSize,
                                    FxObjectTypeExternal);
  if ( v10 )
  {
    v11 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v12 = 0;
    if ( v11->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v12 = 128;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v10, FxDriverGlobals, 0x158u, v12, DmaEnabler);
    v10->__vftable = (FxDmaPacketTransaction_vtbl *)&FxDmaSystemTransaction::`vftable';
    v10[1].__vftable = 0LL;
    v10[1].m_Globals = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v14 = FxObject::Commit(v10, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v14 < 0 )
      FxObject::DeleteFromFailedCreate(v10);
    else
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    return (unsigned int)v14;
  }
  else
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionSystem_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
