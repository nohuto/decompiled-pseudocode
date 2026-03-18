/*
 * XREFs of ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00028A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxTimer::_FxTimerExtCallbackThunk(struct _EX_TIMER *Timer, unsigned __int64 Context)
{
  FxSystemWorkItem *v2; // rcx
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  _FX_DRIVER_GLOBALS *v5; // rdx
  void (__fastcall **v6)(unsigned __int64); // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(FxSystemWorkItem **)(Context + 320);
  if ( v2 )
  {
    FxSystemWorkItem::EnqueueWorker(
      v2,
      (void (__fastcall *)(void *))FxTimer::_FxTimerWorkItemCallback,
      (void *)Context,
      0);
  }
  else
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine((void *)(Context + 312), 8u, 2164260864u, 3938u, 2u);
    v5 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
    if ( v5->FxTrackDriverForMiniDumpLog )
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                      + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v5;
    v6 = (void (__fastcall **)(unsigned __int64))(Context + 312);
    if ( *(_QWORD *)(Context + 312) )
    {
      v7 = (_QWORD *)(Context + 328);
      v8 = (_QWORD *)(Context + 296);
      v9 = *(_QWORD *)(Context + 296);
      *(_QWORD *)(Context + 328) = KeGetCurrentThread();
      if ( v9 )
      {
        v12 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v9 + 16LL))(v9, &v12);
        if ( *(_WORD *)(Context + 10) )
          v10 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v10 = 0LL;
        (*v6)(v10);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, v12);
      }
      else
      {
        if ( *(_WORD *)(Context + 10) )
          v11 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v11 = 0LL;
        (*v6)(v11);
      }
      *v7 = 0LL;
    }
  }
}
