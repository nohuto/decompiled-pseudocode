/*
 * XREFs of NtGdiGetFontData @ 0x1C0032160
 * Callers:
 *     <none>
 * Callees:
 *     ulGetFontData @ 0x1C00320E8 (ulGetFontData.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, unsigned int a2, int a3, char *a4, unsigned int a5)
{
  unsigned __int8 *v9; // rdi
  unsigned int FontData; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rdx

  v9 = 0LL;
  FontData = -1;
  if ( a5 )
  {
    if ( a5 <= 0x2710000 )
      v9 = (unsigned __int8 *)AllocFreeTmpBuffer(a5);
    if ( v9 )
    {
      FontData = ulGetFontData(a1, a2, a3, v9, a5);
      if ( FontData != -1 )
      {
        if ( FontData > a5 )
          FontData = -1;
        if ( FontData != -1 )
        {
          v14 = &a4[FontData];
          if ( (unsigned __int64)v14 > W32UserProbeAddress || v14 <= a4 )
            *W32UserProbeAddress = 0;
          memmove(a4, v9, FontData);
        }
      }
      FreeTmpBuffer(v9, v11, v12, v13);
    }
  }
  else
  {
    return (unsigned int)ulGetFontData(a1, a2, a3, 0LL, 0);
  }
  return FontData;
}
