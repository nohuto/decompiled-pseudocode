/*
 * XREFs of PpmCheckInitProcessors @ 0x140536E6C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1406323A4 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x140077490 (KeSubtractAffinityEx.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeOrAffinityEx @ 0x1400D8E70 (KeOrAffinityEx.c)
 *     PpmCheckApplyParkConstraints @ 0x140138DF0 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x140138DFC (PpmParkRegisterParking.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401397E4 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmUpdateProcessorPolicy @ 0x14050AB34 (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x140536FC4 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140537328 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1)
{
  unsigned __int64 v1; // rdx
  __int64 Prcb; // rax
  int v4; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v5; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v6[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v7; // [rsp+38h] [rbp-C8h]
  _QWORD v8[22]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v9[88]; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 )
  {
    v8[0] = 1310721LL;
    memset(&v8[1], 0, 0xA0uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v9);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v9, (char *)PpmCheckRegistered, v8) )
      return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v8, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v8) )
  {
    v6[1] = (unsigned __int16 *)v8[1];
    v6[0] = (unsigned __int16 *)v8;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v6) )
    {
      Prcb = KeGetPrcb(v5);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v8, (__int64)PpmCheckReset, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    LOWORD(v4) = 0;
    PpmAllowedActions |= 0x1000u;
    v4 |= 0x1000u;
    PpmUpdateProcessorPolicy(&v4, v1);
  }
  PpmCheckReInit();
  return PpmCheckApplyParkConstraints();
}
