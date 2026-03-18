/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x1406239F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  __int64 v1; // r8
  __int64 v2; // r9

  LOBYTE(v1) = 1;
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, v1, v2);
}
