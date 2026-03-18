/*
 * XREFs of ??1CHwBitmapBrush@@UEAA@XZ @ 0x18002C244
 * Callers:
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18002C2B0 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwBitmapBrush::~CHwBitmapBrush(CHwBitmapBrush *this)
{
  __int64 v1; // rsi
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CHwBitmapBrush::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
