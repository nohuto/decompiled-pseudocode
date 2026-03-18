/*
 * XREFs of MmGetSessionLocaleId @ 0x140445F30
 * Callers:
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x1404472C0 (NtQueryDefaultLocale.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || PsIsSystemProcess(Process) )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 112);
}
