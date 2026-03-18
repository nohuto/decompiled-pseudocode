/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0126500
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C000DD28 (SpbCheckPwnd.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C01265B8 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8

  if ( (_DWORD)a2 )
  {
    if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0);
      SetVisible(a1, 1);
      if ( *(_QWORD *)(gpDispInfo + 72LL) )
        SpbCheckPwnd(a1, gpDispInfo, v4);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1, a1, 0x108u, 1);
    }
  }
  else if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
      SpbCheckPwnd(a1, a2, a3);
    SetRedrawProp(a1, 1);
    SetVisible(a1, 2 * (*((_BYTE *)a1 + 45) & 1));
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
