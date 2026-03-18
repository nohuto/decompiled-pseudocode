/*
 * XREFs of ?MarkFullInvalid@CD2DBitmapCache@@UEAAXXZ @ 0x18001B380
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800469D0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmapCache::MarkFullInvalid(CD2DBitmapCache *this)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v4; // rdi

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 40LL))(v1 + 16);
  if ( *((_DWORD *)this + 22) )
  {
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 264) + 40LL))(v4 + 264);
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 22) );
  }
}
