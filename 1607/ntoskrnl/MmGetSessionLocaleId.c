/*
 * XREFs of MmGetSessionLocaleId @ 0x14045964C
 * Callers:
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x14045A7F8 (NtQueryDefaultLocale.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140072328 (PsIsSystemProcess.c)
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
