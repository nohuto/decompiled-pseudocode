/*
 * XREFs of RtlpNlsGetNameIndex @ 0x180040E40
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003E290 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18003E5E0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180040DA0 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800EEF00 (RtlIsValidLocaleName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetNameIndex(unsigned __int16 *a1)
{
  int v2; // ebp
  int v3; // r14d
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  int v18; // r9d

  v2 = 0;
  v3 = *(unsigned __int16 *)(pTblPtrs + 10) - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v4 = (v3 + v2) / 2;
    LOWORD(v5) = 0;
    v6 = *(_QWORD *)(pTblPtrs + 40) + 2LL + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8 * v4);
    if ( a1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a1[v7] );
      v5 = 2 * v7;
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
    }
    LOWORD(v8) = 0;
    if ( v6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v6 + 2 * v9) );
      v8 = 2 * v9;
      if ( v8 >= 0xFFFE )
        LOWORD(v8) = -4;
    }
    v10 = a1;
    v11 = (unsigned __int64)(unsigned __int16)v5 >> 1;
    v12 = (unsigned __int64)(unsigned __int16)v8 >> 1;
    v13 = v11 > v12 ? (unsigned __int64)(unsigned __int16)v8 >> 1 : (unsigned __int64)(unsigned __int16)v5 >> 1;
    v14 = (unsigned __int64)&a1[v13];
    if ( (unsigned __int64)a1 >= v14 )
    {
LABEL_18:
      v18 = v11 - v12;
    }
    else
    {
      v15 = v6 - (_QWORD)a1;
      while ( 1 )
      {
        v16 = *v10;
        v17 = *(unsigned __int16 *)((char *)v10 + v15);
        if ( v16 != v17 )
        {
          if ( v16 >= 0x61 )
          {
            if ( v16 > 0x7A )
              v16 = (unsigned __int16)(v16
                                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                       + 2LL
                                                                       * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2LL * BYTE1(v16))
                                                                        + (unsigned int)((unsigned __int8)v16 >> 4)))
                                                 + (v16 & 0xF))));
            else
              v16 -= 32;
          }
          if ( v17 >= 0x61 )
          {
            if ( v17 > 0x7A )
              v17 = (unsigned __int16)(v17
                                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                       + 2LL
                                                                       * (*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2LL * BYTE1(v17))
                                                                        + (unsigned int)((unsigned __int8)v17 >> 4)))
                                                 + (v17 & 0xF))));
            else
              v17 -= 32;
          }
          if ( v16 != v17 )
            break;
        }
        if ( (unsigned __int64)++v10 >= v14 )
          goto LABEL_18;
      }
      v18 = v16 - v17;
    }
    if ( !v18 )
      return (unsigned int)v4;
    if ( v18 >= 0 )
      v2 = v4 + 1;
    else
      v3 = v4 - 1;
    if ( v2 > v3 )
      return 0xFFFFFFFFLL;
  }
}
