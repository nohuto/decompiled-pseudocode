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

char *__fastcall RtlpReAllocateHeap(unsigned __int16 *BaseAddress, int a2, char *a3, SIZE_T a4)
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
  PVOID Heap; // r14
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
  int v36; // ecx
  __int64 v37; // r10
  char v38; // cl
  unsigned __int8 v39; // al
  unsigned __int64 v40; // rax
  ULONG v41; // r15d
  char v42; // al
  char *v43; // r9
  char *v44; // rdi
  size_t v45; // r8
  bool v46; // al
  _WORD *v47; // rdx
  _QWORD *ExtraStuffPointer; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int16 v51; // cx
  unsigned __int16 v52; // ax
  unsigned __int16 v53; // ax
  int v54; // edx
  struct _TEB *v55; // rdi
  __int64 v56; // rax
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r9
  size_t v59; // rax
  __int64 v60; // r9
  unsigned __int64 v61; // r10
  char *v62; // r15
  __int64 v63; // rcx
  unsigned __int8 v64; // al
  struct _TEB *v65; // rdi
  unsigned int v66; // ecx
  struct _TEB *v67; // rdi
  NTSTATUS v68; // ecx
  int v69; // eax
  unsigned __int16 v70; // ax
  char *v71; // rdi
  unsigned int Flagsa; // [rsp+40h] [rbp-218h]
  ULONG Flagsb; // [rsp+40h] [rbp-218h]
  char v75; // [rsp+48h] [rbp-210h]
  char *v76; // [rsp+50h] [rbp-208h]
  unsigned __int64 v77; // [rsp+58h] [rbp-200h]
  char *Src; // [rsp+60h] [rbp-1F8h]
  size_t Size; // [rsp+68h] [rbp-1F0h]
  size_t Sizea; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v81; // [rsp+70h] [rbp-1E8h]
  char *v82; // [rsp+78h] [rbp-1E0h]
  __int16 v83[4]; // [rsp+80h] [rbp-1D8h]
  unsigned __int64 v84; // [rsp+90h] [rbp-1C8h]
  int v85; // [rsp+98h] [rbp-1C0h]
  char *v86; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-1A0h]
  int v88; // [rsp+C0h] [rbp-198h]
  _QWORD *v89; // [rsp+D8h] [rbp-180h]
  __int64 v90; // [rsp+D8h] [rbp-180h]
  _WORD *v91; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v92; // [rsp+F0h] [rbp-168h] BYREF
  int v93; // [rsp+F8h] [rbp-160h]
  int v94; // [rsp+FCh] [rbp-15Ch]
  unsigned __int64 v95; // [rsp+100h] [rbp-158h]
  char *v96; // [rsp+108h] [rbp-150h] BYREF
  char *v97; // [rsp+110h] [rbp-148h]
  char *v98; // [rsp+118h] [rbp-140h]
  __int64 v99; // [rsp+120h] [rbp-138h]
  __int64 v100; // [rsp+128h] [rbp-130h]
  unsigned __int16 *v101; // [rsp+130h] [rbp-128h]
  unsigned int v102; // [rsp+138h] [rbp-120h]
  unsigned int NtGlobalFlag; // [rsp+13Ch] [rbp-11Ch]
  unsigned int v104; // [rsp+140h] [rbp-118h]
  __int64 v105; // [rsp+148h] [rbp-110h]
  int v106; // [rsp+150h] [rbp-108h]
  size_t v107; // [rsp+158h] [rbp-100h]
  char *v108; // [rsp+160h] [rbp-F8h]
  char Fields[6]; // [rsp+170h] [rbp-E8h] BYREF
  __int16 v110; // [rsp+176h] [rbp-E2h]
  unsigned __int16 *v111; // [rsp+190h] [rbp-C8h]
  PVOID v112; // [rsp+198h] [rbp-C0h]
  char *v113; // [rsp+1A0h] [rbp-B8h]
  SIZE_T v114; // [rsp+1A8h] [rbp-B0h]
  size_t v115; // [rsp+1B0h] [rbp-A8h]
  int v116; // [rsp+1B8h] [rbp-A0h]
  char v117[6]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v118; // [rsp+1C6h] [rbp-92h]
  unsigned __int16 *v119; // [rsp+1E0h] [rbp-78h]
  char *v120; // [rsp+1E8h] [rbp-70h]
  char *v121; // [rsp+1F0h] [rbp-68h]
  SIZE_T v122; // [rsp+1F8h] [rbp-60h]
  size_t v123; // [rsp+200h] [rbp-58h]
  int v124; // [rsp+208h] [rbp-50h]

  Src = a3;
  v7 = 0LL;
  v86 = 0LL;
  v75 = 0;
  v97 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v67 = NtCurrentTeb();
    v68 = 0;
