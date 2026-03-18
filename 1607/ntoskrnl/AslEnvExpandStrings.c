/*
 * XREFs of AslEnvExpandStrings @ 0x1406C6348
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1406C6530 (AslEnvExpandStrings2.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1406C6894 (AslEnvVarQuery.c)
 */

__int64 __fastcall AslEnvExpandStrings(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4, unsigned __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // r10
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r12
  _WORD *v14; // r13
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-58h]
  _WORD *v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v6 = a5;
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
    v18 = a2 + 1;
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
      HIDWORD(v17) = HIDWORD(v6);
      v15 = AslEnvVarQuery(v9, a2 + 1, v12);
      if ( v15 == -1073741789 )
      {
        a2 = v14 + 1;
        v9 = a1;
        v11 += v20 - 1;
        v10 = -1073741789;
        v7 += -2LL - v12;
      }
      else if ( v15 >= 0 )
      {
        a2 = v14 + 1;
        v9 = a1;
        v11 += v20;
        v7 += -2LL - v12;
        if ( v6 <= v20 )
        {
          v10 = -1073741789;
        }
        else
        {
          v6 -= v20;
          a4 += v20;
        }
      }
      else
      {
        if ( v15 != -1073741568 )
        {
          LODWORD(v17) = v15;
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslEnvExpandStrings",
            585,
            (unsigned int)"AslEnvVarQuery failed [%x]",
            v17,
            &v20);
        }
        a2 = v18;
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
  }
  while ( v7 );
  if ( v10 != -1073741789 )
  {
LABEL_24:
    if ( v6 )
      *a4 = 0;
    else
      v10 = -1073741789;
  }
  if ( a6 )
    *a6 = v11 + 1;
  return v10;
}
