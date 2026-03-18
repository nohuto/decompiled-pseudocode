/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0003440
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00035B0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003600 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, unsigned __int64 ServiceContext)
{
  void (__fastcall *InterruptNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  void (__fastcall *v5)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v6; // rcx
  char v7; // di
  void (__fastcall *v8)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v9; // rcx
  char v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]

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
  else if ( *(_BYTE *)(ServiceContext + 258) )
  {
    FxInterrupt::AcquireLock((FxInterrupt *)ServiceContext);
    v5 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( v5 )
    {
      v11 = 2;
      v5((void *)(ServiceContext + 328), 8u, 2181038080u, 3937u, v11);
    }
    if ( *(_WORD *)(ServiceContext + 10) )
      v6 = ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v6 = 0LL;
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(ServiceContext + 328))(
           v6,
           *(unsigned int *)(ServiceContext + 380));
    FxInterrupt::ReleaseLock((FxInterrupt *)ServiceContext);
    return v7;
  }
  else
  {
    v8 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( v8 )
    {
      v12 = 2;
      v8((void *)(ServiceContext + 328), 8u, 2181038080u, 3936u, v12);
    }
    if ( *(_WORD *)(ServiceContext + 10) )
      v9 = ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v9 = 0LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(ServiceContext + 328))(
             v9,
             *(unsigned int *)(ServiceContext + 380));
  }
}
