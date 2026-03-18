/*
 * XREFs of ??1CHwBrushPool@@QEAA@XZ @ 0x18008AAB4
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18008AB50 (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 * Callees:
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x18008A7D0 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18008A880 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x18008AA10 (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    CHwBitmapBrush::`scalar deleting destructor'(v5, 1);
}
