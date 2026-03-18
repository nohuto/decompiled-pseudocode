/*
 * XREFs of NtGdiGetGlyphIndicesWInternal @ 0x1C00376C0
 * Callers:
 *     NtGdiGetGlyphIndicesW @ 0x1C0037860 (NtGdiGetGlyphIndicesW.c)
 * Callees:
 *     GreGetGlyphIndicesW @ 0x1C00374E4 (GreGetGlyphIndicesW.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesWInternal(HDC a1, char *a2, int a3, char *a4, unsigned int a5, int a6)
{
  __int64 v7; // r14
  _WORD *v8; // rbx
  unsigned int GlyphIndicesW; // esi
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // r8
  char *v16; // [rsp+40h] [rbp-B8h]
  _BYTE Src[64]; // [rsp+70h] [rbp-88h] BYREF

  v7 = a3;
  v16 = a2;
  v8 = 0LL;
  GlyphIndicesW = -1;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( !a3 && !a2 && !a4 && !a5 )
    return GreGetGlyphIndicesW(a1, 0LL, 0, 0LL, 0, a6);
  v10 = a5;
  if ( a5 > 1 )
    v10 = 0;
  if ( a3 > 16 )
  {
    if ( (unsigned __int64)a3 <= 0x9C4000 )
    {
      v8 = (_WORD *)AllocFreeTmpBuffer((unsigned int)(4 * a3));
      a2 = v16;
    }
  }
  else
  {
    v8 = Src;
  }
  if ( v8 )
  {
    if ( &a2[2 * v7] < a2 || (unsigned __int64)&a2[2 * v7] > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(&v8[v7], a2, 2 * v7);
    GlyphIndicesW = v7;
    if ( (_DWORD)v7 != -1 )
    {
      GlyphIndicesW = GreGetGlyphIndicesW(a1, &v8[v7], v7, v8, v10, a6);
      if ( GlyphIndicesW != -1 )
      {
        v14 = 2LL * (int)v7;
        if ( (unsigned __int64)&a4[v14] > W32UserProbeAddress || &a4[v14] <= a4 )
          *W32UserProbeAddress = 0;
        memmove(a4, v8, v14);
      }
    }
    if ( v8 != (_WORD *)Src )
      FreeTmpBuffer(v8, v11, v12, v13);
  }
  return GlyphIndicesW;
}
