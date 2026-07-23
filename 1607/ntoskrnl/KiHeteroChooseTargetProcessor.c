/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x1401D7D70
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1400CCDEC (KiGetHeteroCpuPolicyThread.c)
 *     KiGenerateHeteroSets @ 0x1401D7D04 (KiGenerateHeteroSets.c)
 *     KiSelectProcessorToPreempt @ 0x1401D804C (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x1401DBE90 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r15
  __int64 v6; // rbx
  int HeteroCpuPolicyThread; // eax
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // cl
  unsigned __int64 v20; // rax
  unsigned __int8 v21; // r9
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // cl
  int v28; // edx
  unsigned __int64 v29; // rax
  bool v30; // zf
  int v32; // [rsp+30h] [rbp-30h] BYREF
  int v33; // [rsp+34h] [rbp-2Ch]
  int v34; // [rsp+38h] [rbp-28h]
  int v35; // [rsp+3Ch] [rbp-24h]
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h] BYREF
  __int64 v39; // [rsp+58h] [rbp-8h]
  int v41; // [rsp+A8h] [rbp+48h]
  int v42; // [rsp+B0h] [rbp+50h] BYREF

  v4 = *a3;
  v39 = *a3;
  v6 = a1;
  HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(a2, a1);
  v41 = HeteroCpuPolicyThread;
  v9 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v10 = *(_QWORD *)(v9 + 1600);
  while ( 1 )
  {
    v11 = KiGenerateHeteroSets(v10, v4, HeteroCpuPolicyThread, &v38, &v37, &v36);
    v12 = *(_QWORD *)v10;
    v13 = v36;
    if ( (*(_QWORD *)v10 & v36) != 0 || v11 || (v13 = v36, (*(_QWORD *)(v10 + 80) & v36) != 0) )
    {
      v14 = v37;
    }
    else
    {
      v13 = v4;
      v36 = v4;
      v14 = v4;
      v37 = v4;
      v38 = v4;
    }
    v15 = v13 & v12;
    if ( !v15 )
      break;
    if ( *(_QWORD *)(v6 + 1608) != *(_QWORD *)(v6 + 24920) )
    {
      v14 = v37;
      if ( (v15 & *(_QWORD *)(v10 + 8)) != 0 )
        v15 &= *(_QWORD *)(v10 + 8);
    }
    v16 = 0;
    v17 = v38 & v15;
    if ( (v38 & v15) != 0 )
      goto LABEL_14;
    v17 = v14 & v15;
    if ( (v14 & v15) != 0 )
    {
      v16 = 1;
LABEL_14:
      v15 = v17;
    }
    v18 = v9;
    if ( (v15 & *(_QWORD *)(v9 + 1608)) == 0 || v16 )
    {
      if ( v16 )
      {
        v18 = 0LL;
        v21 = 0;
        if ( v15 )
        {
          v22 = *(unsigned __int16 *)(v10 + 144) << 6;
          do
          {
            _BitScanForward64(&v23, v15);
            v24 = (unsigned int)KiProcessorNumberToIndexMappingTable[v22 + (v23 & 0x3F)];
            v34 = v24;
            v25 = KiProcessorBlock[v24];
            if ( !v18 || *(_BYTE *)(v25 + 23859) > v21 )
            {
              v18 = v25;
              v21 = *(_BYTE *)(v25 + 23859);
            }
            v15 &= ~*(_QWORD *)(v25 + 1608);
          }
          while ( v15 );
        }
      }
      else
      {
        v19 = *(_BYTE *)(v9 + 1617);
        if ( (v15 & *(_QWORD *)(v9 + 24920)) != 0 )
          v15 &= *(_QWORD *)(v9 + 24920);
        _BitScanForward64(&v20, __ROR8__(v15, v19));
        v33 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v9 + 1616) + (((_BYTE)v20 + v19) & 0x3F)];
        v18 = KiProcessorBlock[v33];
      }
    }
    *a4 = 1;
    v42 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v42);
      while ( *(_QWORD *)(v18 + 48) );
    }
    v4 = v39;
    if ( !*(_BYTE *)(v18 + 35) )
      return v18;
LABEL_42:
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v6 = a1;
    HeteroCpuPolicyThread = v41;
  }
  if ( v14 == v13 )
    v14 = 0LL;
  v26 = KiSelectProcessorToPreempt(a2, v9, v13, v14);
  v18 = v26;
  if ( (v13 & *(_QWORD *)(v26 + 1608)) == 0 )
  {
    v27 = *(_BYTE *)(v26 + 1617);
    v28 = *(unsigned __int8 *)(v26 + 1616);
    _BitScanForward64(&v29, __ROR8__(v13, v27));
    v35 = KiProcessorNumberToIndexMappingTable[64 * v28 + (((_BYTE)v29 + v27) & 0x3F)];
    v18 = KiProcessorBlock[v35];
  }
  v32 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( *(_QWORD *)(v18 + 48) );
  }
  if ( (*(_QWORD *)v10 & v36) != 0 )
    goto LABEL_42;
  v30 = (*(_BYTE *)(v18 + 35) & 2) == 0;
  *a4 = 0;
  if ( !v30 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v18 = KiSelectCandidateProcessor(v18, a2, v36);
    if ( (*(_BYTE *)(v18 + 35) & 1) == 0 )
      *a4 = 1;
  }
  return v18;
}
