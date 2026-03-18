/*
 * XREFs of FsRtlOplockKeysEqual @ 0x140135750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlOplockKeysEqual(PFILE_OBJECT Fo1, PFILE_OBJECT Fo2)
{
  return FsRtlpOplockKeysEqual((__int64)Fo1, (__int64)Fo2, 0);
}
