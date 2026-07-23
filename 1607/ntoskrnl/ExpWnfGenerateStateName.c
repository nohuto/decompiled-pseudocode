/*
 * XREFs of ExpWnfGenerateStateName @ 0x1403F5D2C
 * Callers:
 *     NtCreateWnfStateName @ 0x1403F5A04 (NtCreateWnfStateName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExpWnfGetHostSiloContext @ 0x140462BB8 (ExpWnfGetHostSiloContext.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406BA04C (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(__int64 *a1, int a2, int a3, char a4)
{
  char v4; // si
  __int64 CurrentServerSilo; // rbx
  volatile signed __int64 *HostSiloContext; // r10
  signed __int64 v10; // r8
  bool v11; // zf
  signed __int64 v12; // r8
  __int64 result; // rax
  signed __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  if ( a3 == 4 )
  {
    CurrentServerSilo = xHalTimerWatchdogStop();
    HostSiloContext = (volatile signed __int64 *)ExpWnfGetHostSiloContext();
  }
  else
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    HostSiloContext = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 888);
  }
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(CurrentServerSilo, v14);
    if ( (int)result < 0 )
      return result;
    v12 = v14[0];
  }
  else
  {
    do
    {
      v10 = _InterlockedExchangeAdd64(HostSiloContext + 6, 1uLL);
      v11 = v10 == -1;
      v12 = v10 + 1;
      v14[0] = v12;
    }
    while ( v11 );
  }
  if ( (v12 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = *a1 & 1 | (16 * (a2 & 3 | (unsigned __int16)(4 * (v4 & 0xF)))) & 0x3FF | 1 | (((2 * v12) | (a4 != 0)) << 10);
  return 0LL;
}
