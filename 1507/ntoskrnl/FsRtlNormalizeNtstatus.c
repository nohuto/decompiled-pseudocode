/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x140133EC4
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x14049D1D0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}
