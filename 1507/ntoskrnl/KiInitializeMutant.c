/*
 * XREFs of KiInitializeMutant @ 0x1400756B8
 * Callers:
 *     LdrpInitMuiCrits @ 0x14002A838 (LdrpInitMuiCrits.c)
 *     KeInitializeMutex @ 0x1400756A4 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x1400756B0 (KeInitializeMutant.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 *     EtwpInitializeRegistration @ 0x1407DF408 (EtwpInitializeRegistration.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 *     PnpInitializeDeviceEvents @ 0x1407E71F4 (PnpInitializeDeviceEvents.c)
 *     ExpProfileInitialization @ 0x1407E7DF0 (ExpProfileInitialization.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v7; // esi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v9; // rax
  __int64 result; // rax

  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v9 = (struct _LIST_ENTRY *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
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
