/*
 * XREFs of ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C005C8A4
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C00581B0 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C00336B4 (FxAllocateFromNPagedLookasideList.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0059790 (--0FxDmaTransactionBase@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $4E78FAD6283A805B24C30083E98044BF *DmaDescription; // rax
  const void *v9; // rbx
  unsigned __int16 ExtraSize; // r10
  FxDmaTransactionBase *v11; // rdi
  $4E78FAD6283A805B24C30083E98044BF *v12; // rax
  unsigned __int16 v13; // r9
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  PSLIST_ENTRY v16; // rax
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  v9 = 0LL;
  ExtraSize = 0;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  v11 = (FxDmaTransactionBase *)FxObjectHandleAlloc(
                                  FxDriverGlobals,
                                  ExDefaultNonPagedPoolType,
                                  0x110uLL,
                                  0,
                                  Attributes,
                                  ExtraSize,
                                  FxObjectTypeExternal);
  if ( v11 )
  {
    v12 = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
    v13 = 0;
    if ( v12->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      v13 = 128;
    FxDmaTransactionBase::FxDmaTransactionBase(v11, FxDriverGlobals, 0x110u, v13, DmaEnabler);
    *(_QWORD *)&v11[1].m_Type = 0LL;
    v11->__vftable = (FxDmaTransactionBase_vtbl *)&FxDmaScatterGatherTransaction::`vftable';
    v11[1].__vftable = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v14 = FxObject::Commit(v11, Attributes, &hTransaction, DmaEnabler, 1u);
    if ( (v14 & 0x80000000) == 0 )
    {
      if ( (*((_BYTE *)DmaEnabler + 380) & 0x20) != 0 )
      {
        v16 = FxAllocateFromNPagedLookasideList(&DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, v15);
        *(_QWORD *)&v11[1].m_Type = v16;
        if ( !v16 )
        {
          v14 = -1073741670;
          if ( v11->m_ObjectSize )
            v9 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xFu, 0x19u, WPP_FxDmaTransaction_cpp_Traceguids, v9, -1073741670);
          goto LABEL_16;
        }
        FxObject::AddRef(DmaEnabler, v11, 821, "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransaction.cpp");
      }
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
      return v14;
    }
LABEL_16:
    FxObject::DeleteFromFailedCreate(v11);
    return v14;
  }
  v14 = -1073741670;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0x18u, WPP_FxDmaTransaction_cpp_Traceguids, -1073741670);
  return v14;
}
