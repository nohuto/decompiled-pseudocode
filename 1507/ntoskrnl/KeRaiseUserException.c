/*
 * XREFs of KeRaiseUserException @ 0x1402008EC
 * Callers:
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v4; // al
  _KTRAP_FRAME *TrapFrame; // r8
  void *InstrumentationCallback; // r11

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v4 = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentIrql = v4;
  }
  TrapFrame = CurrentThread->TrapFrame;
  if ( TrapFrame && (TrapFrame->SegCs & 1) != 0 )
  {
    *((_DWORD *)CurrentThread->Teb + 176) = a1;
    _disable();
    TrapFrame->SegCs = 51;
    TrapFrame->Rip = KeRaiseUserExceptionDispatcher;
    if ( TrapFrame->ExceptionActive != 2 )
    {
      InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
      if ( InstrumentationCallback )
      {
        TrapFrame->R10 = TrapFrame->Rip;
        TrapFrame->Rip = (unsigned __int64)InstrumentationCallback;
      }
    }
    _enable();
  }
  if ( !CurrentIrql )
    __writecr8(0LL);
  return a1;
}
