/*
 * XREFs of ??1CBrush@@UEAA@XZ @ 0x180083780
 * Callers:
 *     ??1CSolidColorBrush@@MEAA@XZ @ 0x180083E70 (--1CSolidColorBrush@@MEAA@XZ.c)
 *     ??1CTileBrush@@MEAA@XZ @ 0x180085E70 (--1CTileBrush@@MEAA@XZ.c)
 *     ??_GCBrush@@UEAAPEAXI@Z @ 0x1800F1110 (--_GCBrush@@UEAAPEAXI@Z.c)
 *     ??1CLinearGradientBrush@@MEAA@XZ @ 0x18011FFAC (--1CLinearGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &CBrush::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  CResource::~CResource(this);
}
