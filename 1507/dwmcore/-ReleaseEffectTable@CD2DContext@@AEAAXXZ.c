/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18008B69C
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18008B754 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x18008F33C (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp

  v1 = (_QWORD *)((char *)this + 56);
  v2 = 8LL;
  do
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
