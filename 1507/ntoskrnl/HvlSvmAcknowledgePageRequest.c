/*
 * XREFs of HvlSvmAcknowledgePageRequest @ 0x1401EA9E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastAcknowledgePageRequest @ 0x1401EBC00 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401EBF8C (HvlpSlowAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlSvmAcknowledgePageRequest(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v6; // cx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = a1;
  if ( a1 )
  {
    while ( v7 < 0x80 )
    {
      v8 = v7;
      if ( v7 > 3 )
        goto LABEL_4;
      v9 = HvlpFastAcknowledgePageRequest(v7, a2, &v11);
LABEL_5:
      v7 -= v11;
      v6 = v9;
      if ( !v9 )
      {
        a2 += 32LL * v11;
        if ( v7 )
          continue;
      }
      goto LABEL_7;
    }
    v8 = 128LL;
LABEL_4:
    v9 = HvlpSlowAcknowledgePageRequest(v8, a2, &v11);
    goto LABEL_5;
  }
LABEL_7:
  if ( a3 )
    *a3 = a1 - v7;
  switch ( v6 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return v6 | 0xC0350000;
}
