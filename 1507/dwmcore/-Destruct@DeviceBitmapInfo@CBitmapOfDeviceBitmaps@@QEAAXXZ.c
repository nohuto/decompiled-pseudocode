/*
 * XREFs of ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x18007FEA0
 * Callers:
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x180048A2C (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x180048CA0 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180048F10 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *this)
{
  CMILRefCountBase *v2; // rcx
  void *v3; // rcx

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 2);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    DeleteObject(v3);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 6));
}
