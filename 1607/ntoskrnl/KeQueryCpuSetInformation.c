/*
 * XREFs of KeQueryCpuSetInformation @ 0x140578C68
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiGetCpuSetData @ 0x1400B3A7C (KiGetCpuSetData.c)
 *     RtlTryEndReadTickLock @ 0x1400F0030 (RtlTryEndReadTickLock.c)
 *     RtlBeginReadTickLock @ 0x1400F003C (RtlBeginReadTickLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeQueryCpuSetInformation(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // r10d
  unsigned __int64 v12; // rdi
  unsigned __int16 v13; // r12
  unsigned __int64 v14; // r8
  __int64 CpuSetData; // rax
  int v16; // r10d
  __int64 v17; // r11
  int v18; // r8d
  char v19; // dl
  __int64 v20; // r8
  __int64 TickLock; // [rsp+40h] [rbp-58h]

  if ( a4 )
  {
    v5 = (_QWORD *)(a4 + 1936);
    if ( (*(_DWORD *)(a4 + 1740) & 0x200) != 0 )
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
    LODWORD(v10) = 0;
    v11 = 0;
    v12 = KiGroupBlock[0];
    v13 = KiActiveGroups;
    do
    {
      if ( v12 )
      {
        _BitScanForward64(&v14, v12);
        v12 &= ~(1LL << v14);
        CpuSetData = KiGetCpuSetData(v10, v14);
        *(_DWORD *)v17 = 32;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = v18 | ((_DWORD)v10 << 16) | 0x100;
        *(_WORD *)(v17 + 12) = v10;
        *(_BYTE *)(v17 + 14) = *(_BYTE *)(CpuSetData + 1);
        *(_BYTE *)(v17 + 15) = *(_BYTE *)(CpuSetData + 2);
        *(_BYTE *)(v17 + 16) = *(_BYTE *)(CpuSetData + 3);
        *(_BYTE *)(v17 + 17) = *(_BYTE *)(CpuSetData + 4);
        *(_BYTE *)(v17 + 18) = *(_BYTE *)(CpuSetData + 5);
        v19 = 0;
        v20 = 1LL << v18;
        if ( (v20 & KiNonParkedCpuSets[v10]) == 0 )
        {
          v19 = 1;
          *(_BYTE *)(v17 + 19) |= 1u;
        }
        if ( (v20 & KiSystemAllowedCpuSets[v10]) == 0 )
        {
          if ( v5 )
          {
            if ( (v20 & v5[v10]) != 0 )
              v19 |= 4u;
          }
          v19 |= 0xAu;
        }
        *(_BYTE *)(v17 + 19) = v19;
        *(_QWORD *)(v17 + 24) = *(_QWORD *)(CpuSetData + 8);
        v11 = v16 + 1;
        continue;
      }
      LODWORD(v10) = v10 + 1;
      if ( (unsigned int)v10 >= v13 )
        break;
      v12 = KiGroupBlock[2 * (unsigned int)v10];
    }
    while ( v11 < v6 );
  }
  while ( !RtlTryEndReadTickLock(&KiCpuSetSequence, TickLock) );
  return 0LL;
}
