/*
 * XREFs of ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180099B24
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180098F80 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180099070 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopThumbnailBase::_GetIndex(CDesktopThumbnailBase *this, const struct CTopLevelWindow *a2)
{
  unsigned int v2; // r9d
  int v3; // r8d

  v2 = -1;
  v3 = *((_DWORD *)this + 72) - 1;
  if ( v3 >= 0 )
  {
    while ( *(const struct CTopLevelWindow **)(*((_QWORD *)this + 33) + 16LL * (unsigned int)v3) != a2 )
    {
      if ( --v3 < 0 )
        return v2;
    }
    return (unsigned int)v3;
  }
  return v2;
}
