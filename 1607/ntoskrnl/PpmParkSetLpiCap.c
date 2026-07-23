/*
 * XREFs of PpmParkSetLpiCap @ 0x14020DF34
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     PpmCheckCustomRun @ 0x1401119F8 (PpmCheckCustomRun.c)
 *     PpmParkApplyPolicy @ 0x1401443E0 (PpmParkApplyPolicy.c)
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, int a2, unsigned int *a3)
{
  __int64 v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // edx
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  char v14; // al

  if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && (HvlEnlightenments & 0x40000) == 0 )
    return 3221225473LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v8 = (unsigned __int8)PpmParkGranularity
     + a1
     - 1
     - ((unsigned int)(unsigned __int8)PpmParkGranularity + a1 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v8 )
  {
    v9 = 0;
    if ( PpmParkNumNodes )
    {
      v10 = (char *)PpmParkNodes + 6;
      v7 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *v10 > (unsigned __int8)PpmParkGranularity )
          v9 += (unsigned __int8)*v10 - (unsigned __int8)PpmParkGranularity;
        v10 += 120;
        --v7;
      }
      while ( v7 );
    }
    if ( v8 > v9 )
      v8 = v9;
  }
  v11 = ((unsigned int)(unsigned __int8)PpmParkGranularity + a2 - 1) % (unsigned __int8)PpmParkGranularity;
  v12 = (unsigned __int8)PpmParkGranularity + a2 - 1 - (unsigned int)v11;
  if ( (_DWORD)v12 )
  {
    v11 = 0LL;
    if ( PpmParkNumNodes )
    {
      v7 = (__int64)PpmParkNodes + 6;
      v13 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *(_BYTE *)v7 > (unsigned __int8)PpmParkGranularity )
          v11 = *(unsigned __int8 *)v7 - (unsigned __int8)PpmParkGranularity + (unsigned int)v11;
        v7 += 120LL;
        --v13;
      }
      while ( v13 );
    }
    if ( (unsigned int)v12 > (unsigned int)v11 )
      v12 = (unsigned int)v11;
  }
  v14 = 0;
  if ( v8 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v8;
    v14 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( (_DWORD)v12 != PpmParkThermalCap )
  {
    PpmParkThermalCap = v12;
    v14 = 1;
  }
  if ( v14 )
  {
    PpmParkApplyPolicy(v12, v11, v7, (_BYTE *)(unsigned int)PpmParkNumNodes);
    PpmCheckReInit();
    PpmCheckCustomRun();
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  *a3 = v8;
  return 0LL;
}
