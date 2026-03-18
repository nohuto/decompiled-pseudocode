/*
 * XREFs of ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ @ 0x18014F1A8
 * Callers:
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x18014E804 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18014F070 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 *     ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x18014F180 (-ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v1 = *((_QWORD *)this + 61);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 328LL))(*((_QWORD *)this + 61), 0LL);
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 60));
    *((_QWORD *)this + 60) = 0LL;
  }
  v4 = *((_QWORD *)this + 61);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 61));
    *((_QWORD *)this + 61) = 0LL;
  }
  v5 = *((_QWORD *)this + 62);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 62));
    *((_QWORD *)this + 62) = 0LL;
  }
  *((_BYTE *)this + 505) = 0;
}
