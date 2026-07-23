/*
 * XREFs of KeXorAffinityEx @ 0x1401D3D68
 * Callers:
 *     PpmParkComputeDiff @ 0x14020DDC8 (PpmParkComputeDiff.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 KeXorAffinityEx()
{
  __int16 *v0; // r8
  int *v1; // r9
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // edx
  signed __int64 v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v0 = (__int16 *)&PpmPerfNewCoreParkingMask;
  v1 = (int *)PpmPerfCoreParkingMask;
  if ( PpmPerfCoreParkingMask[0] > (unsigned __int16)PpmPerfNewCoreParkingMask )
  {
    v1 = &PpmPerfNewCoreParkingMask;
    v0 = (__int16 *)PpmPerfCoreParkingMask;
  }
  v2 = *(unsigned __int16 *)v1;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( *(_WORD *)v1 )
  {
    v6 = (char *)v1 - (char *)v0;
    v7 = v0 + 4;
    v5 = v2;
    v8 = v2;
    do
    {
      v9 = *v7 ^ *(_QWORD *)((char *)v7 + v6);
      v4 |= v9;
      *(_QWORD *)((char *)v7++ + (char *)PpmPerfChangedCoreParkingMask - (char *)v0) = v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = (unsigned __int16)*v0;
  PpmPerfChangedCoreParkingMask[0] = *v0;
  while ( v5 < v10 )
  {
    v11 = v5++;
    *(_QWORD *)&PpmPerfChangedCoreParkingMask[4 * v11 + 4] = *(_QWORD *)&v0[4 * v11 + 4];
    v10 = (unsigned __int16)PpmPerfChangedCoreParkingMask[0];
  }
  dword_1402F9014 = 0;
  word_1402F9012 = 20;
  if ( v5 < 0x14 )
    memset(&PpmPerfChangedCoreParkingMask[4 * v5 + 4], 0, 8LL * (20 - v5));
  LOBYTE(v3) = v4 != 0;
  return v3;
}
