/*
 * XREFs of MmSetSessionLocaleId @ 0x14050D498
 * Callers:
 *     NtSetDefaultLocale @ 0x14050D2C4 (NtSetDefaultLocale.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 */

char __fastcall MmSetSessionLocaleId(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rcx
  unsigned __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v4 || (LOBYTE(CurrentThread) = PsIsSystemProcess(Process), (_BYTE)CurrentThread) )
    PsDefaultThreadLocaleId = a1;
  else
    *(_DWORD *)(v4 + 112) = a1;
  return (char)CurrentThread;
}
