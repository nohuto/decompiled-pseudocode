/*
 * XREFs of PpmParkUnblockIdle @ 0x1400D30AC
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400C6910 (KeCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmPerfQueueAction @ 0x14012FC4C (PpmPerfQueueAction.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // bl
  __int64 Prcb; // rax
  int v3; // eax
  __int64 v4; // rax
  int *v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int16 v7; // [rsp+30h] [rbp-10h]
  ULONG v8; // [rsp+50h] [rbp+10h] BYREF

  v0 = 1;
  if ( PpmIsParkingEnabled )
  {
    v6 = qword_1402F8EB8;
    v5 = &PpmPerfNewUnparkedMask;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v5) )
    {
      Prcb = KeGetPrcb(v8);
      if ( *(_BYTE *)(Prcb + 23869) )
        *(_BYTE *)(Prcb + 23869) = 0;
      else
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&PpmPerfNewUnparkedMask, v8);
    }
    v3 = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
    if ( v3 )
    {
      PpmCheckCount = v3;
      v6 = qword_1402F8EB8;
      v7 = 0;
      v5 = &PpmPerfNewUnparkedMask;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v5) )
      {
        v4 = KeGetPrcb(v8);
        PpmPerfQueueAction(v4, 4LL);
      }
      PpmPerfNewUnparkedMask = 1310721;
      memset(&unk_1402F8EB4, 0, 0xA4uLL);
      return 0;
    }
  }
  return v0;
}
