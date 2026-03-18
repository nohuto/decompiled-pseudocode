/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x1405FA080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  return IopSetFileObjectExtensionFlag((__int64)FileObject, 1, 1);
}
