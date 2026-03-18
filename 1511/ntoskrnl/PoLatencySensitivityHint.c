/*
 * XREFs of PoLatencySensitivityHint @ 0x140105D7C
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x14050CDD8 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400DC658 (PpmInterlockedUpdateTimeNoFence.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PpmTryAcquireLock @ 0x140105EAC (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x140106504 (PpmCheckCustomRun.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v1; // r9d
  _BYTE *i; // rax
  REGHANDLE v3; // rdi
  __int64 *j; // rbx
  signed __int32 v5[8]; // [rsp+0h] [rbp-68h] BYREF
  int v6; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0;
  for ( i = (char *)&PpmCurrentProfile[174 * dword_1402DE28C + 13] + 1; !*i; ++i )
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
        for ( j = (__int64 *)PpmPerfDomainHead; j != &PpmPerfDomainHead; j = (__int64 *)*j )
          KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(_DWORD *)(j[2] + 36));
        PpmCheckCustomRun(3LL);
      }
      else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
      {
        ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
      }
    }
  }
}
