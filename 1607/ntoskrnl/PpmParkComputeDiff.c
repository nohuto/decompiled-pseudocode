/*
 * XREFs of PpmParkComputeDiff @ 0x14020DDC8
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400D2A6C (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // r8
  char *v1; // rcx
  unsigned __int16 v2; // dx
  __int64 v3; // r9

  PpmPerfNewCoreParkingMask = 1310721;
  memset(&unk_1402F6E64, 0, 0xA4uLL);
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
      qword_1402F6E68[v2] |= v3;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx();
}
