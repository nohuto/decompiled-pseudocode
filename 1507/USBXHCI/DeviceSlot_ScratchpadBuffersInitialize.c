/*
 * XREFs of DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0016FCC
 * Callers:
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 */

void *__fastcall DeviceSlot_ScratchpadBuffersInitialize(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  void *result; // rax

  v1 = (__int64 *)(a1 + 48);
  for ( i = *(__int64 **)(a1 + 48); i != v1; i = (__int64 *)*i )
    result = memset((void *)i[2], 0, *((unsigned int *)i + 10));
  return result;
}