LABEL_219:
    v67->LastErrorValue = RtlNtStatusToDosError(v68);
    return 0LL;
  }
  v8 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v9 = (unsigned __int64)v8;
  if ( v8[15] == 5 )
  {
    v9 = (unsigned __int64)&v8[-16 * (unsigned __int8)v8[14]];
    v76 = (char *)v9;
  }
  else
  {
    v76 = v8;
  }
  if ( *((_BYTE *)BaseAddress + 378) == 2 )
  {
    if ( *((_QWORD *)BaseAddress + 46) )
    {
      v10 = (char *)(v9 + 15);
      if ( *(char *)(v9 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v11 = v9 >> 4;
          v12 = (int *)(v9 + 8);
          if ( *(_WORD *)(v9 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (v9 >> 4) ^ (unsigned __int16)BaseAddress) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)(v9
                            - ((*(_DWORD *)(v9 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v9 >> 4) ^ (unsigned int)BaseAddress) >> 12));
          v14 = *(unsigned __int16 *)(v13 + 36);
          v15 = *v10;
          if ( *v10 == 5 )
          {
            v16 = *((unsigned __int16 *)v76 + 6) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v15 & 0x40) != 0 )
          {
            v16 = *(unsigned __int16 *)&v76[16 * (v15 & 0x3F) + 12];
          }
          else if ( (v15 & 0x3F) == 0x3F )
          {
            if ( v15 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v69 = *v12;
                v106 = v69;
                if ( (v69 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v106 = *((_DWORD *)BaseAddress + 34) ^ v69;
                v70 = v106;
              }
              else
              {
                v70 = *(_WORD *)v12;
              }
              v66 = v70;
            }
            else
            {
              if ( !(*(_WORD *)v12 ^ (unsigned __int16)(RtlpLFHKey ^ v11 ^ (unsigned __int16)BaseAddress)) )
                v7 = *(_QWORD *)&v76[-((*v12 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v11 ^ (unsigned int)BaseAddress) >> 12)];
              v66 = *(unsigned __int16 *)(v7 + 36);
            }
            v16 = *(_QWORD *)&v76[16 * v66];
          }
          else
          {
            v16 = *v10 & 0x3F;
          }
          v17 = 16 * v14 - v16;
          Size = v17;
          Flagsa = a2 & 0xC003FFFF;
          Heap = RtlAllocateHeap(BaseAddress, Flagsa, a4);
          if ( Heap )
          {
            if ( a4 < v17 )
              v17 = a4;
            memmove(Heap, Src, v17);
            RtlFreeHeap(BaseAddress, Flagsa, Src);
          }
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && Heap && (Flagsa & 0x800000) == 0 )
          {
            v110 = 4130;
            v111 = BaseAddress;
            v112 = Heap;
            v113 = Src;
            v115 = Size;
            v114 = a4;
            v116 = 2;
            NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x2Cu, Fields);
          }
          return (char *)Heap;
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int16 *)v9 == BaseAddress )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  v20 = *((_DWORD *)BaseAddress + 29) | a2;
  Flagsb = v20;
  if ( (v20 & 0x61000000) != 0 && (v20 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(BaseAddress);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v67 = NtCurrentTeb();
    v68 = -1073741801;
    goto LABEL_219;
  }
  v21 = 1;
  if ( a4 )
    v22 = a4;
  else
    v22 = 1LL;
  v23 = *((_QWORD *)BaseAddress + 33) & (v22 + *((_QWORD *)BaseAddress + 32));
  if ( v23 < 0x20 )
    v23 = 32LL;
  v77 = v23;
  Sizea = 0LL;
  if ( (v20 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44)) )
    {
      ++*((_DWORD *)BaseAddress + 144);
    }
    else
    {
      if ( byte_180145248 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v65 = NtCurrentTeb();
        v65->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_181;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      RtlpUpdateHeapRates(BaseAddress, 1LL);
    }
    v75 = 1;
    v20 ^= 1u;
    Flagsb = v20;
  }
  _m_prefetchw(v8);
  if ( v8[15] == 5 )
    v8 -= 16 * (unsigned __int8)v8[14];
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *((_DWORD *)v8 + 2) ^= *((_DWORD *)BaseAddress + 34);
    if ( v8[11] != ((unsigned __int8)v8[8] ^ (unsigned __int8)(v8[9] ^ v8[10])) )
      RtlpAnalyzeHeapFailure(BaseAddress, v8);
  }
  v86 = v8;
  v24 = *((unsigned __int16 *)v8 + 4);
  for ( i = (__int64 *)*((_QWORD *)BaseAddress + 39); ; i = (__int64 *)*i )
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
    v99 = i[6] + 8 * v28;
  }
  else
  {
    v99 = 0LL;
  }
  if ( (v20 & 0x3C000100) != 0 || *((_QWORD *)BaseAddress + 41) || (v8[10] & 2) != 0 )
    v77 += 16LL;
  v29 = v8 + 15;
  v30 = v8[15];
  if ( (v30 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v55 = NtCurrentTeb();
    v55->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_181;
  }
  v31 = (unsigned __int16 *)(v8 + 8);
  v91 = v8 + 8;
  if ( v30 == 4 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v88 = *(_DWORD *)v31;
      if ( (*(_DWORD *)v31 & *((_DWORD *)BaseAddress + 31)) != 0 )
        v88 = *(_DWORD *)v31 ^ *((_DWORD *)BaseAddress + 34);
      v52 = v88;
      v20 = Flagsb;
    }
    else
    {
      v52 = *v31;
    }
    Sizea = *((_QWORD *)v8 - 2) - v52;
    v32 = (Sizea + *v31) >> 4;
    v81 = v32;
    v77 = (v77 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v32 = *v31;
    v87 = v32;
    v81 = v32;
    if ( v30 == 5 )
    {
      v33 = *((unsigned __int16 *)v8 + 6) ^ (unsigned __int64)BaseAddress[70];
    }
    else if ( (v30 & 0x40) != 0 )
    {
      v33 = *(unsigned __int16 *)&v8[16 * (v30 & 0x3F) + 12];
    }
    else if ( (v30 & 0x3F) == 0x3F )
    {
      if ( v30 < 0 )
      {
        if ( *v31 ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ ((unsigned __int64)v8 >> 4)) )
          v56 = 0LL;
        else
          v56 = *(_QWORD *)&v8[-((*(_DWORD *)v31 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)((unsigned __int64)v8 >> 4)) >> 12)];
        v54 = *(unsigned __int16 *)(v56 + 36);
        v93 = v54;
        v87 = v32;
        v20 = Flagsb;
      }
      else
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v85 = *(_DWORD *)v31;
          if ( (*(_DWORD *)v31 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v85 = *(_DWORD *)v31 ^ *((_DWORD *)BaseAddress + 34);
          v53 = v85;
          v32 = *v31;
          v87 = v32;
          v20 = Flagsb;
        }
        else
        {
          v53 = v32;
        }
        v54 = v53;
        v93 = v53;
      }
      v33 = *(_QWORD *)&v8[16 * v54];
    }
    else
    {
      v33 = v8[15] & 0x3F;
    }
    Sizea = 16 * v32 - v33;
    if ( v32 >= BaseAddress[196] )
      goto LABEL_54;
    v46 = ((unsigned __int8)(1 << (v32 & 7)) & *((_BYTE *)BaseAddress + (v32 >> 3) + 394)) != 0;
    v32 = v81;
    if ( !v46 )
    {
      v87 = v81;
      v47 = (_WORD *)(*((_QWORD *)BaseAddress + 48) + 2 * v81);
      if ( *v47 > 1u )
        --*v47;
      v20 = Flagsb;
      goto LABEL_54;
    }
    v20 = Flagsb;
  }
  v87 = v32;
