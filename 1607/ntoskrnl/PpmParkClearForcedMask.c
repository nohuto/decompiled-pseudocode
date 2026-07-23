/*
 * XREFs of PpmParkClearForcedMask @ 0x1406767D8
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     PpmCheckApplyParkConstraints @ 0x140143D7C (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1401443E0 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x14056A91C (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(_WORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  _BYTE *v8; // r10
  char v9; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *a1 < 0x14u )
  {
    v6 = (unsigned int)PpmParkNumNodes;
    v4 = 0;
    LOBYTE(v3) = 0;
    v7 = 0LL;
    if ( PpmParkNumNodes )
    {
      v8 = PpmParkNodes;
      do
      {
        v2 = 120LL * (unsigned __int16)v7;
        if ( *(_WORD *)&v8[v2 + 4] == *a1 )
        {
          v9 = v8[v2 + 114];
          if ( (v9 & 1) != 0 )
          {
            LOBYTE(v3) = 1;
            v8[v2 + 114] = v9 & 0xFE;
          }
        }
        LOWORD(v7) = v7 + 1;
      }
      while ( (unsigned __int16)v7 < (unsigned int)v6 );
    }
    if ( (_BYTE)v3 )
    {
      PpmParkApplyPolicy(v7, v2, v3, (_BYTE *)v6);
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v4;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
