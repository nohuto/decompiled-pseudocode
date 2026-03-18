/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00D47E0
 * Callers:
 *     InitFNTCache @ 0x1C00D4190 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00D4550 (bSetFntCacheReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00D45D4 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bQueryFntCacheReg @ 0x1C00D4728 (bQueryFntCacheReg.c)
 */

_BOOL8 bServicingStackModifiedFonts()
{
  BOOL v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v0 = 1;
  if ( GetGreRegKey(
         &Handle,
         0x80000000,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle, L"ServicingStackModifiedFonts", &v2) )
      v0 = v2 != 2;
    ZwClose(Handle);
  }
  bSetFntCacheReg(L"ServicingStackModifiedFonts", 2);
  return v0;
}
