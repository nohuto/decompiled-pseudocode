/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x1400D4C40
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     KiIntSteerComputeCpuSet @ 0x1401DA490 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  unsigned __int64 v8; // r9
  void *v9; // rsp
  unsigned int v10; // edi
  unsigned int v11; // r10d
  unsigned __int16 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  ULONG_PTR *v20; // rcx
  __int64 v21; // rdx
  unsigned int i; // r8d
  int v23; // r15d
  int v24; // r12d
  __int64 v25; // rbx
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rax
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
  v12 = 0;
  Base = (__int64)&Base;
  while ( v8 )
  {
LABEL_5:
    _BitScanForward64(&v13, v8);
    v8 &= ~(1LL << v13);
    v14 = v11++;
    *((_DWORD *)&Base + v14) = KiProcessorNumberToIndexMappingTable[64 * v12 + (unsigned __int8)v13];
  }
  while ( ++v12 < (unsigned int)*a1 )
  {
    v8 = *(_QWORD *)&a1[4 * v12 + 4];
    if ( v8 )
      goto LABEL_5;
  }
  v15 = 8LL * (unsigned int)KiIntTrackRootCount;
  v16 = v15 + 15;
  if ( v15 + 15 < v15 )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
  v18 = alloca(v17);
  v19 = alloca(v17);
  v20 = (ULONG_PTR *)KiIntTrackRootList;
  v21 = (unsigned int)(KiIntTrackRootCount - 1);
  for ( i = 0; v20 != &KiIntTrackRootList; v20 = (ULONG_PTR *)*v20 )
  {
    if ( v20[24] )
    {
      v30 = i++;
      *(&Base + v30) = (__int64)v20;
    }
    else
    {
      *(&Base + v21) = (__int64)v20;
      v21 = (unsigned int)(v21 - 1);
    }
  }
  qsort(&Base, i, 8uLL, (int (__cdecl *)(const void *, const void *))KiIntSteerLoadCompare);
  v23 = 0;
  v24 = 1;
  if ( KiIntTrackRootCount )
  {
    do
    {
      v25 = *(&Base + v10);
      if ( *(_BYTE *)(v25 + 132) && (!*(_QWORD *)(v25 + 136) || (int)KiIntSteerComputeCpuSet(*(&Base + v10)) < 0) )
      {
        if ( *(_QWORD *)(v25 + 192)
          || ((v26 = *(_WORD *)(v25 + 168), *a1 <= v26)
            ? (v27 = 0LL)
            : (v27 = *(_QWORD *)(v25 + 160) & *(_QWORD *)&a1[4 * v26 + 4]),
              v28 = *(_QWORD *)(v25 + 160),
              v27 != v28) )
        {
          v31 = (unsigned int)v23;
          v23 += v24;
          v32 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(Base + 4 * v31)];
          *(_DWORD *)(v25 + 186) = 0;
          *(_WORD *)(v25 + 190) = 0;
          *(_WORD *)(v25 + 184) = v32 >> 6;
          *(_QWORD *)(v25 + 176) = 1LL << (v32 & 0x3F);
          if ( v23 >= a2 )
          {
            v24 = -1;
            v23 = a2 - 1;
          }
          if ( v23 < 0 )
          {
            v24 = 1;
            v23 = 0;
          }
        }
        else
        {
          *(_QWORD *)(v25 + 176) = v28;
        }
      }
      ++v10;
    }
    while ( v10 < KiIntTrackRootCount );
  }
  return 0LL;
}
