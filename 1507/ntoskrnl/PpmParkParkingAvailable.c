/*
 * XREFs of PpmParkParkingAvailable @ 0x1405B0CC0
 * Callers:
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 *     PpmParkApplyForcedMask @ 0x1406BE7BC (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406BE884 (PpmParkClearForcedMask.c)
 * Callees:
 *     <none>
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned int v0; // r9d
  char *v1; // r8
  unsigned __int8 result; // al
  unsigned __int8 v3; // dl
  unsigned int v4; // r10d
  char *v5; // rcx
  unsigned __int16 v6; // r8
  unsigned int v7; // r8d
  __int64 v8; // rax
  unsigned __int8 v9; // r11
  unsigned __int8 v10; // bl

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
  v3 = 0;
  v4 = 0;
  if ( v0 )
  {
    v5 = v1 + 100;
    while ( !v5[2] && !v5[4] && !*(_QWORD *)(v5 - 68) )
    {
      v6 = 0;
      if ( PpmPerfCoreParkingMask[0] )
      {
        while ( !qword_140320A48[v6] )
        {
          if ( ++v6 >= (unsigned int)PpmPerfCoreParkingMask[0] )
            goto LABEL_14;
        }
        break;
      }
LABEL_14:
      v7 = 0;
      v8 = 0LL;
      while ( 1 )
      {
        v9 = v5[v8 - 4];
        if ( v9 )
        {
          v10 = v5[v8];
          if ( (unsigned __int8)v5[v8 - 2] < v10 || v10 < v9 )
            break;
        }
        ++v7;
        ++v8;
        if ( v7 >= 2 )
          goto LABEL_21;
      }
      v3 = 1;
LABEL_21:
      ++v4;
      v5 += 120;
      if ( v4 >= v0 )
        goto LABEL_24;
    }
    v3 = 1;
  }
LABEL_24:
  result = v3;
  PpmIsParkingEnabled = v3;
  return result;
}
