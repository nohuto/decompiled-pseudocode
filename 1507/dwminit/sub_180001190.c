/*
 * XREFs of sub_180001190 @ 0x180001190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003DD8 @ 0x180003DD8 (sub_180003DD8.c)
 */

__int64 sub_180001190()
{
  _QWORD *v0; // rax

  v0 = (_QWORD *)sub_180003DD8(24LL);
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = off_180008E08;
    v0[2] = 0LL;
    qword_18000C070 = (__int64)v0;
  }
  else
  {
    qword_18000C070 = 0LL;
  }
  byte_18000C079 = 1;
  off_18000C068 = off_180008DB8;
  qword_18000C088 = 0LL;
  return sub_180006468(sub_180007970);
}
