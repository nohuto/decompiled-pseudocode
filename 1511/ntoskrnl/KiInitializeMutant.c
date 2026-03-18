/*
 * XREFs of KiInitializeMutant @ 0x14007CCC0
 * Callers:
 *     KeInitializeMutant @ 0x14007CCB8 (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x1400DE030 (LdrpInitMuiCrits.c)
 *     KeInitializeMutex @ 0x1400F4838 (KeInitializeMutex.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     ExpProfileInitialization @ 0x14075B16C (ExpProfileInitialization.c)
 *     EtwpInitializeRegistration @ 0x14075B66C (EtwpInitializeRegistration.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     MiInitializeBootDefaults @ 0x14076F498 (MiInitializeBootDefaults.c)
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 *     PnpInitializeDeviceEvents @ 0x140770D44 (PnpInitializeDeviceEvents.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v8; // rax
  __int64 result; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)a1 = 2;
  v3 = a3;
  if ( (_BYTE)a2 )
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
        KeYieldProcessorEx(&v10, a2, a3);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v8 = (struct _LIST_ENTRY *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    Blink->Flink = v8;
    CurrentThread->MutantListHead.Blink = v8;
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
  *(_BYTE *)(a1 + 49) = v3;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
