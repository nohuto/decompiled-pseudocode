/*
 * XREFs of RtlpReAllocateHeap @ 0x18002DC40
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpGrowBlockInPlace @ 0x180006558 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlTryEnterCriticalSection @ 0x180008880 (RtlTryEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetExtraStuffPointer @ 0x1800582B0 (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18006F630 (RtlpUpdateHeapRates.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800DAB80 (RtlpUpdateTagEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

char *__fastcall RtlpReAllocateHeap(unsigned __int16 *BaseAddress, int a2, char *a3, SIZE_T a4)
{
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  char *v11; // rdx
  unsigned __int64 v12; // rdi
  int *v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  size_t v18; // rdi
  PVOID Heap; // r14
  unsigned int v21; // edi
  char v22; // r15
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 *i; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  _BYTE *v30; // r8
  char v31; // dl
  unsigned __int16 *v32; // r10
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // r9
  int v38; // ecx
  __int64 v39; // rdi
  char v40; // r10
  unsigned __int8 v41; // al
  unsigned __int16 *v42; // rcx
  unsigned __int64 v43; // rax
  ULONG v44; // edi
  char v45; // al
  char *v46; // r9
  char *v47; // r15
  size_t v48; // r8
  bool v49; // al
  _WORD *v50; // rdx
  _QWORD *ExtraStuffPointer; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int16 v54; // cx
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // ax
  unsigned int v57; // edx
  struct _TEB *v58; // rdi
  __int64 v59; // rax
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // r9
  size_t v62; // rax
  __int64 v63; // r9
  unsigned __int64 v64; // r10
  unsigned __int64 v65; // rsi
  __int64 v66; // rcx
  unsigned __int8 v67; // al
  struct _TEB *v68; // rdi
  unsigned int v69; // ecx
  struct _TEB *v70; // rdi
  NTSTATUS v71; // ecx
  int v72; // eax
  unsigned __int16 v73; // ax
  char *v74; // rsi
  unsigned int Flagsa; // [rsp+40h] [rbp-218h]
  ULONG Flagsb; // [rsp+40h] [rbp-218h]
  char v78; // [rsp+48h] [rbp-210h]
  unsigned __int64 v79; // [rsp+50h] [rbp-208h]
  unsigned __int64 v80; // [rsp+50h] [rbp-208h]
  unsigned __int64 v81; // [rsp+58h] [rbp-200h]
  char *Src; // [rsp+60h] [rbp-1F8h]
  size_t Size; // [rsp+68h] [rbp-1F0h]
  size_t Sizea; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v85; // [rsp+70h] [rbp-1E8h]
  char *v86; // [rsp+78h] [rbp-1E0h]
  __int16 v87[4]; // [rsp+80h] [rbp-1D8h]
  unsigned __int64 v88; // [rsp+90h] [rbp-1C8h]
  int v89; // [rsp+98h] [rbp-1C0h]
  _BYTE *v90; // [rsp+A8h] [rbp-1B0h]
  _BYTE *v91; // [rsp+B0h] [rbp-1A8h]
  unsigned __int64 v92; // [rsp+B8h] [rbp-1A0h]
  int v93; // [rsp+C0h] [rbp-198h]
  _QWORD *v94; // [rsp+D8h] [rbp-180h]
  __int64 v95; // [rsp+D8h] [rbp-180h]
  _WORD *v96; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v97; // [rsp+F0h] [rbp-168h] BYREF
  unsigned int v98; // [rsp+F8h] [rbp-160h]
  int v99; // [rsp+FCh] [rbp-15Ch]
  unsigned __int64 v100; // [rsp+100h] [rbp-158h]
  const void *v101; // [rsp+108h] [rbp-150h] BYREF
  char *v102; // [rsp+110h] [rbp-148h]
  char *v103; // [rsp+118h] [rbp-140h]
  __int64 v104; // [rsp+120h] [rbp-138h]
  __int64 v105; // [rsp+128h] [rbp-130h]
  unsigned __int16 *v106; // [rsp+130h] [rbp-128h]
  unsigned int v107; // [rsp+138h] [rbp-120h]
  unsigned int NtGlobalFlag; // [rsp+13Ch] [rbp-11Ch]
  unsigned int v109; // [rsp+140h] [rbp-118h]
  __int64 v110; // [rsp+148h] [rbp-110h]
  int v111; // [rsp+150h] [rbp-108h]
  size_t v112; // [rsp+158h] [rbp-100h]
  _OWORD *v113; // [rsp+160h] [rbp-F8h]
  char Fields[6]; // [rsp+170h] [rbp-E8h] BYREF
  __int16 v115; // [rsp+176h] [rbp-E2h]
  unsigned __int16 *v116; // [rsp+190h] [rbp-C8h]
  PVOID v117; // [rsp+198h] [rbp-C0h]
  char *v118; // [rsp+1A0h] [rbp-B8h]
  SIZE_T v119; // [rsp+1A8h] [rbp-B0h]
  size_t v120; // [rsp+1B0h] [rbp-A8h]
  int v121; // [rsp+1B8h] [rbp-A0h]
  char v122[6]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v123; // [rsp+1C6h] [rbp-92h]
  unsigned __int16 *v124; // [rsp+1E0h] [rbp-78h]
  char *v125; // [rsp+1E8h] [rbp-70h]
  char *v126; // [rsp+1F0h] [rbp-68h]
  SIZE_T v127; // [rsp+1F8h] [rbp-60h]
  size_t v128; // [rsp+200h] [rbp-58h]
  int v129; // [rsp+208h] [rbp-50h]

  Src = a3;
  v8 = 0LL;
  v90 = 0LL;
  v78 = 0;
  v102 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v70 = NtCurrentTeb();
    v71 = 0;
LABEL_219:
    v70->LastErrorValue = RtlNtStatusToDosError(v71);
    return 0LL;
  }
  v9 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v10 = v9;
  if ( *(_BYTE *)(v9 + 15) == 5 )
  {
    v10 = v9 - 16LL * *(unsigned __int8 *)(v9 + 14);
    v79 = v10;
  }
  else
  {
    v79 = v9;
  }
  if ( *((_BYTE *)BaseAddress + 378) == 2 )
  {
    if ( *((_QWORD *)BaseAddress + 46) )
    {
      v11 = (char *)(v10 + 15);
      if ( *(char *)(v10 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v12 = v10 >> 4;
          v13 = (int *)(v10 + 8);
          if ( *(_WORD *)(v10 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (v10 >> 4) ^ (unsigned __int16)BaseAddress) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v10
                            - ((*(_DWORD *)(v10 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v10 >> 4) ^ (unsigned int)BaseAddress) >> 12));
          v15 = *(unsigned __int16 *)(v14 + 36);
          v16 = *v11;
          if ( *v11 == 5 )
          {
            v17 = *(unsigned __int16 *)(v79 + 12) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v16 & 0x40) != 0 )
          {
            v17 = *(unsigned __int16 *)(v79 + 16LL * (v16 & 0x3F) + 12);
          }
          else if ( (v16 & 0x3F) == 0x3F )
          {
            if ( v16 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v72 = *v13;
                v111 = v72;
                if ( (v72 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v111 = *((_DWORD *)BaseAddress + 34) ^ v72;
                v73 = v111;
              }
              else
              {
                v73 = *(_WORD *)v13;
              }
              v69 = v73;
            }
            else
            {
              if ( !(*(_WORD *)v13 ^ (unsigned __int16)(RtlpLFHKey ^ v12 ^ (unsigned __int16)BaseAddress)) )
                v8 = *(_QWORD *)(v79
                               - ((*v13 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v12 ^ (unsigned int)BaseAddress) >> 12));
              v69 = *(unsigned __int16 *)(v8 + 36);
            }
            v17 = *(_QWORD *)(v79 + 16LL * v69);
          }
          else
          {
            v17 = v16 & 0x3F;
          }
          v18 = 16 * v15 - v17;
          Size = v18;
          Flagsa = a2 & 0xC003FFFF;
          Heap = RtlAllocateHeap(BaseAddress, Flagsa, a4);
          if ( Heap )
          {
            if ( a4 < v18 )
              v18 = a4;
            memmove(Heap, Src, v18);
            RtlFreeHeap(BaseAddress, Flagsa, Src);
          }
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && Heap && (Flagsa & 0x800000) == 0 )
          {
            v115 = 4130;
            v116 = BaseAddress;
            v117 = Heap;
            v118 = Src;
            v120 = Size;
            v119 = a4;
            v121 = 2;
            NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x2Cu, Fields);
          }
          return (char *)Heap;
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int16 *)v10 == BaseAddress )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v21 = *((_DWORD *)BaseAddress + 29) | a2;
  Flagsb = v21;
  if ( (v21 & 0x61000000) != 0 && (v21 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(BaseAddress);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v70 = NtCurrentTeb();
    v71 = -1073741801;
    goto LABEL_219;
  }
  v22 = 1;
  if ( a4 )
    v23 = a4;
  else
    v23 = 1LL;
  v24 = *((_QWORD *)BaseAddress + 33) & (v23 + *((_QWORD *)BaseAddress + 32));
  if ( v24 < 0x20 )
    v24 = 32LL;
  v81 = v24;
  Sizea = 0LL;
  if ( (v21 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44)) )
    {
      ++*((_DWORD *)BaseAddress + 144);
    }
    else
    {
      if ( byte_180146208 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v68 = NtCurrentTeb();
        v68->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_181;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      RtlpUpdateHeapRates(BaseAddress, 1LL);
    }
    v78 = 1;
    v21 ^= 1u;
    Flagsb = v21;
  }
  _m_prefetchw((const void *)v9);
  if ( *(_BYTE *)(v9 + 15) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v80 = v9;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v9);
  }
  v90 = (_BYTE *)v9;
  v25 = *(unsigned __int16 *)(v9 + 8);
  for ( i = (__int64 *)*((_QWORD *)BaseAddress + 39); ; i = (__int64 *)*i )
  {
    v27 = *((unsigned int *)i + 2);
    if ( v25 < v27 )
      break;
    if ( !*i )
    {
      v25 = (unsigned int)(v27 - 1);
      break;
    }
  }
  v28 = (unsigned int)(v27 - 1);
  if ( v25 < v28 || *i && v25 == v28 )
  {
    v29 = v25 - *((unsigned int *)i + 6);
    if ( *((_DWORD *)i + 3) )
      v29 *= 2LL;
    v104 = i[6] + 8 * v29;
  }
  else
  {
    v104 = 0LL;
  }
  if ( (v21 & 0x3C000100) != 0 || *((_QWORD *)BaseAddress + 41) || (*(_BYTE *)(v9 + 10) & 2) != 0 )
    v81 += 16LL;
  v30 = (_BYTE *)(v9 + 15);
  v91 = (_BYTE *)(v9 + 15);
  v31 = *(_BYTE *)(v9 + 15);
  if ( (v31 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v58 = NtCurrentTeb();
    v58->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_181;
  }
  v32 = (unsigned __int16 *)(v9 + 8);
  v96 = (_WORD *)(v9 + 8);
  if ( v31 == 4 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v93 = *(_DWORD *)v32;
      if ( (*(_DWORD *)v32 & *((_DWORD *)BaseAddress + 31)) != 0 )
        v93 = *(_DWORD *)v32 ^ *((_DWORD *)BaseAddress + 34);
      v55 = v93;
      v21 = Flagsb;
    }
    else
    {
      v55 = *v32;
    }
    Sizea = *(_QWORD *)(v9 - 48 + 32) - v55;
    v33 = (Sizea + *v32) >> 4;
    v85 = v33;
    v81 = (v81 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v33 = *v32;
    v92 = v33;
    v85 = v33;
    if ( v31 == 5 )
    {
      v34 = *(unsigned __int16 *)(v9 + 12) ^ (unsigned __int64)BaseAddress[70];
    }
    else if ( (v31 & 0x40) != 0 )
    {
      v34 = *(unsigned __int16 *)(v9 + 16LL * (v31 & 0x3F) + 12);
    }
    else if ( (v31 & 0x3F) == 0x3F )
    {
      if ( v31 < 0 )
      {
        if ( *v32 ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ (v9 >> 4)) )
          v59 = 0LL;
        else
          v59 = *(_QWORD *)(v9
                          - ((*(_DWORD *)v32 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v9 >> 4)) >> 12));
        v57 = *(unsigned __int16 *)(v59 + 36);
        v98 = v57;
        v92 = v33;
        v21 = Flagsb;
      }
      else
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v89 = *(_DWORD *)v32;
          if ( (*(_DWORD *)v32 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v89 = *(_DWORD *)v32 ^ *((_DWORD *)BaseAddress + 34);
          v56 = v89;
          v33 = *v32;
          v92 = v33;
          v21 = Flagsb;
        }
        else
        {
          v56 = v33;
        }
        v57 = v56;
        v98 = v56;
      }
      v34 = *(_QWORD *)(v9 + 16LL * v57);
    }
    else
    {
      v34 = *(_BYTE *)(v9 + 15) & 0x3F;
    }
    Sizea = 16 * v33 - v34;
    if ( v33 >= BaseAddress[196] )
      goto LABEL_54;
    v49 = ((unsigned __int8)(1 << (v33 & 7)) & *((_BYTE *)BaseAddress + (v33 >> 3) + 394)) != 0;
    v33 = v85;
    if ( !v49 )
    {
      v92 = v85;
      v50 = (_WORD *)(*((_QWORD *)BaseAddress + 48) + 2 * v85);
      if ( *v50 > 1u )
        --*v50;
      v21 = Flagsb;
      goto LABEL_54;
    }
    v21 = Flagsb;
  }
  v92 = v33;
LABEL_54:
  v35 = v81 >> 4;
  v88 = v81 >> 4;
  *(_QWORD *)v87 = v81 >> 4;
  if ( v81 >> 4 <= v33 )
  {
    v36 = v35 + 1;
    if ( v35 + 1 == v33 )
    {
      ++v35;
      v88 = v36;
      *(_QWORD *)v87 = v36;
      v81 += 16LL;
    }
    if ( *v30 == 4 )
    {
      *v32 = v81 - a4;
LABEL_62:
      if ( a4 <= Sizea )
        goto LABEL_63;
      if ( (v21 & 8) != 0 )
      {
        memset(&Src[Sizea], 0, a4 - Sizea);
        v35 = v88;
        v30 = (_BYTE *)(v9 + 15);
        goto LABEL_63;
      }
      if ( (BaseAddress[56] & 0x40) != 0 )
      {
        v62 = Sizea & 3;
        v112 = v62;
        if ( (Sizea & 3) != 0 )
        {
          v62 = 4 - v62;
          v112 = v62;
        }
        if ( a4 > v62 + Sizea && ((a4 - v62 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          v63 = v62 + Sizea + v9 + 16;
          v105 = v63;
          v64 = ((a4 - v62 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
          v100 = v64;
          if ( v64 )
          {
            if ( (v63 & 4) != 0 )
            {
              *(_DWORD *)v63 = -1163005939;
              v100 = --v64;
              if ( !v64 )
                goto LABEL_63;
              v63 += 4LL;
              v105 = v63;
            }
            memset64((void *)v63, 0xBAADF00DBAADF00DuLL, v64 >> 1);
            if ( (v64 & 1) != 0 )
              *(_DWORD *)(v63 + 4 * v64 - 4) = -1163005939;
          }
        }
      }
LABEL_63:
      if ( (BaseAddress[56] & 0x20) != 0 )
      {
        *(_QWORD *)(a4 + v9 + 16) = 0xABABABABABABABABuLL;
        *(_QWORD *)(a4 + v9 + 24) = 0xABABABABABABABABuLL;
      }
      if ( v35 == v92 )
        goto LABEL_72;
      v37 = *(_BYTE *)(v9 + 10) & 0xFE;
      if ( *v30 == 4 )
      {
        v65 = v9 - 48;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        v66 = NtGlobalFlag;
        v88 = *(_QWORD *)v87;
        if ( (NtGlobalFlag & 0x800) != 0 )
          *(_WORD *)(v65 + 18) = RtlpUpdateTagEntry(
                                   (_DWORD)BaseAddress,
                                   *(unsigned __int16 *)(v65 + 18),
                                   v85,
                                   *(_DWORD *)v87,
                                   5);
        v101 = (const void *)(v65 + v81);
        v97 = 16 * v85 - v81;
        v99 = RtlpSecMemFreeVirtualMemory(v66, &v101, &v97, 0x4000LL);
        if ( v99 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v101, v97, v99);
          RtlpBreakPointHeap(0LL);
          v9 = v80;
          v35 = *(_QWORD *)v87;
          goto LABEL_71;
        }
        *(_QWORD *)(v65 + 32) -= v97;
        v9 = v80;
      }
      else
      {
        v38 = (unsigned __int16)*v96 - (unsigned __int16)v35;
        v39 = v38;
        v110 = v38;
        *v96 = v35;
        v40 = (BaseAddress[56] & 0x40) != 0;
        v41 = *(_BYTE *)(v9 + 14);
        if ( v41 )
        {
          v42 = (unsigned __int16 *)((v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v41 << 16) + 0x10000);
          v106 = v42;
        }
        else
        {
          v42 = BaseAddress;
          v106 = BaseAddress;
        }
        RtlpCreateSplitBlock(BaseAddress, (__int64)v42, v9 + 16 * v35, v37, v40, v35, v39);
      }
      v35 = v88;
LABEL_71:
      v30 = v91;
LABEL_72:
      if ( *v30 != 4 )
        v22 = 0;
      if ( !v22 )
      {
        v43 = v81 - a4;
        if ( v81 - a4 >= 0x3F )
        {
          *(_QWORD *)(v9 + 16 * v35) = v43;
          *v30 = 63;
        }
        else
        {
          *v30 = v43;
        }
      }
      goto LABEL_181;
    }
    if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    {
      v113 = (_OWORD *)(v9 + 16LL * *v32 - 16);
      v95 = 16 * v35 + v9 - 16;
      *(_OWORD *)v95 = *v113;
      v109 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v109 & 0x800) != 0 )
      {
        v88 = *(_QWORD *)v87;
        v92 = v85;
        *(_WORD *)(v95 + 2) = RtlpUpdateTagEntry(
                                (_DWORD)BaseAddress,
                                *(unsigned __int16 *)(v95 + 2),
                                v85,
                                *(_DWORD *)v87,
                                4);
        v35 = v60;
        v30 = (_BYTE *)(v9 + 15);
        goto LABEL_61;
      }
    }
    else
    {
      v107 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v107 & 0x800) != 0 )
      {
        v88 = *(_QWORD *)v87;
        *(_BYTE *)(v9 + 11) = RtlpUpdateTagEntry(
                                (_DWORD)BaseAddress,
                                *(unsigned __int8 *)(v9 + 11),
                                *v32,
                                *(_DWORD *)v87,
                                4);
        v92 = v85;
        v35 = v61;
        v30 = (_BYTE *)(v9 + 15);
        goto LABEL_61;
      }
    }
    v92 = v85;
    v35 = *(_QWORD *)v87;
    v88 = *(_QWORD *)v87;
LABEL_61:
    LOBYTE(v21) = Flagsb;
    goto LABEL_62;
  }
  if ( *v30 != 4 )
    v22 = 0;
  if ( !v22 && RtlpGrowBlockInPlace(BaseAddress, v21, v9, a4, v81 >> 4) )
    goto LABEL_181;
  if ( (v21 & 0x10) == 0 )
  {
    v44 = v21 & 0xC003FFFF;
    Flagsb = v44;
    v45 = *(_BYTE *)(v9 + 10);
    if ( (v45 & 2) != 0 )
    {
      v44 = (16 * (v45 & 0xE0 | 0x10)) | v44 & 0xFFFFF1FF;
      Flagsb = v44;
      v54 = *(_WORD *)(RtlpGetExtraStuffPointer(v9) + 2);
      if ( v54 > 0 )
      {
        v44 |= (unsigned __int16)v54 << 18;
        Flagsb = v44;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v67 = *(_BYTE *)(v9 + 11);
      if ( v67 )
      {
        v44 |= v67 << 18;
        Flagsb = v44;
      }
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    v90 = 0LL;
    v46 = (char *)RtlAllocateHeap(BaseAddress, v44, a4);
    v86 = v46;
    if ( !v46 )
      goto LABEL_101;
    v47 = v46 - 16;
    _m_prefetchw(v46 - 16);
    if ( *(v46 - 1) == 5 )
      v47 -= 16 * (unsigned __int8)v47[14];
    v103 = v47;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *((_DWORD *)v47 + 2) ^= *((_DWORD *)BaseAddress + 34);
      if ( v47[11] != ((unsigned __int8)v47[8] ^ (unsigned __int8)(v47[9] ^ v47[10])) )
      {
        RtlpAnalyzeHeapFailure(BaseAddress, v47);
        v46 = v86;
      }
    }
    if ( (v47[10] & 2) != 0 )
    {
      ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v47);
      v94 = ExtraStuffPointer;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
        {
          RtlpAnalyzeHeapFailure(BaseAddress, v9);
          v46 = v86;
          ExtraStuffPointer = v94;
        }
      }
      if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
      {
        v52 = RtlpGetExtraStuffPointer(v9);
        *(_QWORD *)(v53 + 8) = *(_QWORD *)(v52 + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
        ExtraStuffPointer[1] = 0LL;
      }
      if ( !*((_DWORD *)BaseAddress + 31) )
        goto LABEL_96;
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v47[11] = v47[8] ^ v47[9] ^ v47[10];
      *((_DWORD *)v47 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
LABEL_96:
    v90 = 0LL;
    if ( v78 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      v78 = 0;
      v44 &= ~1u;
      Flagsb = v44;
      v46 = v86;
    }
    if ( a4 < Sizea )
      v48 = a4;
    else
      v48 = Sizea;
    memmove(v46, Src, v48);
    RtlFreeHeap(BaseAddress, v44, Src);
    v46 = v86;
LABEL_101:
    v102 = Src;
    Src = v46;
    goto LABEL_181;
  }
  Src = 0LL;
LABEL_181:
  if ( v90 && *((_DWORD *)BaseAddress + 31) )
  {
    v90[11] = v90[8] ^ v90[9] ^ v90[10];
    *((_DWORD *)v90 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( v78 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v74 = Src;
      if ( Src )
      {
        if ( (Flagsb & 0x800000) == 0 )
        {
          v123 = 4130;
          v124 = BaseAddress;
          v125 = Src;
          if ( v102 )
            v74 = v102;
          v126 = v74;
          v128 = Sizea;
          v127 = a4;
          v129 = 3;
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x2Cu, v122);
        }
      }
    }
  }
  return Src;
}
