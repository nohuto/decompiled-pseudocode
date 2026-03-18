/*
 * XREFs of ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x18015D2BC
 * Callers:
 *     ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x18015D330 (--_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ @ 0x18015DC68 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  *(_QWORD *)this = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 59) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable';
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(this);
  *((_BYTE *)this + 504) = 0;
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
