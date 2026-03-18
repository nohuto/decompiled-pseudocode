/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C003DB2C
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003E52C (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00E1860 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 46) )
    (*(void (__fastcall **)(CFlipExBuffer *))(*(_QWORD *)this + 80LL))(this);
}
