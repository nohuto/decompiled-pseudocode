/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x140206FF4
 * Callers:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiGenerateHeteroSets @ 0x140206EF4 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x140206F38 (KiGetHeteroCpuPolicyThread.c)
 *     KiSelectProcessorToPreempt @ 0x140207268 (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x14020B500 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(struct _KPRCB *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r12
  int HeteroCpuPolicyThread; // eax
  __int64 v9; // rbp
  __int64 *v10; // rsi
  int v11; // eax
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rbx
  char v19; // cl
  unsigned __int64 v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rax
  char v23; // cl
  int v24; // edx
  unsigned __int64 v25; // rax
  unsigned int v26; // edi
  bool v27; // zf
  __int64 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30[9]; // [rsp+40h] [rbp-48h] BYREF
  int v31; // [rsp+98h] [rbp+10h]

  v4 = *a3;
  HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(a2, a1);
  v31 = HeteroCpuPolicyThread;
  v9 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v10 = *(__int64 **)(v9 + 1600);
  while ( 1 )
  {
    v11 = KiGenerateHeteroSets((__int64)v10, v4, HeteroCpuPolicyThread, v30, &v29);
    v14 = *v10;
    v15 = v29;
    if ( (*v10 & v29) != 0 || v11 || (v15 = v29, (v10[10] & v29) != 0) )
    {
      v16 = v30[0];
    }
    else
    {
      v15 = v4;
      v29 = v4;
      v16 = v4;
      v30[0] = v4;
    }
    v17 = v15 & v14;
    if ( !v17 )
      break;
    if ( (v16 & v17) != 0 )
      v17 &= v16;
    if ( a1->GroupSetMember != a1->CoreProcessorSet && (v17 & v10[1]) != 0 )
      v17 &= v10[1];
    v18 = v9;
    if ( (v17 & *(_QWORD *)(v9 + 1608)) == 0 )
    {
      v19 = *(_BYTE *)(v9 + 1617);
      if ( (v17 & *(_QWORD *)(v9 + 24792)) != 0 )
        v17 &= *(_QWORD *)(v9 + 24792);
      _BitScanForward64(&v20, __ROR8__(v17, v19));
      v18 = *(_QWORD *)(v13
                      + 8LL
                      * *(unsigned int *)(v13
                                        + 4LL * ((*(unsigned __int8 *)(v9 + 1616) << 6) + (((_BYTE)v20 + v19) & 0x3Fu))
                                        + 4017616)
                      + 4007296);
    }
    *a4 = 1;
    v21 = v12;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v21);
          v12 = 0LL;
        }
      }
      while ( *(_QWORD *)(v18 + 48) );
    }
    if ( *(_BYTE *)(v18 + 35) == (_BYTE)v12 )
      return v18;
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), v12);
    HeteroCpuPolicyThread = v31;
  }
  if ( v16 == v15 )
    v16 = v12;
  v22 = KiSelectProcessorToPreempt(a2, v9, v15, v16);
  v18 = v22;
  if ( (v15 & *(_QWORD *)(v22 + 1608)) == 0 )
  {
    v23 = *(_BYTE *)(v22 + 1617);
    v24 = *(unsigned __int8 *)(v22 + 1616);
    _BitScanForward64(&v25, __ROR8__(v15, v23));
    v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v24 + (((_BYTE)v25 + v23) & 0x3F)]];
  }
  v12 = 0LL;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
  {
    do
    {
      if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v26);
        v12 = 0LL;
      }
    }
    while ( *(_QWORD *)(v18 + 48) );
  }
  if ( (*v10 & v29) != 0 )
    goto LABEL_40;
  v27 = (*(_BYTE *)(v18 + 35) & 2) == 0;
  *a4 = 0;
  if ( !v27 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v18 = KiSelectCandidateProcessor(v18, a2, v29);
    if ( (*(_BYTE *)(v18 + 35) & 1) == 0 )
      *a4 = 1;
  }
  return v18;
}
