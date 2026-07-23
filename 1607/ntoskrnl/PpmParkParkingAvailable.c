/*
 * XREFs of PpmParkParkingAvailable @ 0x14056A91C
 * Callers:
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x140676710 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406767D8 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned int v0; // esi
  char *v1; // rdi
  unsigned __int8 v2; // bl
  unsigned int v3; // ebp
  char *v4; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  unsigned __int8 result; // al

  v0 = PpmParkNumNodes;
  if ( PpmParkNumNodes == 1 )
  {
    v1 = (char *)PpmParkNodes;
    if ( KeGetCurrentPrcb()->LogicalProcessorsPerCore == *((_BYTE *)PpmParkNodes + 6) )
      return 0;
    v0 = PpmParkNumNodes;
  }
  else
  {
    v1 = (char *)PpmParkNodes;
  }
  v2 = 0;
  v3 = 0;
  if ( v0 )
  {
    v4 = v1 + 100;
    while ( !v4[2] && !v4[4] && !*(_QWORD *)(v4 - 68) && (unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
    {
      v5 = 0;
      v6 = 0LL;
      while ( 1 )
      {
        v7 = v4[v6 - 4];
        if ( v7 )
        {
          v8 = v4[v6];
          if ( (unsigned __int8)v4[v6 - 2] < v8 || v8 < v7 )
            break;
        }
        ++v5;
        ++v6;
        if ( v5 >= 2 )
          goto LABEL_15;
      }
      v2 = 1;
LABEL_15:
      ++v3;
      v4 += 120;
      if ( v3 >= v0 )
        goto LABEL_16;
    }
    v2 = 1;
  }
LABEL_16:
  result = v2;
  PpmIsParkingEnabled = v2;
  return result;
}
