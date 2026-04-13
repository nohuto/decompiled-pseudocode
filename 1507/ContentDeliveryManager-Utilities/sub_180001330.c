/*
 * XREFs of sub_180001330 @ 0x180001330
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x1800261E4 (atexit.c)
 */

int sub_180001330()
{
  int result; // eax

  result = dword_18003AE44;
  if ( (dword_18003AE44 & 1) == 0 )
  {
    qword_18003AC80 = (__int64)&qword_18003AE38;
    dword_18003AE44 |= 1u;
    qword_18003AE38 = (__int64)off_18002CB48;
    result = atexit(sub_180028020);
  }
  byte_18003AE40 = &qword_18003AE38 != 0LL;
  return result;
}
