/*
 * XREFs of PopClearSpecialRequest @ 0x14066A9C4
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140502F60 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400F99D0 (PopDiagTracePowerRequestChange.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi

  if ( a2 == 3 )
  {
    v4 = 0LL;
    PopAcquirePowerRequestPushLock(1);
    if ( *(_QWORD *)(a1 + 96) )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( v4 )
        *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 96) = 0LL;
      --*(_DWORD *)(a1 + 44);
      PopDiagTracePowerRequestChange(a1);
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock(&PopPowerRequestLock);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, a1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
