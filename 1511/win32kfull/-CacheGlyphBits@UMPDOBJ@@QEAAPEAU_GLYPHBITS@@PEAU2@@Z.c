/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0286420
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ADBB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(char **this, struct _GLYPHBITS *a2)
{
  unsigned int v4; // edi
  char *v5; // rbx
  char *v6; // rax

  v4 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v4 > *((_DWORD *)this + 88) )
  {
    v6 = UMPDOBJ::_AllocUserMem((UMPDOBJ *)this, v4, 0);
    v5 = v6;
    if ( !v6 )
      return (struct _GLYPHBITS *)v5;
    this[43] = v6;
    *((_DWORD *)this + 88) = v4;
  }
  else
  {
    v5 = this[43];
  }
  if ( v5 )
    memmove(v5, a2, v4);
  return (struct _GLYPHBITS *)v5;
}
