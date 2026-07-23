/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x1400EB628
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400EB050 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpCompressionDpc @ 0x14022A3F8 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x14022AB8C (EtwpReenableCompression.c)
 */

signed __int64 __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( *(_DWORD *)(a1 + 976) )
        goto LABEL_10;
      result = 2LL * *(_QWORD *)(a1 + 1080);
      if ( *(_QWORD *)(a1 + 1072) >= result )
        result = EtwpReenableCompression(a1);
      if ( *(_DWORD *)(a1 + 976) )
      {
LABEL_10:
        result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 944), 2);
        if ( !(_DWORD)result )
        {
          if ( KeGetEffectiveIrql() > 2u )
            return KiInsertQueueDpc(a1 + 1000, 0LL, 0LL, 0LL, 0);
          else
            return EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    result = (*(__int64 (**)(void))(a1 + 40))();
    *(_QWORD *)(a2 + 16) = result;
  }
  return result;
}
