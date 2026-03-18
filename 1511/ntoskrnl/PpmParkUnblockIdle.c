/*
 * XREFs of PpmParkUnblockIdle @ 0x140075678
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140096030 (KeCountSetBitsAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x14012453C (PpmPerfQueueAction.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // bl
  __int64 Prcb; // rax
  int v3; // eax
  __int64 v4; // rax
  __int64 *v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int16 v7; // [rsp+30h] [rbp-10h]
  unsigned int v8; // [rsp+50h] [rbp+10h] BYREF

  v0 = 1;
  if ( PpmIsParkingEnabled )
  {
    v6 = qword_1402D3498;
    v5 = &PpmPerfNewUnparkedMask;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v5) )
    {
      Prcb = KeGetPrcb(v8);
      if ( *(_BYTE *)(Prcb + 23869) )
        *(_BYTE *)(Prcb + 23869) = 0;
      else
        KeRemoveProcessorAffinityEx(&PpmPerfNewUnparkedMask, v8);
    }
    v3 = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
    if ( v3 )
    {
      PpmCheckCount = v3;
      v6 = qword_1402D3498;
      v7 = 0;
      v5 = &PpmPerfNewUnparkedMask;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v5) )
      {
        v4 = KeGetPrcb(v8);
        PpmPerfQueueAction(v4, 4LL);
      }
      PpmPerfNewUnparkedMask = 1310721LL;
      memset(&qword_1402D3498, 0, 0xA0uLL);
      return 0;
    }
  }
  return v0;
}
