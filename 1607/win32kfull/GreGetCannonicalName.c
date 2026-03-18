/*
 * XREFs of GreGetCannonicalName @ 0x1C00280DC
 * Callers:
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00261C8 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C00EAED8 (-xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

unsigned __int16 __fastcall GreGetCannonicalName(_WORD *Src, char *a2, unsigned int *a3, _DWORD *a4)
{
  __int16 v4; // ax
  unsigned int v8; // esi
  _WORD *i; // rdi
  size_t v10; // rbx
  unsigned __int16 result; // ax
  unsigned __int16 *v12; // rdx
  __int64 v13; // rax
  int j; // ecx
  unsigned __int16 v15; // r8

  v4 = *Src;
  v8 = 0;
  for ( i = Src; v4 && (v4 != 95 || (unsigned __int16)(i[1] - 48) > 9u); v4 = *i )
    ++i;
  v10 = 2LL * (unsigned int)(i - Src);
  result = (unsigned __int16)memmove(a2, Src, v10);
  *(_WORD *)&a2[v10] = 0;
  if ( *i == 95 )
  {
    v12 = i + 1;
    result = i[1] - 48;
    if ( result <= 9u )
    {
      while ( 1 )
      {
        result = *v12;
        if ( !*v12 )
          break;
        do
        {
          if ( (unsigned __int16)(result - 48) <= 9u )
            break;
          result = *++v12;
        }
        while ( *v12 );
        result = *v12;
        if ( !*v12 )
          break;
        for ( j = result - 48; ; j = v15 + 2 * (5 * j - 24) )
        {
          v15 = *++v12;
          if ( !*v12 || (unsigned __int16)(v15 - 48) > 9u )
            break;
        }
        v13 = v8++;
        a4[v13 + 2] = j;
      }
    }
  }
  *a3 = v8;
  a4[1] = v8;
  *a4 = 134248036;
  return result;
}
