/*
 * XREFs of sub_14014EF58 @ 0x14014EF58
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 */

__int64 __fastcall sub_14014EF58(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 280))(a1);
}
