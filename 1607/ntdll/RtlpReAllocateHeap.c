/*
 * XREFs of RtlpReAllocateHeap @ 0x1800211C0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x180028FC0 (RtlpUpdateHeapRates.c)
 *     RtlpGetExtraStuffPointer @ 0x180029010 (RtlpGetExtraStuffPointer.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 *     RtlTryEnterCriticalSection @ 0x18004E810 (RtlTryEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800EAEBC (RtlpUpdateTagEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

char *__fastcall RtlpReAllocateHeap(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3, unsigned __int64 a4)
{
  SIZE_T v4; // r12
  PRTL_CRITICAL_SECTION *v6; // r15
  __int64 v8; // r13
  struct _TEB *v9; // rdi
  NTSTATUS v10; // ecx
  char *v11; // rbx
  PRTL_CRITICAL_SECTION *v12; // r8
  char *v13; // rdx
  unsigned __int64 v14; // r9
  int *v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r8
  char v19; // dl
  unsigned __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned __int16 v23; // ax
  size_t v24; // rdi
  PVOID Heap; // rbx
  int v27; // edi
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  struct _TEB *v30; // rdi
  unsigned __int64 v31; // rcx
  PRTL_CRITICAL_SECTION i; // rdx
  unsigned __int64 LockCount; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  _BYTE *v36; // r9
  char v37; // dl
  struct _TEB *v38; // rdi
  unsigned __int16 *v39; // r8
  int v40; // ecx
  unsigned __int16 v41; // ax
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  unsigned __int16 v47; // ax
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // r14
  _WORD *v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r14
  size_t v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  bool v56; // zf
  _BYTE *v57; // r15
  char *v58; // rbx
  __int64 v59; // rdi
  int v60; // ecx
  unsigned __int8 v61; // al
  PRTL_CRITICAL_SECTION *v62; // rdx
  unsigned __int64 v63; // rax
  ULONG v64; // edi
  char v65; // al
  __int16 v66; // cx
  unsigned __int8 v67; // al
  char *v68; // r15
  char *v69; // r14
  _QWORD *ExtraStuffPointer; // r12
  size_t v71; // rcx
  char *v72; // rbx
  ULONG v74; // [rsp+40h] [rbp-228h]
  int v75; // [rsp+40h] [rbp-228h]
  char v76; // [rsp+48h] [rbp-220h]
  char *v77; // [rsp+50h] [rbp-218h]
  char *v78; // [rsp+50h] [rbp-218h]
  unsigned __int64 v79; // [rsp+58h] [rbp-210h]
  char *Src; // [rsp+60h] [rbp-208h]
  unsigned __int64 v82; // [rsp+70h] [rbp-1F8h]
  size_t v83; // [rsp+78h] [rbp-1F0h]
  size_t v84; // [rsp+78h] [rbp-1F0h]
  __int16 v86[4]; // [rsp+90h] [rbp-1D8h]
  char *v87; // [rsp+98h] [rbp-1D0h]
  int v88; // [rsp+C4h] [rbp-1A4h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-198h] BYREF
  _WORD *v90; // [rsp+D8h] [rbp-190h]
  __int64 v91; // [rsp+E0h] [rbp-188h]
  _BYTE *v92; // [rsp+E8h] [rbp-180h]
  unsigned __int64 v93; // [rsp+F0h] [rbp-178h]
  const void *v94[2]; // [rsp+F8h] [rbp-170h] BYREF
  char *v95; // [rsp+108h] [rbp-160h]
  unsigned int NtGlobalFlag; // [rsp+110h] [rbp-158h]
  unsigned int v97; // [rsp+114h] [rbp-154h]
  unsigned int v98; // [rsp+118h] [rbp-150h]
  unsigned __int64 v99; // [rsp+120h] [rbp-148h]
  __int64 v100; // [rsp+128h] [rbp-140h]
  size_t v101; // [rsp+130h] [rbp-138h]
  __int64 v102; // [rsp+138h] [rbp-130h]
  PRTL_CRITICAL_SECTION *v103; // [rsp+140h] [rbp-128h]
  __int64 v104; // [rsp+148h] [rbp-120h]
  int v105; // [rsp+150h] [rbp-118h]
  int v106; // [rsp+160h] [rbp-108h]
  int v107; // [rsp+170h] [rbp-F8h]
  char *v108; // [rsp+178h] [rbp-F0h]
  char Fields[6]; // [rsp+180h] [rbp-E8h] BYREF
  __int16 v110; // [rsp+186h] [rbp-E2h]
  PRTL_CRITICAL_SECTION *v111; // [rsp+1A0h] [rbp-C8h]
  PVOID v112; // [rsp+1A8h] [rbp-C0h]
  char *v113; // [rsp+1B0h] [rbp-B8h]
  SIZE_T v114; // [rsp+1B8h] [rbp-B0h]
  size_t v115; // [rsp+1C0h] [rbp-A8h]
  int v116; // [rsp+1C8h] [rbp-A0h]
  char v117[6]; // [rsp+1D0h] [rbp-98h] BYREF
  __int16 v118; // [rsp+1D6h] [rbp-92h]
  PRTL_CRITICAL_SECTION *v119; // [rsp+1F0h] [rbp-78h]
  char *v120; // [rsp+1F8h] [rbp-70h]
  char *v121; // [rsp+200h] [rbp-68h]
  SIZE_T v122; // [rsp+208h] [rbp-60h]
  size_t v123; // [rsp+210h] [rbp-58h]
  int v124; // [rsp+218h] [rbp-50h]

  v4 = a4;
  v6 = HeapHandle;
  Src = a3;
  v8 = 0LL;
  v87 = 0LL;
  v76 = 0;
  v95 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v9 = NtCurrentTeb();
    v10 = 0;
LABEL_207:
    v9->LastErrorValue = RtlNtStatusToDosError(v10);
    return 0LL;
  }
  v11 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v12 = (PRTL_CRITICAL_SECTION *)v11;
  if ( v11[15] == 5 )
  {
    v12 = (PRTL_CRITICAL_SECTION *)&v11[-16 * (unsigned __int8)v11[14]];
    v77 = (char *)v12;
  }
  else
  {
    v77 = Src - 16;
  }
  if ( *((_BYTE *)HeapHandle + 386) == 2 )
  {
    if ( HeapHandle[47] )
    {
      v13 = (char *)v12 + 15;
      if ( *((char *)v12 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v14 = (unsigned __int64)v12 >> 4;
          v15 = (int *)(v12 + 1);
          v16 = *((_DWORD *)v12 + 2) ^ RtlpLFHKey ^ ((unsigned __int64)v12 >> 4) ^ (unsigned int)HeapHandle;
          if ( (_WORD)v16 )
            v17 = 0LL;
          else
            v17 = *(__int64 *)((char *)v12 - (v16 >> 12));
          v18 = *(unsigned __int16 *)(v17 + 36);
          v19 = *v13;
          if ( v19 == 5 )
          {
            v20 = *((unsigned __int16 *)v77 + 6) ^ (unsigned __int64)*((unsigned __int16 *)v6 + 70);
          }
          else if ( (v19 & 0x40) != 0 )
          {
            v20 = *(unsigned __int16 *)&v77[16 * (v19 & 0x3F) + 12];
          }
          else if ( (v19 & 0x3F) == 0x3F )
          {
            if ( v19 >= 0 )
            {
              if ( *((_DWORD *)v6 + 31) )
              {
                v22 = *v15;
                v105 = v22;
                if ( (v22 & *((_DWORD *)v6 + 31)) != 0 )
                  v105 = *((_DWORD *)v6 + 34) ^ v22;
                v23 = v105;
              }
              else
              {
                v23 = *(_WORD *)v15;
              }
              v21 = v23;
            }
            else
            {
              if ( !(*(_WORD *)v15 ^ (unsigned __int16)(RtlpLFHKey ^ v14 ^ (unsigned __int16)v6)) )
                v8 = *(_QWORD *)&v77[-((*v15 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v14 ^ (unsigned int)v6) >> 12)];
              v21 = *(unsigned __int16 *)(v8 + 36);
            }
            v20 = *(_QWORD *)&v77[16 * v21];
          }
          else
          {
            v20 = v19 & 0x3F;
          }
          v24 = 16 * v18 - v20;
          v83 = v24;
          v74 = a2 & 0xC003FFFF;
          Heap = RtlAllocateHeap(v6, v74, v4);
          if ( Heap )
          {
            if ( v4 < v24 )
              v24 = v4;
            memmove(Heap, Src, v24);
            RtlFreeHeap(v6, v74, Src);
          }
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && Heap && (v74 & 0x800000) == 0 )
          {
            v110 = 4130;
            v111 = v6;
            v112 = Heap;
            v113 = Src;
            v115 = v83;
            v114 = v4;
            v116 = 2;
            NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x2Cu, Fields);
          }
          return (char *)Heap;
        }
        return 0LL;
      }
    }
  }
  if ( v12 == HeapHandle )
  {
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)v12, 0, 0LL, 0LL);
    return 0LL;
  }
  v27 = *((_DWORD *)HeapHandle + 29) | a2;
  v75 = v27;
  if ( (v27 & 0x61000000) != 0 && (v27 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(HeapHandle);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v9 = NtCurrentTeb();
    v10 = -1073741801;
    goto LABEL_207;
  }
  v28 = 1LL;
  if ( a4 )
    v28 = a4;
  v29 = (unsigned __int64)HeapHandle[33] & ((unsigned __int64)HeapHandle[32] + v28);
  if ( v29 < 0x20 )
    v29 = 32LL;
  v79 = v29;
  v84 = 0LL;
  if ( (v27 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(v6[44]) )
    {
      ++*((_DWORD *)v6 + 146);
    }
    else
    {
      if ( byte_180152408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v30 = NtCurrentTeb();
        v30->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_194;
      }
      RtlEnterCriticalSection(v6[44]);
      RtlpUpdateHeapRates(v6, 1LL);
    }
    v76 = 1;
    v27 ^= 1u;
    v75 = v27;
  }
  _m_prefetchw(v11);
  if ( v11[15] == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  v78 = v11;
  if ( *((_DWORD *)v6 + 31) )
  {
    *((_DWORD *)v11 + 2) ^= *((_DWORD *)v6 + 34);
    if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
      RtlpAnalyzeHeapFailure(v6, v11);
  }
  v87 = v11;
  v31 = *((unsigned __int16 *)v11 + 4);
  for ( i = v6[39]; ; i = (PRTL_CRITICAL_SECTION)i->DebugInfo )
  {
    LockCount = (unsigned int)i->LockCount;
    if ( v31 < LockCount )
    {
      v34 = *((unsigned __int16 *)v11 + 4);
      v99 = v34;
      goto LABEL_68;
    }
    if ( !i->DebugInfo )
      break;
  }
  v34 = (unsigned int)(LockCount - 1);
  v99 = v34;
LABEL_68:
  if ( v34 < LockCount && v31 == v34 )
  {
    v35 = v31 - LODWORD(i->LockSemaphore);
    if ( i->RecursionCount )
      v35 *= 2LL;
    v100 = *(_QWORD *)&i[1].LockCount + 8 * v35;
  }
  else
  {
    v100 = 0LL;
  }
  if ( (v27 & 0x3C000100) != 0 || v6[41] || (v11[10] & 2) != 0 )
    v79 += 16LL;
  v36 = v11 + 15;
  v92 = v11 + 15;
  v37 = v11[15];
  if ( (v37 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v38 = NtCurrentTeb();
    v38->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_194;
  }
  v39 = (unsigned __int16 *)(v11 + 8);
  v90 = v11 + 8;
  if ( v37 == 4 )
  {
    if ( *((_DWORD *)v6 + 31) )
    {
      v40 = *(_DWORD *)v39;
      v106 = v40;
      if ( (v40 & *((_DWORD *)v6 + 31)) != 0 )
        v106 = v40 ^ *((_DWORD *)v6 + 34);
      v41 = v106;
      v27 = v75;
    }
    else
    {
      v41 = *v39;
    }
    v84 = *((_QWORD *)v11 - 2) - v41;
    v42 = (v84 + *v39) >> 4;
    v82 = v42;
    v79 = (v79 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v42 = *v39;
    v82 = v42;
    if ( v37 == 5 )
    {
      v43 = *((unsigned __int16 *)v11 + 6) ^ (unsigned __int64)*((unsigned __int16 *)HeapHandle + 70);
    }
    else if ( (v37 & 0x40) != 0 )
    {
      v43 = *(unsigned __int16 *)&v11[16 * (v37 & 0x3F) + 12];
    }
    else if ( (v37 & 0x3F) == 0x3F )
    {
      if ( v37 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v46 = *(_DWORD *)v39;
          v107 = v46;
          if ( (v46 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v107 = v46 ^ *((_DWORD *)HeapHandle + 34);
          v47 = v107;
          v27 = v75;
        }
        else
        {
          v47 = v42;
        }
        v45 = v47;
      }
      else
      {
        if ( *v39 ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)HeapHandle ^ ((unsigned __int64)v11 >> 4)) )
          v44 = 0LL;
        else
          v44 = *(_QWORD *)&v11[-((*(_DWORD *)v39 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ (unsigned int)((unsigned __int64)v11 >> 4)) >> 12)];
        v45 = *(unsigned __int16 *)(v44 + 36);
        v42 = *v39;
        v27 = v75;
      }
      v43 = *(_QWORD *)&v11[16 * v45];
    }
    else
    {
      v43 = v37 & 0x3F;
    }
    v84 = 16 * v42 - v43;
    if ( v42 < *((unsigned __int16 *)HeapHandle + 200) )
    {
      v48 = *((_BYTE *)HeapHandle + (v42 >> 3) + 402);
      v49 = 1 << (v42 & 7);
      v42 = v82;
      if ( (v49 & v48) == 0 )
      {
        v50 = (_WORD *)((char *)HeapHandle[49] + 2 * v82);
        if ( *v50 > 1u )
          --*v50;
      }
      v27 = v75;
    }
  }
  v51 = v79 >> 4;
  v52 = v79 >> 4;
  *(_QWORD *)v86 = v79 >> 4;
  if ( v79 >> 4 <= v42 )
  {
    if ( v51 + 1 == v42 )
    {
      v52 = v51 + 1;
      *(_QWORD *)v86 = v51 + 1;
      v79 += 16LL;
    }
    if ( *v36 == 4 )
    {
      *v39 = v79 - v4;
      goto LABEL_121;
    }
    if ( (v11[10] & 2) != 0 )
    {
      v108 = &v11[16 * *v39 - 16];
      v91 = (__int64)&v11[16 * v52 - 16];
      *(_OWORD *)v91 = *(_OWORD *)v108;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v52 = *(_QWORD *)v86;
        v42 = v82;
        *(_WORD *)(v91 + 2) = RtlpUpdateTagEntry(
                                (_DWORD)HeapHandle,
                                *(unsigned __int16 *)(v91 + 2),
                                v82,
                                *(_DWORD *)v86,
                                4);
        LOBYTE(v27) = v75;
        goto LABEL_121;
      }
    }
    else
    {
      v97 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v97 & 0x800) != 0 )
      {
        v52 = *(_QWORD *)v86;
        v11[11] = RtlpUpdateTagEntry((_DWORD)HeapHandle, (unsigned __int8)v11[11], *v39, *(_DWORD *)v86, 4);
        v42 = v82;
        LOBYTE(v27) = v75;
        goto LABEL_121;
      }
    }
    v42 = v82;
    v52 = *(_QWORD *)v86;
    LOBYTE(v27) = v75;
LABEL_121:
    if ( a4 > v84 )
    {
      if ( (v27 & 8) != 0 )
      {
        v4 = a4;
        memset(&Src[v84], 0, a4 - v84);
LABEL_136:
        if ( ((_BYTE)HeapHandle[14] & 0x20) != 0 )
        {
          *(_QWORD *)&v11[v4 + 16] = 0xABABABABABABABABuLL;
          *(_QWORD *)&v11[v4 + 24] = 0xABABABABABABABABuLL;
        }
        v56 = v52 == v42;
        v57 = v92;
        if ( !v56 )
        {
          if ( *v92 == 4 )
          {
            v58 = v11 - 48;
            v98 = NtCurrentPeb()->NtGlobalFlag;
            v52 = *(_QWORD *)v86;
            if ( (v98 & 0x800) != 0 )
              *((_WORD *)v58 + 9) = RtlpUpdateTagEntry(
                                      (_DWORD)HeapHandle,
                                      *((unsigned __int16 *)v58 + 9),
                                      v82,
                                      *(_DWORD *)v86,
                                      5);
            v94[0] = &v58[v79];
            v89 = 16 * v82 - v79;
            v88 = RtlpSecMemFreeVirtualMemory(v79, v94, &v89, 0x4000LL);
            if ( v88 >= 0 )
            {
              *((_QWORD *)v58 + 4) -= v89;
              v11 = v78;
            }
            else
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v94[0], v89, v88);
              RtlpBreakPointHeap();
              v11 = v78;
              v52 = *(_QWORD *)v86;
            }
          }
          else
          {
            v59 = (unsigned __int16)*v90 - (unsigned __int16)v52;
            v104 = v59;
            *v90 = v52;
            v60 = (*((unsigned __int8 *)HeapHandle + 112) >> 6) & 1;
            v61 = v11[14];
            if ( v61 )
              v62 = (PRTL_CRITICAL_SECTION *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL)
                                            - ((unsigned __int64)v61 << 16)
                                            + 0x10000);
            else
              v62 = HeapHandle;
            v103 = v62;
            RtlpCreateSplitBlock((int)HeapHandle, v60, v52, v59);
          }
        }
        if ( *v57 != 4 )
        {
          v63 = v79 - v4;
          v92 = (_BYTE *)(v79 - v4);
          if ( v79 - v4 >= 0x3F )
          {
            *(_QWORD *)&v11[16 * v52] = v63;
            *v57 = 63;
          }
          else
          {
            *v57 = v63;
          }
        }
        goto LABEL_192;
      }
      if ( ((_BYTE)HeapHandle[14] & 0x40) != 0 )
      {
        v53 = v84 & 3;
        v101 = v53;
        if ( (v84 & 3) != 0 )
        {
          v53 = 4 - v53;
          v101 = v53;
        }
        v4 = a4;
        if ( a4 <= v53 + v84 )
          goto LABEL_136;
        if ( ((a4 - v53 - v84) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
          goto LABEL_136;
        v54 = (__int64)&v11[v53 + 16 + v84];
        v102 = v54;
        v55 = ((a4 - v53 - v84) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v93 = v55;
        if ( !v55 )
          goto LABEL_136;
        if ( (v54 & 4) != 0 )
        {
          *(_DWORD *)v54 = -1163005939;
          v93 = --v55;
          if ( !v55 )
            goto LABEL_136;
          v54 += 4LL;
          v102 = v54;
        }
        memset64((void *)v54, 0xBAADF00DBAADF00DuLL, v55 >> 1);
        if ( (v55 & 1) != 0 )
          *(_DWORD *)(v54 + 4 * v55 - 4) = -1163005939;
        goto LABEL_136;
      }
    }
    v4 = a4;
    goto LABEL_136;
  }
  if ( *v36 == 4 || !(unsigned __int8)RtlpGrowBlockInPlace((int)HeapHandle, v79 >> 4) )
  {
    if ( (v27 & 0x10) != 0 )
    {
      Src = 0LL;
      goto LABEL_192;
    }
    v64 = v27 & 0xC003FFFF;
    v75 = v64;
    v65 = v11[10];
    if ( (v65 & 2) != 0 )
    {
      v64 = (16 * (v65 & 0xE0 | 0x10)) | v64 & 0xFFFFF1FF;
      v75 = v64;
      v66 = *(_WORD *)(RtlpGetExtraStuffPointer(v11) + 2);
      if ( v66 > 0 )
      {
        v64 |= (unsigned __int16)v66 << 18;
        v75 = v64;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v67 = v11[11];
      if ( v67 )
      {
        v64 |= v67 << 18;
        v75 = v64;
      }
    }
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      v11[11] = v11[8] ^ v11[9] ^ v11[10];
      *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
    v87 = 0LL;
    v68 = (char *)RtlAllocateHeap(HeapHandle, v64, v4);
    if ( !v68 )
    {
LABEL_191:
      v95 = Src;
      Src = v68;
      goto LABEL_192;
    }
    v69 = v68 - 16;
    _m_prefetchw(v68 - 16);
    if ( *(v68 - 1) == 5 )
      v69 -= 16 * (unsigned __int8)v69[14];
    v94[1] = v69;
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      *((_DWORD *)v69 + 2) ^= *((_DWORD *)HeapHandle + 34);
      if ( v69[11] != ((unsigned __int8)v69[8] ^ (unsigned __int8)(v69[9] ^ v69[10])) )
        RtlpAnalyzeHeapFailure(HeapHandle, v69);
    }
    if ( (v69[10] & 2) != 0 )
    {
      ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v69);
      v91 = (__int64)ExtraStuffPointer;
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v11);
      }
      if ( (v11[10] & 2) != 0 )
      {
        ExtraStuffPointer[1] = *(_QWORD *)(RtlpGetExtraStuffPointer(v11) + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
        ExtraStuffPointer[1] = 0LL;
      }
      if ( !*((_DWORD *)HeapHandle + 31) )
        goto LABEL_186;
      v11[11] = v11[8] ^ v11[9] ^ v11[10];
      *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      v69[11] = v69[8] ^ v69[9] ^ v69[10];
      *((_DWORD *)v69 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
LABEL_186:
    v87 = 0LL;
    if ( v76 )
    {
      RtlLeaveCriticalSection(HeapHandle[44]);
      v76 = 0;
      v64 &= ~1u;
      v75 = v64;
    }
    v71 = v84;
    v4 = a4;
    if ( a4 < v84 )
      v71 = a4;
    memmove(v68, Src, v71);
    RtlFreeHeap(HeapHandle, v64, Src);
    goto LABEL_191;
  }
LABEL_192:
  v6 = HeapHandle;
LABEL_194:
  if ( v87 && *((_DWORD *)HeapHandle + 31) )
  {
    v87[11] = v87[8] ^ v87[9] ^ v87[10];
    *((_DWORD *)v87 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v76 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v72 = Src;
      if ( Src )
      {
        if ( (v75 & 0x800000) == 0 )
        {
          v118 = 4130;
          v119 = v6;
          v120 = Src;
          if ( v95 )
            v72 = v95;
          v121 = v72;
          v123 = v84;
          v122 = v4;
          v124 = 3;
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x2Cu, v117);
        }
      }
    }
  }
  return Src;
}
