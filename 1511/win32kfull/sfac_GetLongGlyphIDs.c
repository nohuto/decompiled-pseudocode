/*
 * XREFs of sfac_GetLongGlyphIDs @ 0x1C00A3F64
 * Callers:
 *     sfac_GetWinNTGlyphIDs @ 0x1C00A2590 (sfac_GetWinNTGlyphIDs.c)
 * Callees:
 *     InvokeGlyphMappingF @ 0x1C00A402C (InvokeGlyphMappingF.c)
 */

__int64 __fastcall sfac_GetLongGlyphIDs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int a7,
        __int64 a8,
        unsigned int *a9)
{
  unsigned int v12; // r11d
  unsigned __int16 v13; // bp
  unsigned int *v14; // rbx
  __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // bp
  unsigned int *v20; // rsi
  unsigned __int16 v21; // ax

  v12 = a1;
  if ( a8 )
  {
    v13 = a5;
    if ( a5 )
    {
      v14 = a9;
      v15 = a8 - (_QWORD)a9;
      while ( a7 + *(unsigned int *)((char *)v14 + v15) <= 0xFFFF )
      {
        v16 = (unsigned __int16)InvokeGlyphMappingF(v12, a2, (unsigned __int16)(a7 + *(_WORD *)((char *)v14 + v15)), a3);
        *v14 = v16;
        if ( v16 >= a4 )
          *v14 = 0;
        v12 = a1;
        ++v14;
        if ( !--v13 )
          return 0LL;
      }
      return 4108LL;
    }
    return 0LL;
  }
  v18 = a5;
  v19 = a6;
  if ( a5 + (unsigned int)a6 <= 0xFFFF )
  {
    if ( a5 )
    {
      v20 = a9;
      do
      {
        v21 = InvokeGlyphMappingF(v12, a2, v19, a3);
        *v20 = v21;
        if ( v21 >= (unsigned int)a4 )
          *v20 = 0;
        v12 = a1;
        ++v20;
        ++v19;
        --v18;
      }
      while ( v18 );
    }
    return 0LL;
  }
  return 4108LL;
}
