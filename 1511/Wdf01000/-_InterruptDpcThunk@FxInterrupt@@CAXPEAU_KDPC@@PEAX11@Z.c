/*
 * XREFs of ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0002E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *v4; // rcx
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  _FX_DRIVER_GLOBALS *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(FxSystemWorkItem **)(DeferredContext + 240);
  if ( v4 )
  {
    FxSystemWorkItem::EnqueueWorker(v4, FxInterrupt::_InterruptWorkItemCallback, (void *)DeferredContext, 0);
  }
  else
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine((void *)(DeferredContext + 336), 8u, 2164260864u, 3938u, 2u);
    v7 = *(_FX_DRIVER_GLOBALS **)(DeferredContext + 16);
    if ( v7->FxTrackDriverForMiniDumpLog )
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                      + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v7;
    v8 = *(_QWORD *)(DeferredContext + 248);
    if ( v8 )
    {
      v15 = 0;
      (*(void (__fastcall **)(__int64, unsigned __int8 *, void *, void *))(*(_QWORD *)v8 + 16LL))(
        v8,
        &v15,
        SystemArgument1,
        SystemArgument2);
      v9 = *(_QWORD *)(DeferredContext + 96);
      v10 = 0LL;
      if ( *(_WORD *)(v9 + 10) )
        v11 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v11 = 0LL;
      if ( *(_WORD *)(DeferredContext + 10) )
        v10 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(DeferredContext + 336))(v10, v11);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(DeferredContext + 248) + 24LL))(
        *(_QWORD *)(DeferredContext + 248),
        v15);
    }
    else
    {
      v12 = *(_QWORD *)(DeferredContext + 96);
      v13 = 0LL;
      if ( *(_WORD *)(v12 + 10) )
        v14 = v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v14 = 0LL;
      if ( *(_WORD *)(DeferredContext + 10) )
        v13 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, void *, void *))(DeferredContext + 336))(
        v13,
        v14,
        SystemArgument1,
        SystemArgument2);
    }
  }
}
