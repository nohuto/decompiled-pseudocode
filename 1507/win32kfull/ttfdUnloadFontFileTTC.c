/*
 * XREFs of ttfdUnloadFontFileTTC @ 0x1C012CE34
 * Callers:
 *     ttfdSemUnloadFontFile @ 0x1C012CDF0 (ttfdSemUnloadFontFile.c)
 *     ttfdSemLoadFontFile @ 0x1C0141FF0 (ttfdSemLoadFontFile.c)
 *     bLoadFontFile @ 0x1C014209C (bLoadFontFile.c)
 * Callees:
 *     ttfdUnloadFontFile @ 0x1C012CEAC (ttfdUnloadFontFile.c)
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
