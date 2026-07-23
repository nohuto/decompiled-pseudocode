/*
 * XREFs of HvlSvmAcknowledgePageRequest @ 0x1401BDD84
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastAcknowledgePageRequest @ 0x1401BE794 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401BE950 (HvlpSlowAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlSvmAcknowledgePageRequest(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
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
  return HvlpHvToNtStatus(v6);
}
