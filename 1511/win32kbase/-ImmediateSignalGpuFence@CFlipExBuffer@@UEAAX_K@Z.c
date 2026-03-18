/*
 * XREFs of ?ImmediateSignalGpuFence@CFlipExBuffer@@UEAAX_K@Z @ 0x1C003E050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipExBuffer::ImmediateSignalGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 45) )
    ((void (*)(void))qword_1C0104340)();
}
