/*
 * XREFs of RtlHashUnicodeString @ 0x18001A870
 * Callers:
 *     LdrpHashUnicodeString @ 0x180018D08 (LdrpHashUnicodeString.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001B2E0 (RtlpFindUnicodeStringInSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHashUnicodeString(unsigned __int16 *a1, char a2, unsigned int a3, int *a4)
{
  int v4; // eax
  unsigned __int16 *v6; // r10
  int v7; // r9d
  unsigned __int16 v8; // r11
  int v9; // ecx
  int v11; // ecx

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  *a4 = 0;
  v7 = *a1 >> 1;
  if ( a3 > 1 )
    return 3221225485LL;
  if ( a2 )
  {
    for ( ; v7; v4 = v9 + 65599 * v4 )
    {
      v8 = *v6++;
      --v7;
      if ( v8 < 0x61u )
      {
        v9 = v8;
      }
      else if ( v8 > 0x7Au )
      {
        v9 = (unsigned __int16)(v8
                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                         + 2LL
                                         * ((v8 & 0xF)
                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                              + 2LL
                                                                              * (((v8 >> 4) & 0xF)
                                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v8 >> 8)))))));
      }
      else
      {
        v9 = v8 - 32;
      }
    }
  }
  else
  {
    for ( ; v7; --v7 )
    {
      v11 = *v6++;
      v4 = v11 + 65599 * v4;
    }
  }
  *a4 = v4;
  return 0LL;
}
