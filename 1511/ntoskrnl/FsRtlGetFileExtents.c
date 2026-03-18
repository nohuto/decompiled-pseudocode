/*
 * XREFs of FsRtlGetFileExtents @ 0x1401AC304
 * Callers:
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlGetFileExtents(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return FsRtlGetFileExtentsFsctl(a1, a3, a4, a5);
}
