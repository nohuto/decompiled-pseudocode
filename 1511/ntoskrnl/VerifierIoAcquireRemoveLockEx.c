/*
 * XREFs of VerifierIoAcquireRemoveLockEx @ 0x1406C1ADC
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 *     ViRemLockFindSurrogate @ 0x1406C1EB8 (ViRemLockFindSurrogate.c)
 */

NTSTATUS __fastcall VerifierIoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  __int64 Surrogate; // rax

  if ( ViRemLockInitialized && RemlockSize != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    return pXdvIoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Surrogate + 16), Tag, File, Line, 0x78u);
  else
    return pXdvIoAcquireRemoveLockEx(RemoveLock, Tag, File, Line, RemlockSize);
}
