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

unsigned __int64 __fastcall RtlpAllocateHeapInternal(_DWORD *BaseAddress, unsigned __int64 a2, int a3)
{
  int v5; // edx
  int v6; // ebp
  unsigned __int64 v7; // r14
  int v8; // r12d
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rcx
  int v12; // r9d
  unsigned __int64 Heap; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned int v17; // eax
  int v18; // edi
  unsigned int v19; // edi
  int v20; // r12d
  unsigned __int64 v21; // rbp
  int v22; // r9d
  __int64 v23; // rax
  __int64 *v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 *v27; // rax
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdi
  struct _TEB *v31; // rdi
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // eax
  struct _TEB *v35; // rdi
  __int64 v36; // rax
  _BYTE *v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-58h]
  unsigned int v40; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v42[8]; // [rsp+38h] [rbp-40h] BYREF
  int v43; // [rsp+80h] [rbp+8h]
  __int64 v44; // [rsp+98h] [rbp+20h] BYREF

  if ( BaseAddress[4] != -571548178 )
  {
    v5 = BaseAddress[29];
    v6 = v5 | a3;
    LODWORD(v44) = 0;
    v42[0] = 0LL;
    v7 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v44) = 5;
    }
    else
    {
      v8 = BaseAddress[36];
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
          && ((unsigned __int8)(1 << ((v7 >> 4) & 7)) & *((_BYTE *)BaseAddress + (v7 >> 7) + 394)) != 0 )
        {
          v11 = (_RTL_SRWLOCK *)*((_QWORD *)BaseAddress + 46);
          LODWORD(v44) = 2;
          Heap = RtlpLowFragHeapAllocFromContext(v11);
          if ( Heap )
          {
LABEL_10:
            if ( !v8
              || (a2 -= v42[0],
                  v36 = RtlpSetupExtendedBlock((_DWORD)BaseAddress, v6, Heap, v12, v42[0], v8),
                  v39 = Heap,
                  Heap = v36,
                  (int)RtlpCallInterceptRoutine(v8, (_DWORD)BaseAddress, v36, 2, v39) >= 0) )
            {
LABEL_11:
              if ( MEMORY[0x7FFE0380]
                && (NtCurrentPeb()->TracingFlags & 1) != 0
                && (BaseAddress[29] & 0x1000000) == 0
                && ((v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0)
                && (_DWORD)v44 != 5 )
              {
                if ( !Heap )
                  goto LABEL_109;
                v37 = (_BYTE *)(Heap - 16);
                _m_prefetchw((const void *)(Heap - 16));
                v38 = Heap - 16;
                if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
                  v38 -= 16LL * (unsigned __int8)v37[14];
                if ( *(char *)(v38 + 15) < 0 )
                  goto LABEL_109;
                _m_prefetchw(v37);
                if ( v37[15] == 5 )
                  v37 -= 16 * (unsigned __int8)v37[14];
                if ( ((v37[10] ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (BaseAddress[31] >> 17))) & 8) == 0 )
LABEL_109:
                  RtlpLogHeapAllocateEvent(BaseAddress, Heap, a2, (unsigned int)v44);
              }
              return Heap;
            }
            RtlFreeHeap(BaseAddress, 0, (PVOID)Heap);
            goto LABEL_65;
          }
        }
        v24 = (__int64 *)*((_QWORD *)BaseAddress + 39);
        if ( v10 >= *((unsigned int *)v24 + 2) )
        {
          while ( 1 )
          {
            v27 = (__int64 *)*v24;
            if ( !*v24 )
              break;
            v24 = (__int64 *)*v24;
            if ( v10 < *((unsigned int *)v27 + 2) )
              goto LABEL_49;
          }
          v10 = (unsigned int)(*((_DWORD *)v24 + 2) - 1);
        }
