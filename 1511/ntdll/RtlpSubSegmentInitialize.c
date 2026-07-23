/*
 * XREFs of RtlpSubSegmentInitialize @ 0x180029DF0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180054B10 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180083EB0 (RtlpRunOnceWaitForInit.c)
 *     RtlpInitRandomExVector @ 0x180094CB0 (RtlpInitRandomExVector.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1800F1C6C (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F2544 (RtlpSubSegmentDebugInitialize.c)
 */

__int64 __fastcall RtlpSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int8 v13; // al
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 v17; // r9
  unsigned __int64 v18; // rtt
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r15
  int v22; // esi
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ecx
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // eax
  signed __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  struct _TEB *v33; // rdx
  __int64 LowFragHeapDataSlot; // rcx
  unsigned int v35; // r8d
  unsigned __int64 v36; // rsi
  signed __int64 Ptr; // rax
  NTSTATUS v38; // ebx
  signed __int64 v39; // rcx
  __int32 v40; // r8d
  int v41; // ecx
  unsigned int v44; // r8d
  unsigned __int64 v45; // rdi
  signed __int64 v46; // rax
  NTSTATUS v47; // ebx
  signed __int64 v48; // rcx
  __int32 v49; // r9d
  int v50; // ecx
  unsigned int v52; // r9d
  char v53[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v54; // [rsp+48h] [rbp-60h]
  __int64 v55; // [rsp+50h] [rbp-58h]
  __int64 v56; // [rsp+58h] [rbp-50h]
  __int64 v57; // [rsp+60h] [rbp-48h]
  char v59; // [rsp+B8h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a2 + 32);
  v10 = a1;
  v11 = *(unsigned __int8 *)(a6 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2224) + 192LL * *(unsigned __int8 *)(a2 + 43) - 192;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v13 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v13 )
  {
    result = RtlpSubSegmentDebugInitialize(a1, a2, a3, v13, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
    v10 = a1;
  }
  v15 = a5;
  v16 = a4 + 16;
  v17 = RtlpLFHKey;
  v18 = a5 - 64;
  v19 = v16 >> 4;
  v20 = a3 + a5;
  *(_QWORD *)a3 = a2;
  v55 = v17;
  v21 = (((((unsigned __int64)(unsigned int)(v18 / v16) + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v22 = 0;
  v23 = v21 + a3;
  if ( v21 + a3 + v16 + 8 <= a3 + v15 )
  {
    do
    {
      v24 = (unsigned __int16)v22;
      v25 = *(_DWORD *)(v10 + 24) ^ (v23 >> 4) ^ (((_DWORD)v23 - (_DWORD)a3) << 12);
      ++v22;
      *(_DWORD *)(v23 + 12) &= 0xFF0000FF;
      *(_DWORD *)(v23 + 12) |= v24 << 8;
      *(_DWORD *)(v23 + 8) = v17 ^ v25;
      *(_BYTE *)(v23 + 15) = 0x80;
      v23 += v16;
    }
    while ( v23 + v16 + 8 <= v20 );
  }
  *(_QWORD *)(a3 + 32) = (unsigned int)v22;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  v26 = *(_QWORD *)(a3 + 32);
  v54 = a3 + 48;
  memset((void *)(a3 + 48), 0, (v26 + 7) >> 3);
  if ( (v26 & 0x3F) != 0 )
    *(_QWORD *)(v54 + 8 * (v26 >> 6)) |= ~((1LL << (v26 & 0x3F)) - 1);
  v27 = a6;
  *(_WORD *)(a2 + 36) = v19;
  *(_WORD *)(a2 + 40) = v22;
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(v27 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  WORD1(a6) = 16 * v19;
  LOWORD(a6) = v21;
  *(_DWORD *)(a3 + 24) = a6 ^ a1 ^ v55 ^ a3;
  if ( *(_DWORD *)(v12 + 164) )
  {
    if ( ++*(_WORD *)(v12 + 176) > 0x1Cu )
    {
      v29 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
      if ( v29 )
        *(_DWORD *)(*(_QWORD *)v12 + 36LL) = v29 - 4;
      *(_WORD *)(v12 + 176) = 0;
    }
  }
  else
  {
    v28 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v28 < 0x20 )
      *(_DWORD *)(*(_QWORD *)v12 + 36LL) = v28 + 4;
    *(_WORD *)(v12 + 176) = 0;
  }
  do
  {
    v30 = *(_QWORD *)(v12 + 160);
    LODWORD(a6) = v30 + v22;
    if ( v22 <= 0 )
      v31 = HIDWORD(v30) - 1;
    else
      v31 = HIDWORD(v30) + 1;
    HIDWORD(a6) = v31;
  }
  while ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 160), a6, v30) );
  v32 = *(_QWORD *)v12;
  *(_DWORD *)(v12 + 168) = ++*(_DWORD *)(v32 + 32);
  v33 = NtCurrentTeb();
  LowFragHeapDataSlot = v33->LowFragHeapDataSlot;
  v35 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
  LOWORD(LowFragHeapDataSlot) = (unsigned __int8)(LowFragHeapDataSlot + 1);
  v33->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
  *(_DWORD *)(a2 + 44) = 1;
  WORD1(a6) = (v35 | (unsigned __int64)(*((unsigned __int8 *)RtlpLowFragHeapRandomData
                                        + (unsigned __int16)LowFragHeapDataSlot) << 7))
            % (unsigned int)v22;
  LOWORD(a6) = v22;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), a6, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v36 = NtCurrentTeb()->LowFragHeapDataSlot;
    if ( !dword_180145F48
      && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180145F48, 4u, 0LL) < 0 )
    {
      dword_180145F48 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    Ptr = (signed __int64)RtlpRandomExInit.Ptr;
    v38 = 0;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_36:
      if ( v38 >= 0 )
      {
LABEL_45:
        dword_180145F48 = (2147483629 * (unsigned __int64)(unsigned int)dword_180145F48 + 2147483587) % 0x7FFFFFFF;
        v40 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180145F48);
        if ( MEMORY[0x7FFE0290] )
        {
          v41 = 0;
          while ( 1 )
          {
            __asm { rdrand  rdx }
            v56 = _RDX;
            if ( _CF )
              break;
            if ( (unsigned int)++v41 >= 0xA )
              goto LABEL_49;
          }
        }
        else
        {
LABEL_49:
          LODWORD(_RDX) = 0;
        }
        v44 = _RDX ^ v40;
        _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v44);
        v45 = (unsigned __int64)v44 << 32;
        if ( !dword_180145F48
          && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180145F48, 4u, 0LL) < 0 )
        {
          dword_180145F48 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        }
        v46 = (signed __int64)RtlpRandomExInit.Ptr;
        v47 = 0;
        if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
        {
LABEL_61:
          if ( v47 >= 0 )
            goto LABEL_70;
          v53[0] = 0;
        }
        else
        {
          do
          {
            while ( (v46 & 3) != 0 )
            {
              if ( (v46 & 3) != 1 )
              {
                if ( (v46 & 3) == 3 )
                  v47 = -1073741584;
                goto LABEL_61;
              }
              v46 = RtlpRunOnceWaitForInit(v46, &RtlpRandomExInit);
            }
            v48 = v46;
            v46 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, v46);
          }
          while ( v46 != v48 );
          if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
          {
            v47 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
            if ( v47 >= 0 )
              goto LABEL_70;
            v53[0] = 1;
          }
          else
          {
            v47 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
            if ( v47 >= 0 )
              goto LABEL_70;
            v53[0] = 2;
          }
        }
        RtlReportCriticalFailure((unsigned int)v47, v53);
