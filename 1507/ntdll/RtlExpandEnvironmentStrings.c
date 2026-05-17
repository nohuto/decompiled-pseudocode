/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x1800385A0
 * Callers:
 *     RtlExpandEnvironmentStrings_U @ 0x18000F480 (RtlExpandEnvironmentStrings_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800353E0 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings(
        _WORD *a1,
        _WORD *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  int v10; // edi
  __int64 v11; // rsi
  size_t v13; // rax
  size_t v14; // r15
  _WORD *v15; // r13
  int v16; // ecx
  _WORD *v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = a1;
  v6 = a5;
  v7 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  do
  {
    if ( *a2 != 37 )
      goto LABEL_3;
    v13 = v7 - 1;
    v14 = 0LL;
    v15 = a2 + 1;
    if ( v7 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v15 == 37 )
        break;
      ++v15;
      ++v14;
    }
    while ( v14 < v13 );
    if ( v14
      && v14 < v13
      && ((v16 = RtlQueryEnvironmentVariable(a1, a2 + 1, v14, (__int64)a4, v6, &v18), (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
        --v11;
      a2 = v15 + 1;
      v7 += -2LL - v14;
      if ( v16 < 0 )
      {
        v10 = v16;
      }
      else
      {
        v6 -= v18;
        a4 += v18;
      }
    }
    else
    {
LABEL_3:
      if ( v10 >= 0 )
      {
        if ( v6 <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --v6;
          *a4++ = *a2;
        }
      }
      ++v11;
      --v7;
      ++a2;
    }
    a1 = v17;
  }
  while ( v7 );
  if ( v10 >= 0 )
  {
LABEL_9:
    if ( v6 )
      *a4 = 0;
    else
      v10 = -1073741789;
  }
  if ( a6 )
    *a6 = v11 + 1;
  return (unsigned int)v10;
}
