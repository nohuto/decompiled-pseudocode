/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18007C8B0
 * Callers:
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x18007C8F8 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18007E1B8 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = (_QWORD *)((char *)this + 64);
  v2 = 9LL;
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
