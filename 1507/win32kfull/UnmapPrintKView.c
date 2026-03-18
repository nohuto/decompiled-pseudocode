/*
 * XREFs of UnmapPrintKView @ 0x1C01265BC
 * Callers:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0126458 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C01E85C0 (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall UnmapPrintKView(__int64 a1)
{
  _QWORD *i; // rbx
  void *v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = ghsemPrintKView;
  GreAcquireSemaphore(ghsemPrintKView);
  for ( i = (_QWORD *)gpPrintKViewList; i; i = (_QWORD *)i[4] )
  {
    if ( *i == a1 )
    {
      v3 = (void *)i[2];
      if ( v3 )
      {
        Win32UnmapViewInSessionSpace(v3);
        i[2] = 0LL;
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
