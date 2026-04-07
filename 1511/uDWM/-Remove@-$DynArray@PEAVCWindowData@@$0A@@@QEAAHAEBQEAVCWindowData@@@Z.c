/*
 * XREFs of ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18003CE80
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027130 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DC50 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002F814 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800305E0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031C44 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18003CC54 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800773FC (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x18009A700 (-NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CWindowData *,0>::Remove(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v8; // rdx

  v2 = *a1;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *a2;
    do
    {
      if ( v6 == *(_QWORD *)(v2 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v4 );
  }
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  if ( (unsigned int)v5 < v4 - 1 )
  {
    do
    {
      v8 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(v2 + 8 * v8) = *(_QWORD *)(v2 + 8LL * (unsigned int)v5);
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
  }
  --*((_DWORD *)a1 + 6);
  return 1LL;
}
