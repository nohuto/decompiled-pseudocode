/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x1404A2440
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1404352A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx

  v6 = (unsigned __int64)(a2 + 4095) >> 12;
  v7 = a3 >> 12;
  if ( a4 > a5 )
    return 3221225495LL;
  v8 = *a1;
  v9 = a4 >> 12;
  v10 = ~(v7 - 1);
  v11 = v10 & (v9 + v7 - 1);
  if ( !*a1 )
    goto LABEL_8;
  v12 = a5 >> 12;
  if ( v11 > a5 >> 12 || v6 > v12 - v11 + 1 )
    return 3221225495LL;
  do
  {
    v13 = v8;
    v8 = (_QWORD *)*v8;
  }
  while ( v8 );
  v14 = (unsigned __int64)v13;
  v15 = *((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32);
  if ( v15 > v11 && v6 <= v15 - v11 )
  {
LABEL_8:
    *a6 = v11 << 12;
    return 0LL;
  }
  while ( 1 )
  {
    i = v13[1];
    if ( i )
    {
      v21 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
    }
    else
    {
      for ( i = v13[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD **)i == v13 )
          break;
        v13 = (_QWORD *)i;
      }
    }
    if ( !i )
      break;
    v18 = v7 + (((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32) | *(unsigned int *)(v14 + 28));
    if ( (v10 & (v18 - 1)) < v11 )
    {
      if ( (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) <= v11 )
        goto LABEL_16;
      v19 = v11;
    }
    else
    {
      v19 = v10 & v18;
    }
    if ( v19 >= v12 )
      return 3221225495LL;
    v20 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
    if ( v20 > v19 && v6 <= v20 - v19 && v6 <= v12 - v19 )
    {
      *a6 = v19 << 12;
      return 0LL;
    }
LABEL_16:
    v13 = (_QWORD *)i;
    v14 = i;
  }
  v22 = 0x7FFFFFFF0LL;
  if ( v12 < 0x7FFFFFFF0LL )
    v22 = a5 >> 12;
  v23 = v10 & (v7 + (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)));
  if ( v22 > v23 && v6 <= v22 - v23 )
  {
    *a6 = v23 << 12;
    return 0LL;
  }
  return 3221225495LL;
}
