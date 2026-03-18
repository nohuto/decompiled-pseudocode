/*
 * XREFs of PopPerfBoostPowerRequest @ 0x140544740
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x1401112E0 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomains @ 0x140544794 (PpmPerfUpdateDomains.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(char a1)
{
  char v2; // al
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0
    && (HIBYTE(word_140303F64) || byte_140303F63 || (_BYTE)word_140303F64 || byte_140303F66) )
  {
    if ( a1 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmPerfMaxOverrideEnabled = 1;
    }
    else
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmPerfMaxOverrideEnabled = 0;
    }
    PpmPerfUpdateDomains();
  }
  else
  {
    v2 = 0;
    v3 = 0LL;
    if ( a1 )
    {
      PoLatencySensitivityHint(3);
      v2 = 1;
    }
    HIDWORD(v3) = -1;
    LODWORD(v3) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v2)) & 2 | 1;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v3, 8LL);
  }
  return 0LL;
}
