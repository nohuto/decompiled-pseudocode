/*
 * XREFs of ?Mix@Value@Animations@Components@@QEBA?AV123@AEBV123@HPEA_N1@Z @ 0x180158044
 * Callers:
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall Components::Animations::Value::Mix(
        double *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  int v6; // r10d
  __int64 v7; // r9
  __int64 v8; // r11
  signed __int64 v9; // r8
  double v10; // xmm1_8

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  v6 = 0;
  *((_QWORD *)a2 + 2) = 0LL;
  v7 = 0LL;
  v8 = a3 - (_QWORD)a1;
  *((_QWORD *)a2 + 3) = 0LL;
  v9 = a2 - (char *)a1;
  *a6 = 0;
  do
  {
    if ( v7 < 4 && *(_BYTE *)(v7 + a5) )
    {
      v10 = *(double *)((char *)a1 + v8);
      if ( *a1 != v10 )
        *a6 = 1;
      *(double *)((char *)a1 + v9) = v10;
    }
    else
    {
      *(double *)((char *)a1 + v9) = *a1;
    }
    ++v6;
    ++v7;
    ++a1;
  }
  while ( (unsigned __int64)v6 < 4 );
  return a2;
}
