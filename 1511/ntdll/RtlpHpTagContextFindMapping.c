/*
 * XREFs of RtlpHpTagContextFindMapping @ 0x18005A2B0
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x180059F30 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagQueryTags @ 0x18007FED8 (RtlpHpTagQueryTags.c)
 *     RtlpHpTagContextGetTag @ 0x1800EE940 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlpHpTagMappingComparison @ 0x180027BB0 (RtlpHpTagMappingComparison.c)
 */

__int64 __fastcall RtlpHpTagContextFindMapping(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // r9d
  __int64 v11; // [rsp+40h] [rbp+8h]

  v4 = 0LL;
  v6 = -1LL << (*(_BYTE *)(a1 + 12) & 0x1F);
  v7 = 0LL;
  v8 = a3 & v6;
  v11 = a3 & v6;
  while ( 1 )
  {
    if ( v7 )
      goto LABEL_5;
    v9 = *(_DWORD *)(a1 + 12) >> 5;
    if ( !v9 )
      break;
    v7 = *(_QWORD *)(a1 + 16)
       + 8LL
       * ((37
         * (BYTE6(v11)
          + 37
          * (BYTE5(v11)
           + 37
           * (BYTE4(v11)
            + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v11)) & (unsigned int)(v9 - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v8 == (v6 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_7;
    }
    v7 = 0LL;
LABEL_7:
    if ( !v7 )
      return v4;
    if ( RtlpHpTagMappingComparison(v7, a2) )
      goto LABEL_12;
  }
  v7 = 0LL;
LABEL_12:
  if ( v7 )
    return v7;
  return v4;
}
