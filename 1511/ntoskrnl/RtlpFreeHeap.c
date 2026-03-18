/*
 * XREFs of RtlpFreeHeap @ 0x1400D34B0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1400D3418 (RtlpFreeHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlpDeCommitFreeBlock @ 0x1400D2FA0 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400D2FFC (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1400D3A30 (RtlpCoalesceFreeBlocks.c)
 *     RtlpHeapAddListEntry @ 0x1400D3CC4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x1400D48D8 (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x14014FF40 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1401FF1DC (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1401FF664 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x1401FFB60 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x1401FFE54 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  char v7; // r15
  int v8; // esi
  __int64 v9; // r8
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  ULONG_PTR v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // r14
  _QWORD *v17; // rdi
  _QWORD *Entry; // r8
  int v19; // ecx
  unsigned __int16 v20; // ax
  _QWORD *v21; // rdi
  __int64 *v22; // rax
  __int64 **v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 **v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdi
  _QWORD *v29; // r8
  int v30; // ecx
  unsigned __int16 v31; // ax
  __int64 *v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // r9
  char v39; // [rsp+40h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-78h]
  PVOID BaseAddress; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  unsigned __int64 v44; // [rsp+68h] [rbp-60h]
  unsigned __int64 v45; // [rsp+70h] [rbp-58h]
  __int64 v46; // [rsp+78h] [rbp-50h]
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
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x3C010F60) != 0 )
  {
    v6 = 0;
    v9 = 4LL;
  }
  else
  {
    v9 = 3LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0
    && ((*(unsigned __int8 *)(a3 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
  {
    RtlpLogHeapFreeEvent(a1, a4, v9);
  }
  if ( (v8 & 1) != 0 )
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
    v26 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(a3 + 8) < (unsigned __int64)*((unsigned int *)v26 + 2) )
        break;
      v26 = (__int64 **)*v26;
    }
    while ( v26 );
  }
  v10 = *(_BYTE *)(a3 + 10);
  if ( (v10 & 8) != 0 )
    *(_BYTE *)(a3 + 10) = v10 & 0xF7;
  if ( *(_BYTE *)(a3 + 15) == 4 )
  {
    v33 = a3 - 48;
    v34 = *(_QWORD *)(v33 + 32);
    BaseAddress = (PVOID)(v33 & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 552) -= v34;
    v35 = *(_QWORD *)v33;
    v36 = *(__int64 **)(v33 + 8);
    v37 = *(_QWORD *)(*(_QWORD *)v33 + 8LL);
    if ( *v36 == v37 && *v36 == v33 )
    {
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v33, v37, *v36);
    }
    if ( v7 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v7 = 0;
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpHeapLogRangeRelease(a1, BaseAddress, *(_QWORD *)(v33 + 40));
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapContractEvent(a1, v33, v34, 16 * *(_QWORD *)(a1 + 192), 0, 0LL);
    goto LABEL_89;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v11 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v13 = v11;
  v49 = v11;
  v14 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v11, RegionSize);
      goto LABEL_89;
    }
    v15 = v6 == 0;
    v16 = (unsigned __int16)RegionSize;
    if ( !v15 )
    {
      *(_BYTE *)(v11 + 10) = 0;
      *(_BYTE *)(v11 + 15) = 0;
      v17 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v14, v14, v12);
      else
        Entry = (_QWORD *)*v17;
      while ( v17 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v19 = *((_DWORD *)Entry - 2);
          v47 = v19;
          if ( (*(_DWORD *)(a1 + 124) & v19) != 0 )
            v47 = v19 ^ *(_DWORD *)(a1 + 136);
          v20 = v47;
          v13 = v49;
          v7 = v39;
        }
        else
        {
          v20 = *((_WORD *)Entry - 4);
        }
        if ( v16 <= v20 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v21 = (_QWORD *)(v13 + 16);
      v22 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v22 == Entry )
      {
        *v21 = Entry;
        *(_QWORD *)(v13 + 24) = v22;
        *v22 = (__int64)v21;
        Entry[1] = v21;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v22);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v23 = *(__int64 ***)(a1 + 312);
      if ( !v23 )
        goto LABEL_30;
      v24 = *(unsigned __int16 *)(v13 + 8);
      while ( 1 )
      {
        v25 = *((unsigned int *)v23 + 2);
        if ( v24 < v25 )
          break;
        if ( !*v23 )
        {
          v24 = (unsigned int)(v25 - 1);
          break;
        }
        v23 = (__int64 **)*v23;
      }
      v45 = v24;
LABEL_29:
      RtlpHeapAddListEntry(a1, (_DWORD)v23, v25, (_DWORD)v21, v24, *(unsigned __int16 *)(v13 + 8));
LABEL_30:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_89;
    }
    *(_BYTE *)(v11 + 10) &= 0xF0u;
    *(_BYTE *)(v11 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_57:
      v28 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v29 = (_QWORD *)RtlpFindEntry(a1, v16, v14, v12);
      else
        v29 = (_QWORD *)*v28;
      while ( v28 != v29 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v30 = *((_DWORD *)v29 - 2);
          v48 = v30;
          if ( (*(_DWORD *)(a1 + 124) & v30) != 0 )
            v48 = v30 ^ *(_DWORD *)(a1 + 136);
          v31 = v48;
          v13 = v49;
          v7 = v39;
        }
        else
        {
          v31 = *((_WORD *)v29 - 4);
        }
        if ( v16 <= v31 )
          break;
        v29 = (_QWORD *)*v29;
      }
      v21 = (_QWORD *)(v13 + 16);
      v32 = (__int64 *)v29[1];
      if ( (_QWORD *)*v32 == v29 )
      {
        *v21 = v29;
        *(_QWORD *)(v13 + 24) = v32;
        *v32 = (__int64)v21;
        v29[1] = v21;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v29, 0, *v32);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v13 + 8);
      v23 = *(__int64 ***)(a1 + 312);
      if ( !v23 )
        goto LABEL_30;
      v24 = *(unsigned __int16 *)(v13 + 8);
      while ( 1 )
      {
        v25 = *((unsigned int *)v23 + 2);
        if ( v24 < v25 )
          break;
        if ( !*v23 )
        {
          v24 = (unsigned int)(v25 - 1);
          break;
        }
        v23 = (__int64 **)*v23;
      }
      v44 = v24;
      goto LABEL_29;
    }
    v14 = v11 + 32;
    v46 = v11 + 32;
    v27 = (16 * v16 - 32) >> 2;
    v43 = v27;
    if ( v27 )
    {
      if ( (v14 & 4) == 0 )
        goto LABEL_54;
      *(_DWORD *)v14 = -17891602;
      v43 = --v27;
      if ( v27 )
      {
        v14 = v11 + 36;
        v46 = v11 + 36;
LABEL_54:
        memset64((void *)v14, 0xFEEEFEEEFEEEFEEEuLL, v27 >> 1);
        if ( (v27 & 1) != 0 )
          *(_DWORD *)(v14 + 4 * v27 - 4) = -17891602;
      }
    }
    *(_BYTE *)(v11 + 10) |= 4u;
    goto LABEL_57;
  }
  RtlpDeCommitFreeBlock(a1, (_WORD *)v11, RegionSize);
LABEL_89:
  if ( v7 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v41;
}
