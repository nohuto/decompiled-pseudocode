/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x1403F5FEC
 * Callers:
 *     PopWriteHiberImage @ 0x1403F3A20 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x1403F4E98 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x1403F53D4 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403F5960 (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403F5AE8 (ProducerConsumerBufferComplete.c)
 *     PopRequestRead @ 0x1403F5BC4 (PopRequestRead.c)
 *     ProducerGetBuffer @ 0x1403F5F10 (ProducerGetBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
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
