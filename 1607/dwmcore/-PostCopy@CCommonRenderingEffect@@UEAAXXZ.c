/*
 * XREFs of ?PostCopy@CCommonRenderingEffect@@UEAAXXZ @ 0x180056140
 * Callers:
 *     ??0CHWDrawListEntry@@AEAA@AEBUHWDrawListEntryParams@@@Z @ 0x18007C588 (--0CHWDrawListEntry@@AEAA@AEBUHWDrawListEntryParams@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::PostCopy(CCommonRenderingEffect *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = (_QWORD *)((char *)this + 8);
  v2 = 2LL;
  do
  {
    if ( *v1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    ++v1;
    --v2;
  }
  while ( v2 );
}
