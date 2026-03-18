/*
 * XREFs of ttfdUnloadFontFileTTC @ 0x1C00FB714
 * Callers:
 *     ttfdSemLoadFontFile @ 0x1C00104E0 (ttfdSemLoadFontFile.c)
 *     bLoadFontFile @ 0x1C001058C (bLoadFontFile.c)
 *     ttfdSemUnloadFontFile @ 0x1C00FB6D0 (ttfdSemUnloadFontFile.c)
 * Callees:
 *     ttfdUnloadFontFile @ 0x1C00FB78C (ttfdUnloadFontFile.c)
 */

__int64 __fastcall ttfdUnloadFontFileTTC(PVOID *pv)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  PVOID v4; // rcx

  v1 = 0;
  for ( i = 1; v1 < *((_DWORD *)pv + 3); ++v1 )
  {
    if ( HIDWORD(pv[2 * v1 + 5]) == 1 )
      i &= -((unsigned int)ttfdUnloadFontFile(pv[2 * v1 + 6]) != 0);
  }
  v4 = pv[4];
  if ( v4 )
    EngFreeMem(v4);
  EngFreeMem(pv);
  return i;
}
