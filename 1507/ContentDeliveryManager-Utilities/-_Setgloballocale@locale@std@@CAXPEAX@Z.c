/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800217DC
 * Callers:
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 * Callees:
 *     sub_180022AC4 @ 0x180022AC4 (sub_180022AC4.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_18003A3C0 )
  {
    byte_18003A3C0 = 1;
    sub_180022AC4(sub_180021820);
  }
  qword_18003A380 = a1;
}
