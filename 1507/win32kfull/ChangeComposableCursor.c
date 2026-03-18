/*
 * XREFs of ChangeComposableCursor @ 0x1C01E6918
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01FD210 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01FDB8C (MagSetLensContextInformation.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0204F7C (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 */

struct tagCURSOR *__fastcall ChangeComposableCursor(int a1)
{
  struct tagCURSOR *result; // rax
  int v2; // ebx

  result = (struct tagCURSOR *)(unsigned int)gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + (a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !a1 )
    {
      SetPointer(0);
      gbForceSoftwareCursor = 0;
      goto LABEL_7;
    }
  }
  else if ( a1 )
  {
    SetPointer(0);
    gbForceSoftwareCursor = 1;
LABEL_7:
    result = SetPointer(1);
  }
  gSoftwareCursorCount = v2;
  return result;
}
