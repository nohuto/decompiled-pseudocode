/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00FB378
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C00095D4 (SpbCheckPwnd.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
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
