/*
 * XREFs of MiSessionWsMetaPage @ 0x140103DF0
 * Callers:
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     MiPageInRange @ 0x140103ED0 (MiPageInRange.c)
 */

__int64 __fastcall MiSessionWsMetaPage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r9

  if ( !qword_140326938 )
    return 0LL;
  v2 = qword_140326948;
  if ( !qword_140326948 )
    return 0LL;
  result = MiPageInRange(
             a1,
             (((unsigned __int64)qword_140326938 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             (((unsigned __int64)(qword_140326958 + 1078231039) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             1LL);
  if ( !(_DWORD)result )
    return MiPageInRange(
             a1,
             (((unsigned __int64)qword_140326940 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             (((unsigned __int64)(v2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             v4);
  return result;
}
