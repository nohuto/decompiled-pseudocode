/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x14066D010
 * Callers:
 *     VerifierFsRtlDeregisterUncProvider @ 0x140741C9C (VerifierFsRtlDeregisterUncProvider.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 */

void __stdcall FsRtlDeregisterUncProvider(HANDLE Handle)
{
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ZwClose(Handle) >= 0 )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    --FsRtlpRedirs;
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
  }
}
