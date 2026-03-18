/*
 * XREFs of BmfdUnloadFontFile @ 0x1C012FA8C
 * Callers:
 *     BmfdUnloadFontFileTE @ 0x1C012FA70 (BmfdUnloadFontFileTE.c)
 * Callees:
 *     vUnloadGlyphset @ 0x1C012FB00 (vUnloadGlyphset.c)
 */

__int64 __fastcall BmfdUnloadFontFile(char *pv)
{
  char *v1; // rbx
  char *v3; // rdi

  v1 = pv + 40;
  v3 = &pv[88 * *((unsigned int *)pv + 7) + 40];
  EngAcquireSemaphore(ghsemBMFD);
  while ( v1 < v3 )
  {
    vUnloadGlyphset(&gpcpGlyphsets, *((_QWORD *)v1 + 9));
    v1 += 88;
  }
  EngReleaseSemaphore(ghsemBMFD);
  EngFreeMem(pv);
  return 1LL;
}
