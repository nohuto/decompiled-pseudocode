/*
 * XREFs of NtGdiGetFontData @ 0x1C001AC30
 * Callers:
 *     <none>
 * Callees:
 *     ulGetFontData @ 0x1C001AD24 (ulGetFontData.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, __int64 a2, __int64 a3, char *a4, unsigned int a5)
{
  const void *v7; // rdi
  unsigned int FontData; // ebx
  char *v9; // rdx

  v7 = 0LL;
  FontData = -1;
  if ( a5 )
  {
    if ( a5 <= 0x2710000 )
      v7 = (const void *)AllocFreeTmpBuffer(a5);
    if ( v7 )
    {
      FontData = ulGetFontData(a1, a5);
      if ( FontData != -1 )
      {
        if ( FontData > a5 )
          FontData = -1;
        if ( FontData != -1 )
        {
          v9 = &a4[FontData];
          if ( (unsigned __int64)v9 > W32UserProbeAddress || v9 <= a4 )
            *W32UserProbeAddress = 0;
          memmove(a4, v7, FontData);
        }
      }
      FreeTmpBuffer(v7);
    }
  }
  else
  {
    return (unsigned int)ulGetFontData(a1, 0);
  }
  return FontData;
}
