/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x1405B109C
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

void PpmHeteroComputeRelativePerformance()
{
  __int64 v0; // r9
  unsigned __int64 v1; // r8
  __int64 *v2; // rcx
  unsigned __int64 v3; // rax
  char v4; // r10
  unsigned __int64 v5; // r8
  unsigned int v6; // r11d
  __int64 v7; // rax
  unsigned int i; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d

  v0 = PpmPerfDomainHead;
  v1 = 0LL;
  v2 = (__int64 *)PpmPerfDomainHead;
  if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
  {
    do
    {
      v3 = v2[40];
      v2 = (__int64 *)*v2;
      if ( v1 <= v3 )
        v1 = v3;
    }
    while ( v2 != &PpmPerfDomainHead );
    if ( v1 )
    {
      v4 = 0;
      if ( v1 >= 0x7FFFFFFFFFFFLL )
      {
        _BitScanReverse(&v11, HIDWORD(v1) + 0xFFFF);
        v4 = v11 - 14;
      }
      v5 = v1 >> v4;
      v6 = -1;
      while ( (__int64 *)v0 != &PpmPerfDomainHead )
      {
        v9 = *(_QWORD *)(v0 + 320) >> v4;
        if ( v9 == v5 )
        {
          v10 = 0x10000LL;
        }
        else
        {
          v10 = ((v5 >> 1) + (v9 << 16)) / v5;
          if ( v10 <= 1 )
            v10 = 1LL;
        }
        for ( i = 0; i < *(_DWORD *)(v0 + 192); *(_DWORD *)(*(_QWORD *)(88 * v7 + *(_QWORD *)(v0 + 200)) + 24232LL) = v10 )
          v7 = i++;
        v0 = *(_QWORD *)v0;
        if ( v6 >= v10 )
          v6 = v10;
      }
      PpmHeteroMinRelativePerformance = v6;
    }
  }
}
