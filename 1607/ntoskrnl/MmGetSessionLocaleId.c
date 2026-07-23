/*
 * XREFs of MmGetSessionLocaleId @ 0x14045851C
 * Callers:
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x1404596C8 (NtQueryDefaultLocale.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
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
