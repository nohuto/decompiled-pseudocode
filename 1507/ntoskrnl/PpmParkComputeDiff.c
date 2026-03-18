/*
 * XREFs of PpmParkComputeDiff @ 0x1402425E0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400E9C10 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // r8
  char *v1; // rcx
  unsigned __int16 v2; // dx
  __int64 v3; // r9

  dword_1403225C4 = 0;
  PpmPerfNewCoreParkingMask[0] = 1310721;
  memset(qword_1403225C8, 0, 0xA0uLL);
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = (char *)PpmParkNodes + 4;
    do
    {
      v2 = *(_WORD *)v1;
      v3 = *(_QWORD *)(v1 + 28);
      if ( LOWORD(PpmPerfNewCoreParkingMask[0]) <= *(_WORD *)v1 )
        LOWORD(PpmPerfNewCoreParkingMask[0]) = v2 + 1;
      v1 += 120;
      qword_1403225C8[v2] |= v3;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx();
}
