/*
 * XREFs of VerifierFsRtlRemoveDotsFromPath @ 0x1406C0694
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  return pXdvFsRtlRemoveDotsFromPath(OriginalString, PathLength, NewLength);
}
