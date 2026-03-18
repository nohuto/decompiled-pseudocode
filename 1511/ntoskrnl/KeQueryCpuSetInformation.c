/*
 * XREFs of KeQueryCpuSetInformation @ 0x14061ACFC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlTryEndReadTickLock @ 0x14002D5B0 (RtlTryEndReadTickLock.c)
 *     RtlBeginReadTickLock @ 0x14002D5BC (RtlBeginReadTickLock.c)
 *     KiGetCpuSetData @ 0x1400F43F4 (KiGetCpuSetData.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KeQueryCpuSetInformation(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  __int64 v11; // r9
  unsigned int v12; // r10d
  unsigned __int64 v13; // rdi
  unsigned __int16 v14; // r12
  unsigned __int64 v15; // r8
  int v16; // r10d
  __int64 v17; // r11
  __int64 CpuSetData; // r15
  int v19; // r8d
  char v20; // dl
  __int64 v21; // r8
  __int64 TickLock; // [rsp+50h] [rbp-58h]

  if ( a4 )
  {
    v5 = (_QWORD *)(a4 + 1920);
    if ( (*(_DWORD *)(a4 + 1724) & 0x200) != 0 )
      v5 = (_QWORD *)*v5;
  }
  else
  {
    v5 = 0LL;
  }
  do
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
    v6 = KiTotalCpuSetCount;
    v7 = 32 * KiTotalCpuSetCount;
    *v8 = 32 * KiTotalCpuSetCount;
    if ( v9 < v7 )
      return 3221225507LL;
    memset(a1, 0, v7);
    LODWORD(v11) = 0;
    v12 = 0;
    v13 = KiGroupBlock[0];
    v14 = KiActiveGroups;
    do
    {
      if ( v13 )
      {
        _BitScanForward64(&v15, v13);
        v13 &= ~(1LL << v15);
        CpuSetData = KiGetCpuSetData(v11, v15);
        *(_DWORD *)v17 = 32;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = v19 | ((_DWORD)v11 << 16) | 0x100;
        *(_WORD *)(v17 + 12) = v11;
        *(_BYTE *)(v17 + 14) = *(_BYTE *)(CpuSetData + 1);
        *(_BYTE *)(v17 + 15) = *(_BYTE *)(CpuSetData + 2);
        *(_BYTE *)(v17 + 16) = *(_BYTE *)(CpuSetData + 3);
        *(_BYTE *)(v17 + 17) = *(_BYTE *)(CpuSetData + 4);
        *(_BYTE *)(v17 + 18) = *(_BYTE *)(CpuSetData + 5);
        v20 = 0;
        v21 = 1LL << v19;
        if ( (v21 & KiNonParkedCpuSets[v11]) == 0 )
        {
          v20 = 1;
          *(_BYTE *)(v17 + 19) |= 1u;
        }
        if ( (v21 & KiSystemAllowedCpuSets[v11]) == 0 )
        {
          if ( v5 )
          {
            if ( (v21 & v5[v11]) != 0 )
              v20 |= 4u;
          }
          v20 |= 0xAu;
        }
        *(_BYTE *)(v17 + 19) = v20;
        *(_QWORD *)(v17 + 24) = *(_QWORD *)(CpuSetData + 8);
        v12 = v16 + 1;
      }
      else
      {
        LODWORD(v11) = v11 + 1;
        if ( (unsigned int)v11 >= v14 )
          break;
        v13 = KiGroupBlock[2 * (unsigned int)v11];
      }
    }
    while ( v12 < v6 );
  }
  while ( !RtlTryEndReadTickLock(&KiCpuSetSequence, TickLock) );
  return 0LL;
}
