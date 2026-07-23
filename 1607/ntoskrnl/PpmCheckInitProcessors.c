/*
 * XREFs of PpmCheckInitProcessors @ 0x14056A310
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x14066A218 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeOrAffinityEx @ 0x1400960D0 (KeOrAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmCheckApplyParkConstraints @ 0x140143D7C (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     KeSubtractAffinityEx @ 0x1401447FC (KeSubtractAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401448E4 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmUpdateProcessorPolicy @ 0x140545A2C (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x14056A464 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  int v3; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v4; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v5[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+38h] [rbp-C8h]
  _QWORD v7[22]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v8[88]; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 )
  {
    LODWORD(v7[0]) = 1310721;
    memset((char *)v7 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v8);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v8, (char *)PpmCheckRegistered, v7) )
      return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v7, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v7) )
  {
    v5[1] = (unsigned __int16 *)v7[1];
    v5[0] = (unsigned __int16 *)v7;
    v6 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v5) )
    {
      Prcb = KeGetPrcb(v4);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v7, (__int64)PpmCheckReset, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    LOWORD(v3) = 0;
    PpmAllowedActions |= 0x1000u;
    v3 |= 0x1000u;
    PpmUpdateProcessorPolicy(&v3, 0LL);
  }
  PpmCheckReInit();
  return PpmCheckApplyParkConstraints();
}