LABEL_49:
        v25 = (unsigned int)(*((_DWORD *)v24 + 2) - 1);
        if ( v10 < v25 || *v24 && v10 == v25 )
        {
          v26 = v10 - *((unsigned int *)v24 + 6);
          if ( *((_DWORD *)v24 + 3) )
            v26 *= 2LL;
          v23 = v24[6] + 8 * v26;
        }
        else
        {
LABEL_45:
          v23 = 0LL;
        }
        Heap = RtlpAllocateHeap(BaseAddress, v23, (__int64)&v44);
        if ( !Heap )
        {
LABEL_66:
          NtCurrentTeb()->LastStatusValue = -1073741801;
          v31 = NtCurrentTeb();
          v31->LastErrorValue = RtlNtStatusToDosError(-1073741801);
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
      if ( (int)RtlpCallInterceptRoutine(v8, (_DWORD)BaseAddress, 0, 1, (__int64)v42) >= 0 )
      {
        v42[0] = ((v42[0] + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
        a2 += v42[0];
        goto LABEL_4;
      }
    }
LABEL_65:
    Heap = 0LL;
    goto LABEL_66;
  }
  v28 = (a3 & 1) != 0;
  if ( (a3 & 8) != 0 )
    v28 |= 2u;
  if ( (a3 & 4) != 0 )
    v28 |= 0x80000000;
  v43 = v28;
  if ( (a3 & 0x100) != 0 )
  {
    v28 |= 0x100u;
    v43 = v28;
  }
  if ( (a3 & 0xE00) != 0 )
  {
    v28 |= a3 & 0xE00;
    v43 = v28;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v28 |= 0x2000000u;
    v43 = v28;
  }
  if ( (a3 & 2) != 0 )
  {
    v28 |= 0x1000000u;
    v43 = v28;
  }
  v15 = (unsigned int)BaseAddress[10];
  if ( (_DWORD)v15 && (_DWORD)v15 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
  {
    v28 |= 1u;
    v43 = v28;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v16 = a2 + 16;
    if ( a2 + 16 < a2 )
      v16 = a2;
  }
  else
  {
    v16 = a2;
  }
  v17 = 0;
  v18 = v28 | BaseAddress[5];
  v40 = 0;
  v19 = v18 & 0x93000F0B;
  v20 = 0;
  if ( (v19 & 0x1000000) == 0 )
  {
    v20 = BaseAddress[8];
    if ( v20 )
    {
      v19 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v20, (_DWORD)BaseAddress, 0, 1, (__int64)&v40) < 0 )
      {
        v21 = 0LL;
LABEL_68:
        v41 = 0;
        goto LABEL_69;
      }
      v17 = v40;
    }
  }
  v21 = v16 + v17;
  if ( (v19 & 0x10000000) != 0 )
    v21 += 16LL;
  if ( (v19 & 0x20000F08) != 0 )
    v21 = ((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v21 )
    v21 = 1LL;
  if ( v21 < v16 || v16 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_68;
  Heap = RtlpHpAllocateHeapInternal(BaseAddress, v16, v21, v19 & 0x13000003, &v41);
  if ( !Heap )
    goto LABEL_40;
  if ( (v19 & 0x30000F08) == 0 )
    goto LABEL_40;
  v29 = RtlpHpExtrasAppend((_DWORD)BaseAddress, Heap, v16, v22, v40, v19);
  v30 = v29;
  if ( !v20 )
    goto LABEL_40;
  *(_BYTE *)(v29 + 2) &= 0xF0u;
  v32 = (unsigned __int8)v20;
  *(_BYTE *)(v29 + 2) |= v20 & 0xF;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    if ( (_WORD)Heap
      || (LOBYTE(v32) = v20 & 0xF, v34 = RtlSparseBitmapCtxCheckBitsInternal(v32, Heap >> 16), v33 = Heap, !v34) )
    {
      v33 = Heap + 16;
    }
  }
  else
  {
    v33 = Heap;
  }
  if ( (int)RtlpCallInterceptRoutine(v20, (_DWORD)BaseAddress, v33, 2, v30 + 16) >= 0 )
    goto LABEL_40;
  RtlFreeHeap(BaseAddress, 0, (PVOID)Heap);
LABEL_69:
  Heap = 0LL;
LABEL_40:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(BaseAddress, Heap, v21, v41);
  if ( Heap )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && ((_WORD)Heap || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v15, Heap >> 16)) )
    {
      Heap += 16LL;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v35 = NtCurrentTeb();
    v35->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( (v43 | BaseAddress[5]) < 0 )
      RtlpAllocateHeapRaiseException(a2);
  }
  return Heap;
}
