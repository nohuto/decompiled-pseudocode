/*
 * XREFs of RtlpSubSegmentInitialize @ 0x180032E50
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18006CC70 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180077DEC (RtlpRunOnceWaitForInit.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpInitRandomExVector @ 0x1800E5630 (RtlpInitRandomExVector.c)
 *     RtlReportCriticalFailure @ 0x1800EA560 (RtlReportCriticalFailure.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1800EFD14 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F08C4 (RtlpSubSegmentDebugInitialize.c)
 */

__int64 __fastcall RtlpSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rbp
  int v15; // r14d
  int v16; // edi
  unsigned __int64 i; // rax
  int v18; // ecx
  int v19; // edx
  unsigned __int64 v20; // rbp
  __int64 v21; // r10
  __int16 v22; // cx
  signed __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  struct _TEB *v26; // rdx
  __int64 LowFragHeapDataSlot; // rcx
  unsigned int v28; // r8d
  __int64 result; // rax
  unsigned __int64 v30; // rsi
  signed __int64 Ptr; // rax
  NTSTATUS v32; // ebx
  NTSTATUS v33; // ebx
  __int32 v34; // r8d
  int v35; // edx
  unsigned int v38; // r8d
  unsigned __int64 v39; // rdi
  signed __int64 v40; // rax
  __int32 v41; // r9d
  int v42; // edx
  unsigned int v44; // r9d
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // eax
  int v48; // eax
  NTSTATUS InformationProcess; // eax
  signed __int64 v50; // rcx
  NTSTATUS v51; // eax
  signed __int64 v52; // rcx
  char v53; // [rsp+40h] [rbp-58h] BYREF
  char v54[7]; // [rsp+41h] [rbp-57h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-50h]
  unsigned __int64 v56; // [rsp+50h] [rbp-48h]
  __int64 v57; // [rsp+58h] [rbp-40h]
  __int64 v58; // [rsp+60h] [rbp-38h]
  int v60; // [rsp+C8h] [rbp+30h]
  signed __int64 v61; // [rsp+C8h] [rbp+30h]
  signed __int32 v62; // [rsp+C8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
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
  }
  v14 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v55 = v14 >> 4;
  v15 = RtlpLFHKey;
  v16 = 0;
  v56 = (((((unsigned __int64)(unsigned int)((a5 - 64) / v14) + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v56; i + v14 + 8 <= a3 + a5; i += v14 )
  {
    v18 = (unsigned __int16)v16;
    v19 = *(_DWORD *)(a1 + 24) ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v16;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v18 << 8;
    *(_DWORD *)(i + 8) = v15 ^ v19;
    *(_BYTE *)(i + 15) = 0x80;
  }
  *(_QWORD *)(a3 + 32) = (unsigned int)v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  v20 = *(_QWORD *)(a3 + 32);
  memset((void *)(a3 + 48), 0, (v20 + 7) >> 3);
  if ( (v20 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * (v20 >> 6)) |= ~((1LL << (v20 & 0x3F)) - 1);
  v21 = a2;
  v22 = v55;
  *(_WORD *)(a2 + 36) = v55;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  LOWORD(v60) = v56;
  HIWORD(v60) = 16 * v22;
  *(_DWORD *)(a3 + 24) = v60 ^ a1 ^ v15 ^ a3;
  if ( *(_DWORD *)(v12 + 164) )
  {
    if ( ++*(_WORD *)(v12 + 176) <= 0x1Cu )
      goto LABEL_11;
    v45 = *(_QWORD *)v12;
    v48 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v48 )
    {
      v47 = v48 - 4;
      goto LABEL_34;
    }
  }
  else
  {
    v45 = *(_QWORD *)v12;
    v46 = *(_DWORD *)(*(_QWORD *)v12 + 36LL);
    if ( v46 < 0x20 )
    {
      v47 = v46 + 4;
LABEL_34:
      *(_DWORD *)(v45 + 36) = v47;
    }
  }
  *(_WORD *)(v12 + 176) = 0;
  do
  {
LABEL_11:
    v23 = *(_QWORD *)(v12 + 160);
    if ( v16 <= 0 )
      v24 = HIDWORD(v23) - 1;
    else
      v24 = HIDWORD(v23) + 1;
    HIDWORD(v61) = v24;
    LODWORD(v61) = v23 + v16;
  }
  while ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 160), v61, v23) );
  v25 = *(_QWORD *)v12;
  *(_DWORD *)(v12 + 168) = ++*(_DWORD *)(v25 + 32);
  v26 = NtCurrentTeb();
  LowFragHeapDataSlot = v26->LowFragHeapDataSlot;
  v28 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + LowFragHeapDataSlot);
  LOWORD(LowFragHeapDataSlot) = (unsigned __int8)(LowFragHeapDataSlot + 1);
  v26->LowFragHeapDataSlot = (unsigned __int8)(LowFragHeapDataSlot + 1);
  *(_DWORD *)(a2 + 44) = 1;
  HIWORD(v62) = (v28 | (unsigned __int64)(*((unsigned __int8 *)RtlpLowFragHeapRandomData
                                          + (unsigned __int16)LowFragHeapDataSlot) << 7))
              % (unsigned int)v16;
  LOWORD(v62) = v16;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v62, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v30 = NtCurrentTeb()->LowFragHeapDataSlot;
    if ( !dword_180146ED8 )
    {
      InformationProcess = NtQueryInformationProcess(
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             ProcessCookie,
                             &dword_180146ED8,
                             4u,
                             0LL);
      v21 = a2;
      if ( InformationProcess < 0 )
        dword_180146ED8 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    Ptr = (signed __int64)RtlpRandomExInit.Ptr;
    v32 = 0;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_17:
      if ( v32 >= 0 )
        goto LABEL_18;
      v53 = 0;
    }
    else
    {
      do
      {
        while ( (Ptr & 3) != 0 )
        {
          if ( (Ptr & 3) != 1 )
          {
            v21 = a2;
            if ( Ptr == 3 )
              v32 = -1073741584;
            goto LABEL_17;
          }
          Ptr = RtlpRunOnceWaitForInit(Ptr, &RtlpRandomExInit);
        }
        v50 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Ptr);
      }
      while ( Ptr != v50 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v32 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v32 >= 0 )
          goto LABEL_57;
        v53 = 1;
      }
      else
      {
        v32 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v32 >= 0 )
          goto LABEL_57;
        v53 = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v32, &v53);
