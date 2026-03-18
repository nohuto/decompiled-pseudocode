/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x1401C97F0
 * Callers:
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiGenerateHeteroSets @ 0x1401C9790 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1401C97D4 (KiGetHeteroCpuPolicyThread.c)
 *     KiSelectProcessorToPreempt @ 0x1401C9A40 (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x1401CC3D8 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(struct _KPRCB *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r13
  int HeteroCpuPolicyThread; // eax
  __int64 v8; // r14
  __int64 *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rbx
  char v19; // cl
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // cl
  int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  bool v28; // zf
  int v30; // [rsp+30h] [rbp-30h] BYREF
  int v31; // [rsp+34h] [rbp-2Ch]
  int v32; // [rsp+38h] [rbp-28h]
  __int64 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  int v36; // [rsp+A8h] [rbp+48h]
  int v37; // [rsp+B0h] [rbp+50h] BYREF

  v4 = *a3;
  v35 = *a3;
  HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(a2, a1);
  v36 = HeteroCpuPolicyThread;
  v8 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v9 = *(__int64 **)(v8 + 1600);
  while ( 1 )
  {
    v10 = KiGenerateHeteroSets((__int64)v9, v4, HeteroCpuPolicyThread, &v34, &v33);
    v14 = *v9;
    v15 = v33;
    if ( (*v9 & v33) != 0 || v10 || (v15 = v33, (v9[10] & v33) != 0) )
    {
      v16 = v34;
    }
    else
    {
      v15 = v4;
      v33 = v4;
      v16 = v4;
      v34 = v4;
    }
    v17 = v15 & v14;
    if ( !v17 )
      break;
    if ( (v16 & v17) != 0 )
      v17 &= v16;
    if ( *(_QWORD *)(v13 + 1608) != *(_QWORD *)(v13 + 24792) && (v17 & v9[1]) != 0 )
      v17 &= v9[1];
    v18 = v8;
    if ( (v17 & *(_QWORD *)(v8 + 1608)) == 0 )
    {
      v19 = *(_BYTE *)(v8 + 1617);
      if ( (v17 & *(_QWORD *)(v8 + 24792)) != 0 )
        v17 &= *(_QWORD *)(v8 + 24792);
      v17 = __ROR8__(v17, v19);
      _BitScanForward64(&v20, v17);
      v11 = 0x140000000uLL;
      v31 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v8 + 1616) + (((_BYTE)v20 + v19) & 0x3F)];
      v18 = KiProcessorBlock[v31];
    }
    *a4 = 1;
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v37, v11, v17);
      while ( *(_QWORD *)(v18 + 48) );
    }
    v4 = v35;
    if ( !*(_BYTE *)(v18 + 35) )
      return v18;
LABEL_32:
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    HeteroCpuPolicyThread = v36;
  }
  if ( v16 == v15 )
    v16 = v12;
  v21 = KiSelectProcessorToPreempt(a2, v8, v15, v16);
  v18 = v21;
  if ( (v15 & *(_QWORD *)(v21 + 1608)) == 0 )
  {
    v24 = *(_BYTE *)(v21 + 1617);
    v25 = *(unsigned __int8 *)(v21 + 1616);
    _BitScanForward64(&v26, __ROR8__(v15, v24));
    v27 = (v25 << 6) + (((_BYTE)v26 + v24) & 0x3Fu);
    v22 = 0x140000000uLL;
    v32 = KiProcessorNumberToIndexMappingTable[v27];
    v18 = KiProcessorBlock[v32];
  }
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v30, v22, v23);
    while ( *(_QWORD *)(v18 + 48) );
  }
  v4 = v35;
  if ( (*v9 & v33) != 0 )
    goto LABEL_32;
  v28 = (*(_BYTE *)(v18 + 35) & 2) == 0;
  *a4 = 0;
  if ( !v28 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v18 = KiSelectCandidateProcessor(v18, a2, v33);
    if ( (*(_BYTE *)(v18 + 35) & 1) == 0 )
      *a4 = 1;
  }
  return v18;
}
