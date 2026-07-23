/*
 * XREFs of PopPerfBoostPowerRequest @ 0x140544C80
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x140111844 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomains @ 0x140544CD4 (PpmPerfUpdateDomains.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(char a1)
{
  char v2; // al
  __int64 Buffer; // [rsp+60h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0
    && (HIBYTE(word_140303EA4) || byte_140303EA3 || (_BYTE)word_140303EA4 || byte_140303EA6) )
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
    Buffer = 0LL;
    if ( a1 )
    {
      PoLatencySensitivityHint(3);
      v2 = 1;
    }
    HIDWORD(Buffer) = -1;
    LODWORD(Buffer) = Buffer ^ ((unsigned __int8)Buffer ^ (unsigned __int8)(2 * v2)) & 2 | 1;
    ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return 0LL;
}
