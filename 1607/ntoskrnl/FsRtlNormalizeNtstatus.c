/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x14010F2F8
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x1404476E0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1400AB6F8 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}
