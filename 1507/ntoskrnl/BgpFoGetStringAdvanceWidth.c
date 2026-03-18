/*
 * XREFs of BgpFoGetStringAdvanceWidth @ 0x14026ED18
 * Callers:
 *     BcpDisplayCriticalString @ 0x14026EF50 (BcpDisplayCriticalString.c)
 * Callees:
 *     BgpRasGetGlyphAdvanceWidth @ 0x14026E3F8 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 BgpFoGetStringAdvanceWidth(__int64 a1, __int16 *a2, _DWORD *a3, ...)
{
  __int16 v3; // ax
  __int64 v7; // r9
  unsigned __int16 v8; // bx
  int GlyphAdvanceWidth; // eax
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  v3 = *a2;
  *a3 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (v3 & 0xFFFE) != 0 )
  {
    do
    {
      GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                            a1,
                            *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v8),
                            (__int64 *)va,
                            v7,
                            &BcpWorkspace);
      v7 = (unsigned int)GlyphAdvanceWidth;
      if ( GlyphAdvanceWidth < 0 )
        break;
      ++v8;
      *a3 += v11;
    }
    while ( v8 < (unsigned __int16)((unsigned __int16)*a2 >> 1) );
  }
  return (unsigned int)v7;
}
