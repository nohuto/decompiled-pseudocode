/*
 * XREFs of ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x180152ABC
 * Callers:
 *     ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x180152B60 (--_ECSecondarySysmemBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSecondarySysmemBitmap::~CSecondarySysmemBitmap(CSecondarySysmemBitmap *this)
{
  __int64 v1; // rbp

  v1 = *((_QWORD *)this + 17);
  *(_QWORD *)this = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondarySysmemBitmap::`vftable'{for `CSecondaryBitmap'};
  *((_QWORD *)this + 12) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 13) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  if ( v1 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  FastRegion::CRegion::FreeMemory((void **)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
