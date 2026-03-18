/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x14000FBF8
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     SetRedrawProp @ 0x14000FC8C (SetRedrawProp.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  char v3; // cl

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( a2 )
  {
    if ( (v3 & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0LL);
      SetVisible(a1, 1LL);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
      SetOrClrWF(1LL, a1, 264LL, 1LL);
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    SetRedrawProp(a1, 1LL);
    SetVisible(a1, 2LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
  }
}
