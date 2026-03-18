/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x1400EA300
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     KiIntSteerComputeCpuSet @ 0x140209684 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  void *v7; // rsp
  unsigned __int64 v8; // r9
  void *v9; // rsp
  unsigned int v10; // r10d
  unsigned __int16 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  ULONG_PTR *v18; // rax
  void *v19; // rsp
  unsigned int v20; // r8d
  __int64 i; // rdx
  unsigned int v22; // ebx
  int v23; // r15d
  int j; // r12d
  __int64 v25; // rdi
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 Base; // [rsp+20h] [rbp+0h] BYREF

  v3 = 4LL * a2;
  v5 = v3 + 15;
  if ( v3 + 15 < v3 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = alloca(v6);
  v8 = *((_QWORD *)a1 + 1);
  v9 = alloca(v6);
  v10 = 0;
  v11 = 0;
  Base = (__int64)&Base;
  while ( v8 )
  {
LABEL_5:
    _BitScanForward64(&v12, v8);
    v8 &= ~(1LL << v12);
    v13 = v10++;
    *((_DWORD *)&Base + v13) = KiProcessorNumberToIndexMappingTable[64 * v11 + (unsigned __int8)v12];
  }
  while ( ++v11 < (unsigned int)*a1 )
  {
    v8 = *(_QWORD *)&a1[4 * v11 + 4];
    if ( v8 )
      goto LABEL_5;
  }
  v14 = 8LL * (unsigned int)KiIntTrackRootCount;
  v15 = v14 + 15;
  if ( v14 + 15 < v14 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = (ULONG_PTR *)KiIntTrackRootList;
  v19 = alloca(v16);
  v20 = 0;
  for ( i = (unsigned int)(KiIntTrackRootCount - 1); v18 != &KiIntTrackRootList; v18 = (ULONG_PTR *)*v18 )
  {
    if ( v18[23] )
    {
      v30 = v20++;
      *(&Base + v30) = (__int64)v18;
    }
    else
    {
      *(&Base + i) = (__int64)v18;
      i = (unsigned int)(i - 1);
    }
  }
  qsort(&Base, v20, 8uLL, KiIntSteerLoadCompare);
  v22 = 0;
  v23 = 0;
  for ( j = 1; v22 < KiIntTrackRootCount; ++v22 )
  {
    v25 = *(&Base + v22);
    if ( *(_BYTE *)(v25 + 124) && (!*(_QWORD *)(v25 + 128) || (int)KiIntSteerComputeCpuSet(*(&Base + v22)) < 0) )
    {
      if ( *(_QWORD *)(v25 + 184)
        || ((v26 = *(_WORD *)(v25 + 160), *a1 <= v26)
          ? (v27 = 0LL)
          : (v27 = *(_QWORD *)(v25 + 152) & *(_QWORD *)&a1[4 * v26 + 4]),
            v28 = *(_QWORD *)(v25 + 152),
            v27 != v28) )
      {
        v31 = (unsigned int)v23;
        v23 += j;
        v32 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(Base + 4 * v31)];
        *(_DWORD *)(v25 + 178) = 0;
        *(_WORD *)(v25 + 182) = 0;
        *(_WORD *)(v25 + 176) = v32 >> 6;
        *(_QWORD *)(v25 + 168) = 1LL << (v32 & 0x3F);
        if ( v23 >= a2 )
        {
          j = -1;
          v23 = a2 - 1;
        }
        if ( v23 < 0 )
        {
          j = 1;
          v23 = 0;
        }
      }
      else
      {
        *(_QWORD *)(v25 + 168) = v28;
      }
    }
  }
  return 0LL;
}
