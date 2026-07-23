/*
 * XREFs of SwapSplayLinks @ 0x1400C3ABC
 * Callers:
 *     RtlDeleteNoSplay @ 0x1400C2930 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  __int64 *v18; // r10
  __int64 *v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rcx

  v2 = a1;
  if ( (_QWORD *)*a1 == a1 || (_QWORD *)*a2 == a1 )
  {
    v2 = a2;
    a2 = a1;
  }
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == a2 )
  {
    v4 = *a2;
    if ( (_QWORD *)*a2 == a2 )
    {
      *v2 = v2;
    }
    else
    {
      v17 = (_QWORD *)(v4 + 8);
      if ( *(_QWORD **)(v4 + 8) != a2 )
        v17 = (_QWORD *)(v4 + 16);
      *v17 = v2;
      *v2 = *a2;
    }
    v5 = v2[1];
    v2[1] = a2[1];
    v6 = a2[2];
    a2[1] = v5;
    v7 = v2[2];
    v2[2] = v6;
    a2[2] = v7;
    if ( (_QWORD *)v2[1] == v2 )
      v2[1] = a2;
    else
      v2[2] = a2;
  }
  else
  {
    v12 = *a2;
    if ( (_QWORD *)*a2 == a2 )
    {
      v13 = v3 + 1;
      if ( (_QWORD *)v3[1] != v2 )
        v13 = v3 + 2;
      *v13 = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      v18 = v3 + 1;
      if ( (_QWORD *)v3[1] != v2 )
        v18 = v3 + 2;
      v19 = (__int64 *)(v12 + 8);
      if ( *(_QWORD **)(v12 + 8) != a2 )
        v19 = (__int64 *)(v12 + 16);
      v20 = *v18;
      *v18 = *v19;
      *v19 = v20;
      v21 = (_QWORD *)*v2;
      *v2 = *a2;
      *a2 = v21;
    }
    v14 = v2[1];
    v2[1] = a2[1];
    v15 = a2[2];
    a2[1] = v14;
    v16 = v2[2];
    v2[2] = v15;
    a2[2] = v16;
  }
  v8 = (_QWORD *)v2[1];
  if ( v8 )
    *v8 = v2;
  v9 = (_QWORD *)v2[2];
  if ( v9 )
    *v9 = v2;
  v10 = (_QWORD *)a2[1];
  if ( v10 )
    *v10 = a2;
  result = (_QWORD *)a2[2];
  if ( result )
    *result = a2;
  return result;
}
