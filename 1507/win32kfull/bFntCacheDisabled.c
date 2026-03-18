/*
 * XREFs of bFntCacheDisabled @ 0x1C013D2A8
 * Callers:
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C013D334 (bQueryFntCacheReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C013D80C (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 */

_BOOL8 bFntCacheDisabled()
{
  BOOL v0; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)GetGreRegKey(
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