LABEL_57:
    v21 = a2;
LABEL_18:
    v33 = 0;
    dword_180146ED8 = (2147483629 * (unsigned __int64)(unsigned int)dword_180146ED8 + 2147483587) % 0x7FFFFFFF;
    v34 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180146ED8);
    if ( MEMORY[0x7FFE0290] )
    {
      v35 = 0;
      while ( 1 )
      {
        __asm { rdrand  rcx }
        v57 = _RCX;
        if ( _CF )
          break;
        if ( (unsigned int)++v35 >= 0xA )
          goto LABEL_59;
      }
    }
    else
    {
LABEL_59:
      LODWORD(_RCX) = 0;
    }
    v38 = _RCX ^ v34;
    _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v38);
    v39 = (unsigned __int64)v38 << 32;
    if ( !dword_180146ED8 )
    {
      v51 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180146ED8, 4u, 0LL);
      v21 = a2;
      if ( v51 < 0 )
        dword_180146ED8 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    }
    v40 = (signed __int64)RtlpRandomExInit.Ptr;
    if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
    {
LABEL_23:
      if ( v33 >= 0 )
      {
LABEL_24:
        dword_180146ED8 = (2147483629 * (unsigned __int64)(unsigned int)dword_180146ED8 + 2147483587) % 0x7FFFFFFF;
        v41 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180146ED8);
        if ( MEMORY[0x7FFE0290] )
        {
          v42 = 0;
          while ( 1 )
          {
            __asm { rdrand  rcx }
            v58 = _RCX;
            if ( _CF )
              break;
            if ( (unsigned int)++v42 >= 0xA )
              goto LABEL_78;
          }
        }
        else
        {
LABEL_78:
          LODWORD(_RCX) = 0;
        }
        v44 = _RCX ^ v41;
        _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v44);
        result = v30 >> 3;
        RtlpLowFragHeapRandomData[v30 >> 3] = (v39 | v44) & 0x7F7F7F7F7F7F7F7FLL;
        goto LABEL_28;
      }
      v54[0] = 0;
    }
    else
    {
      do
      {
        while ( (v40 & 3) != 0 )
        {
          if ( (v40 & 3) != 1 )
          {
            v21 = a2;
            if ( v40 == 3 )
              v33 = -1073741584;
            goto LABEL_23;
          }
          v40 = RtlpRunOnceWaitForInit(v40, &RtlpRandomExInit);
        }
        v52 = v40;
        v40 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, v40);
      }
      while ( v40 != v52 );
      if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
      {
        v33 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
        if ( v33 >= 0 )
          goto LABEL_76;
        v54[0] = 1;
      }
      else
      {
        v33 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
        if ( v33 >= 0 )
          goto LABEL_76;
        v54[0] = 2;
      }
    }
    RtlReportCriticalFailure((unsigned int)v33, v54);
LABEL_76:
    v21 = a2;
    goto LABEL_24;
  }
LABEL_28:
  if ( MEMORY[0x7FFE0380] )
  {
    result = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 888) & 1) != 0 )
      return RtlpLogHeapSubSegmentInitialize(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(v21 + 8),
               *(unsigned __int16 *)(v21 + 36),
               *(unsigned __int16 *)(v21 + 40),
               *(unsigned __int8 *)(v21 + 43));
  }
  return result;
}
