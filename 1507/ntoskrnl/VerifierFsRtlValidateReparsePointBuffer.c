/*
 * XREFs of VerifierFsRtlValidateReparsePointBuffer @ 0x140741E98
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
