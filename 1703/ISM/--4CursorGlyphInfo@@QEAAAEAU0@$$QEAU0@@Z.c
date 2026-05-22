/*
 * XREFs of ??4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x180020A08
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall CursorGlyphInfo::operator=(char **a1, char **Src)
{
  unsigned __int64 v4; // rdx

  if ( a1 != Src )
  {
    v4 = (unsigned __int64)a1[3];
    if ( v4 >= 0x10 )
      std::_Deallocate(*a1, v4 + 1, 1uLL);
    a1[2] = 0LL;
    a1[3] = (char *)15;
    *(_BYTE *)a1 = 0;
    if ( (unsigned __int64)Src[3] < 0x10 )
    {
      memcpy_0(a1, Src, (size_t)(Src[2] + 1));
    }
    else
    {
      *a1 = *Src;
      *Src = 0LL;
    }
    a1[2] = Src[2];
    a1[3] = Src[3];
    Src[2] = 0LL;
    Src[3] = (char *)15;
    *(_BYTE *)Src = 0;
  }
  *((_DWORD *)a1 + 8) = *((_DWORD *)Src + 8);
  *((_DWORD *)a1 + 9) = *((_DWORD *)Src + 9);
  return a1;
}
