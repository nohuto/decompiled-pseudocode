/*
 * XREFs of LongLongMult @ 0x1C0280308
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongLongMult(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int128 v4; // rax

  v4 = a1 * (__int128)a2;
  v3 = v4;
  *(_QWORD *)&v4 = 0LL;
  if ( v3 >= 0 )
  {
    if ( !*((_QWORD *)&v4 + 1) )
      goto LABEL_3;
LABEL_5:
    *a3 = -1LL;
    *(_QWORD *)&v4 = 2147942934LL;
    return v4;
  }
  if ( *((_QWORD *)&v4 + 1) != -1LL )
    goto LABEL_5;
LABEL_3:
  *a3 = v3;
  return v4;
}
