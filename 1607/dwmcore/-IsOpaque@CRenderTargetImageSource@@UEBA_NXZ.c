/*
 * XREFs of ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180131EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetImageSource::IsOpaque(CRenderTargetImageSource *this)
{
  return (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 15) + 48LL))((char *)this + 120) == 3;
}
