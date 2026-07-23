/*
 * XREFs of PopCountDataAsProduced @ 0x1403CD378
 * Callers:
 *     PopWriteHiberImage @ 0x1403CCFC4 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1403CD2CC (PopCompressHiberBlocks.c)
 * Callees:
 *     ProducerConsumerCopyToContextBuffer @ 0x1403CD470 (ProducerConsumerCopyToContextBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403CE50C (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x1403CE93C (ProducerGetBuffer.c)
 */

char __fastcall PopCountDataAsProduced(__int64 a1, void *a2, _DWORD *a3, void *a4, int a5, unsigned int a6)
{
  char *v7; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int64 Buffer; // rsi
  char result; // al
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax

  v7 = (char *)qword_140303558;
  v11 = 8 * (unsigned __int8)*a3;
  v12 = ((*a3 >> 8) & 0x3FFFFF) + v11;
  Buffer = ProducerGetBuffer(qword_140303558, v12 + 4, (unsigned int)(a5 << 12), a6);
  result = 0;
  if ( Buffer )
  {
    ProducerConsumerCopyToContextBuffer(a3, 4uLL);
    ProducerConsumerCopyToContextBuffer(a4, v11);
    ProducerConsumerCopyToContextBuffer(a2, (*a3 >> 8) & 0x3FFFFF);
    v15 = __rdtsc();
    ProducerConsumerBufferComplete(v7, v7 + 32, Buffer, v12 + 4);
    v16 = __rdtsc();
    *(_QWORD *)(a1 + 80) += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
    return 1;
  }
  return result;
}
