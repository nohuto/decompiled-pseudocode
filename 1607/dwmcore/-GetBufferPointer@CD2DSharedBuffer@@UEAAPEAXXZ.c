/*
 * XREFs of ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x18009E350
 * Callers:
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009DF84 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CD2DSharedBuffer::GetBufferPointer(CD2DSharedBuffer *this)
{
  return (void *)*((_QWORD *)this + 1);
}
