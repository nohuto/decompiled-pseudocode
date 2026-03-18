/*
 * XREFs of ?_AdapterListControl@FxDmaScatterGatherTransaction@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0063450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0061A30 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 */

void __fastcall FxDmaScatterGatherTransaction::_AdapterListControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        _SCATTER_GATHER_LIST *SgList,
        unsigned __int64 Context)
{
  _FX_DRIVER_GLOBALS *v4; // rsi
  WDFDMATRANSACTION__ *_a1; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  WDFDEVICE__ *v10; // r8

  v4 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  if ( *(_WORD *)(Context + 10) )
    _a1 = (WDFDMATRANSACTION__ *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
    WPP_IFR_SF_q(v4, 5u, 0xFu, 0x20u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  v8 = *(_QWORD *)(Context + 128);
  *(_QWORD *)(Context + 256) = SgList;
  v9 = *(_QWORD *)(v8 + 96);
  if ( *(_WORD *)(v9 + 10) )
    v10 = (WDFDEVICE__ *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v10 = 0LL;
  FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
    (FxDmaTransactionProgramOrReserveDma *)(Context + 152),
    _a1,
    v10,
    *(void **)(Context + 160),
    *(_DWORD *)(Context + 124),
    SgList);
  if ( v4->FxVerifierOn )
  {
    if ( v4->FxVerboseOn )
      WPP_IFR_SF_q(v4, 5u, 0xFu, 0x21u, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
  }
}
