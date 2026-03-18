/*
 * XREFs of PpmParkComputeDiff @ 0x1401F44CC
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140076518 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // r8
  char *v1; // rcx
  unsigned __int16 v2; // dx
  __int64 v3; // r9

  dword_1402CFBD4 = 0;
  PpmPerfNewCoreParkingMask = 1310721;
  memset(qword_1402CFBD8, 0, sizeof(qword_1402CFBD8));
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = (char *)PpmParkNodes + 4;
    do
    {
      v2 = *(_WORD *)v1;
      v3 = *(_QWORD *)(v1 + 28);
      if ( (unsigned __int16)PpmPerfNewCoreParkingMask <= *(_WORD *)v1 )
        LOWORD(PpmPerfNewCoreParkingMask) = v2 + 1;
      v1 += 120;
      qword_1402CFBD8[v2] |= v3;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx();
}
