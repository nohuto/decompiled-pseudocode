/*
 * XREFs of ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063640
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C005E310 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0060378 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $E625912F367ED84F5D18F5529B8651D4 *v4; // rdi
  unsigned __int16 ExtraSize; // ax
  FxDmaPacketTransaction *v10; // rax
  unsigned __int16 v11; // cx
  FxObject *v12; // rax
  FxObject *v13; // rdi
  int v14; // ebx
  void *hTransaction; // [rsp+70h] [rbp+18h] BYREF

  v4 = &DmaEnabler->184;
  ExtraSize = 0;
  if ( DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  v10 = (FxDmaPacketTransaction *)FxObjectHandleAlloc(
                                    FxDriverGlobals,
                                    ExDefaultNonPagedPoolType,
                                    0x138uLL,
                                    0,
                                    Attributes,
                                    ExtraSize,
                                    FxObjectTypeExternal);
  if ( v10 )
  {
    v11 = 0;
    if ( v4->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v11 = 128;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v10, FxDriverGlobals, 0x138u, v11, DmaEnabler);
    v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v14 = FxObject::Commit(v13, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v14 < 0 )
      FxObject::DeleteFromFailedCreate(v13);
    else
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
  }
  else
  {
    v14 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0x22u, WPP_FxDmaTransaction_cpp_Traceguids, -1073741670);
  }
  return (unsigned int)v14;
}
