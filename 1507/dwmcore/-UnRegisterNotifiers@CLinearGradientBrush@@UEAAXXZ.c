/*
 * XREFs of ?UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ @ 0x180119110
 * Callers:
 *     ?ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PEBXI@Z @ 0x180118358 (-ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PE.c)
 *     ??1CLinearGradientBrush@@MEAA@XZ @ 0x18011FFAC (--1CLinearGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CLinearGradientBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  if ( this[15] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[15]);
    this[15] = 0LL;
  }
  *((_DWORD *)this + 29) = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
}
