/*
 * XREFs of RtlpAllocateHeapInternal @ 0x180025610
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x180025060 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x18004FC48 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18005A3C4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpSetupExtendedBlock @ 0x1800863B0 (RtlpSetupExtendedBlock.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800E3108 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800F155C (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1800F29F4 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapInternal(
        unsigned __int64 BaseAddress,
        unsigned __int64 a2,
        int a3,
        __int16 a4)
{
  unsigned __int64 v4; // r13
  int v6; // ebp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  unsigned __int64 v12; // r15
  unsigned __int64 HeapInternal; // rdi
  struct _TEB *v14; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r12
  __int16 v18; // ax
  unsigned __int64 DescriptorValidateSafe; // rdx
  unsigned __int64 v20; // r8
  int v21; // ebx
  int v22; // r8d
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // r15d
  unsigned __int64 v26; // rbp
  int v27; // r12d
  __int64 v28; // rbp
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // r9d
  __int64 *v33; // rcx
  __int64 *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  struct _TEB *v39; // rbx
  _BYTE *v40; // rdx
  unsigned __int64 v41; // rcx
  signed __int32 v43[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v44; // [rsp+20h] [rbp-68h]
  unsigned int v45; // [rsp+30h] [rbp-58h] BYREF
  int v46; // [rsp+34h] [rbp-54h] BYREF
  int v47; // [rsp+38h] [rbp-50h]
  unsigned int v48; // [rsp+3Ch] [rbp-4Ch]
  int v49; // [rsp+40h] [rbp-48h]
  unsigned __int64 v50[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v51; // [rsp+90h] [rbp+8h] BYREF
  __int16 v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  v4 = a2;
  if ( *(_DWORD *)(BaseAddress + 16) == -571548178 )
  {
    v6 = (a3 & 1) != 0;
    if ( (a3 & 8) != 0 )
      v6 |= 2u;
    if ( (a3 & 4) != 0 )
      v6 |= 0x80000000;
    if ( (a3 & 0x100) != 0 )
      v6 |= 0x100u;
    if ( (a3 & 0xE00) != 0 )
      v6 |= a3 & 0xE00;
    if ( (a3 & 0x10) != 0 )
      v6 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v6 |= 0x1000000u;
    v7 = *(unsigned int *)(BaseAddress + 40);
    if ( (_DWORD)v7 && (_DWORD)v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v6 |= 1u;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v8 = a2 + 16;
      if ( a2 + 16 < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    v9 = 0;
    v10 = v6 | *(_DWORD *)(BaseAddress + 20);
    v45 = 0;
    v11 = v10 & 0x93000F0B;
    v47 = 0;
    if ( (v11 & 0x1000000) == 0 )
    {
      v7 = *(unsigned int *)(BaseAddress + 32);
      v47 = v7;
      if ( (_DWORD)v7 )
      {
        v11 |= 8u;
        if ( (int)RtlpCallInterceptRoutine(v7, BaseAddress, 0, 1, (__int64)&v45) < 0 )
        {
          v12 = 0LL;
LABEL_25:
          v46 = 0;
LABEL_26:
          HeapInternal = 0LL;
LABEL_27:
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAllocateEvent(BaseAddress, HeapInternal, v12);
          if ( HeapInternal )
          {
            if ( (RtlpHpAppCompatFlags & 2) != 0
              && ((_WORD)HeapInternal || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v7, HeapInternal >> 16)) )
            {
              HeapInternal += 16LL;
            }
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741801;
            v14 = NtCurrentTeb();
            v14->LastErrorValue = RtlNtStatusToDosError(-1073741801);
            if ( v6 < 0 || *(int *)(BaseAddress + 20) < 0 )
              RtlpAllocateHeapRaiseException(v4);
          }
          return HeapInternal;
        }
        v9 = v45;
      }
    }
    if ( v52 )
      v11 |= 8u;
    v12 = v8 + v9;
    v48 = v11 & 0x10000000;
    if ( (v11 & 0x10000000) != 0 )
      v12 += 16LL;
    v49 = v11 & 0x20000F08;
    if ( (v11 & 0x20000F08) != 0 )
      v12 = ((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v12 )
      v12 = 1LL;
    if ( v12 < v8 || v8 > 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_25;
    HeapInternal = RtlpHpAllocateHeapInternal(BaseAddress, v8, v12, v11 & 0x13000003, (__int64)&v46);
    if ( !HeapInternal || (v11 & 0x30000F08) == 0 )
      goto LABEL_27;
    v7 = v48;
    v15 = v45;
    if ( v48 )
    {
      *(_QWORD *)(HeapInternal + v8) = 0xABABABABABABABABuLL;
      *(_QWORD *)(HeapInternal + v8 + 8) = 0xABABABABABABABABuLL;
    }
    if ( !v49 )
    {
      v17 = 0LL;
      goto LABEL_77;
    }
    v16 = HeapInternal + v8;
    if ( (_DWORD)v7 )
      v16 += 16LL;
    v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_BYTE *)(v17 + 2) &= 0xFu;
    *(_BYTE *)(v17 + 2) |= 16 * (BYTE1(v11) & 0xFE);
    v18 = v52;
    *(_BYTE *)(v17 + 3) = v15 >> 4;
    *(_WORD *)v17 = v18;
    _InterlockedOr(v43, 0);
    if ( !(_WORD)HeapInternal && (unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v7, HeapInternal >> 16) )
    {
      RtlpHpLargeAllocSetExtraPresent(BaseAddress, HeapInternal, v11);
      goto LABEL_77;
    }
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(BaseAddress, HeapInternal);
    }
    else if ( (BaseAddress ^ RtlpHeapKey ^ *(_QWORD *)((HeapInternal & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((HeapInternal & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
    {
      DescriptorValidateSafe = (HeapInternal & 0xFFFFFFFFFFF00000uLL)
                             + 32LL * (unsigned int)((HeapInternal - (HeapInternal & 0xFFFFFFFFFFF00000uLL)) >> 12);
    }
    else
    {
      DescriptorValidateSafe = 0LL;
    }
    if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0 )
      goto LABEL_69;
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) != 0 )
    {
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0
        && HeapInternal != (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(DescriptorValidateSafe
                                                   - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12) )
      {
LABEL_69:
        DescriptorValidateSafe = 0LL;
      }
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 27);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 8) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) == 0 )
      {
        goto LABEL_69;
      }
    }
    v7 = DescriptorValidateSafe + 24;
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0x21) != 0 )
    {
      if ( (*(_BYTE *)v7 & 1) != 0 )
      {
        v20 = (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)
            + ((unsigned int)((__int64)(DescriptorValidateSafe - (DescriptorValidateSafe & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
        v7 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v20 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v20 >> 12);
      }
      else
      {
        v7 = 16
           * (WORD1(RtlpLFHKey) ^ ((unsigned int)(HeapInternal - 16) >> 16) ^ *(unsigned __int16 *)(HeapInternal - 14))
           - 16;
      }
      *(_WORD *)(v7 + HeapInternal - 2) |= 0x4000u;
    }
    else
    {
      *(_WORD *)(DescriptorValidateSafe + 4) |= 1u;
    }
LABEL_77:
    v21 = v47;
    if ( !v47 )
      goto LABEL_27;
    *(_BYTE *)(v17 + 2) &= 0xF0u;
    *(_BYTE *)(v17 + 2) |= v21 & 0xF;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      if ( (_WORD)HeapInternal
        || (v23 = RtlSparseBitmapCtxCheckBitsInternal(v7, HeapInternal >> 16), v22 = HeapInternal, !v23) )
      {
        v22 = HeapInternal + 16;
      }
    }
    else
    {
      v22 = HeapInternal;
    }
    if ( (int)RtlpCallInterceptRoutine(v21, BaseAddress, v22, 2, v17 + 16) >= 0 )
      goto LABEL_27;
    RtlFreeHeap((PVOID)BaseAddress, 0, (PVOID)HeapInternal);
    goto LABEL_26;
  }
  v24 = *(_DWORD *)(BaseAddress + 116);
  v25 = v24 | a3;
  LODWORD(v51) = 0;
  v50[0] = 0LL;
  v26 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v51) = 5;
LABEL_119:
    HeapInternal = 0LL;
LABEL_120:
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v39 = NtCurrentTeb();
    v39->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( (v25 & 4) != 0 )
    {
      if ( !v26 )
        v26 = v4;
      RtlpAllocateHeapRaiseException(v26);
    }
    goto LABEL_124;
  }
  v27 = *(_DWORD *)(BaseAddress + 144);
  if ( v27 )
  {
    if ( (v25 & 0x3C000102) != 0 || (v24 & 0x1000000) != 0 )
    {
      v27 = 0;
    }
    else
    {
      if ( (int)RtlpCallInterceptRoutine(v27, BaseAddress, 0, 1, (__int64)v50) < 0 )
        goto LABEL_119;
      v50[0] = ((v50[0] + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
      v4 += v50[0];
    }
  }
  v28 = 1LL;
  if ( v4 )
    v28 = v4;
  v26 = (v28 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  v29 = v26 >> 4;
  if ( (v25 & 0x7D810F61) != 0 )
    goto LABEL_114;
  if ( v4 <= RtlpLargestLfhBlock
    && ((unsigned __int8)(1 << ((v26 >> 4) & 7)) & *(_BYTE *)((v26 >> 7) + BaseAddress + 394)) != 0 )
  {
    v30 = *(_QWORD *)(BaseAddress + 384);
    v31 = *(_QWORD *)(BaseAddress + 368);
    LODWORD(v51) = 2;
    HeapInternal = RtlpLowFragHeapAllocFromContext(v31, *(unsigned __int16 *)(v30 + 2 * v29), v4, v25);
    if ( HeapInternal )
      goto LABEL_116;
  }
  v33 = *(__int64 **)(BaseAddress + 312);
  if ( v29 >= *((unsigned int *)v33 + 2) )
  {
    while ( 1 )
    {
      v34 = (__int64 *)*v33;
      if ( !*v33 )
        break;
      v33 = (__int64 *)*v33;
      if ( v29 < *((unsigned int *)v34 + 2) )
        goto LABEL_108;
    }
    v29 = (unsigned int)(*((_DWORD *)v33 + 2) - 1);
  }
LABEL_108:
  v35 = (unsigned int)(*((_DWORD *)v33 + 2) - 1);
  if ( v29 < v35 || *v33 && v29 == v35 )
  {
    v36 = v29 - *((unsigned int *)v33 + 6);
    if ( *((_DWORD *)v33 + 3) )
      v36 *= 2LL;
    v37 = v33[6] + 8 * v36;
  }
  else
  {
LABEL_114:
    v37 = 0LL;
  }
  HeapInternal = RtlpAllocateHeap((PVOID)BaseAddress, v37, (__int64)&v51);
  if ( !HeapInternal )
    goto LABEL_120;
LABEL_116:
  if ( v27 )
  {
    v4 -= v50[0];
    v38 = RtlpSetupExtendedBlock(BaseAddress, v25, HeapInternal, v32, v50[0], v27);
    v44 = HeapInternal;
    HeapInternal = v38;
    if ( (int)RtlpCallInterceptRoutine(v27, BaseAddress, v38, 2, v44) < 0 )
    {
      RtlFreeHeap((PVOID)BaseAddress, 0, (PVOID)HeapInternal);
      goto LABEL_119;
    }
  }
LABEL_124:
  if ( MEMORY[0x7FFE0380]
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (*(_DWORD *)(BaseAddress + 116) & 0x1000000) == 0
    && ((v25 & 0x61000000) == 0 || (v25 & 0x10000000) != 0)
    && (_DWORD)v51 != 5 )
  {
    if ( !HeapInternal )
      goto LABEL_137;
    v40 = (_BYTE *)(HeapInternal - 16);
    _m_prefetchw((const void *)(HeapInternal - 16));
    v41 = HeapInternal - 16;
    if ( *(_BYTE *)(HeapInternal - 16 + 15) == 5 )
      v41 -= 16LL * (unsigned __int8)v40[14];
    if ( *(char *)(v41 + 15) < 0 )
      goto LABEL_137;
    _m_prefetchw(v40);
    if ( v40[15] == 5 )
      v40 -= 16 * (unsigned __int8)v40[14];
    if ( ((v40[10] ^ (unsigned __int8)(*(_BYTE *)(BaseAddress + 138) & (*(_DWORD *)(BaseAddress + 124) >> 17))) & 8) == 0 )
LABEL_137:
      RtlpLogHeapAllocateEvent(BaseAddress, HeapInternal, v4);
  }
  return HeapInternal;
}
