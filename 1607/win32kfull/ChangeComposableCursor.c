/*
 * XREFs of ChangeComposableCursor @ 0x1C01DD530
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01F4CC0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C01FC62C (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 */

void __fastcall ChangeComposableCursor(int a1)
{
  int v1; // ebx

  v1 = gSoftwareCursorCount + (a1 != 0 ? 1 : -1);
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
    SetPointer(1);
  }
  gSoftwareCursorCount = v1;
}
