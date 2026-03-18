/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00D0180
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000C9E8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C006C32C (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C006C460 (WPP_IFR_SF_qqcDqd.c)
 */

__int64 __fastcall Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 device,
        _IRP *Irp,
        FxIoQueue *queue,
        unsigned int Flags)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v6; // r14d
  _DEVICE_OBJECT *_a4; // rdx
  const void *_a3; // rcx
  unsigned int MajorFunction; // r10d
  unsigned __int16 v14; // r9
  FxPkgIo *v15; // rax
  const void *v16; // rbx
  const void *v17; // rdi
  const _GUID *v18; // r11
  FxDevice *v19; // rcx
  FxDevice *m_Device; // rax
  const void *v21; // rbx
  unsigned __int16 v22; // r9
  FxPkgPnp *v23; // rax
  const void *v24; // rax
  const _GUID *_a2; // [rsp+20h] [rbp-40h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  if ( FxDriverGlobals->FxVerboseOn )
  {
    _a4 = *(_DEVICE_OBJECT **)(device + 144);
    if ( *(_WORD *)(device + 10) )
      _a3 = (const void *)(device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(
      FxDriverGlobals,
      (unsigned __int8)_a4,
      (unsigned int)Irp,
      0xEu,
      WPP_FxDeviceApiKm_cpp_Traceguids,
      _a3,
      _a4,
      CurrentStackLocation->MajorFunction,
      CurrentStackLocation->MinorFunction,
      Irp);
  }
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    v6 = -1073741811;
    WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 0xDu, 0xFu, WPP_FxDeviceApiKm_cpp_Traceguids, Flags, -1073741811);
    goto LABEL_58;
  }
  MajorFunction = CurrentStackLocation->MajorFunction;
  v14 = 16;
  if ( MajorFunction > 0x10 )
  {
    if ( MajorFunction != 18 )
    {
      if ( MajorFunction != 22 )
      {
        if ( MajorFunction == 23 )
        {
          v15 = *(FxPkgIo **)(device + 664);
          goto LABEL_24;
        }
        if ( MajorFunction != 27 )
        {
LABEL_21:
          v15 = *(FxPkgIo **)(device + 672);
          goto LABEL_24;
        }
      }
      v15 = *(FxPkgIo **)(device + 648);
      if ( v15 )
        goto LABEL_24;
      goto LABEL_21;
    }
  }
  else if ( MajorFunction != 16 && CurrentStackLocation->MajorFunction && MajorFunction != 2 )
  {
    if ( CurrentStackLocation->MajorFunction > 2u
      && (CurrentStackLocation->MajorFunction <= 4u || MajorFunction - 14 <= 1) )
    {
      v15 = *(FxPkgIo **)(device + 640);
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v15 = *(FxPkgIo **)(device + 656);
LABEL_24:
  if ( v15 != *(FxPkgIo **)(device + 640) )
  {
    v6 = -1073741811;
    if ( *(_WORD *)(device + 10) )
      v16 = (const void *)(device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v16 = 0LL;
    if ( queue->m_ObjectSize )
      v17 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
LABEL_31:
    WPP_IFR_SF_qqcDqd(
      FxDriverGlobals,
      device,
      (unsigned int)Irp,
      v14,
      _a2,
      v17,
      Irp,
      MajorFunction,
      CurrentStackLocation->MinorFunction,
      v16);
    goto LABEL_58;
  }
  if ( !FxIoQueue::IsIoEventHandlerRegistered(queue, (_WDF_REQUEST_TYPE)CurrentStackLocation->MajorFunction) )
  {
    v6 = -1073741811;
    if ( *(_WORD *)(device + 10) )
      v16 = (const void *)(device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v16 = 0LL;
    if ( queue->m_ObjectSize )
      v17 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v17 = 0LL;
    v14 = 17;
    goto LABEL_31;
  }
  v19 = *(FxDevice **)(device + 224);
  m_Device = queue->m_Device;
  if ( v19 == m_Device )
  {
    if ( v19 )
    {
      v23 = *(FxPkgPnp **)(device + 648);
      if ( !v23 || BYTE3(v23[1].m_DisposeSingleEntry.Next) )
        return v6;
      v6 = -1073741808;
      if ( *(_WORD *)(device + 10) )
        v21 = (const void *)(device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      v22 = 19;
    }
    else
    {
      v6 = -1073741811;
      if ( *(_WORD *)(device + 10) )
        v21 = (const void *)(device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      v22 = 18;
    }
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v22, v18, v21, v6);
  }
  else
  {
    if ( (FxDevice *)device == m_Device )
      return v6;
    v6 = -1073741811;
    if ( m_Device->m_ObjectSize )
      v24 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v24 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x14u, v18, v24, -1073741811);
  }
LABEL_58:
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v6;
}
