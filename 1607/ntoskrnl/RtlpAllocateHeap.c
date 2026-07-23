/*
 * XREFs of RtlpAllocateHeap @ 0x14009389C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1400937B8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x1400941E8 (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x1400942D0 (RtlpFindEntry.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x140167A50 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1402188FC (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x140218CD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x140218F78 (RtlpLogHeapExtendEvent.c)
 *     RtlGetNtGlobalFlags @ 0x140688668 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        char a5,
        _DWORD *a6)
{
  ULONG_PTR v6; // rdi
  __int16 v7; // bx
  char v8; // r13
  _DWORD *v10; // r14
  char v11; // r12
  unsigned __int64 v12; // r15
  __int64 Entry; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 *v18; // rdi
  __int64 v19; // r9
  __int64 **v20; // rdx
  __int64 *v21; // rcx
  unsigned __int64 v22; // rdi
  char v23; // r13
  int v24; // edx
  __int64 v25; // rdi
  ULONG_PTR v26; // rcx
  char v27; // cl
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdi
  char v32; // bl
  ULONG_PTR v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r13
  __int64 *v37; // rcx
  __int64 **v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  SIZE_T v41; // rdi
  SIZE_T v42; // rax
  void *v43; // r8
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  ULONG_PTR v46; // r8
  _DWORD *v47; // rdx
  unsigned __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v51; // rax
  PVOID v52; // [rsp+48h] [rbp-F0h] BYREF
  int v53; // [rsp+50h] [rbp-E8h]
  NTSTATUS v54; // [rsp+54h] [rbp-E4h]
  int v55; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v56; // [rsp+60h] [rbp-D8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-D0h] BYREF
  _DWORD *v58; // [rsp+70h] [rbp-C8h]
  __int64 *v59; // [rsp+78h] [rbp-C0h]
  __int64 *v60; // [rsp+80h] [rbp-B8h]
  __int64 v61; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+90h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-90h]
  SIZE_T v66; // [rsp+B0h] [rbp-88h]
  __int64 v67; // [rsp+B8h] [rbp-80h]
  __int64 v68; // [rsp+C0h] [rbp-78h]
  _QWORD *v69; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v70; // [rsp+D0h] [rbp-68h]
  __int64 v71; // [rsp+D8h] [rbp-60h]
  __int64 v72; // [rsp+E0h] [rbp-58h]
  __int64 v73; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v74; // [rsp+F0h] [rbp-48h]
  ULONG_PTR v75; // [rsp+F8h] [rbp-40h]
  char v76; // [rsp+148h] [rbp+10h]
  ULONG_PTR v78; // [rsp+158h] [rbp+20h] BYREF

  v78 = a4;
  v76 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v61 = 0LL;
  v53 = 1;
  a5 = 0;
  v10 = 0LL;
  v58 = 0LL;
  v52 = 0LL;
  v55 = 0;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v53 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v51 = 1LL;
    if ( a3 )
      v51 = a3;
    v6 = *(_QWORD *)(a1 + 264) & (v51 + *(_QWORD *)(a1 + 256));
    if ( v6 < 0x20 )
      v6 = 32LL;
    v78 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v6 += 16LL;
      v78 = v6;
    }
    v12 = v6 >> 4;
  }
  else
  {
    v11 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v78 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v55 = 0;
    a5 = 1;
    v6 = v78;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v78 = v6 + 56;
      v56 = (ExGenRandom(1LL) & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v78 + 4096 + v56;
      LODWORD(v60) = 4;
      v54 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v54 < 0 )
        goto LABEL_107;
      v52 = (char *)BaseAddress + v56;
      v54 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v52, 0LL, &v78, 0x1000u, 4u);
      if ( v54 >= 0 )
      {
        *((_WORD *)v52 + 28) = v78 - v7;
        *((_BYTE *)v52 + 58) = v11 | 2;
        *((_QWORD *)v52 + 4) = v78;
        *((_QWORD *)v52 + 5) = RegionSize;
        *((_BYTE *)v52 + 63) = 4;
        v46 = v78;
        *(_QWORD *)(a1 + 560) += v78;
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        {
          RtlpLogHeapCommit(a1, v52, v46, 9LL);
          if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
            RtlpLogHeapExtendEvent(a1, v52, v78, 16LL * *(_QWORD *)(a1 + 192));
        }
        v47 = v52;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v52 + 59) = *((_BYTE *)v52 + 56) ^ *((_BYTE *)v52 + 57) ^ *((_BYTE *)v52 + 58);
          v47[14] ^= *(_DWORD *)(a1 + 136);
          v47 = v52;
        }
        v48 = a1 + 272;
        v49 = *(__int64 **)(a1 + 280);
        if ( *v49 == a1 + 272 )
        {
          *(_QWORD *)v47 = v48;
          *((_QWORD *)v47 + 1) = v49;
          *v49 = (__int64)v47;
          *(_QWORD *)(a1 + 280) = v47;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, v48, 0, *v49);
        }
        v10 = (char *)v52 + 64;
        goto LABEL_106;
      }
      v56 = 0LL;
      v54 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v56, 0x8000u);
      v52 = 0LL;
      ++*(_DWORD *)(a1 + 600);
    }
    else
    {
      v54 = -1073741789;
    }
LABEL_105:
    v10 = 0LL;
LABEL_106:
    v58 = v10;
    goto LABEL_107;
  }
  v70 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12, a3, a4);
  v71 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_44:
    v34 = RtlpExtendHeap(a1, v78);
    v14 = v34;
    v64 = v34;
    if ( v34 )
    {
      v35 = v34 + 16;
      v36 = *(_QWORD *)(v34 + 16);
      v37 = *(__int64 **)(v34 + 24);
      v59 = v37;
      v19 = *(_QWORD *)(v36 + 8);
      if ( *v37 != v19 || *v37 != v35 )
      {
        RtlpLogHeapFailure(12, a1, v35, v19, *v37);
        goto LABEL_107;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v34 + 8);
      v38 = *(__int64 ***)(a1 + 312);
      if ( v38 )
      {
        v39 = *(unsigned __int16 *)(v34 + 8);
        while ( 1 )
        {
          v40 = *((unsigned int *)v38 + 2);
          if ( v39 < v40 )
            break;
          if ( !*v38 )
          {
            v39 = (unsigned int)(v40 - 1);
            break;
          }
          v38 = (__int64 **)*v38;
        }
        v65 = v39;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v38, v35, v35, v39, *(unsigned __int16 *)(v34 + 8));
        v37 = v59;
      }
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      goto LABEL_22;
    }
    v54 = -1073741801;
    goto LABEL_105;
  }
  v14 = Entry - 16;
  v64 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      RtlpAnalyzeHeapFailure(a1);
  }
  v15 = *(unsigned __int16 *)(v14 + 8);
  if ( v15 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
      *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_44;
  }
  v16 = v14 + 16;
  v17 = *(_QWORD *)(v14 + 16);
  v18 = *(__int64 **)(v14 + 24);
  v60 = v18;
  v19 = *(_QWORD *)(v17 + 8);
  if ( *v18 != v19 || *v18 != v16 )
  {
    RtlpLogHeapFailure(12, a1, v16, v19, *v18);
    goto LABEL_107;
  }
  *(_QWORD *)(a1 + 192) -= v15;
  v20 = *(__int64 ***)(a1 + 312);
  if ( v20 )
  {
    v21 = (__int64 *)*(unsigned __int16 *)(v14 + 8);
    while ( 1 )
    {
      v22 = *((unsigned int *)v20 + 2);
      if ( (unsigned __int64)v21 < v22 )
        break;
      if ( !*v20 )
      {
        v21 = (__int64 *)(unsigned int)(v22 - 1);
        break;
      }
      v20 = (__int64 **)*v20;
    }
    v59 = v21;
    RtlpHeapRemoveListEntry(a1, (_DWORD)v20, v16, v14 + 16, (_DWORD)v21, *(unsigned __int16 *)(v14 + 8));
    v18 = v60;
  }
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
LABEL_22:
  v23 = *(_BYTE *)(v14 + 10);
  v24 = v53;
  if ( !v53 && (v23 & 4) != 0 )
  {
    v41 = 16LL * *(unsigned __int16 *)(v14 + 8) - 32;
    v66 = v41;
    if ( (v23 & 2) != 0 && v41 > 4 )
    {
      v41 -= 4LL;
      v66 = v41;
    }
    v42 = RtlCompareMemoryUlong((PVOID)(v14 + 32), v41, 0xFEEEFEEE);
    if ( v42 != v41 )
    {
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v14,
        (const void *)(v14 + v42 + 32));
      if ( (_BYTE)KdDebuggerEnabled )
        __debugbreak();
    }
    v24 = v53;
  }
  v72 = v14;
  if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
  {
    RtlpLogHeapFailure(3, a1, v14, 0, 0LL);
  }
  else
  {
    *(_BYTE *)(v14 + 10) = v11;
    v25 = *(unsigned __int16 *)(v14 + 8) - v12;
    v73 = v25;
    *(_WORD *)(v14 + 8) = v12;
    v26 = v78 - a3;
    v74 = v78 - a3;
    if ( v78 - a3 >= 0x3F )
    {
      *(_QWORD *)(v14 + 16 * v12) = v26;
      *(_BYTE *)(v14 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v14 + 15) = v26;
    }
    *(_BYTE *)(v14 + 11) = 0;
    if ( !v25 )
      goto LABEL_31;
    if ( v25 == 1 )
    {
      ++*(_WORD *)(v14 + 8);
      v33 = v78 - a3 + 16;
      v75 = v33;
      if ( v33 >= 0x3F )
      {
        *(_QWORD *)(v14 + 16 * (v12 + 1)) = v33;
        *(_BYTE *)(v14 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v14 + 15) = v33;
      }
      goto LABEL_31;
    }
    v27 = v24 == 0;
    v28 = *(_BYTE *)(v14 + 14);
    v29 = v28 ? (v14 & 0xFFFFFFFFFFFF0000uLL) - ((v28 - 1LL) << 16) : a1;
    v67 = v29;
    LOBYTE(v19) = v23;
    if ( RtlpCreateSplitBlock(a1, v29, v14 + 16 * v12, v19, v27, v12, v25) )
    {
LABEL_31:
      v10 = (_DWORD *)(v14 + 16);
      v58 = (_DWORD *)(v14 + 16);
      v30 = 16 * *(unsigned __int16 *)(v14 + 8);
      v31 = v30;
      v61 = v30;
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) == 0x3F )
      {
        v31 = v30 - 8LL;
        v61 = v31;
      }
      if ( v53 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v32 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v32 = 0;
        }
        if ( (v76 & 8) != 0 )
          memset(v10, 0, v31 - 8);
        goto LABEL_108;
      }
      if ( (v76 & 8) != 0 )
      {
        memset((void *)(v14 + 16), 0, v31 - 8);
LABEL_80:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(_QWORD *)((char *)v10 + a3) = 0xABABABABABABABABuLL;
          *(_QWORD *)((char *)v10 + a3 + 8) = 0xABABABABABABABABuLL;
          *(_BYTE *)(v14 + 10) |= 4u;
        }
        *(_BYTE *)(v14 + 11) = 0;
        if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v14 + 15) == 4 )
            v45 = (_QWORD *)(v14 - 32);
          else
            v45 = (_QWORD *)(16LL * *(unsigned __int16 *)(v14 + 8) + v14 - 16);
          v69 = v45;
          *v45 = 0LL;
          v45[1] = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_107;
      }
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_80;
      v43 = (void *)(v14 + 16);
      v68 = v14 + 16;
      v44 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v62 = v44;
      if ( !v44 )
        goto LABEL_80;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        v62 = --v44;
        if ( !v44 )
          goto LABEL_80;
        v43 = (void *)(v14 + 20);
        v68 = v14 + 20;
      }
      memset64(v43, 0xBAADF00DBAADF00DuLL, v44 >> 1);
      if ( (v44 & 1) != 0 )
        *((_DWORD *)v43 + v44 - 1) = -1163005939;
      goto LABEL_80;
    }
  }
LABEL_107:
  v32 = a5;
LABEL_108:
  if ( v32 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v10 )
  {
    if ( v52 )
      RtlpHeapLogRangeReserve(a1, (unsigned __int64)v52 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v52 + 5));
  }
  return v10;
}
