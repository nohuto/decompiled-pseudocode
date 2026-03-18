/*
 * XREFs of ValidateRGBBitFields @ 0x140144828
 * Callers:
 *     ValidateHTSI @ 0x140142724 (ValidateHTSI.c)
 *     GetDstBFInfo @ 0x14030405C (GetDstBFInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateRGBBitFields(__int128 *a1)
{
  __int128 v1; // xmm1
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  char v5; // dl
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r10d
  __int64 i; // rcx
  unsigned int v12; // eax
  char v13; // r8
  char v14; // r9
  bool v15; // cf
  __int64 result; // rax
  __int64 v17; // xmm1_8
  __int128 v18; // [rsp+0h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-10h]

  v1 = *a1;
  v3 = *(_QWORD *)a1;
  v19 = *((_QWORD *)a1 + 2);
  v4 = v3 >> 8;
  v18 = v1;
  if ( (unsigned __int8)v4 == 1 || (unsigned __int8)v4 == 2 || (unsigned __int8)v4 == 3 )
  {
    v5 = 0;
    WORD3(v18) = 2056;
    BYTE5(v18) = 8;
    v6 = 255;
    HIDWORD(v19) = SrcOrderTable[BYTE4(v19)];
    v7 = 0LL;
    do
    {
      v8 = *((unsigned __int8 *)&v19 + v7++ + 5);
      *((_DWORD *)&v18 + v8 + 2) = v6;
      *((_BYTE *)&v18 + v8 + 2) = v5;
      v5 += 8;
      v6 <<= 8;
    }
    while ( v7 < 3 );
    goto LABEL_30;
  }
  v9 = 0LL;
  if ( (unsigned __int8)v4 == 4 )
  {
LABEL_33:
    WORD5(v18) = 0;
    HIWORD(v18) = 0;
    WORD1(v19) = 0;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v4 != 5 && (unsigned __int8)v4 != 6 )
  {
    if ( (unsigned int)(unsigned __int8)v4 - 252 > 1 )
      return 0LL;
    goto LABEL_33;
  }
LABEL_10:
  v10 = v19 | HIDWORD(v18) | DWORD2(v18);
  if ( v10 && ((HIDWORD(v18) | DWORD2(v18)) & (unsigned int)v19) == 0 && (HIDWORD(v18) & DWORD2(v18)) == 0 )
  {
    for ( i = 0LL; i < 3; ++i )
    {
      v12 = *((_DWORD *)&v18 + i + 2);
      v13 = 0;
      v14 = 0;
      if ( v12 )
      {
        while ( (v12 & 1) == 0 )
        {
          v12 >>= 1;
          ++v14;
        }
        do
        {
          ++v13;
          v12 >>= 1;
        }
        while ( (v12 & 1) != 0 );
        if ( v12 )
          return 0LL;
      }
      *((_BYTE *)&v18 + i + 2) = v14;
      *((_BYTE *)&v18 + i + 5) = v13;
    }
    if ( v10 == 0xFFFFFF && *(_WORD *)((char *)&v18 + 5) == 2056 && BYTE7(v18) == 8 )
      LOBYTE(v18) = v18 | 1;
    v15 = HIDWORD(v18) < DWORD2(v18);
    if ( HIDWORD(v18) > DWORD2(v18) )
    {
      if ( DWORD2(v18) < (unsigned int)v19 )
      {
        LOBYTE(v9) = HIDWORD(v18) >= (unsigned int)v19;
LABEL_29:
        HIDWORD(v19) = SrcOrderTable[v9];
LABEL_30:
        result = 1LL;
        v17 = v19;
        *a1 = v18;
        *((_QWORD *)a1 + 2) = v17;
        return result;
      }
      v15 = HIDWORD(v18) < DWORD2(v18);
    }
    if ( v15 && HIDWORD(v18) < (unsigned int)v19 )
      v9 = 3LL - (DWORD2(v18) < (unsigned int)v19);
    else
      v9 = (DWORD2(v18) < HIDWORD(v18)) + 4LL;
    goto LABEL_29;
  }
  return 0LL;
}
