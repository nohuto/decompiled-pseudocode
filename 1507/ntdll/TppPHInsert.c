/*
 * XREFs of TppPHInsert @ 0x18003D5C0
 * Callers:
 *     TppEnqueueTimer @ 0x18003D524 (TppEnqueueTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall TppPHInsert(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9

  v2 = *a1;
  if ( !*a1 )
  {
LABEL_7:
    *a1 = a2;
    return;
  }
  if ( v2[4] >= a2[4] )
  {
    v5 = a2[2];
    *v2 = v5;
    v2[1] = (__int64)(a2 + 2);
    if ( *(__int64 **)(v5 + 8) != a2 + 2 )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = v2;
    a2[2] = (__int64)v2;
    goto LABEL_7;
  }
  v3 = v2 + 2;
  v4 = *v3;
  *a2 = *v3;
  a2[1] = (__int64)v3;
  if ( *(__int64 **)(v4 + 8) != v3 )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = a2;
  *v3 = (__int64)a2;
}
