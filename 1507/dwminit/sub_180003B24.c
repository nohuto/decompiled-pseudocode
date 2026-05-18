/*
 * XREFs of sub_180003B24 @ 0x180003B24
 * Callers:
 *     sub_180001984 @ 0x180001984 (sub_180001984.c)
 *     sub_180001A88 @ 0x180001A88 (sub_180001A88.c)
 *     sub_180001DB8 @ 0x180001DB8 (sub_180001DB8.c)
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180004FC0 @ 0x180004FC0 (sub_180004FC0.c)
 *     sub_180005050 @ 0x180005050 (sub_180005050.c)
 *     sub_1800051B0 @ 0x1800051B0 (sub_1800051B0.c)
 *     sub_180005380 @ 0x180005380 (sub_180005380.c)
 * Callees:
 *     sub_1800039B8 @ 0x1800039B8 (sub_1800039B8.c)
 *     sub_180003A94 @ 0x180003A94 (sub_180003A94.c)
 *     sub_180003B00 @ 0x180003B00 (sub_180003B00.c)
 *     sub_180003BC0 @ 0x180003BC0 (sub_180003BC0.c)
 */

void __fastcall sub_180003B24(unsigned int a1, __int64 a2, __int64 a3, UINT a4, int a5)
{
  char v7; // al
  __int64 v8; // rcx
  _DWORD *v9; // r10
  unsigned int v10; // r11d
  char v11; // r9

  v7 = sub_180003BC0(a4);
  if ( (a1 & 0x10) != 0 && v7 )
  {
    if ( !v9 || !v10 )
      goto LABEL_10;
  }
  else if ( !v9 || !v10 )
  {
    v9 = &unk_180008F50;
    v10 = 10;
  }
  if ( !sub_180003B00(v8, v9, v10) )
  {
LABEL_10:
    sub_180003A94(v8, a4, a1, a5);
    return;
  }
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      sub_1800039B8(1, a4, a5);
  }
}
