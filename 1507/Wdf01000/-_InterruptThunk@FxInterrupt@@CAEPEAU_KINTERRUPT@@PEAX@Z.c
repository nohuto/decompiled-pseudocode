/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00A1BC0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00A20C8 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C00A2208 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, unsigned __int64 ServiceContext)
{
  unsigned __int64 v2; // rdi
  void (__fastcall *InterruptNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  void (__fastcall *v6)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  char v7; // di
  _FX_DRIVER_GLOBALS *v8; // rdx
  void (__fastcall *v9)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  char v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  if ( *(_BYTE *)(ServiceContext + 433) == 1 )
  {
    if ( *(_BYTE *)(ServiceContext + 432) == 1 )
      return 0;
    *(_QWORD *)(ServiceContext + 424) = Interrupt;
  }
  else if ( !*(_QWORD *)(ServiceContext + 128) )
  {
    return 0;
  }
  if ( *(_QWORD *)(ServiceContext + 272) )
  {
    InterruptNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( InterruptNotifyRoutine )
    {
      v10 = 2;
      InterruptNotifyRoutine((void *)(ServiceContext + 328), 8u, 2181038080u, 3937u, v10);
    }
    return FxInterrupt::WakeInterruptIsr((FxInterrupt *)ServiceContext);
  }
  else
  {
    if ( *(_BYTE *)(ServiceContext + 258) )
    {
      FxInterrupt::AcquireLock((FxInterrupt *)ServiceContext, (_FX_DRIVER_GLOBALS *)ServiceContext);
      v6 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
      if ( v6 )
      {
        v11 = 2;
        v6((void *)(ServiceContext + 328), 8u, 2181038080u, 3937u, v11);
      }
      if ( *(_WORD *)(ServiceContext + 10) )
        v2 = ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      v7 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(ServiceContext + 328))(
             v2,
             *(unsigned int *)(ServiceContext + 380));
      FxInterrupt::ReleaseLock((FxInterrupt *)ServiceContext, v8);
    }
    else
    {
      v9 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
      if ( v9 )
      {
        v12 = 2;
        v9((void *)(ServiceContext + 328), 8u, 2181038080u, 3936u, v12);
      }
      if ( *(_WORD *)(ServiceContext + 10) )
        v2 = ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
      return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(ServiceContext + 328))(
               v2,
               *(unsigned int *)(ServiceContext + 380));
    }
    return v7;
  }
}
