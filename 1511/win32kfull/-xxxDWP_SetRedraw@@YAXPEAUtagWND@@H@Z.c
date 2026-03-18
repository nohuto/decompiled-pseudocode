/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107888
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C000C958 (SpbCheckPwnd.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    {
      SetVisible((__int64)a1, 1);
      if ( *(_QWORD *)(gpDispInfo + 72LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1, a1, 0x108u, 1);
    }
  }
  else if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 72LL) )
      SpbCheckPwnd(a1);
    SetVisible((__int64)a1, 2 * (*((_BYTE *)a1 + 45) & 1));
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
