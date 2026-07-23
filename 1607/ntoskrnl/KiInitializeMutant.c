/*
 * XREFs of KiInitializeMutant @ 0x140087474
 * Callers:
 *     KeInitializeMutex @ 0x140087460 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x14008746C (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x1400F8BC8 (LdrpInitMuiCrits.c)
 *     MiInitializeBootDefaults @ 0x14078E68C (MiInitializeBootDefaults.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     ExpProfileInitialization @ 0x1407A1E30 (ExpProfileInitialization.c)
 *     EtwpInitializeRegistration @ 0x1407A2330 (EtwpInitializeRegistration.c)
 *     sub_1407B5678 @ 0x1407B5678 (sub_1407B5678.c)
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 *     PnpInitializeDeviceEvents @ 0x1407BBB2C (PnpInitializeDeviceEvents.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v9; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v9 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v9->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    Blink->Flink = v9;
    CurrentThread->MutantListHead.Blink = v9;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 49) = a3;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
