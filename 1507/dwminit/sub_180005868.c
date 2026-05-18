/*
 * XREFs of sub_180005868 @ 0x180005868
 * Callers:
 *     sub_1800079A0 @ 0x1800079A0 (sub_1800079A0.c)
 * Callees:
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 *     sub_180005AE0 @ 0x180005AE0 (sub_180005AE0.c)
 */

__int64 sub_180005868()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = qword_18000EFB0;
  if ( qword_18000EFB0 )
  {
    sub_180005AE0(qword_18000EFB0 + 24);
    result = sub_180003E20(v0);
    qword_18000EFB0 = 0LL;
  }
  return result;
}
