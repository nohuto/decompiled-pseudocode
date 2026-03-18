/*
 * XREFs of sub_14017D11C @ 0x14017D11C
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 */

__int64 __fastcall sub_14017D11C(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 272))(a1);
}
