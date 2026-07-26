/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C00FDB48
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C00FD990 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  _DWORD *ProcessorHistory; // r14
  int v2; // r13d
  int v3; // r12d
  ULONG v4; // ebx
  __int64 v5; // r8
  _DWORD *PoolWithTag; // rax
  void *v7; // r15
  size_t v8; // rbx
  _DWORD *v9; // rax
  void *v10; // rdi
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v11; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v12; // rsi
  unsigned int v13; // ebx
  ULONG v14; // edx
  __m128i *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rdi
  ULONG v19; // r12d
  __int64 Size; // rax
  unsigned int v21; // ecx
  __m128i v23; // xmm0
  unsigned int v24; // r14d
  int v25; // r15d
  unsigned __int64 v26; // rsi
  char v27; // al
  char v28; // r15
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v30; // r15d
  unsigned __int16 v31; // r14
  __m128i v32; // xmm0
  unsigned __int64 v33; // rsi
  bool v34; // zf
  char j; // al
  __m128i v36; // xmm0
  unsigned __int64 v37; // rsi
  char v38; // al
  int v39; // r15d
  WORD v40; // r14
  __m128i v41; // xmm0
  unsigned __int64 v42; // rsi
  bool v43; // zf
  char k; // al
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // edx
  char *v48; // rdx
  __int64 v49; // rcx
  char v50; // al
  char v51; // [rsp+20h] [rbp-38h]
  char i; // [rsp+24h] [rbp-34h]
  unsigned int v53; // [rsp+28h] [rbp-30h]
  NTSTATUS v54; // [rsp+2Ch] [rbp-2Ch]
  _DWORD *v55; // [rsp+30h] [rbp-28h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v56; // [rsp+38h] [rbp-20h]
  unsigned __int64 v57; // [rsp+40h] [rbp-18h]
  _DWORD *v58; // [rsp+48h] [rbp-10h]
  __int64 ProcNumber; // [rsp+A0h] [rbp+48h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v61; // [rsp+B0h] [rbp+58h]
  ULONG v62; // [rsp+B8h] [rbp+60h]

  ProcNumber = a1;
  ProcessorHistory = (_DWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory;
  v2 = 0;
  v57 = WPP_MAIN_CB.Dpc.ProcessorHistory;
  v3 = 0;
  v53 = 0;
  v4 = 0;
  v61 = 0;
  v51 = 1;
  for ( i = 1; v4 < ndisNumberOfActiveProcessorsAtBoot; ++v4 )
    KeGetProcessorNumberFromIndex(v4, (PPROCESSOR_NUMBER)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc + 5 * v4);
  v5 = ndisMaxNumberOfProcessors;
  if ( v4 < ndisMaxNumberOfProcessors )
  {
    v48 = (char *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->Number + 20 * v4 + 1;
    v49 = ndisMaxNumberOfProcessors - v4;
    do
    {
      *(_DWORD *)(v48 - 3) = 0xFFFFFF;
      v48 += 20;
      --v49;
    }
    while ( v49 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v5, 0x2020444Eu);
  v55 = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v8);
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x2020444Eu);
    v58 = v9;
    v10 = v9;
    if ( v9
      && (memset(v9, 255, 4LL * ndisMaxNumberOfProcessors),
          Length = 0,
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v11 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v56 = v11,
          (v12 = v11) != 0LL) )
    {
      v54 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v11, &Length);
      v13 = v54;
      if ( v54 >= 0 )
      {
        v14 = 0;
        v15 = (__m128i *)v12;
        v62 = 0;
        if ( Length )
        {
          v16 = 0;
          do
          {
            if ( v15->m128i_i32[0] )
            {
              if ( v15->m128i_i32[0] == 1 )
              {
                v36 = v15[2];
                v37 = v15[2].m128i_u64[0];
                LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v36, 4);
                v38 = 0;
                if ( v36.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v37 & 1) != 0 )
                    {
                      *((_WORD *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->ProcessorHistory
                      + 10 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)) = v15->m128i_i16[4];
                      v38 = BYTE2(ProcNumber);
                    }
                    ++v38;
                    v37 >>= 1;
                    BYTE2(ProcNumber) = v38;
                  }
                  while ( v37 );
                  v14 = v62;
                }
              }
              else if ( v15->m128i_i32[0] == 3 )
              {
                v30 = 0;
                v31 = 0;
                if ( v15[1].m128i_i16[7] )
                {
                  do
                  {
                    v32 = v15[v31 + 2];
                    BYTE3(ProcNumber) = 0;
                    v33 = v32.m128i_i64[0];
                    v34 = v32.m128i_i64[0] == 0;
                    LOWORD(ProcNumber) = _mm_extract_epi16(v32, 4);
                    for ( j = 0; ; ++j )
                    {
                      BYTE2(ProcNumber) = j;
                      if ( v34 )
                        break;
                      if ( (v33 & 1) != 0 )
                      {
                        ++v30;
                        *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->0
                        + 5 * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                        + 1) = v2;
                        j = BYTE2(ProcNumber);
                      }
                      v33 >>= 1;
                      v34 = v33 == 0;
                    }
                    ++v31;
                  }
                  while ( v31 < (unsigned int)v15[1].m128i_i16[7] );
                  v14 = v62;
                  v16 = v61;
                }
                if ( v2 )
                {
                  v50 = i;
                  if ( v30 != v53 )
                    v50 = 0;
                  i = v50;
                }
                else
                {
                  v53 = v30;
                }
                ++v2;
              }
            }
            else
            {
              v23 = v15[2];
              v24 = 0;
              v25 = 0;
              v26 = v15[2].m128i_u64[0];
              LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v23, 4);
              v27 = 0;
              if ( v23.m128i_i64[0] )
              {
                do
                {
                  if ( (v26 & 1) != 0 )
                  {
                    ++v24;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                    *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry.Next
                    + 5 * ProcessorIndexFromNumber
                    + 1) = v25++;
                    v55[ProcessorIndexFromNumber] = v3;
                    v27 = BYTE2(ProcNumber);
                  }
                  ++v27;
                  v26 >>= 1;
                  BYTE2(ProcNumber) = v27;
                }
                while ( v26 );
                v14 = v62;
                v16 = v61;
              }
              if ( v3 )
              {
                v28 = v51;
                if ( v24 != v16 )
                  v28 = 0;
                v51 = v28;
              }
              else
              {
                v16 = v24;
                v61 = v24;
              }
              ++v3;
            }
            v17 = v15->m128i_u32[1];
            v14 += v17;
            v15 = (__m128i *)((char *)v15 + v17);
            v62 = v14;
          }
          while ( v14 < Length );
          v13 = v54;
          v12 = v56;
          ProcessorHistory = (_DWORD *)v57;
        }
        v18 = v12;
        ProcessorHistory[4] = v3;
        v19 = 0;
        ProcessorHistory[3] = v2;
        v62 = 0;
        if ( Length )
        {
          do
          {
            if ( v18->Relationship == RelationProcessorPackage )
            {
              v39 = 0;
              v40 = 0;
              if ( v18->Processor.GroupCount )
              {
                do
                {
                  v41 = *((__m128i *)&v18->Group.GroupInfo[0].MaximumProcessorCount + v40);
                  BYTE3(ProcNumber) = 0;
                  v42 = v41.m128i_i64[0];
                  v43 = v41.m128i_i64[0] == 0;
                  LOWORD(ProcNumber) = _mm_extract_epi16(v41, 4);
                  for ( k = 0; ; ++k )
                  {
                    BYTE2(ProcNumber) = k;
                    if ( v43 )
                      break;
                    if ( (v42 & 1) != 0 )
                    {
                      v45 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                      v46 = (unsigned int)v55[v45];
                      v47 = v58[v46];
                      if ( v47 == -1 )
                      {
                        v47 = v39;
                        v58[v46] = v39++;
                      }
                      *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry.Next + 5 * v45) = v47;
                      k = BYTE2(ProcNumber);
                    }
                    v42 >>= 1;
                    v43 = v42 == 0;
                  }
                  ++v40;
                }
                while ( v40 < v18->Processor.GroupCount );
                v19 = v62;
              }
            }
            Size = v18->Size;
            v19 += Size;
            v18 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v18 + Size);
            v62 = v19;
          }
          while ( v19 < Length );
          v13 = v54;
          v12 = v56;
          ProcessorHistory = (_DWORD *)v57;
        }
        if ( v51 )
        {
          v21 = v61;
          ProcessorHistory[6] = v61;
          if ( i )
          {
            if ( v21 )
              ProcessorHistory[5] = v53 / v21;
          }
        }
        v10 = v58;
        v7 = v55;
      }
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      v13 = -1073741670;
    }
    ExFreePoolWithTag(v7, 0);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
