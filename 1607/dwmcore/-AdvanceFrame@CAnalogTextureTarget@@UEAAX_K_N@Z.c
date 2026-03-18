/*
 * XREFs of ?AdvanceFrame@CAnalogTextureTarget@@UEAAX_K_N@Z @ 0x180166020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogTextureTarget::AdvanceFrame(CAnalogTextureTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 176) + 192LL))(v1 + 176);
}
