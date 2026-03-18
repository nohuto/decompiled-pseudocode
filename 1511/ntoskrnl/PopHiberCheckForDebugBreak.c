/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x1403A3128
 * Callers:
 *     PopWriteHiberImage @ 0x1403A0D54 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x1403A20C8 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x1403A2574 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1403A2AD0 (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1403A2C40 (ProducerConsumerBufferComplete.c)
 *     PopRequestRead @ 0x1403A2D00 (PopRequestRead.c)
 *     ProducerGetBuffer @ 0x1403A304C (ProducerGetBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140119A78 (KdCheckForDebugBreak.c)
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
