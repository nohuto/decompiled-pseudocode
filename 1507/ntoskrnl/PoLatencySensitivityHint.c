/*
 * XREFs of PoLatencySensitivityHint @ 0x14013942C
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x14058420C (PopPerfBoostPowerRequest.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PpmTryAcquireLock @ 0x1401395AC (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1401399AC (PpmCheckCustomRun.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v1; // r9d
  _BYTE *i; // rax
  REGHANDLE v3; // rdi
  unsigned __int64 v4; // r8
  signed __int64 v5; // rdx
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 *j; // r8
  __int64 v9; // rcx
  int v10; // r9d
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  for ( i = (char *)&PpmCurrentProfile[174 * dword_14032E84C + 13] + 1; !*i; ++i )
  {
    if ( (unsigned int)++v1 >= 2 )
      return;
  }
  v12 = a1;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      UserData.Size = 4;
      EtwWrite(v3, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 1u, &UserData);
    }
  }
  v4 = PpmCheckPeriod + MEMORY[0xFFFFF78000000008];
  v5 = PpmPerfLatencyBoostExpiration;
  if ( PpmPerfLatencyBoostExpiration < (unsigned __int64)(PpmCheckPeriod + MEMORY[0xFFFFF78000000008]) )
  {
    while ( 1 )
    {
      v6 = v5;
      v7 = _InterlockedCompareExchange64(&PpmPerfLatencyBoostExpiration, v4, v5);
      v5 = v7;
      if ( v6 == v7 )
        break;
      _mm_pause();
      if ( v7 >= v4 )
        return;
    }
    _InterlockedOr(v11, 0);
    if ( v7 <= PpmCheckLastExecutionTime )
    {
      if ( (unsigned __int8)PpmTryAcquireLock() )
      {
        for ( j = (__int64 *)PpmPerfDomainHead; j != &PpmPerfDomainHead; j = (__int64 *)*j )
        {
          v9 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(j[2] + 36)] >> 6;
          v10 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(j[2] + 36)] & 0x3F;
          if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v9 )
            LOWORD(PpmPerfDomainsToUpdate) = v9 + 1;
          qword_140320838[(unsigned int)v9] = qword_140320838[v9] | (1LL << v10);
        }
        PpmCheckCustomRun(3LL);
      }
      else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
      {
        ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
      }
    }
  }
}
