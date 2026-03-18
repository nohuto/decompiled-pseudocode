/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C013CCD4
 * Callers:
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C013D334 (bQueryFntCacheReg.c)
 *     bSetFntCacheReg @ 0x1C013D788 (bSetFntCacheReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C013D80C (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 */

__int64 bServicingStackModifiedFonts()
{
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)GetGreRegKey(
              &Handle,
              0x80000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") >= 0 )
  {
    bQueryFntCacheReg(Handle);
    ZwClose(Handle);
  }
  bSetFntCacheReg(L"ServicingStackModifiedFonts");
  return 1LL;
}
