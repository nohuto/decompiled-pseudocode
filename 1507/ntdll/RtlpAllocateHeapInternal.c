/*
 * XREFs of RtlpAllocateHeapInternal @ 0x18002ED90
 * Callers:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x1800300C0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasAppend @ 0x18006A3C8 (RtlpHpExtrasAppend.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800DCF48 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1800DD648 (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800EF604 (RtlpLogHeapAllocateEvent.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // edx
  unsigned int v6; // ebp
  unsigned __int64 v7; // r14
  int v8; // r12d
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r9d
  unsigned __int64 Heap; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned int v18; // eax
  int v19; // edi
  unsigned int v20; // edi
  int v21; // r12d
  unsigned __int64 v22; // rbp
  int v23; // r9d
  __int64 v24; // rax
  __int64 *v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 *v28; // rax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rdi
  struct _TEB *v32; // rdi
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // eax
  struct _TEB *v36; // rdi
  __int64 v37; // rax
  _BYTE *v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-58h]
  unsigned int v41; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v43[8]; // [rsp+38h] [rbp-40h] BYREF
  int v44; // [rsp+80h] [rbp+8h]
  unsigned int v45; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v5 = *(_DWORD *)(a1 + 116);
    v6 = v5 | a3;
    v45 = 0;
    v43[0] = 0LL;
    v7 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v45 = 5;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 144);
      if ( !v8 )
      {
LABEL_4:
        if ( a2 )
          v9 = a2;
        else
          v9 = 1LL;
        v7 = (v9 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
        v10 = v7 >> 4;
        if ( (v6 & 0x7D810F61) != 0 )
          goto LABEL_45;
        if ( a2 <= RtlpLargestLfhBlock
          && ((unsigned __int8)(1 << ((v7 >> 4) & 7)) & *(_BYTE *)((v7 >> 7) + a1 + 394)) != 0 )
        {
          v11 = *(_QWORD *)(a1 + 384);
          v12 = *(_QWORD *)(a1 + 368);
          v45 = 2;
          Heap = RtlpLowFragHeapAllocFromContext(v12, *(unsigned __int16 *)(v11 + 2 * v10), a2, v6);
          if ( Heap )
          {
LABEL_10:
            if ( !v8
              || (a2 -= v43[0],
                  v37 = RtlpSetupExtendedBlock(a1, v6, Heap, v13, v43[0], v8),
                  v40 = Heap,
                  Heap = v37,
                  (int)RtlpCallInterceptRoutine(v8, a1, v37, 2, v40) >= 0) )
            {
LABEL_11:
              if ( MEMORY[0x7FFE0380]
                && (NtCurrentPeb()->TracingFlags & 1) != 0
                && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
                && ((v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0)
                && v45 != 5 )
              {
                if ( !Heap )
                  goto LABEL_109;
                v38 = (_BYTE *)(Heap - 16);
                _m_prefetchw((const void *)(Heap - 16));
                v39 = Heap - 16;
                if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
                  v39 -= 16LL * (unsigned __int8)v38[14];
                if ( *(char *)(v39 + 15) < 0 )
                  goto LABEL_109;
                _m_prefetchw(v38);
                if ( v38[15] == 5 )
                  v38 -= 16 * (unsigned __int8)v38[14];
                if ( ((v38[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_109:
                  RtlpLogHeapAllocateEvent(a1, Heap, a2, v45);
              }
              return Heap;
            }
            RtlFreeHeap(a1, 0, Heap);
            goto LABEL_65;
          }
        }
        v25 = *(__int64 **)(a1 + 312);
        if ( v10 >= *((unsigned int *)v25 + 2) )
        {
          while ( 1 )
          {
            v28 = (__int64 *)*v25;
            if ( !*v25 )
              break;
            v25 = (__int64 *)*v25;
            if ( v10 < *((unsigned int *)v28 + 2) )
              goto LABEL_49;
          }
          v10 = (unsigned int)(*((_DWORD *)v25 + 2) - 1);
        }
LABEL_49:
        v26 = (unsigned int)(*((_DWORD *)v25 + 2) - 1);
        if ( v10 < v26 || *v25 && v10 == v26 )
        {
          v27 = v10 - *((unsigned int *)v25 + 6);
          if ( *((_DWORD *)v25 + 3) )
            v27 *= 2LL;
          v24 = v25[6] + 8 * v27;
        }
        else
        {
LABEL_45:
          v24 = 0LL;
        }
        Heap = RtlpAllocateHeap((void *)a1, v24, (__int64)&v45);
        if ( !Heap )
        {
LABEL_66:
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v32 = NtCurrentTeb();
          v32->LastErrorValue = RtlNtStatusToDosError(-1073741801);
          if ( (v6 & 4) != 0 )
          {
            if ( !v7 )
              v7 = a2;
            RtlpAllocateHeapRaiseException(v7);
          }
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      if ( (v6 & 0x3C000102) != 0 || (v5 & 0x1000000) != 0 )
      {
        v8 = 0;
        goto LABEL_4;
      }
      if ( (int)RtlpCallInterceptRoutine(v8, a1, 0, 1, (__int64)v43) >= 0 )
      {
        v43[0] = ((v43[0] + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        a2 += v43[0];
        goto LABEL_4;
      }
    }
LABEL_65:
    Heap = 0LL;
    goto LABEL_66;
  }
  v29 = (a3 & 1) != 0;
  if ( (a3 & 8) != 0 )
    v29 |= 2u;
  if ( (a3 & 4) != 0 )
    v29 |= 0x80000000;
  v44 = v29;
  if ( (a3 & 0x100) != 0 )
  {
    v29 |= 0x100u;
    v44 = v29;
  }
  if ( (a3 & 0xE00) != 0 )
  {
    v29 |= a3 & 0xE00;
    v44 = v29;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v29 |= 0x2000000u;
    v44 = v29;
  }
  if ( (a3 & 2) != 0 )
  {
    v29 |= 0x1000000u;
    v44 = v29;
  }
  v16 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v16 && (_DWORD)v16 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
  {
    v29 |= 1u;
    v44 = v29;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v17 = a2 + 16;
    if ( a2 + 16 < a2 )
      v17 = a2;
  }
  else
  {
    v17 = a2;
  }
  v18 = 0;
  v19 = v29 | *(_DWORD *)(a1 + 20);
  v41 = 0;
  v20 = v19 & 0x93000F0B;
  v21 = 0;
  if ( (v20 & 0x1000000) == 0 )
  {
    v21 = *(_DWORD *)(a1 + 32);
    if ( v21 )
    {
      v20 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v21, a1, 0, 1, (__int64)&v41) < 0 )
      {
        v22 = 0LL;
LABEL_68:
        v42 = 0;
        goto LABEL_69;
      }
      v18 = v41;
    }
  }
  v22 = v17 + v18;
  if ( (v20 & 0x10000000) != 0 )
    v22 += 16LL;
  if ( (v20 & 0x20000F08) != 0 )
    v22 = ((v22 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v22 )
    v22 = 1LL;
  if ( v22 < v17 || v17 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_68;
  Heap = RtlpHpAllocateHeapInternal(a1, v17, v22, v20 & 0x13000003, &v42);
  if ( !Heap )
    goto LABEL_40;
  if ( (v20 & 0x30000F08) == 0 )
    goto LABEL_40;
  v30 = RtlpHpExtrasAppend(a1, Heap, v17, v23, v41, v20);
  v31 = v30;
  if ( !v21 )
    goto LABEL_40;
  *(_BYTE *)(v30 + 2) &= 0xF0u;
  v33 = (unsigned __int8)v21;
  *(_BYTE *)(v30 + 2) |= v21 & 0xF;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    if ( (_WORD)Heap
      || (LOBYTE(v33) = v21 & 0xF, v35 = RtlSparseBitmapCtxCheckBitsInternal(v33, Heap >> 16), v34 = Heap, !v35) )
    {
      v34 = Heap + 16;
    }
  }
  else
  {
    v34 = Heap;
  }
  if ( (int)RtlpCallInterceptRoutine(v21, a1, v34, 2, v31 + 16) >= 0 )
    goto LABEL_40;
  RtlFreeHeap(a1, 0, Heap);
LABEL_69:
  Heap = 0LL;
LABEL_40:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(a1, Heap, v22, v42);
  if ( Heap )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && ((_WORD)Heap || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v16, Heap >> 16)) )
    {
      Heap += 16LL;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v36 = NtCurrentTeb();
    v36->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( (v44 | *(_DWORD *)(a1 + 20)) < 0 )
      RtlpAllocateHeapRaiseException(a2);
  }
  return Heap;
}
