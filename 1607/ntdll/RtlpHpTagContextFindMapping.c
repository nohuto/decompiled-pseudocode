/*
 * XREFs of RtlpHpTagContextFindMapping @ 0x180050DCC
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x180050BF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagQueryTags @ 0x180081A60 (RtlpHpTagQueryTags.c)
 *     RtlpHpTagContextGetTag @ 0x1800F7674 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpTagContextFindMapping(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r10
  int v6; // r9d
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp+8h]

  v3 = 0LL;
  v4 = -1LL << (*(_BYTE *)(a1 + 12) & 0x1F);
  v5 = a3 & v4;
  while ( 1 )
  {
    if ( v3 )
      goto LABEL_5;
    v6 = *(_DWORD *)(a1 + 12) >> 5;
    if ( !v6 )
      return 0LL;
    v9 = a3 & v4;
    v3 = *(_QWORD *)(a1 + 16)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v5 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)(v6 - 1));
LABEL_5:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v5 == (v4 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_7;
    }
    v3 = 0LL;
LABEL_7:
    if ( !v3 )
      return 0LL;
    v8 = *a2 - *(_QWORD *)(v3 + 16);
    if ( *a2 == *(_QWORD *)(v3 + 16) )
      v8 = a2[1] - *(_QWORD *)(v3 + 24);
    if ( !v8 )
      return v3;
  }
}
