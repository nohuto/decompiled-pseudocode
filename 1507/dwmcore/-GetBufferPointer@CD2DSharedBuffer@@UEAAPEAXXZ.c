/*
 * XREFs of ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x180070EA0
 * Callers:
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007307C (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CD2DSharedBuffer::GetBufferPointer(CD2DSharedBuffer *this)
{
  return (void *)*((_QWORD *)this + 1);
}
