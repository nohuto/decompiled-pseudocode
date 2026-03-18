/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0284268
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B0150 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 */

struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(UMPDOBJ *this, struct _GLYPHBITS *a2)
{
  unsigned int v4; // edi
  void *v5; // rbx
  void *v6; // rax

  v4 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v4 > *((_DWORD *)this + 88) )
  {
    v6 = UMPDOBJ::_AllocUserMem(this, v4, 0);
    v5 = v6;
    if ( !v6 )
      return (struct _GLYPHBITS *)v5;
    *((_QWORD *)this + 43) = v6;
    *((_DWORD *)this + 88) = v4;
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 43);
  }
  if ( v5 )
    memmove(v5, a2, v4);
  return (struct _GLYPHBITS *)v5;
}
