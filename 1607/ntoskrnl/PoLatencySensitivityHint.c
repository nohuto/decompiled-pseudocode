/*
 * XREFs of PoLatencySensitivityHint @ 0x140111844
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x140544C80 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400BFB20 (PpmInterlockedUpdateTimeNoFence.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PpmTryAcquireLock @ 0x140111994 (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1401119F8 (PpmCheckCustomRun.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v1; // r9d
  _BYTE *i; // rax
  REGHANDLE v3; // rdi
  __int64 j; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-68h] BYREF
  int v6; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0;
  for ( i = (char *)&PpmCurrentProfile[174 * dword_140303D4C + 13] + 1; !*i; ++i )
  {
    if ( (unsigned int)++v1 >= 2 )
      return;
  }
  v6 = a1;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      EtwWrite(v3, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 1u, &UserData);
    }
  }
  if ( PpmInterlockedUpdateTimeNoFence(&PpmPerfLatencyBoostExpiration, PpmCheckPeriod + MEMORY[0xFFFFF78000000008], &v7) )
  {
    _InterlockedOr(v5, 0);
    if ( v7 <= PpmCheckLastExecutionTime )
    {
      if ( (unsigned __int8)PpmTryAcquireLock() )
      {
        for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
          *(_BYTE *)(j + 406) = 1;
        PpmCheckCustomRun(3LL);
      }
      else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
      {
        ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
      }
    }
  }
}
