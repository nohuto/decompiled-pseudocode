/*
 * XREFs of ?vClosePrintKView@@YAXXZ @ 0x1C029BC30
 * Callers:
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C029B1A8 (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E85C0 (Win32UnmapViewInSessionSpace.c)
 */

void vClosePrintKView(void)
{
  __int64 i; // rbx
  void *v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = ghsemPrintKView;
  GreAcquireSemaphore(ghsemPrintKView);
  for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
  {
    if ( !*(_DWORD *)(i + 12) )
    {
      v1 = *(void **)(i + 16);
      if ( v1 )
      {
        Win32UnmapViewInSessionSpace(v1);
        *(_QWORD *)(i + 16) = 0LL;
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
}
