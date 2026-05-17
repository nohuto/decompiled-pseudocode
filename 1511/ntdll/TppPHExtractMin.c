/*
 * XREFs of TppPHExtractMin @ 0x18000B208
 * Callers:
 *     TppPHDelete @ 0x18000B1A4 (TppPHDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHExtractMin(__int64 *a1)
{
  __int64 v1; // r9
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v8; // r10
  _QWORD *v9; // rax
  __int64 v10; // r10

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 16;
    if ( *(_QWORD *)v3 == v3 )
    {
      *a1 = 0LL;
    }
    else
    {
      v4 = *(_QWORD **)v3;
      v5 = *(_QWORD **)(v1 + 24);
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *(_QWORD *)(v1 + 24) = v1 + 16;
      *(_QWORD *)v3 = v3;
      while ( 1 )
      {
        v6 = (_QWORD *)*v4;
        if ( (_QWORD *)*v4 == v4 )
          break;
        if ( v6[4] < v4[4] )
        {
          v6 = v4;
          v4 = (_QWORD *)*v4;
        }
        v8 = *v6;
        v9 = (_QWORD *)v6[1];
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v9 != v6 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = v4[2];
        *v6 = v10;
        v6[1] = v4 + 2;
        if ( *(_QWORD **)(v10 + 8) != v4 + 2 )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = v6;
        v4[2] = v6;
        v4 = (_QWORD *)*v4;
      }
      *a1 = (__int64)v4;
    }
  }
  return v1;
}
