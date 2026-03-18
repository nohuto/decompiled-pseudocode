/*
 * XREFs of imp_WdfInterruptSynchronize @ 0x1C0035560
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ @ 0x1C00096F0 (-GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

BOOLEAN __fastcall imp_WdfInterruptSynchronize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        unsigned __int8 (__fastcall *Callback)(WDFINTERRUPT__ *, void *),
        void *Context)
{
  FxMemoryBufferFromPool *v6; // rcx
  struct _KINTERRUPT *Blink; // rax
  _FX_DRIVER_GLOBALS *Buffer; // rax
  void *v10; // rdx
  _QWORD SynchronizeContext[5]; // [rsp+20h] [rbp-28h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  v6 = (FxMemoryBufferFromPool *)pFxInterrupt;
  if ( pFxInterrupt->m_PassiveHandling )
  {
    if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) < 0 )
      return 0;
    v6 = (FxMemoryBufferFromPool *)pFxInterrupt;
  }
  if ( !Callback )
  {
    Buffer = FxMemoryBufferPreallocated::GetBuffer(v6);
    FxVerifierNullBugCheck(Buffer, v10);
  }
  Blink = (struct _KINTERRUPT *)v6[1].FxMemoryObject::FxObject::__vftable;
  SynchronizeContext[0] = v6;
  SynchronizeContext[1] = Callback;
  SynchronizeContext[2] = Context;
  if ( !Blink )
    Blink = (struct _KINTERRUPT *)v6[3].m_ChildListHead.Blink;
  return KeSynchronizeExecution(Blink, FxInterrupt::_InterruptSynchronizeThunk, SynchronizeContext);
}
