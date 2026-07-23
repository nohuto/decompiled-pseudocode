/*
 * XREFs of CmpGetBiosDate @ 0x1407AD538
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     strtoul @ 0x14014FDF8 (strtoul.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

char __fastcall CmpGetBiosDate(__int64 a1, unsigned int a2, _BYTE *a3, char a4)
{
  _BYTE *v4; // rdi
  _BYTE *v5; // r14
  unsigned __int64 v6; // r12
  char *v7; // rsi
  char result; // al
  char v10; // cl
  char v11; // al
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  char v15; // r8
  char v16; // dl
  __int16 Buf2; // [rsp+30h] [rbp-30h] BYREF
  char Str; // [rsp+32h] [rbp-2Eh] BYREF
  char v20; // [rsp+33h] [rbp-2Dh]
  char v21; // [rsp+34h] [rbp-2Ch]
  char v22[2]; // [rsp+35h] [rbp-2Bh] BYREF
  char v23; // [rsp+37h] [rbp-29h]
  char v24[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 Src; // [rsp+40h] [rbp-20h] BYREF
  __int16 v26; // [rsp+48h] [rbp-18h]
  char v27; // [rsp+4Ah] [rbp-16h]

  Src = 0LL;
  v26 = 0;
  v4 = (_BYTE *)(a1 + 2);
  v27 = 0;
  v5 = a3;
  v6 = a2 + a1 - 5;
  if ( a1 + 2 < v6 )
  {
    v7 = (char *)(a1 + 6);
    do
    {
      if ( *v4 == 47
        && v4[3] == 47
        && (unsigned __int8)(*(v4 - 1) - 48) <= 9u
        && (unsigned __int8)(v4[1] - 48) <= 9u
        && (unsigned __int8)(v4[2] - 48) <= 9u
        && (unsigned __int8)(*v7 - 48) <= 9u
        && (unsigned __int8)(v4[5] - 48) <= 9u )
      {
        memmove(v22, v4 - 2, 5uLL);
        v10 = v22[0];
        v24[2] = 0;
        v23 = 0;
        if ( (unsigned __int8)(v22[0] - 48) > 9u )
          v10 = 48;
        Str = *v7;
        v11 = v4[5];
        v22[0] = v10;
        v20 = v11;
        v21 = 0;
        v12 = strtoul(&Str, 0LL, 16);
        v13 = strtoul(v22, 0LL, 16);
        v14 = strtoul(v24, 0LL, 16);
        if ( v13 - 1 <= 0x11 && v14 - 1 <= 0x30 )
        {
          if ( a4
            && (v15 = v4[6], (unsigned __int8)(v15 - 48) <= 9u)
            && (v16 = v4[7], (unsigned __int8)(v16 - 48) <= 9u)
            && (*(unsigned __int16 *)v7 == *(unsigned __int16 *)"19"
             || *(unsigned __int16 *)v7 == *(unsigned __int16 *)"20") )
          {
            LOBYTE(Buf2) = *v7;
            HIBYTE(Buf2) = v4[5];
            Str = v15;
            v20 = v16;
          }
          else
          {
            Buf2 = 12338;
            if ( v12 >= 0x80 )
              Buf2 = 14641;
          }
          v23 = 47;
          v21 = 47;
          if ( memcmp(&Src, &Buf2, 0xAuLL) < 0 )
            memmove(&Src, &Buf2, 0xAuLL);
          v4 += 2;
          v7 += 2;
        }
      }
      ++v4;
      ++v7;
    }
    while ( (unsigned __int64)v4 < v6 );
    v5 = a3;
  }
  if ( (_BYTE)Src )
  {
    memmove(v5, (char *)&Src + 5, 5uLL);
    result = 1;
    *((_WORD *)v5 + 3) = WORD1(Src);
    v5[5] = 47;
    v5[8] = 0;
  }
  else
  {
    *v5 = 0;
    return 0;
  }
  return result;
}
