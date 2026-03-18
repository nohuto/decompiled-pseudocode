/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x140103D54
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x14047A9A0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}
