/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x180056DCC
 * Callers:
 *     ??1CBitmap@@UEAA@XZ @ 0x18008009C (--1CBitmap@@UEAA@XZ.c)
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x18008128C (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x18014BCC0 (--1CMILBrushGradient@@MEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this)
{
  bool v1; // zf
  __int64 v3; // rsi

  v1 = *((_DWORD *)this + 8) == 0;
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  if ( !v1 )
  {
    do
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (unsigned int)--*((_DWORD *)this + 8));
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    }
    while ( *((_DWORD *)this + 8) );
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 1);
}
