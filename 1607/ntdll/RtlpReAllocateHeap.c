/*
 * XREFs of RtlpReAllocateHeap @ 0x1800211D0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x180028FD0 (RtlpUpdateHeapRates.c)
 *     RtlpGetExtraStuffPointer @ 0x180029020 (RtlpGetExtraStuffPointer.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x18004BF00 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C470 (RtlpGrowBlockInPlace.c)
 *     RtlTryEnterCriticalSection @ 0x18004E820 (RtlTryEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800EADFC (RtlpUpdateTagEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpReAllocateHeap(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // r15
  __int64 v8; // r13
  struct _TEB *v9; // rdi
  NTSTATUS v10; // ecx
  char *v11; // rbx
  char *v12; // r8
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
  void *Heap; // rbx
  int v27; // edi
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  struct _TEB *v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 *i; // rdx
  unsigned __int64 v33; // r8
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
  int v58; // r9d
  char *v59; // rbx
  __int64 v60; // rdi
  int v61; // ecx
  unsigned __int8 v62; // al
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  unsigned int v65; // edi
  char v66; // al
  __int16 v67; // cx
  unsigned __int8 v68; // al
  char *v69; // r15
  char *v70; // r14
  _QWORD *ExtraStuffPointer; // r12
  size_t v72; // rcx
  char *v73; // rbx
  unsigned int v75; // [rsp+40h] [rbp-228h]
  int v76; // [rsp+40h] [rbp-228h]
  char v77; // [rsp+48h] [rbp-220h]
  char *v78; // [rsp+50h] [rbp-218h]
  char *v79; // [rsp+50h] [rbp-218h]
  unsigned __int64 v80; // [rsp+58h] [rbp-210h]
  char *Src; // [rsp+60h] [rbp-208h]
  unsigned __int64 v83; // [rsp+70h] [rbp-1F8h]
  size_t v84; // [rsp+78h] [rbp-1F0h]
  size_t v85; // [rsp+78h] [rbp-1F0h]
  unsigned __int64 v87; // [rsp+90h] [rbp-1D8h]
  char *v88; // [rsp+98h] [rbp-1D0h]
  int v89; // [rsp+C4h] [rbp-1A4h]
  unsigned __int64 v90; // [rsp+D0h] [rbp-198h] BYREF
  _WORD *v91; // [rsp+D8h] [rbp-190h]
  __int64 v92; // [rsp+E0h] [rbp-188h]
  _BYTE *v93; // [rsp+E8h] [rbp-180h]
  unsigned __int64 v94; // [rsp+F0h] [rbp-178h]
  const void *v95[2]; // [rsp+F8h] [rbp-170h] BYREF
  char *v96; // [rsp+108h] [rbp-160h]
  unsigned int NtGlobalFlag; // [rsp+110h] [rbp-158h]
  unsigned int v98; // [rsp+114h] [rbp-154h]
  unsigned int v99; // [rsp+118h] [rbp-150h]
  unsigned __int64 v100; // [rsp+120h] [rbp-148h]
  __int64 v101; // [rsp+128h] [rbp-140h]
  size_t v102; // [rsp+130h] [rbp-138h]
  __int64 v103; // [rsp+138h] [rbp-130h]
  unsigned __int64 v104; // [rsp+140h] [rbp-128h]
  __int64 v105; // [rsp+148h] [rbp-120h]
  int v106; // [rsp+150h] [rbp-118h]
  int v107; // [rsp+160h] [rbp-108h]
  int v108; // [rsp+170h] [rbp-F8h]
  char *v109; // [rsp+178h] [rbp-F0h]
  char v110[6]; // [rsp+180h] [rbp-E8h] BYREF
  __int16 v111; // [rsp+186h] [rbp-E2h]
  __int64 v112; // [rsp+1A0h] [rbp-C8h]
  void *v113; // [rsp+1A8h] [rbp-C0h]
  char *v114; // [rsp+1B0h] [rbp-B8h]
  unsigned __int64 v115; // [rsp+1B8h] [rbp-B0h]
  size_t v116; // [rsp+1C0h] [rbp-A8h]
  int v117; // [rsp+1C8h] [rbp-A0h]
  char v118[6]; // [rsp+1D0h] [rbp-98h] BYREF
  __int16 v119; // [rsp+1D6h] [rbp-92h]
  __int64 v120; // [rsp+1F0h] [rbp-78h]
  char *v121; // [rsp+1F8h] [rbp-70h]
  char *v122; // [rsp+200h] [rbp-68h]
  unsigned __int64 v123; // [rsp+208h] [rbp-60h]
  size_t v124; // [rsp+210h] [rbp-58h]
  int v125; // [rsp+218h] [rbp-50h]

  v4 = a4;
  v6 = a1;
  Src = a3;
  v8 = 0LL;
  v88 = 0LL;
  v77 = 0;
  v96 = 0LL;
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
  v12 = v11;
  if ( v11[15] == 5 )
  {
    v12 = &v11[-16 * (unsigned __int8)v11[14]];
    v78 = v12;
  }
  else
  {
    v78 = Src - 16;
  }
  if ( *(_BYTE *)(a1 + 386) == 2 )
  {
    if ( *(_QWORD *)(a1 + 376) )
    {
      v13 = v12 + 15;
      if ( v12[15] < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v14 = (unsigned __int64)v12 >> 4;
          v15 = (int *)(v12 + 8);
          v16 = *((_DWORD *)v12 + 2) ^ RtlpLFHKey ^ ((unsigned __int64)v12 >> 4) ^ a1;
          if ( (_WORD)v16 )
            v17 = 0LL;
          else
            v17 = *(_QWORD *)&v12[-(v16 >> 12)];
          v18 = *(unsigned __int16 *)(v17 + 36);
          v19 = *v13;
          if ( v19 == 5 )
          {
            v20 = *((unsigned __int16 *)v78 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 140);
          }
          else if ( (v19 & 0x40) != 0 )
          {
            v20 = *(unsigned __int16 *)&v78[16 * (v19 & 0x3F) + 12];
          }
          else if ( (v19 & 0x3F) == 0x3F )
          {
            if ( v19 >= 0 )
            {
              if ( *(_DWORD *)(v6 + 124) )
              {
                v22 = *v15;
                v106 = v22;
                if ( (v22 & *(_DWORD *)(v6 + 124)) != 0 )
                  v106 = *(_DWORD *)(v6 + 136) ^ v22;
                v23 = v106;
              }
              else
              {
                v23 = *(_WORD *)v15;
              }
              v21 = v23;
            }
            else
            {
              if ( !(*(_WORD *)v15 ^ (unsigned __int16)(RtlpLFHKey ^ v14 ^ v6)) )
                v8 = *(_QWORD *)&v78[-((*v15 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v14 ^ (unsigned int)v6) >> 12)];
              v21 = *(unsigned __int16 *)(v8 + 36);
            }
            v20 = *(_QWORD *)&v78[16 * v21];
          }
          else
          {
            v20 = v19 & 0x3F;
          }
          v24 = 16 * v18 - v20;
          v84 = v24;
          v75 = a2 & 0xC003FFFF;
          Heap = (void *)RtlAllocateHeap(v6, v75, v4);
          if ( Heap )
          {
            if ( v4 < v24 )
              v24 = v4;
            memmove(Heap, Src, v24);
            RtlFreeHeap(v6, v75, Src);
          }
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && Heap && (v75 & 0x800000) == 0 )
          {
            v111 = 4130;
            v112 = v6;
            v113 = Heap;
            v114 = Src;
            v116 = v84;
            v115 = v4;
            v117 = 2;
            NtTraceEvent(MEMORY[0x7FFE0380], 132098LL, 44LL, v110);
          }
          return (__int64)Heap;
        }
        return 0LL;
      }
    }
  }
  if ( v12 == (char *)a1 )
  {
    RtlpLogHeapFailure(9, a1, (_DWORD)v12, 0, 0LL, 0LL);
    return 0LL;
  }
  v27 = *(_DWORD *)(a1 + 116) | a2;
  v76 = v27;
  if ( (v27 & 0x61000000) != 0 && (v27 & 0x10000000) == 0 )
    return RtlDebugReAllocateHeap((void *)a1);
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
  v29 = *(_QWORD *)(a1 + 264) & (v28 + *(_QWORD *)(a1 + 256));
  if ( v29 < 0x20 )
    v29 = 32LL;
  v80 = v29;
  v85 = 0LL;
  if ( (v27 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(v6 + 352)) )
    {
      ++*(_DWORD *)(v6 + 584);
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
      RtlEnterCriticalSection(*(_QWORD *)(v6 + 352));
      RtlpUpdateHeapRates(v6, 1LL);
    }
    v77 = 1;
    v27 ^= 1u;
    v76 = v27;
  }
  _m_prefetchw(v11);
  if ( v11[15] == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  v79 = v11;
  if ( *(_DWORD *)(v6 + 124) )
  {
    *((_DWORD *)v11 + 2) ^= *(_DWORD *)(v6 + 136);
    if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
      RtlpAnalyzeHeapFailure(v6, v11);
  }
  v88 = v11;
  v31 = *((unsigned __int16 *)v11 + 4);
  for ( i = *(__int64 **)(v6 + 312); ; i = (__int64 *)*i )
  {
    v33 = *((unsigned int *)i + 2);
    if ( v31 < v33 )
    {
      v34 = *((unsigned __int16 *)v11 + 4);
      v100 = v34;
      goto LABEL_68;
    }
    if ( !*i )
      break;
  }
  v34 = (unsigned int)(v33 - 1);
  v100 = v34;
LABEL_68:
  if ( v34 < v33 && v31 == v34 )
  {
    v35 = v31 - *((unsigned int *)i + 6);
    if ( *((_DWORD *)i + 3) )
      v35 *= 2LL;
    v101 = i[6] + 8 * v35;
  }
  else
  {
    v101 = 0LL;
  }
  if ( (v27 & 0x3C000100) != 0 || *(_QWORD *)(v6 + 328) || (v11[10] & 2) != 0 )
    v80 += 16LL;
  v36 = v11 + 15;
  v93 = v11 + 15;
  v37 = v11[15];
  if ( (v37 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v38 = NtCurrentTeb();
    v38->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_194;
  }
  v39 = (unsigned __int16 *)(v11 + 8);
  v91 = v11 + 8;
  if ( v37 == 4 )
  {
    if ( *(_DWORD *)(v6 + 124) )
    {
      v40 = *(_DWORD *)v39;
      v107 = v40;
      if ( (v40 & *(_DWORD *)(v6 + 124)) != 0 )
        v107 = v40 ^ *(_DWORD *)(v6 + 136);
      v41 = v107;
      v27 = v76;
    }
    else
    {
      v41 = *v39;
    }
    v85 = *((_QWORD *)v11 - 2) - v41;
    v42 = (v85 + *v39) >> 4;
    v83 = v42;
    v80 = (v80 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v42 = *v39;
    v83 = v42;
    if ( v37 == 5 )
    {
      v43 = *((unsigned __int16 *)v11 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v37 & 0x40) != 0 )
    {
      v43 = *(unsigned __int16 *)&v11[16 * (v37 & 0x3F) + 12];
    }
    else if ( (v37 & 0x3F) == 0x3F )
    {
      if ( v37 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v46 = *(_DWORD *)v39;
          v108 = v46;
          if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
            v108 = v46 ^ *(_DWORD *)(a1 + 136);
          v47 = v108;
          v27 = v76;
        }
        else
        {
          v47 = v42;
        }
        v45 = v47;
      }
      else
      {
        if ( *v39 ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ ((unsigned __int64)v11 >> 4)) )
          v44 = 0LL;
        else
          v44 = *(_QWORD *)&v11[-((*(_DWORD *)v39 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)((unsigned __int64)v11 >> 4)) >> 12)];
        v45 = *(unsigned __int16 *)(v44 + 36);
        v42 = *v39;
        v27 = v76;
      }
      v43 = *(_QWORD *)&v11[16 * v45];
    }
    else
    {
      v43 = v37 & 0x3F;
    }
    v85 = 16 * v42 - v43;
    if ( v42 < *(unsigned __int16 *)(a1 + 400) )
    {
      v48 = *(_BYTE *)((v42 >> 3) + a1 + 402);
      v49 = 1 << (v42 & 7);
      v42 = v83;
      if ( (v49 & v48) == 0 )
      {
        v50 = (_WORD *)(*(_QWORD *)(a1 + 392) + 2 * v83);
        if ( *v50 > 1u )
          --*v50;
      }
      v27 = v76;
    }
  }
  v51 = v80 >> 4;
  v52 = v80 >> 4;
  v87 = v80 >> 4;
  if ( v80 >> 4 <= v42 )
  {
    if ( v51 + 1 == v42 )
    {
      v52 = v51 + 1;
      v87 = v51 + 1;
      v80 += 16LL;
    }
    if ( *v36 == 4 )
    {
      *v39 = v80 - v4;
      goto LABEL_121;
    }
    if ( (v11[10] & 2) != 0 )
    {
      v109 = &v11[16 * *v39 - 16];
      v92 = (__int64)&v11[16 * v52 - 16];
      *(_OWORD *)v92 = *(_OWORD *)v109;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v52 = v87;
        v42 = v83;
        *(_WORD *)(v92 + 2) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v92 + 2), v83, v87, 4);
        LOBYTE(v27) = v76;
        goto LABEL_121;
      }
    }
    else
    {
      v98 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v98 & 0x800) != 0 )
      {
        v52 = v87;
        v11[11] = RtlpUpdateTagEntry(a1, (unsigned __int8)v11[11], *v39, v87, 4);
        v42 = v83;
        LOBYTE(v27) = v76;
        goto LABEL_121;
      }
    }
    v42 = v83;
    v52 = v87;
    LOBYTE(v27) = v76;
LABEL_121:
    if ( a4 > v85 )
    {
      if ( (v27 & 8) != 0 )
      {
        v4 = a4;
        memset(&Src[v85], 0, a4 - v85);
LABEL_136:
        if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
        {
          *(_QWORD *)&v11[v4 + 16] = 0xABABABABABABABABuLL;
          *(_QWORD *)&v11[v4 + 24] = 0xABABABABABABABABuLL;
        }
        v56 = v52 == v42;
        v57 = v93;
        if ( !v56 )
        {
          v58 = (unsigned __int8)v11[10];
          LOBYTE(v58) = v58 & 0xFE;
          if ( *v93 == 4 )
          {
            v59 = v11 - 48;
            v99 = NtCurrentPeb()->NtGlobalFlag;
            v52 = v87;
            if ( (v99 & 0x800) != 0 )
              *((_WORD *)v59 + 9) = RtlpUpdateTagEntry(a1, *((unsigned __int16 *)v59 + 9), v83, v87, 5);
            v95[0] = &v59[v80];
            v90 = 16 * v83 - v80;
            v89 = RtlpSecMemFreeVirtualMemory(v80, v95, &v90, 0x4000LL);
            if ( v89 >= 0 )
            {
              *((_QWORD *)v59 + 4) -= v90;
              v11 = v79;
            }
            else
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v95[0], v90, v89);
              RtlpBreakPointHeap();
              v11 = v79;
              v52 = v87;
            }
          }
          else
          {
            v60 = (unsigned __int16)*v91 - (unsigned __int16)v52;
            v105 = v60;
            *v91 = v52;
            v61 = (*(unsigned __int8 *)(a1 + 112) >> 6) & 1;
            v62 = v11[14];
            if ( v62 )
              v63 = ((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v62 << 16) + 0x10000;
            else
              v63 = a1;
            v104 = v63;
            RtlpCreateSplitBlock(a1, v63, (_DWORD)v11 + 16 * v52, v58, v61, v52, v60);
          }
        }
        if ( *v57 != 4 )
        {
          v64 = v80 - v4;
          v93 = (_BYTE *)(v80 - v4);
          if ( v80 - v4 >= 0x3F )
          {
            *(_QWORD *)&v11[16 * v52] = v64;
            *v57 = 63;
          }
          else
          {
            *v57 = v64;
          }
        }
        goto LABEL_192;
      }
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        v53 = v85 & 3;
        v102 = v53;
        if ( (v85 & 3) != 0 )
        {
          v53 = 4 - v53;
          v102 = v53;
        }
        v4 = a4;
        if ( a4 <= v53 + v85 )
          goto LABEL_136;
        if ( ((a4 - v53 - v85) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
          goto LABEL_136;
        v54 = (__int64)&v11[v53 + 16 + v85];
        v103 = v54;
        v55 = ((a4 - v53 - v85) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v94 = v55;
        if ( !v55 )
          goto LABEL_136;
        if ( (v54 & 4) != 0 )
        {
          *(_DWORD *)v54 = -1163005939;
          v94 = --v55;
          if ( !v55 )
            goto LABEL_136;
          v54 += 4LL;
          v103 = v54;
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
  if ( *v36 == 4 || !(unsigned __int8)RtlpGrowBlockInPlace(a1, v27, (_DWORD)v11, v4, v80 >> 4) )
  {
    if ( (v27 & 0x10) != 0 )
    {
      Src = 0LL;
      goto LABEL_192;
    }
    v65 = v27 & 0xC003FFFF;
    v76 = v65;
    v66 = v11[10];
    if ( (v66 & 2) != 0 )
    {
      v65 = (16 * (v66 & 0xE0 | 0x10)) | v65 & 0xFFFFF1FF;
      v76 = v65;
      v67 = *(_WORD *)(RtlpGetExtraStuffPointer(v11) + 2);
      if ( v67 > 0 )
      {
        v65 |= (unsigned __int16)v67 << 18;
        v76 = v65;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v68 = v11[11];
      if ( v68 )
      {
        v65 |= v68 << 18;
        v76 = v65;
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11[11] = v11[8] ^ v11[9] ^ v11[10];
      *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    v88 = 0LL;
    v69 = (char *)RtlAllocateHeap(a1, v65, v4);
    if ( !v69 )
    {
LABEL_191:
      v96 = Src;
      Src = v69;
      goto LABEL_192;
    }
    v70 = v69 - 16;
    _m_prefetchw(v69 - 16);
    if ( *(v69 - 1) == 5 )
      v70 -= 16 * (unsigned __int8)v70[14];
    v95[1] = v70;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)v70 + 2) ^= *(_DWORD *)(a1 + 136);
      if ( v70[11] != ((unsigned __int8)v70[8] ^ (unsigned __int8)(v70[9] ^ v70[10])) )
        RtlpAnalyzeHeapFailure(a1, v70);
    }
    if ( (v70[10] & 2) != 0 )
    {
      ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v70);
      v92 = (__int64)ExtraStuffPointer;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
          RtlpAnalyzeHeapFailure(a1, v11);
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
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_186;
      v11[11] = v11[8] ^ v11[9] ^ v11[10];
      *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v70[11] = v70[8] ^ v70[9] ^ v70[10];
      *((_DWORD *)v70 + 2) ^= *(_DWORD *)(a1 + 136);
    }
LABEL_186:
    v88 = 0LL;
    if ( v77 )
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v77 = 0;
      v65 &= ~1u;
      v76 = v65;
    }
    v72 = v85;
    v4 = a4;
    if ( a4 < v85 )
      v72 = a4;
    memmove(v69, Src, v72);
    RtlFreeHeap(a1, v65, Src);
    goto LABEL_191;
  }
LABEL_192:
  v6 = a1;
LABEL_194:
  if ( v88 && *(_DWORD *)(a1 + 124) )
  {
    v88[11] = v88[8] ^ v88[9] ^ v88[10];
    *((_DWORD *)v88 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v77 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v73 = Src;
      if ( Src )
      {
        if ( (v76 & 0x800000) == 0 )
        {
          v119 = 4130;
          v120 = v6;
          v121 = Src;
          if ( v96 )
            v73 = v96;
          v122 = v73;
          v124 = v85;
          v123 = v4;
          v125 = 3;
          NtTraceEvent(MEMORY[0x7FFE0380], 132098LL, 44LL, v118);
        }
      }
    }
  }
  return (__int64)Src;
}