LABEL_54:
  v34 = v77 >> 4;
  v84 = v77 >> 4;
  *(_QWORD *)v83 = v77 >> 4;
  if ( v77 >> 4 <= v32 )
  {
    v35 = v34 + 1;
    if ( v34 + 1 == v32 )
    {
      ++v34;
      v84 = v35;
      *(_QWORD *)v83 = v35;
      v77 += 16LL;
    }
    if ( *v29 == 4 )
    {
      *v31 = v77 - a4;
LABEL_62:
      if ( a4 <= Sizea )
        goto LABEL_63;
      if ( (v20 & 8) != 0 )
      {
        memset(&Src[Sizea], 0, a4 - Sizea);
        v34 = v84;
        v29 = v8 + 15;
        goto LABEL_63;
      }
      if ( (BaseAddress[56] & 0x40) != 0 )
      {
        v59 = Sizea & 3;
        v107 = v59;
        if ( (Sizea & 3) != 0 )
        {
          v59 = 4 - v59;
          v107 = v59;
        }
        if ( a4 > v59 + Sizea && ((a4 - v59 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          v60 = (__int64)&v8[v59 + 16 + Sizea];
          v100 = v60;
          v61 = ((a4 - v59 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
          v95 = v61;
          if ( v61 )
          {
            if ( (v60 & 4) != 0 )
            {
              *(_DWORD *)v60 = -1163005939;
              v95 = --v61;
              if ( !v61 )
                goto LABEL_63;
              v60 += 4LL;
              v100 = v60;
            }
            memset64((void *)v60, 0xBAADF00DBAADF00DuLL, v61 >> 1);
            v21 = 1;
            if ( (v61 & 1) != 0 )
              *(_DWORD *)(v60 + 4 * v61 - 4) = -1163005939;
          }
        }
      }
LABEL_63:
      if ( (BaseAddress[56] & 0x20) != 0 )
      {
        *(_QWORD *)&v8[a4 + 16] = 0xABABABABABABABABuLL;
        *(_QWORD *)&v8[a4 + 24] = 0xABABABABABABABABuLL;
      }
      if ( v34 == v87 )
        goto LABEL_72;
      if ( *v29 == 4 )
      {
        v62 = v8 - 48;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        v63 = NtGlobalFlag;
        v84 = *(_QWORD *)v83;
        if ( (NtGlobalFlag & 0x800) != 0 )
          *((_WORD *)v62 + 9) = RtlpUpdateTagEntry(
                                  (_DWORD)BaseAddress,
                                  *((unsigned __int16 *)v62 + 9),
                                  v81,
                                  *(_DWORD *)v83,
                                  5);
        v96 = &v62[v77];
        v92 = 16 * v81 - v77;
        v94 = RtlpSecMemFreeVirtualMemory(v63, &v96, &v92, 0x4000LL);
        if ( v94 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v96, v92, v94);
          RtlpBreakPointHeap(0LL);
          v34 = *(_QWORD *)v83;
          goto LABEL_71;
        }
        *((_QWORD *)v62 + 4) -= v92;
      }
      else
      {
        v36 = (unsigned __int16)*v91 - (unsigned __int16)v34;
        v37 = v36;
        v105 = v36;
        *v91 = v34;
        v38 = (BaseAddress[56] & 0x40) != 0;
        v39 = v8[14];
        if ( v39 )
          v101 = (unsigned __int16 *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFF0000uLL)
                                    - ((unsigned __int64)v39 << 16)
                                    + 0x10000);
        else
          v101 = BaseAddress;
        RtlpCreateSplitBlock(BaseAddress, v38, v34, v37);
      }
      v34 = v84;
LABEL_71:
      v29 = v8 + 15;
LABEL_72:
      if ( *v29 != 4 )
        v21 = 0;
      if ( !v21 )
      {
        v40 = v77 - a4;
        if ( v77 - a4 >= 0x3F )
        {
          *(_QWORD *)&v8[16 * v34] = v40;
          *v29 = 63;
        }
        else
        {
          *v29 = v40;
        }
      }
      goto LABEL_181;
    }
    if ( (v8[10] & 2) != 0 )
    {
      v108 = &v8[16 * *v31 - 16];
      v90 = (__int64)&v8[16 * v34 - 16];
      *(_OWORD *)v90 = *(_OWORD *)v108;
      v104 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v104 & 0x800) != 0 )
      {
        v84 = *(_QWORD *)v83;
        v87 = v81;
        *(_WORD *)(v90 + 2) = RtlpUpdateTagEntry(
                                (_DWORD)BaseAddress,
                                *(unsigned __int16 *)(v90 + 2),
                                v81,
                                *(_DWORD *)v83,
                                4);
        v21 = 1;
        v34 = v57;
        v29 = v8 + 15;
        goto LABEL_61;
      }
    }
    else
    {
      v102 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v102 & 0x800) != 0 )
      {
        v84 = *(_QWORD *)v83;
        v8[11] = RtlpUpdateTagEntry((_DWORD)BaseAddress, (unsigned __int8)v8[11], *v31, *(_DWORD *)v83, 4);
        v87 = v81;
        v34 = v58;
        v29 = v8 + 15;
        goto LABEL_61;
      }
    }
    v87 = v81;
    v34 = *(_QWORD *)v83;
    v84 = *(_QWORD *)v83;
