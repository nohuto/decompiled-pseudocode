/*
 * XREFs of CcGetBcbListHeadLargeOffset @ 0x1400A4EE0
 * Callers:
 *     CcFindBcb @ 0x14000E528 (CcFindBcb.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcSetVacbLargeOffset @ 0x1400E0C5C (CcSetVacbLargeOffset.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall CcGetBcbListHeadLargeOffset(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  int v6; // r9d
  char v7; // cl
  __int64 v8; // rbx
  char v9; // cl
  __int64 v10; // r10
  __int64 v11; // r8
  _DWORD v13[22]; // [rsp+0h] [rbp-68h]

  v4 = 0LL;
  v6 = 0;
  v7 = 25;
  v8 = *(_QWORD *)(a1 + 88);
  do
  {
    v7 += 7;
    ++v6;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v7 );
  if ( a2 >= 1LL << v7 )
    return a1 + 16;
  v9 = v7 - 7;
  do
  {
    --v6;
    v10 = a2 >> v9;
    v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)(a2 >> v9));
    if ( v11 )
      goto LABEL_6;
    while ( !a3 )
    {
      if ( (_DWORD)v10 )
      {
        do
        {
          if ( !(_DWORD)v10 )
            break;
          v10 = (unsigned int)(v10 - 1);
        }
        while ( !*(_QWORD *)(v8 + 8 * v10) );
        v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)v10);
        if ( v11 )
        {
          a2 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_6;
        }
      }
LABEL_15:
      if ( !(_DWORD)v4 )
        return a1 + 16;
      ++v6;
      v4 = (unsigned int)(v4 - 1);
      LODWORD(v10) = v13[(unsigned int)v4];
      v8 = *(_QWORD *)&v13[2 * (unsigned int)v4 + 8];
    }
    if ( (_DWORD)v10 == 127 )
      goto LABEL_15;
    do
    {
      if ( (_DWORD)v10 == 127 )
        break;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( !*(_QWORD *)(v8 + 8 * v10) );
    v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)v10);
    if ( !v11 )
      goto LABEL_15;
    a2 = 0LL;
LABEL_6:
    *(_QWORD *)&v13[2 * v4 + 8] = v8;
    v8 = v11;
    v13[v4] = v10;
    a2 &= (1LL << v9) - 1;
    v4 = (unsigned int)(v4 + 1);
    v9 -= 7;
  }
  while ( v6 );
  return v11 + 8 * (((a2 >> v9) & 0xFFFFFFFELL) + 128);
}
