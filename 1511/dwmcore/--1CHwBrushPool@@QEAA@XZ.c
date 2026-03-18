/*
 * XREFs of ??1CHwBrushPool@@QEAA@XZ @ 0x18002BC30
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18002BA94 (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800273EC (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18002C2B0 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800B3364 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 */

void __fastcall CHwBrushPool::~CHwBrushPool(CHwSolidBrush **this)
{
  CHwSolidBrush *v2; // rcx
  CHwSolidBrush *v3; // rdi
  _DWORD *i; // rax
  CHwBitmapBrush *v5; // rcx

  v2 = *this;
  if ( v2 )
    CHwSolidBrush::`vector deleting destructor'(v2, 1);
  v3 = this[1];
  if ( v3 )
  {
    CHwBrushPoolManager::ReleaseUnusedBrushes(this[1]);
    for ( i = (_DWORD *)*((_QWORD *)v3 + 4); i != (_DWORD *)((char *)v3 + 32); i = *(_DWORD **)i )
      i[4] = 0;
    if ( _InterlockedDecrement((volatile signed __int32 *)v3 + 18) == -1 )
      (*(void (__fastcall **)(CHwSolidBrush *, __int64))(*(_QWORD *)v3 + 16LL))(v3, 1LL);
  }
  v5 = this[2];
  if ( v5 )
    CHwBitmapBrush::`scalar deleting destructor'(v5, 1u);
}
