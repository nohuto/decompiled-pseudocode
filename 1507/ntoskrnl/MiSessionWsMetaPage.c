/*
 * XREFs of MiSessionWsMetaPage @ 0x140120468
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 * Callees:
 *     MiPageInRange @ 0x1401205C0 (MiPageInRange.c)
 */

__int64 __fastcall MiSessionWsMetaPage(__int64 a1)
{
  if ( (_QWORD)xmmword_14034EAE0 && qword_14034EAF0 )
    return MiPageInRange(
             a1,
             (((unsigned __int64)xmmword_14034EAE0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             (((unsigned __int64)(qword_14034EAF0 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
             1LL);
  else
    return 0LL;
}
