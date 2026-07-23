/*
 * XREFs of AslEnvExpandStrings @ 0x1406C6480
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1406C6668 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1406C69CC (AslEnvVarQuery.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 v9; // r10
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r12
  _WORD *v14; // r13
  int v15; // eax
  _WORD *v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+90h] [rbp+18h]

  v7 = a3;
  v9 = a1;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_24;
  do
  {
    if ( *a2 != 37 )
      goto LABEL_17;
    v12 = 0LL;
    v13 = v7 - 1;
    v17 = a2 + 1;
    v14 = a2 + 1;
    if ( v7 == 1 )
      goto LABEL_17;
    do
    {
      if ( *v14 == 37 )
        break;
      ++v14;
      ++v12;
    }
    while ( v12 < v13 );
    if ( v12 && v12 < v13 )
    {
      v15 = AslEnvVarQuery(v9, a2 + 1, v12);
      if ( v15 == -1073741789 )
      {
        a2 = v14 + 1;
        v9 = a1;
        v11 += v19 - 1;
        v10 = -1073741789;
        v7 += -2LL - v12;
      }
      else if ( v15 >= 0 )
      {
        a2 = v14 + 1;
        v9 = a1;
        v11 += v19;
        v7 += -2LL - v12;
        if ( a5 <= v19 )
        {
          v10 = -1073741789;
        }
        else
        {
          a5 -= v19;
          a4 += v19;
        }
      }
      else
      {
        if ( v15 != -1073741568 )
          AslLogCallPrintf(1LL);
        a2 = v17;
        ++v11;
        v9 = a1;
        --v7;
      }
    }
    else
    {
LABEL_17:
      if ( v10 != -1073741789 )
      {
        if ( a5 <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --a5;
          *a4++ = *a2;
        }
      }
      ++v11;
      --v7;
      ++a2;
    }
  }
  while ( v7 );
  if ( v10 != -1073741789 )
  {
LABEL_24:
    if ( a5 )
      *a4 = 0;
    else
      v10 = -1073741789;
  }
  if ( a6 )
    *a6 = v11 + 1;
  return v10;
}
