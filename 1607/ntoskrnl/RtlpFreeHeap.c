/*
 * XREFs of RtlpFreeHeap @ 0x140092ECC
 * Callers:
 *     RtlpFreeHeapInternal @ 0x140092CE8 (RtlpFreeHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpHeapAddListEntry @ 0x1400936E8 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x1400942D0 (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x140218854 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x140218D48 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x14021903C (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  char v7; // r15
  int v9; // esi
  __int64 v10; // r8
  __int64 **v11; // rcx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rsi
  ULONG_PTR v16; // r8
  bool v17; // zf
  unsigned __int64 v18; // r14
  _QWORD *v19; // rdi
  _QWORD *Entry; // r8
  int v21; // ecx
  unsigned __int16 v22; // ax
  _QWORD *v23; // rdi
  __int64 *v24; // rax
  __int64 **v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdi
  _QWORD *v30; // r8
  int v31; // ecx
  unsigned __int16 v32; // ax
  __int64 *v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // r9
  char v39; // [rsp+40h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-78h]
  PVOID BaseAddress; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  unsigned __int64 v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  unsigned __int64 v46; // [rsp+78h] [rbp-50h]
  int v47; // [rsp+88h] [rbp-40h]
  int v48; // [rsp+98h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp+18h]

  v6 = 1;
  v7 = 0;
  v39 = 0;
  v41 = 1;
  BaseAddress = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL);
    return 0LL;
  }
  v9 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v9 & 0x3C010F60) != 0 )
  {
    v6 = 0;
    v10 = 4LL;
  }
  else
  {
    v10 = 3LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0
    && ((*(unsigned __int8 *)(a3 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
  {
    RtlpLogHeapFreeEvent(a1, a4, v10);
  }
  if ( (v9 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v7 = 1;
    v39 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v11 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(a3 + 8) < (unsigned __int64)*((unsigned int *)v11 + 2) )
        break;
      v11 = (__int64 **)*v11;
    }
    while ( v11 );
  }
  v12 = *(_BYTE *)(a3 + 10);
  if ( (v12 & 8) != 0 )
    *(_BYTE *)(a3 + 10) = v12 & 0xF7;
  if ( *(_BYTE *)(a3 + 15) == 4 )
  {
    v34 = a3 - 48;
    v35 = *(_QWORD *)(v34 + 32);
    BaseAddress = (PVOID)(v34 & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 560) -= v35;
    v36 = *(_QWORD *)v34;
    v37 = *(__int64 **)(v34 + 8);
    v38 = *(_QWORD *)(*(_QWORD *)v34 + 8LL);
    if ( *v37 == v38 && *v37 == v34 )
    {
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v34, v38, *v37);
    }
    if ( v7 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v7 = 0;
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpHeapLogRangeRelease(a1, BaseAddress, *(_QWORD *)(v34 + 40));
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapContractEvent(a1, v34, v35, 16 * *(_QWORD *)(a1 + 192), 0, 0LL);
    goto LABEL_93;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v13 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v15 = v13;
  v49 = v13;
  v16 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v13, RegionSize);
      goto LABEL_93;
    }
    v17 = v6 == 0;
    v18 = (unsigned __int16)RegionSize;
    if ( !v17 )
    {
      *(_BYTE *)(v13 + 10) = 0;
      *(_BYTE *)(v13 + 15) = 0;
      v19 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v16, v16, v14);
      else
        Entry = (_QWORD *)*v19;
      while ( v19 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v21 = *((_DWORD *)Entry - 2);
          v47 = v21;
          if ( (*(_DWORD *)(a1 + 124) & v21) != 0 )
            v47 = v21 ^ *(_DWORD *)(a1 + 136);
          v22 = v47;
          v15 = v49;
          v7 = v39;
        }
        else
        {
          v22 = *((_WORD *)Entry - 4);
        }
        if ( v18 <= v22 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v23 = (_QWORD *)(v15 + 16);
      v24 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v24 == Entry )
      {
        *v23 = Entry;
        *(_QWORD *)(v15 + 24) = v24;
        *v24 = (__int64)v23;
        Entry[1] = v23;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v24);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v15 + 8);
      v25 = *(__int64 ***)(a1 + 312);
      if ( !v25 )
        goto LABEL_79;
      v26 = *(unsigned __int16 *)(v15 + 8);
      while ( 1 )
      {
        v27 = *((unsigned int *)v25 + 2);
        if ( v26 < v27 )
          break;
        if ( !*v25 )
        {
          v26 = (unsigned int)(v27 - 1);
          break;
        }
        v25 = (__int64 **)*v25;
      }
      v44 = v26;
LABEL_77:
      RtlpHeapAddListEntry(a1, (_DWORD)v25, v27, (_DWORD)v23, v26, *(unsigned __int16 *)(v15 + 8));
LABEL_79:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
        *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_93;
    }
    *(_BYTE *)(v13 + 10) &= 0xF0u;
    *(_BYTE *)(v13 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_57:
      v29 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v30 = (_QWORD *)RtlpFindEntry(a1, v18, v16, v14);
      else
        v30 = (_QWORD *)*v29;
      while ( v29 != v30 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v31 = *((_DWORD *)v30 - 2);
          v48 = v31;
          if ( (*(_DWORD *)(a1 + 124) & v31) != 0 )
            v48 = v31 ^ *(_DWORD *)(a1 + 136);
          v32 = v48;
          v15 = v49;
          v7 = v39;
        }
        else
        {
          v32 = *((_WORD *)v30 - 4);
        }
        if ( v18 <= v32 )
          break;
        v30 = (_QWORD *)*v30;
      }
      v23 = (_QWORD *)(v15 + 16);
      v33 = (__int64 *)v30[1];
      if ( (_QWORD *)*v33 == v30 )
      {
        *v23 = v30;
        *(_QWORD *)(v15 + 24) = v33;
        *v33 = (__int64)v23;
        v30[1] = v23;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v30, 0, *v33);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v15 + 8);
      v25 = *(__int64 ***)(a1 + 312);
      if ( !v25 )
        goto LABEL_79;
      v26 = *(unsigned __int16 *)(v15 + 8);
      while ( 1 )
      {
        v27 = *((unsigned int *)v25 + 2);
        if ( v26 < v27 )
          break;
        if ( !*v25 )
        {
          v26 = (unsigned int)(v27 - 1);
          break;
        }
        v25 = (__int64 **)*v25;
      }
      v46 = v26;
      goto LABEL_77;
    }
    v16 = v13 + 32;
    v45 = v13 + 32;
    v28 = (16 * v18 - 32) >> 2;
    v43 = v28;
    if ( v28 )
    {
      if ( (v16 & 4) == 0 )
        goto LABEL_54;
      *(_DWORD *)v16 = -17891602;
      v43 = --v28;
      if ( v28 )
      {
        v16 = v13 + 36;
        v45 = v13 + 36;
LABEL_54:
        memset64((void *)v16, 0xFEEEFEEEFEEEFEEEuLL, v28 >> 1);
        if ( (v28 & 1) != 0 )
          *(_DWORD *)(v16 + 4 * v28 - 4) = -17891602;
      }
    }
    *(_BYTE *)(v13 + 10) |= 4u;
    goto LABEL_57;
  }
  RtlpDeCommitFreeBlock(a1, (_WORD *)v13, RegionSize);
LABEL_93:
  if ( v7 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v41;
}