LABEL_70:
        dword_180145F48 = (2147483629 * (unsigned __int64)(unsigned int)dword_180145F48 + 2147483587) % 0x7FFFFFFF;
        v49 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180145F48);
        if ( MEMORY[0x7FFE0290] )
        {
          v50 = 0;
          while ( 1 )
          {
            __asm { rdrand  rdx }
            v57 = _RDX;
            if ( _CF )
              break;
            if ( (unsigned int)++v50 >= 0xA )
              goto LABEL_74;
          }
        }
        else
        {
LABEL_74:
          LODWORD(_RDX) = 0;
        }
        v52 = _RDX ^ v49;
        _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v52);
        result = v36 >> 3;
        RtlpLowFragHeapRandomData[v36 >> 3] = (v45 | v52) & 0x7F7F7F7F7F7F7F7FLL;
        goto LABEL_76;
      }
      v59 = 0;
    }
    else
    {
      do
      {
        while ( (Ptr & 3) != 0 )
        {
          if ( (Ptr & 3) != 1 )
          {
            if ( (Ptr & 3) == 3 )
              v38 = -1073741584;
            goto LABEL_36;
          }
          Ptr = RtlpRunOnceWaitForInit(Ptr, &RtlpRandomExInit);
        }
        v39 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Ptr);
      }
      while ( Ptr != v39 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v38 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v38 >= 0 )
          goto LABEL_45;
        v59 = 1;
      }
      else
      {
        v38 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v38 >= 0 )
          goto LABEL_45;
        v59 = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v38, &v59);
    goto LABEL_45;
  }
LABEL_76:
  if ( MEMORY[0x7FFE0380] )
  {
    result = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 888) & 1) != 0 )
      return RtlpLogHeapSubSegmentInitialize(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a2 + 8),
               *(unsigned __int16 *)(a2 + 36),
               *(unsigned __int16 *)(a2 + 40),
               *(unsigned __int8 *)(a2 + 43));
  }
  return result;
}
