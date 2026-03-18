/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C001D8C0
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C001E6C8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00F3F70 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 41) )
    (*(void (__fastcall **)(CFlipExBuffer *))(*(_QWORD *)this + 88LL))(this);
}
