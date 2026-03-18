/*
 * XREFs of ?SetProtectedContentInFrame@CAnalogDisplayRenderTarget@@QEAAX_N@Z @ 0x180167E20
 * Callers:
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogDisplayRenderTarget::SetProtectedContentInFrame(CAnalogDisplayRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 42);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 288) + 96LL))(*(_QWORD *)(v1 + 288));
}
