/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x140123FFC
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140096030 (KeCountSetBitsAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfApplyProcessorState @ 0x140124144 (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x14012453C (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 Prcb; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 *v7; // [rsp+30h] [rbp-81h] BYREF
  __int64 v8; // [rsp+38h] [rbp-79h]
  __int16 v9; // [rsp+40h] [rbp-71h]
  __int64 v10; // [rsp+48h] [rbp-69h] BYREF
  __int64 v11; // [rsp+50h] [rbp-61h]
  _BYTE v12[152]; // [rsp+58h] [rbp-59h] BYREF

  v0 = 0;
  v10 = 1310721LL;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  KeCopyAffinityEx((__int64)&v10, (unsigned __int16 *)&PpmPerfProcessorsToUpdate);
  PpmPerfProcessorsToUpdate = 1310721LL;
  memset(qword_1402D15E8, 0, 0xA0uLL);
  v8 = v11;
  v7 = (unsigned __int16 *)&v10;
  v9 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, &v7) )
  {
    Prcb = KeGetPrcb(v6);
    if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, 0LL, v2, v3) )
      KeRemoveProcessorAffinityEx((unsigned __int16 *)&v10, v6);
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v10);
  if ( !PpmCheckCount )
    return 1;
  v8 = v11;
  v7 = (unsigned __int16 *)&v10;
  v9 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, &v7) )
  {
    v4 = KeGetPrcb(v6);
    PpmPerfQueueAction(v4, 2LL);
  }
  return v0;
}