LABEL_61:
    LOBYTE(v20) = Flagsb;
    goto LABEL_62;
  }
  if ( *v29 != 4 )
    v21 = 0;
  if ( !v21 && (unsigned __int8)RtlpGrowBlockInPlace(BaseAddress, v77 >> 4) )
    goto LABEL_181;
  if ( (v20 & 0x10) == 0 )
  {
    v41 = v20 & 0xC003FFFF;
    Flagsb = v41;
    v42 = v8[10];
    if ( (v42 & 2) != 0 )
    {
      v41 = (16 * (v42 & 0xE0 | 0x10)) | v41 & 0xFFFFF1FF;
      Flagsb = v41;
      v51 = *(_WORD *)(RtlpGetExtraStuffPointer(v8) + 2);
      if ( v51 > 0 )
      {
        v41 |= (unsigned __int16)v51 << 18;
        Flagsb = v41;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v64 = v8[11];
      if ( v64 )
      {
        v41 |= v64 << 18;
        Flagsb = v41;
      }
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v8[11] = v8[8] ^ v8[9] ^ v8[10];
      *((_DWORD *)v8 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
    v86 = 0LL;
    v43 = (char *)RtlAllocateHeap(BaseAddress, v41, a4);
    v82 = v43;
    if ( !v43 )
      goto LABEL_101;
    v44 = v43 - 16;
    _m_prefetchw(v43 - 16);
    if ( *(v43 - 1) == 5 )
      v44 -= 16 * (unsigned __int8)v44[14];
    v98 = v44;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *((_DWORD *)v44 + 2) ^= *((_DWORD *)BaseAddress + 34);
      if ( v44[11] != ((unsigned __int8)v44[8] ^ (unsigned __int8)(v44[9] ^ v44[10])) )
      {
        RtlpAnalyzeHeapFailure(BaseAddress, v44);
        v43 = v82;
      }
    }
    if ( (v44[10] & 2) != 0 )
    {
      ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v44);
      v89 = ExtraStuffPointer;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *((_DWORD *)v8 + 2) ^= *((_DWORD *)BaseAddress + 34);
        if ( v8[11] != ((unsigned __int8)v8[8] ^ (unsigned __int8)(v8[9] ^ v8[10])) )
        {
          RtlpAnalyzeHeapFailure(BaseAddress, v8);
          v43 = v82;
          ExtraStuffPointer = v89;
        }
      }
      if ( (v8[10] & 2) != 0 )
      {
        v49 = RtlpGetExtraStuffPointer(v8);
        *(_QWORD *)(v50 + 8) = *(_QWORD *)(v49 + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
        ExtraStuffPointer[1] = 0LL;
      }
      if ( !*((_DWORD *)BaseAddress + 31) )
        goto LABEL_96;
      v8[11] = v8[8] ^ v8[9] ^ v8[10];
      *((_DWORD *)v8 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v44[11] = v44[8] ^ v44[9] ^ v44[10];
      *((_DWORD *)v44 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
LABEL_96:
    v86 = 0LL;
    if ( v75 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      v75 = 0;
      v41 &= ~1u;
      Flagsb = v41;
      v43 = v82;
    }
    if ( a4 < Sizea )
      v45 = a4;
    else
      v45 = Sizea;
    memmove(v43, Src, v45);
    RtlFreeHeap(BaseAddress, v41, Src);
    v43 = v82;
LABEL_101:
    v97 = Src;
    Src = v43;
    goto LABEL_181;
  }
  Src = 0LL;
LABEL_181:
  if ( v86 && *((_DWORD *)BaseAddress + 31) )
  {
    v86[11] = v86[8] ^ v86[9] ^ v86[10];
    *((_DWORD *)v86 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( v75 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v71 = Src;
      if ( Src )
      {
        if ( (Flagsb & 0x800000) == 0 )
        {
          v118 = 4130;
          v119 = BaseAddress;
          v120 = Src;
          if ( v97 )
            v71 = v97;
          v121 = v71;
          v123 = Sizea;
          v122 = a4;
          v124 = 3;
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x2Cu, v117);
        }
      }
    }
  }
  return Src;
}
