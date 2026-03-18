/*
 * XREFs of bFntCacheDisabled @ 0x1C00D4698
 * Callers:
 *     InitFNTCache @ 0x1C00D4190 (InitFNTCache.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00D45D4 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bQueryFntCacheReg @ 0x1C00D4728 (bQueryFntCacheReg.c)
 */

_BOOL8 bFntCacheDisabled()
{
  BOOL v0; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( GetGreRegKey(
         &Handle,
         0x80000000,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") >= 0 )
  {
    bQueryFntCacheReg(Handle);
    if ( !G_fConsole )
      v0 = bQueryFntCacheReg(Handle) == 0;
    ZwClose(Handle);
  }
  return v0;
}
