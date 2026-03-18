/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C0049480
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0049E18 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00DF990 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  __int64 v2; // rax

  if ( *((_QWORD *)this + 46) )
  {
    (*(void (__fastcall **)(CFlipExBuffer *))(*(_QWORD *)this + 72LL))(this);
    v2 = *((_QWORD *)this + 46);
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = v2;
  }
}
