/*
 * XREFs of ValidateParentDepth @ 0x1C0075E28
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ValidateNewParent @ 0x1C0075C7C (ValidateNewParent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  unsigned int i; // r8d
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r11
  unsigned int v6; // edx
  _QWORD *v8; // r10

  for ( i = 1; a2; ++i )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 16);
    }
    if ( a2 == v4 )
      break;
    a2 = *(_QWORD *)(a2 + 88);
  }
  v6 = i;
  if ( a1 && a1[12] )
  {
    v8 = (_QWORD *)a1[11];
    while ( 1 )
    {
LABEL_12:
      while ( a1[12] )
      {
        a1 = (_QWORD *)a1[12];
        ++i;
      }
      if ( !a1[9] )
        break;
      a1 = (_QWORD *)a1[9];
    }
    if ( i > v6 )
      v6 = i;
    while ( 1 )
    {
      a1 = (_QWORD *)a1[11];
      --i;
      if ( a1 == v8 )
        break;
      if ( a1[9] )
      {
        a1 = (_QWORD *)a1[9];
        goto LABEL_12;
      }
    }
  }
  return v6 <= gNestedWindowLimit;
}
