/*
 * XREFs of PpmUpdateIdleDomains @ 0x140201678
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3ED8 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1)
{
  int v2; // ebx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
  if ( a1 && (unsigned int)KeIsSubsetAffinityEx((__int16 *)(a1 + 8), (__int16 *)KeActiveProcessors) )
  {
    v2 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
    if ( v2 >= 0 )
      v2 = 0;
  }
  else
  {
    v2 = -1073741811;
  }
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return (unsigned int)v2;
}
