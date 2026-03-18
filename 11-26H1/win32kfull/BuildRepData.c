/*
 * XREFs of BuildRepData @ 0x140148F68
 * Callers:
 *     BuildShrinkAAInfo @ 0x140147E20 (BuildShrinkAAInfo.c)
 *     BuildExpandAAInfo @ 0x1401485D0 (BuildExpandAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildRepData(__int64 *a1, int a2, int a3)
{
  int v3; // esi
  int v4; // r10d
  int v5; // edx
  int v6; // r11d
  _WORD *v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 result; // rax
  int v11; // r9d
  int *v12; // r13
  unsigned __int8 v13; // di
  int v14; // ebx
  char v15; // r12
  int v16; // ecx
  int v17; // r9d
  int v18; // eax
  int v19; // r8d
  int v20; // ecx
  int v21; // ecx
  int i; // eax
  int v23; // [rsp+0h] [rbp-68h]
  int v24; // [rsp+4h] [rbp-64h]
  int *v25; // [rsp+10h] [rbp-58h]
  __int128 v26; // [rsp+20h] [rbp-48h]
  __int128 v27; // [rsp+30h] [rbp-38h]
  __int128 v28; // [rsp+30h] [rbp-38h]
  __int128 v29; // [rsp+40h] [rbp-28h]
  __int128 v30; // [rsp+50h] [rbp-18h]
  int v32; // [rsp+B8h] [rbp+50h] BYREF
  int v33; // [rsp+C0h] [rbp+58h] BYREF
  int v34; // [rsp+C8h] [rbp+60h]

  v33 = a3;
  v32 = a2;
  v3 = a2;
  v4 = 0;
  v5 = -1;
  v34 = 0;
  v6 = a3;
  v23 = 0;
  v7 = (_WORD *)a1[5];
  v8 = *a1;
  v27 = *((_OWORD *)a1 + 1);
  v26 = *(_OWORD *)a1;
  v9 = HIDWORD(*a1);
  v29 = *((_OWORD *)a1 + 2);
  v30 = *((_OWORD *)a1 + 3);
  if ( (int)v8 < SHIDWORD(v8) )
  {
    v11 = *a1;
    v25 = &v33;
    v12 = &v32;
  }
  else
  {
    if ( (int)v8 <= SHIDWORD(v8) )
      return 0LL;
    v11 = HIDWORD(*a1);
    v25 = &v32;
    v12 = &v33;
    LODWORD(v9) = *a1;
  }
  BYTE3(v29) = 0;
  v24 = 2 * v9;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 2 * v9 + v11;
  v17 = 2 * v11;
  if ( a3 >= SHIDWORD(v27) )
    return 0LL;
  LOBYTE(v18) = 0;
  v19 = 2;
  BYTE2(v29) = 0;
  while ( 1 )
  {
    v16 -= v17;
    if ( v16 < 0 )
    {
      ++*v12;
      if ( v5 != -1 )
        *v7++ = v14;
      v16 += v24;
      v14 = 0;
      v6 = v33;
      v15 = 0;
      v3 = v32;
    }
    ++v15;
    if ( v3 < (int)v27 || v6 < SDWORD2(v27) || v3 >= SDWORD1(v27) || v6 >= SHIDWORD(v27) )
    {
      if ( v5 != -1 )
        goto LABEL_22;
    }
    else
    {
      ++v14;
      if ( v5 == -1 )
      {
        LOBYTE(v18) = v15 - 1;
        v34 = v6;
        BYTE2(v29) = v15 - 1;
        v5 = v3;
      }
      v4 = v3;
      v23 = v6;
    }
    ++*v25;
    v6 = v33;
    if ( v33 >= SHIDWORD(v27) )
      break;
    v3 = v32;
  }
  if ( v5 == -1 )
    return 0LL;
LABEL_22:
  if ( v14 )
  {
    *v7++ = v14;
    v20 = v16 - v17;
    if ( v20 >= 0 )
    {
      do
      {
        ++v13;
        v20 -= v17;
      }
      while ( v20 >= 0 );
      BYTE3(v29) = v13;
    }
  }
  v21 = v5;
  if ( (int)v8 < SDWORD1(v26) )
  {
    v18 = 2;
    do
    {
LABEL_28:
      if ( v21 <= (int)v27 )
        break;
      --v21;
      --v18;
    }
    while ( v18 );
    goto LABEL_30;
  }
  v18 = (unsigned __int8)v18;
  v19 = v13;
  if ( (_BYTE)v18 )
    goto LABEL_28;
LABEL_30:
  for ( i = v4; v19; --v19 )
  {
    if ( i >= DWORD1(v27) - 1 )
      break;
    ++i;
  }
  BYTE1(v29) = i - v4;
  DWORD1(v28) = v4 + 1;
  DWORD2(v28) = v34;
  HIDWORD(v28) = v23 + 1;
  result = 1LL;
  HIDWORD(v26) = v4 - v5 + 1;
  DWORD2(v26) = v5;
  *(_OWORD *)a1 = v26;
  LODWORD(v28) = v5;
  *((_OWORD *)a1 + 1) = v28;
  *(_QWORD *)&v30 = v7;
  DWORD2(v30) = 1;
  LOBYTE(v29) = v5 - v21;
  *((_OWORD *)a1 + 2) = v29;
  *((_OWORD *)a1 + 3) = v30;
  return result;
}
