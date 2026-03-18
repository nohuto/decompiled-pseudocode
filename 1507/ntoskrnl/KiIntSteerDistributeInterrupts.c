/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x1400EA110
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiIntSteerSetDestination @ 0x1400EB378 (KiIntSteerSetDestination.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // r8
  ULONG_PTR i; // rbx
  unsigned __int16 v4; // r10
  unsigned __int64 v5; // r8
  int v6; // r9d
  unsigned int v7; // r9d
  unsigned __int16 v8; // r9
  unsigned __int64 v9; // r8
  int v10; // r10d
  unsigned int v11; // r10d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v0 = KiIntTrackRootList;
  if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      if ( *(_BYTE *)(v0 + 124) )
      {
        v1 = *(_QWORD *)(v0 + 152);
        if ( *(_QWORD *)(v0 + 168) != v1 && *(_DWORD *)(v0 + 120) == 1 )
        {
          v4 = *(_WORD *)(v0 + 176);
          if ( v4 == *(_WORD *)(v0 + 160) )
            v5 = *(_QWORD *)(v0 + 168) & ~v1;
          else
            v5 = *(_QWORD *)(v0 + 168);
          v6 = v4;
          while ( 1 )
          {
            v7 = v6 + 1;
            if ( !v5 )
              break;
LABEL_25:
            _BitScanForward64(&v12, v5);
            v6 = v4;
            v5 &= ~(1LL << v12);
            v13 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v4 + (unsigned __int8)v12];
            if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
            {
              v14 = 0LL;
            }
            else
            {
              _mm_lfence();
              v14 = KiProcessorBlock[v13];
            }
            ++*(_DWORD *)(v14 + 11544);
          }
          while ( ++v4 < v7 )
          {
            v5 = *(_QWORD *)(8LL * v4 + 8);
            if ( v5 )
              goto LABEL_25;
          }
        }
      }
      v0 = *(_QWORD *)v0;
    }
    while ( (ULONG_PTR *)v0 != &KiIntTrackRootList );
    for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 124) && *(_QWORD *)(i + 168) != *(_QWORD *)(i + 152) )
      {
        KiIntSteerSetDestination(i);
        if ( *(_DWORD *)(i + 120) == 1 )
        {
          v8 = *(_WORD *)(i + 176);
          if ( *(_WORD *)(i + 160) == v8 )
            v9 = *(_QWORD *)(i + 152) & ~*(_QWORD *)(i + 168);
          else
            v9 = *(_QWORD *)(i + 152);
          v10 = v8;
          while ( 1 )
          {
            v11 = v10 + 1;
            if ( !v9 )
              break;
LABEL_28:
            _BitScanForward64(&v15, v9);
            v10 = v8;
            v9 &= ~(1LL << v15);
            v16 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v8 + (unsigned __int8)v15];
            if ( (unsigned int)v16 >= (unsigned int)KeNumberProcessors_0 )
            {
              v17 = 0LL;
            }
            else
            {
              _mm_lfence();
              v17 = KiProcessorBlock[v16];
            }
            --*(_DWORD *)(v17 + 11544);
          }
          while ( ++v8 < v11 )
          {
            v9 = *(_QWORD *)(8LL * v8 + 8);
            if ( v9 )
              goto LABEL_28;
          }
        }
        *(_WORD *)(i + 160) = *(_WORD *)(i + 176);
        *(_QWORD *)(i + 152) = *(_QWORD *)(i + 168);
      }
    }
  }
  return 0LL;
}
