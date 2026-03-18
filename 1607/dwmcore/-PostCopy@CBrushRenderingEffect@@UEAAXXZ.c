/*
 * XREFs of ?PostCopy@CBrushRenderingEffect@@UEAAXXZ @ 0x1801955B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::PostCopy(CBrushRenderingEffect *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rdi

  v2 = 0;
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (_QWORD *)((char *)this + 16);
  do
  {
    if ( (*v4 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFEuLL) + 8LL))(*v4 & 0xFFFFFFFFFFFFFFFEuLL);
    ++v2;
    ++v4;
  }
  while ( (unsigned __int64)v2 < 2 );
}
