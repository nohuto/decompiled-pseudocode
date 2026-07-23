/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x14010F85C
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x1404465B0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}
