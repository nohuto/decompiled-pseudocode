/*
 * XREFs of CcGetBcbListHeadLargeOffset @ 0x140076C10
 * Callers:
 *     CcFindBcb @ 0x140076B00 (CcFindBcb.c)
 *     CcSetVacbLargeOffset @ 0x140078680 (CcSetVacbLargeOffset.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall CcGetBcbListHeadLargeOffset(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 v5; // r9
  int v7; // r11d
  __int64 v8; // r10
  char v9; // cl
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD v14[22]; // [rsp+0h] [rbp-68h]

  v4 = 0LL;
  v5 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = 25;
  do
  {
    v9 += 7;
    ++v7;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v9 );
  if ( a2 < 1LL << v9 )
  {
    v10 = v9 - 7;
    while ( 1 )
    {
      --v7;
      v11 = v5 >> v10;
      v12 = *(_QWORD *)(v8 + 8LL * (unsigned int)(v5 >> v10));
      if ( v12 )
        goto LABEL_6;
      while ( !a3 )
      {
        if ( (_DWORD)v11 )
        {
          do
          {
            if ( !(_DWORD)v11 )
              break;
            v11 = (unsigned int)(v11 - 1);
          }
          while ( !*(_QWORD *)(v8 + 8 * v11) );
          v12 = *(_QWORD *)(v8 + 8LL * (unsigned int)v11);
          if ( v12 )
          {
            v5 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_6;
          }
        }
LABEL_14:
        if ( !(_DWORD)v4 )
          return a1 + 16;
        ++v7;
        v4 = (unsigned int)(v4 - 1);
        LODWORD(v11) = v14[(unsigned int)v4];
        v8 = *(_QWORD *)&v14[2 * (unsigned int)v4 + 8];
      }
      if ( (_DWORD)v11 == 127 )
        goto LABEL_14;
      do
      {
        if ( (_DWORD)v11 == 127 )
          break;
        v11 = (unsigned int)(v11 + 1);
      }
      while ( !*(_QWORD *)(v8 + 8 * v11) );
      v12 = *(_QWORD *)(v8 + 8LL * (unsigned int)v11);
      if ( !v12 )
        goto LABEL_14;
      v5 = 0LL;
LABEL_6:
      *(_QWORD *)&v14[2 * v4 + 8] = v8;
      v8 = v12;
      v14[v4] = v11;
      v5 &= (1LL << v10) - 1;
      v4 = (unsigned int)(v4 + 1);
      v10 -= 7;
      if ( !v7 )
        return v12 + 8 * (((v5 >> v10) & 0xFFFFFFFELL) + 128);
    }
  }
  return a1 + 16;
}
