/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAX_K@Z @ 0x1C0049980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, unsigned __int64 a2)
{
  if ( *((_QWORD *)this + 45) )
  {
    if ( a2 >= *((_QWORD *)this + 48) )
      ((void (__fastcall *)(_QWORD))qword_1C0101520)(*((_QWORD *)this + 45));
  }
}
