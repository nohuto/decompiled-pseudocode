/*
 * XREFs of ?ImmediateSignalGpuFence@CFlipExBuffer@@UEAAX_K@Z @ 0x1C001E160
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkImmediateSignalSynchronizationObjectByReference @ 0x1C007F2A0 (GreDxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::ImmediateSignalGpuFence(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 40) )
    GreDxgkImmediateSignalSynchronizationObjectByReference();
}
