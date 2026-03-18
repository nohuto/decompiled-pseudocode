/*
 * XREFs of ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AA8C0
 * Callers:
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA4D8 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA5CC (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CD2DSharedBuffer::GetBufferPointer(CD2DSharedBuffer *this)
{
  return (void *)*((_QWORD *)this + 1);
}
