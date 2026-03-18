/*
 * XREFs of VerifierFsRtlValidateReparsePointBuffer @ 0x1406C06A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  return pXdvFsRtlValidateReparsePointBuffer(BufferLength, ReparseBuffer);
}
