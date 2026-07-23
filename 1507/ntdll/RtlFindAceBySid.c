/*
 * XREFs of RtlFindAceBySid @ 0x1800D0AD0
 * Callers:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x18004A6C0 (RtlEqualSid.c)
 */

unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, void *a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  unsigned __int8 *v6; // rbx
  unsigned int v7; // edi
  int v8; // ecx
  unsigned __int8 *v9; // rcx
  int v10; // ecx

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( 1 )
  {
    if ( *v6 <= 0x14u && (v8 = 1992207, _bittest(&v8, *v6)) )
    {
      v9 = v6 + 8;
    }
    else if ( *v6 == 4 )
    {
      v9 = v6 + 12;
    }
    else
    {
      if ( *v6 > 0x10u )
        goto LABEL_17;
      v10 = 104928;
      if ( !_bittest(&v10, *v6) )
        goto LABEL_17;
      v9 = &v6[16 * (v6[8] & 1) + 12 + 8 * (v6[8] & 2)];
    }
    if ( v9 )
      break;
LABEL_17:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( RtlEqualSid(v9, a2) )
      return v6;
    goto LABEL_17;
  }
  if ( v7 < *a3 || !RtlEqualSid(v9, a2) )
    goto LABEL_17;
  *a3 = v7;
  return v6;
}
