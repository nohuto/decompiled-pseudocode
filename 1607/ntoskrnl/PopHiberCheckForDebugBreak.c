/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x1403CEA18
 * Callers:
 *     PopWriteHiberImage @ 0x1403CCFC4 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x1403CD99C (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x1403CDE5C (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403CE3B0 (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403CE50C (ProducerConsumerBufferComplete.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 *     ProducerGetBuffer @ 0x1403CE93C (ProducerGetBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140114668 (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
