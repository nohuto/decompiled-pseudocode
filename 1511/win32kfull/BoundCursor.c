/*
 * XREFs of BoundCursor @ 0x1C00885BC
 * Callers:
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BoundCursor(LONG *a1, int a2)
{
  LONG v3; // ecx
  LONG left; // eax
  LONG v5; // ecx
  LONG top; // eax
  __int64 result; // rax
  int v8; // eax

  if ( (gdwPUDFlags & 0x4000000) == 0 || !gspwndFullScreen )
  {
    v3 = *a1;
    left = grcCursorClip.left;
    if ( v3 >= grcCursorClip.left )
    {
      if ( v3 < grcCursorClip.right )
        goto LABEL_4;
      left = grcCursorClip.right - 1;
    }
    *a1 = left;
LABEL_4:
    v5 = a1[1];
    top = grcCursorClip.top;
    if ( v5 >= grcCursorClip.top )
    {
      if ( v5 < grcCursorClip.bottom )
        goto LABEL_6;
      top = grcCursorClip.bottom - 1;
    }
    a1[1] = top;
    goto LABEL_6;
  }
  if ( *a1 >= -32767 )
  {
    if ( *a1 >= 0x7FFF )
      *a1 = 32766;
  }
  else
  {
    *a1 = -32767;
  }
  v8 = a1[1];
  if ( v8 >= -32767 )
  {
    if ( v8 >= 0x7FFF )
      a1[1] = 32766;
  }
  else
  {
    a1[1] = -32767;
  }
LABEL_6:
  result = *(unsigned int *)(gpDispInfo + 180LL);
  if ( (result & 1) == 0 || a2 )
    return ClipPointToDesktop(a1);
  return result;
}
