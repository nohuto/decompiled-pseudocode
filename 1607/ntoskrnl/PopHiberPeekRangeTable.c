/*
 * XREFs of PopHiberPeekRangeTable @ 0x1403CDE1C
 * Callers:
 *     ConsumerPeekAndConsumeBuffer @ 0x1403CE3B0 (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     PopReadProducerConsumerBuffer @ 0x1403CE2C0 (PopReadProducerConsumerBuffer.c)
 */

unsigned __int64 __fastcall PopHiberPeekRangeTable(int a1, int a2, __int64 a3)
{
  _DWORD *ProducerConsumerBuffer; // rax
  char v5; // [rsp+50h] [rbp+18h] BYREF

  ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                       a1,
                                       a2,
                                       (unsigned int)&v5,
                                       (_DWORD)qword_140303558,
                                       a3,
                                       0);
  return (((unsigned __int64)(unsigned int)*ProducerConsumerBuffer >> 8) & 0x3FFFFF)
       + 8LL * (unsigned __int8)*ProducerConsumerBuffer
       + 4;
}
