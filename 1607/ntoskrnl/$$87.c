/*
 * XREFs of $$87 @ 0x140252848
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __87(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdi

  Process = KeGetCurrentThread()->ApcState.Process;
  (*(void (__fastcall **)(__int64))(a1 + 384))(a3);
  (*(void (__fastcall **)(__int64))(a1 + 1048))(a2);
  (*(void (__fastcall **)(_KPROCESS *))(a1 + 904))(Process);
  return (*(__int64 (__fastcall **)(_KPROCESS *))(a1 + 920))(Process);
}
