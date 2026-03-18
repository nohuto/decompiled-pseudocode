/*
 * XREFs of ??1CHwBrushPool@@QEAA@XZ @ 0x18002F798
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800AAE30 (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x1800AB160 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800B6954 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBrushPool::~CHwBrushPool(CHwSolidBrush **this)
{
  CHwSolidBrush *v2; // rcx
  CHwSolidBrush *v3; // rbx
  _DWORD *i; // rax
  CHwBitmapBrush *v5; // rcx

  v2 = *this;
  if ( v2 )
    CHwSolidBrush::`vector deleting destructor'(v2, 1u);
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
