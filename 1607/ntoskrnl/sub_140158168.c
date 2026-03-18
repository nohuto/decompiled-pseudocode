/*
 * XREFs of sub_140158168 @ 0x140158168
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 */

__int64 __fastcall sub_140158168(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 264))(a1);
}
