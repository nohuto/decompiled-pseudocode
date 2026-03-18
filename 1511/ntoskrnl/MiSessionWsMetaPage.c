/*
 * XREFs of MiSessionWsMetaPage @ 0x1400BE144
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 * Callees:
 *     MiPageInRange @ 0x1400C0208 (MiPageInRange.c)
 */

__int64 __fastcall MiSessionWsMetaPage(__int64 a1)
{
  if ( (_QWORD)xmmword_1402FE630 && qword_1402FE640 )
    return MiPageInRange(
             a1,
             (((unsigned __int64)xmmword_1402FE630 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             (((unsigned __int64)(qword_1402FE640 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             1LL);
  else
    return 0LL;
}
