/*
 * XREFs of ?ReleaseResources@CBrushRenderingEffect@@UEAAXXZ @ 0x180195610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::ReleaseResources(CBrushRenderingEffect *this)
{
  __int64 v2; // rcx
  int v3; // edi
  _QWORD *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 16);
  do
  {
    if ( (*v4 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFEuLL) + 16LL))(*v4 & 0xFFFFFFFFFFFFFFFEuLL);
      *v4 = 0LL;
    }
    ++v3;
    ++v4;
  }
  while ( (unsigned __int64)v3 < 2 );
}
