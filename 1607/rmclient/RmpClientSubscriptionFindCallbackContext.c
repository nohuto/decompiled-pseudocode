/*
 * XREFs of RmpClientSubscriptionFindCallbackContext @ 0x18000A24C
 * Callers:
 *     RmpClientSubscriptionWnfCallback @ 0x18000A4F0 (RmpClientSubscriptionWnfCallback.c)
 * Callees:
 *     RmpClientCallbackCompareForHashTable @ 0x180009D6C (RmpClientCallbackCompareForHashTable.c)
 */

__int64 __fastcall RmpClientSubscriptionFindCallbackContext(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // r10
  __int64 v5; // rsi
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  int v12; // r9d
  __int64 v14; // [rsp+40h] [rbp+8h]

  v4 = a2;
  v5 = 314159LL;
  v6 = 2LL;
  do
  {
    v7 = *v4;
    v4 += 8;
    v5 = *(v4 - 1)
       + 37
       * (*(v4 - 2)
        + 37
        * (*(v4 - 3) + 37 * (*(v4 - 4) + 37 * (*(v4 - 5) + 37 * (*(v4 - 6) + 37 * (*(v4 - 7) + 37 * (v7 + 37 * v5)))))));
    --v6;
  }
  while ( v6 );
  v8 = 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = -1LL << (*(_BYTE *)(a1 + 28) & 0x1F);
    v11 = v10 & v5;
    if ( v9 )
      goto LABEL_7;
    v12 = *(_DWORD *)(a1 + 28) >> 5;
    if ( !v12 )
      break;
    v14 = v10 & v5;
    v9 = *(_QWORD *)(a1 + 32)
       + 8LL
       * ((37
         * (BYTE6(v14)
          + 37
          * (BYTE5(v14)
           + 37
           * (BYTE4(v14)
            + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v11 + 11623883)))))))
         + HIBYTE(v14)) & (unsigned int)(v12 - 1));
LABEL_7:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v11 == (v10 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_11;
    }
    v9 = 0LL;
LABEL_11:
    if ( !v9 )
      return v8;
    if ( RmpClientCallbackCompareForHashTable(v9, a2) )
      goto LABEL_15;
  }
  v9 = 0LL;
LABEL_15:
  if ( v9 )
    return v9;
  return v8;
}
