/*
 * XREFs of MiSessionWsMetaPage @ 0x140106070
 * Callers:
 *     MiActivePageClaimCandidate @ 0x140105A60 (MiActivePageClaimCandidate.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 * Callees:
 *     MiPageInRange @ 0x140106150 (MiPageInRange.c)
 */

__int64 __fastcall MiSessionWsMetaPage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r9

  if ( !qword_1403268F8 )
    return 0LL;
  v2 = qword_140326908;
  if ( !qword_140326908 )
    return 0LL;
  result = MiPageInRange(
             a1,
             (((unsigned __int64)qword_1403268F8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             (((unsigned __int64)(qword_140326918 + 1078231039) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             1LL);
  if ( !(_DWORD)result )
    return MiPageInRange(
             a1,
             (((unsigned __int64)qword_140326900 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             (((unsigned __int64)(v2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             v4);
  return result;
}
