/*
 * XREFs of RtlpReAllocateHeap @ 0x180023F60
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlTryEnterCriticalSection @ 0x1800510F0 (RtlTryEnterCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGrowBlockInPlace @ 0x180056578 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007BE7C (RtlpUpdateHeapRates.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800E1BE4 (RtlpUpdateTagEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpReAllocateHeap(__int64 Src, int a2, char *a3, unsigned __int64 a4)
{
  __int64 v7; // r14
  char *v8; // rbx
  unsigned __int64 v9; // r8
  char *v10; // rcx
  unsigned __int64 v11; // rdi
  int *v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  char v15; // dl
  unsigned __int64 v16; // rdx
  size_t v17; // rdi
  void *Heap; // r14
  int v20; // r15d
  char v21; // di
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 *i; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  _BYTE *v29; // r8
  char v30; // dl
  unsigned __int16 *v31; // r10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  int v36; // r9d
  int v37; // ecx
  __int64 v38; // r10
  char v39; // cl
  unsigned __int8 v40; // al
  unsigned int v41; // r11d
  unsigned __int64 v42; // rax
  unsigned int v43; // r15d
  char v44; // al
  char *v45; // r9
  char *v46; // rdi
  size_t v47; // r8
  bool v48; // al
  _WORD *v49; // rdx
  _QWORD *ExtraStuffPointer; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int16 v53; // cx
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // ax
  int v56; // edx
  struct _TEB *v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r9
  size_t v61; // rax
  __int64 v62; // r9
  unsigned __int64 v63; // r10
  char *v64; // r15
  __int64 v65; // rcx
  unsigned __int8 v66; // al
  struct _TEB *v67; // rdi
  unsigned int v68; // ecx
  struct _TEB *v69; // rdi
  NTSTATUS v70; // ecx
  int v71; // eax
  unsigned __int16 v72; // ax
  char *v73; // rdi
  unsigned int v75; // [rsp+40h] [rbp-218h]
  int v76; // [rsp+40h] [rbp-218h]
  char v77; // [rsp+48h] [rbp-210h]
  char *v78; // [rsp+50h] [rbp-208h]
  unsigned __int64 v79; // [rsp+58h] [rbp-200h]
  char *Srca; // [rsp+60h] [rbp-1F8h]
  size_t Size; // [rsp+68h] [rbp-1F0h]
  size_t Sizea; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v83; // [rsp+70h] [rbp-1E8h]
  char *v84; // [rsp+78h] [rbp-1E0h]
  unsigned __int64 v85; // [rsp+80h] [rbp-1D8h]
  unsigned __int64 v86; // [rsp+90h] [rbp-1C8h]
  int v87; // [rsp+98h] [rbp-1C0h]
  char *v88; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v89; // [rsp+B8h] [rbp-1A0h]
  int v90; // [rsp+C0h] [rbp-198h]
  _QWORD *v91; // [rsp+D8h] [rbp-180h]
  __int64 v92; // [rsp+D8h] [rbp-180h]
  _WORD *v93; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v94; // [rsp+F0h] [rbp-168h] BYREF
  int v95; // [rsp+F8h] [rbp-160h]
  int v96; // [rsp+FCh] [rbp-15Ch]
  unsigned __int64 v97; // [rsp+100h] [rbp-158h]
  char *v98; // [rsp+108h] [rbp-150h] BYREF
  char *v99; // [rsp+110h] [rbp-148h]
  char *v100; // [rsp+118h] [rbp-140h]
  __int64 v101; // [rsp+120h] [rbp-138h]
  __int64 v102; // [rsp+128h] [rbp-130h]
  _DWORD *v103; // [rsp+130h] [rbp-128h]
  unsigned int v104; // [rsp+138h] [rbp-120h]
  unsigned int NtGlobalFlag; // [rsp+13Ch] [rbp-11Ch]
  unsigned int v106; // [rsp+140h] [rbp-118h]
  __int64 v107; // [rsp+148h] [rbp-110h]
  int v108; // [rsp+150h] [rbp-108h]
  size_t v109; // [rsp+158h] [rbp-100h]
  char *v110; // [rsp+160h] [rbp-F8h]
  char v111[6]; // [rsp+170h] [rbp-E8h] BYREF
  __int16 v112; // [rsp+176h] [rbp-E2h]
  _DWORD *v113; // [rsp+190h] [rbp-C8h]
  void *v114; // [rsp+198h] [rbp-C0h]
  char *v115; // [rsp+1A0h] [rbp-B8h]
  unsigned __int64 v116; // [rsp+1A8h] [rbp-B0h]
  size_t v117; // [rsp+1B0h] [rbp-A8h]
  int v118; // [rsp+1B8h] [rbp-A0h]
  char v119[6]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v120; // [rsp+1C6h] [rbp-92h]
  _DWORD *v121; // [rsp+1E0h] [rbp-78h]
  char *v122; // [rsp+1E8h] [rbp-70h]
  char *v123; // [rsp+1F0h] [rbp-68h]
  unsigned __int64 v124; // [rsp+1F8h] [rbp-60h]
  size_t v125; // [rsp+200h] [rbp-58h]
  int v126; // [rsp+208h] [rbp-50h]

  Srca = a3;
  v7 = 0LL;
  v88 = 0LL;
  v77 = 0;
  v99 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v69 = NtCurrentTeb();
    v70 = 0;
LABEL_219:
    v69->LastErrorValue = RtlNtStatusToDosError(v70);
    return 0LL;
  }
  v8 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v9 = (unsigned __int64)v8;
  if ( v8[15] == 5 )
  {
    v9 = (unsigned __int64)&v8[-16 * (unsigned __int8)v8[14]];
    v78 = (char *)v9;
  }
  else
  {
    v78 = v8;
  }
  if ( *(_BYTE *)(Src + 378) == 2 )
  {
    if ( *(_QWORD *)(Src + 368) )
    {
      v10 = (char *)(v9 + 15);
      if ( *(char *)(v9 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v11 = v9 >> 4;
          v12 = (int *)(v9 + 8);
          if ( *(_WORD *)(v9 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (v9 >> 4) ^ Src) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)(v9
                            - ((*(_DWORD *)(v9 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v9 >> 4) ^ (unsigned int)Src) >> 12));
          v14 = *(unsigned __int16 *)(v13 + 36);
          v15 = *v10;
          if ( *v10 == 5 )
          {
            v16 = *((unsigned __int16 *)v78 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(Src + 140);
          }
          else if ( (v15 & 0x40) != 0 )
          {
            v16 = *(unsigned __int16 *)&v78[16 * (v15 & 0x3F) + 12];
          }
          else if ( (v15 & 0x3F) == 0x3F )
          {
            if ( v15 >= 0 )
            {
              if ( *(_DWORD *)(Src + 124) )
              {
                v71 = *v12;
                v108 = v71;
                if ( (v71 & *(_DWORD *)(Src + 124)) != 0 )
                  v108 = *(_DWORD *)(Src + 136) ^ v71;
                v72 = v108;
              }
              else
              {
                v72 = *(_WORD *)v12;
              }
              v68 = v72;
            }
            else
            {
              if ( !(*(_WORD *)v12 ^ (unsigned __int16)(RtlpLFHKey ^ v11 ^ Src)) )
                v7 = *(_QWORD *)&v78[-((*v12 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v11 ^ (unsigned int)Src) >> 12)];
              v68 = *(unsigned __int16 *)(v7 + 36);
            }
            v16 = *(_QWORD *)&v78[16 * v68];
          }
          else
          {
            v16 = *v10 & 0x3F;
          }
          v17 = 16 * v14 - v16;
          Size = v17;
          v75 = a2 & 0xC003FFFF;
          Heap = (void *)RtlAllocateHeap(Src, v75, a4);
          if ( Heap )
          {
            if ( a4 < v17 )
              v17 = a4;
            memmove(Heap, Srca, v17);
            RtlFreeHeap(Src, v75, (unsigned __int64)Srca);
          }
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && Heap && (v75 & 0x800000) == 0 )
          {
            v112 = 4130;
            v113 = (_DWORD *)Src;
            v114 = Heap;
            v115 = Srca;
            v117 = Size;
            v116 = a4;
            v118 = 2;
            NtTraceEvent(MEMORY[0x7FFE0380], 132098LL, 44LL, v111);
          }
          return (__int64)Heap;
        }
        return 0LL;
      }
    }
  }
  if ( v9 == Src )
  {
    RtlpLogHeapFailure(9, Src, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  v20 = *(_DWORD *)(Src + 116) | a2;
  v76 = v20;
  if ( (v20 & 0x61000000) != 0 && (v20 & 0x10000000) == 0 )
    return RtlDebugReAllocateHeap((void *)Src);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v69 = NtCurrentTeb();
    v70 = -1073741801;
    goto LABEL_219;
  }
  v21 = 1;
  if ( a4 )
    v22 = a4;
  else
    v22 = 1LL;
  v23 = *(_QWORD *)(Src + 264) & (v22 + *(_QWORD *)(Src + 256));
  if ( v23 < 0x20 )
    v23 = 32LL;
  v79 = v23;
  Sizea = 0LL;
  if ( (v20 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(Src + 352)) )
    {
      ++*(_DWORD *)(Src + 576);
    }
    else
    {
      if ( byte_180145248 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v67 = NtCurrentTeb();
        v67->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_181;
      }
      RtlEnterCriticalSection(*(_QWORD *)(Src + 352));
      RtlpUpdateHeapRates(Src, 1LL);
    }
    v77 = 1;
    v20 ^= 1u;
    v76 = v20;
  }
  _m_prefetchw(v8);
  if ( v8[15] == 5 )
    v8 -= 16 * (unsigned __int8)v8[14];
  if ( *(_DWORD *)(Src + 124) )
  {
    *((_DWORD *)v8 + 2) ^= *(_DWORD *)(Src + 136);
    if ( v8[11] != ((unsigned __int8)v8[8] ^ (unsigned __int8)(v8[9] ^ v8[10])) )
      RtlpAnalyzeHeapFailure(Src, v8);
  }
  v88 = v8;
  v24 = *((unsigned __int16 *)v8 + 4);
  for ( i = *(__int64 **)(Src + 312); ; i = (__int64 *)*i )
  {
    v26 = *((unsigned int *)i + 2);
    if ( v24 < v26 )
      break;
    if ( !*i )
    {
      v24 = (unsigned int)(v26 - 1);
      break;
    }
  }
  v27 = (unsigned int)(v26 - 1);
  if ( v24 < v27 || *i && v24 == v27 )
  {
    v28 = v24 - *((unsigned int *)i + 6);
    if ( *((_DWORD *)i + 3) )
      v28 *= 2LL;
    v101 = i[6] + 8 * v28;
  }
  else
  {
    v101 = 0LL;
  }
  if ( (v20 & 0x3C000100) != 0 || *(_QWORD *)(Src + 328) || (v8[10] & 2) != 0 )
    v79 += 16LL;
  v29 = v8 + 15;
  v30 = v8[15];
  if ( (v30 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v57 = NtCurrentTeb();
    v57->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_181;
  }
  v31 = (unsigned __int16 *)(v8 + 8);
  v93 = v8 + 8;
  if ( v30 == 4 )
  {
    if ( *(_DWORD *)(Src + 124) )
    {
      v90 = *(_DWORD *)v31;
      if ( (*(_DWORD *)v31 & *(_DWORD *)(Src + 124)) != 0 )
        v90 = *(_DWORD *)v31 ^ *(_DWORD *)(Src + 136);
      v54 = v90;
      v20 = v76;
    }
    else
    {
      v54 = *v31;
    }
    Sizea = *((_QWORD *)v8 - 2) - v54;
    v32 = (Sizea + *v31) >> 4;
    v83 = v32;
    v79 = (v79 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v32 = *v31;
    v89 = v32;
    v83 = v32;
    if ( v30 == 5 )
    {
      v33 = *((unsigned __int16 *)v8 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(Src + 140);
    }
    else if ( (v30 & 0x40) != 0 )
    {
      v33 = *(unsigned __int16 *)&v8[16 * (v30 & 0x3F) + 12];
    }
    else if ( (v30 & 0x3F) == 0x3F )
    {
      if ( v30 < 0 )
      {
        if ( *v31 ^ (unsigned __int16)(RtlpLFHKey ^ Src ^ ((unsigned __int64)v8 >> 4)) )
          v58 = 0LL;
        else
          v58 = *(_QWORD *)&v8[-((*(_DWORD *)v31 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)Src ^ (unsigned int)((unsigned __int64)v8 >> 4)) >> 12)];
        v56 = *(unsigned __int16 *)(v58 + 36);
        v95 = v56;
        v89 = v32;
        v20 = v76;
      }
      else
      {
        if ( *(_DWORD *)(Src + 124) )
        {
          v87 = *(_DWORD *)v31;
          if ( (*(_DWORD *)v31 & *(_DWORD *)(Src + 124)) != 0 )
            v87 = *(_DWORD *)v31 ^ *(_DWORD *)(Src + 136);
          v55 = v87;
          v32 = *v31;
          v89 = v32;
          v20 = v76;
        }
        else
        {
          v55 = v32;
        }
        v56 = v55;
        v95 = v55;
      }
      v33 = *(_QWORD *)&v8[16 * v56];
    }
    else
    {
      v33 = v8[15] & 0x3F;
    }
    Sizea = 16 * v32 - v33;
    if ( v32 >= *(unsigned __int16 *)(Src + 392) )
      goto LABEL_54;
    v48 = ((unsigned __int8)(1 << (v32 & 7)) & *(_BYTE *)((v32 >> 3) + Src + 394)) != 0;
    v32 = v83;
    if ( !v48 )
    {
      v89 = v83;
      v49 = (_WORD *)(*(_QWORD *)(Src + 384) + 2 * v83);
      if ( *v49 > 1u )
        --*v49;
      v20 = v76;
      goto LABEL_54;
    }
    v20 = v76;
  }
  v89 = v32;
LABEL_54:
  v34 = v79 >> 4;
  v86 = v79 >> 4;
  v85 = v79 >> 4;
  if ( v79 >> 4 <= v32 )
  {
    v35 = v34 + 1;
    if ( v34 + 1 == v32 )
    {
      ++v34;
      v86 = v35;
      v85 = v35;
      v79 += 16LL;
    }
    if ( *v29 == 4 )
    {
      *v31 = v79 - a4;
LABEL_62:
      if ( a4 <= Sizea )
        goto LABEL_63;
      if ( (v20 & 8) != 0 )
      {
        memset(&Srca[Sizea], 0, a4 - Sizea);
        v34 = v86;
        v29 = v8 + 15;
        goto LABEL_63;
      }
      if ( (*(_BYTE *)(Src + 112) & 0x40) != 0 )
      {
        v61 = Sizea & 3;
        v109 = v61;
        if ( (Sizea & 3) != 0 )
        {
          v61 = 4 - v61;
          v109 = v61;
        }
        if ( a4 > v61 + Sizea && ((a4 - v61 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          v62 = (__int64)&v8[v61 + 16 + Sizea];
          v102 = v62;
          v63 = ((a4 - v61 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
          v97 = v63;
          if ( v63 )
          {
            if ( (v62 & 4) != 0 )
            {
              *(_DWORD *)v62 = -1163005939;
              v97 = --v63;
              if ( !v63 )
                goto LABEL_63;
              v62 += 4LL;
              v102 = v62;
            }
            memset64((void *)v62, 0xBAADF00DBAADF00DuLL, v63 >> 1);
            v21 = 1;
            if ( (v63 & 1) != 0 )
              *(_DWORD *)(v62 + 4 * v63 - 4) = -1163005939;
          }
        }
      }
LABEL_63:
      if ( (*(_BYTE *)(Src + 112) & 0x20) != 0 )
      {
        *(_QWORD *)&v8[a4 + 16] = 0xABABABABABABABABuLL;
        *(_QWORD *)&v8[a4 + 24] = 0xABABABABABABABABuLL;
      }
      if ( v34 == v89 )
        goto LABEL_72;
      v36 = (unsigned __int8)v8[10];
      LOBYTE(v36) = v36 & 0xFE;
      if ( *v29 == 4 )
      {
        v64 = v8 - 48;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        v65 = NtGlobalFlag;
        v86 = v85;
        if ( (NtGlobalFlag & 0x800) != 0 )
          *((_WORD *)v64 + 9) = RtlpUpdateTagEntry(Src, *((unsigned __int16 *)v64 + 9), v83, v85, 5);
        v98 = &v64[v79];
        v94 = 16 * v83 - v79;
        v96 = RtlpSecMemFreeVirtualMemory(v65, &v98, &v94, 0x4000LL);
        if ( v96 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v98, v94, v96);
          RtlpBreakPointHeap(0LL);
          v34 = v85;
          goto LABEL_71;
        }
        *((_QWORD *)v64 + 4) -= v94;
      }
      else
      {
        v37 = (unsigned __int16)*v93 - (unsigned __int16)v34;
        v38 = v37;
        v107 = v37;
        *v93 = v34;
        v39 = (*(_BYTE *)(Src + 112) & 0x40) != 0;
        v40 = v8[14];
        if ( v40 )
        {
          v41 = ((unsigned int)v8 & 0xFFFF0000) - (v40 << 16) + 0x10000;
          v103 = (_DWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v40 << 16) + 0x10000);
        }
        else
        {
          v41 = Src;
          v103 = (_DWORD *)Src;
        }
        RtlpCreateSplitBlock(Src, v41, (_DWORD)v8 + 16 * v34, v36, v39, v34, v38);
      }
      v34 = v86;
LABEL_71:
      v29 = v8 + 15;
LABEL_72:
      if ( *v29 != 4 )
        v21 = 0;
      if ( !v21 )
      {
        v42 = v79 - a4;
        if ( v79 - a4 >= 0x3F )
        {
          *(_QWORD *)&v8[16 * v34] = v42;
          *v29 = 63;
        }
        else
        {
          *v29 = v42;
        }
      }
      goto LABEL_181;
    }
    if ( (v8[10] & 2) != 0 )
    {
      v110 = &v8[16 * *v31 - 16];
      v92 = (__int64)&v8[16 * v34 - 16];
      *(_OWORD *)v92 = *(_OWORD *)v110;
      v106 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v106 & 0x800) != 0 )
      {
        v86 = v85;
        v89 = v83;
        *(_WORD *)(v92 + 2) = RtlpUpdateTagEntry(Src, *(unsigned __int16 *)(v92 + 2), v83, v85, 4);
        v21 = 1;
        v34 = v59;
        v29 = v8 + 15;
        goto LABEL_61;
      }
    }
    else
    {
      v104 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v104 & 0x800) != 0 )
      {
        v86 = v85;
        v8[11] = RtlpUpdateTagEntry(Src, (unsigned __int8)v8[11], *v31, v85, 4);
        v89 = v83;
        v34 = v60;
        v29 = v8 + 15;
        goto LABEL_61;
      }
    }
    v89 = v83;
    v34 = v85;
    v86 = v85;
LABEL_61:
    LOBYTE(v20) = v76;
    goto LABEL_62;
  }
  if ( *v29 != 4 )
    v21 = 0;
  if ( !v21 && (unsigned __int8)RtlpGrowBlockInPlace(Src, v20, (_DWORD)v8, a4, v79 >> 4) )
    goto LABEL_181;
  if ( (v20 & 0x10) == 0 )
  {
    v43 = v20 & 0xC003FFFF;
    v76 = v43;
    v44 = v8[10];
    if ( (v44 & 2) != 0 )
    {
      v43 = (16 * (v44 & 0xE0 | 0x10)) | v43 & 0xFFFFF1FF;
      v76 = v43;
      v53 = *(_WORD *)(RtlpGetExtraStuffPointer(v8) + 2);
      if ( v53 > 0 )
      {
        v43 |= (unsigned __int16)v53 << 18;
        v76 = v43;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v66 = v8[11];
      if ( v66 )
      {
        v43 |= v66 << 18;
        v76 = v43;
      }
    }
    if ( *(_DWORD *)(Src + 124) )
    {
      v8[11] = v8[8] ^ v8[9] ^ v8[10];
      *((_DWORD *)v8 + 2) ^= *(_DWORD *)(Src + 136);
    }
    v88 = 0LL;
    v45 = (char *)RtlAllocateHeap(Src, v43, a4);
    v84 = v45;
    if ( !v45 )
      goto LABEL_101;
    v46 = v45 - 16;
    _m_prefetchw(v45 - 16);
    if ( *(v45 - 1) == 5 )
      v46 -= 16 * (unsigned __int8)v46[14];
    v100 = v46;
    if ( *(_DWORD *)(Src + 124) )
    {
      *((_DWORD *)v46 + 2) ^= *(_DWORD *)(Src + 136);
      if ( v46[11] != ((unsigned __int8)v46[8] ^ (unsigned __int8)(v46[9] ^ v46[10])) )
      {
        RtlpAnalyzeHeapFailure(Src, v46);
        v45 = v84;
      }
    }
    if ( (v46[10] & 2) != 0 )
    {
      ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v46);
      v91 = ExtraStuffPointer;
      if ( *(_DWORD *)(Src + 124) )
      {
        *((_DWORD *)v8 + 2) ^= *(_DWORD *)(Src + 136);
        if ( v8[11] != ((unsigned __int8)v8[8] ^ (unsigned __int8)(v8[9] ^ v8[10])) )
        {
          RtlpAnalyzeHeapFailure(Src, v8);
          v45 = v84;
          ExtraStuffPointer = v91;
        }
      }
      if ( (v8[10] & 2) != 0 )
      {
        v51 = RtlpGetExtraStuffPointer(v8);
        *(_QWORD *)(v52 + 8) = *(_QWORD *)(v51 + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
        ExtraStuffPointer[1] = 0LL;
      }
      if ( !*(_DWORD *)(Src + 124) )
        goto LABEL_96;
      v8[11] = v8[8] ^ v8[9] ^ v8[10];
      *((_DWORD *)v8 + 2) ^= *(_DWORD *)(Src + 136);
    }
    if ( *(_DWORD *)(Src + 124) )
    {
      v46[11] = v46[8] ^ v46[9] ^ v46[10];
      *((_DWORD *)v46 + 2) ^= *(_DWORD *)(Src + 136);
    }
LABEL_96:
    v88 = 0LL;
    if ( v77 )
    {
      RtlLeaveCriticalSection(*(_QWORD *)(Src + 352));
      v77 = 0;
      v43 &= ~1u;
      v76 = v43;
      v45 = v84;
    }
    if ( a4 < Sizea )
      v47 = a4;
    else
      v47 = Sizea;
    memmove(v45, Srca, v47);
    RtlFreeHeap(Src, v43, (unsigned __int64)Srca);
    v45 = v84;
LABEL_101:
    v99 = Srca;
    Srca = v45;
    goto LABEL_181;
  }
  Srca = 0LL;
LABEL_181:
  if ( v88 && *(_DWORD *)(Src + 124) )
  {
    v88[11] = v88[8] ^ v88[9] ^ v88[10];
    *((_DWORD *)v88 + 2) ^= *(_DWORD *)(Src + 136);
  }
  if ( v77 )
    RtlLeaveCriticalSection(*(_QWORD *)(Src + 352));
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v73 = Srca;
      if ( Srca )
      {
        if ( (v76 & 0x800000) == 0 )
        {
          v120 = 4130;
          v121 = (_DWORD *)Src;
          v122 = Srca;
          if ( v99 )
            v73 = v99;
          v123 = v73;
          v125 = Sizea;
          v124 = a4;
          v126 = 3;
          NtTraceEvent(MEMORY[0x7FFE0380], 132098LL, 44LL, v119);
        }
      }
    }
  }
  return (__int64)Srca;
}
