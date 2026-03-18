/*
 * XREFs of ValidateRGBBitFields @ 0x1C00BEB64
 * Callers:
 *     ValidateHTSI @ 0x1C00BE928 (ValidateHTSI.c)
 *     GetDstBFInfo @ 0x1C024DEB8 (GetDstBFInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateRGBBitFields(__int128 *a1)
{
  int v1; // edx
  __int64 v3; // xmm1_8
  int v4; // r10d
  __int64 i; // rcx
  unsigned int v6; // eax
  char v7; // r8
  char v8; // r9
  bool v9; // cf
  __int64 result; // rax
  __int64 v11; // xmm1_8
  int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // [rsp+0h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-10h]

  v1 = 0;
  v3 = *((_QWORD *)a1 + 2);
  v15 = *a1;
  v16 = v3;
  if ( !BYTE1(v15) )
    return 0LL;
  if ( BYTE1(v15) > 3u )
  {
    if ( BYTE1(v15) == 4 )
      goto LABEL_30;
    if ( BYTE1(v15) <= 6u )
    {
LABEL_5:
      v4 = v16 | HIDWORD(v15) | DWORD2(v15);
      if ( v4 && ((HIDWORD(v15) | DWORD2(v15)) & (unsigned int)v16) == 0 && (HIDWORD(v15) & DWORD2(v15)) == 0 )
      {
        for ( i = 0LL; i < 3; ++i )
        {
          v6 = *((_DWORD *)&v15 + i + 2);
          v7 = 0;
          v8 = 0;
          if ( v6 )
          {
            while ( (v6 & 1) == 0 )
            {
              v6 >>= 1;
              ++v8;
            }
            do
            {
              ++v7;
              v6 >>= 1;
            }
            while ( (v6 & 1) != 0 );
            if ( v6 )
              return 0LL;
          }
          *((_BYTE *)&v15 + i + 2) = v8;
          *((_BYTE *)&v15 + i + 5) = v7;
        }
        if ( v4 == 0xFFFFFF && *(_WORD *)((char *)&v15 + 5) == 2056 && BYTE7(v15) == 8 )
          LOBYTE(v15) = v15 | 1;
        v9 = HIDWORD(v15) < DWORD2(v15);
        if ( HIDWORD(v15) > DWORD2(v15) )
        {
          if ( DWORD2(v15) < (unsigned int)v16 )
          {
            LOBYTE(v1) = HIDWORD(v15) >= (unsigned int)v16;
LABEL_23:
            HIDWORD(v16) = *(_DWORD *)&SrcOrderTable[4 * v1];
            goto LABEL_24;
          }
          v9 = HIDWORD(v15) < DWORD2(v15);
        }
        if ( v9 && HIDWORD(v15) < (unsigned int)v16 )
          v1 = 3 - (DWORD2(v15) < (unsigned int)v16);
        else
          v1 = (DWORD2(v15) < HIDWORD(v15)) + 4;
        goto LABEL_23;
      }
      return 0LL;
    }
    if ( BYTE1(v15) == 0xFC || BYTE1(v15) == 0xFD )
    {
LABEL_30:
      WORD5(v15) = 0;
      HIWORD(v15) = 0;
      WORD1(v16) = 0;
      goto LABEL_5;
    }
    return 0LL;
  }
  WORD3(v15) = 2056;
  v12 = 255;
  BYTE5(v15) = 8;
  v13 = 0LL;
  HIDWORD(v16) = *(_DWORD *)&SrcOrderTable[4 * BYTE4(v16)];
  do
  {
    v14 = *((unsigned __int8 *)&v16 + v13++ + 5);
    *((_DWORD *)&v15 + v14 + 2) = v12;
    *((_BYTE *)&v15 + v14 + 2) = v1;
    LOBYTE(v1) = v1 + 8;
    v12 <<= 8;
  }
  while ( v13 < 3 );
LABEL_24:
  result = 1LL;
  v11 = v16;
  *a1 = v15;
  *((_QWORD *)a1 + 2) = v11;
  return result;
}
