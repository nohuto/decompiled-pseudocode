/*
 * XREFs of MiFreePagesFromMdl @ 0x140011298
 * Callers:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     MiInitializeMdlPages @ 0x1400BCA18 (MiInitializeMdlPages.c)
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 *     MiCleanPhysicalProcessPages @ 0x140626B7C (MiCleanPhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiFreeSmallPageFromMdl @ 0x140011524 (MiFreeSmallPageFromMdl.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x1401D3CD4 (MiLogMdlRangeEvent.c)
 */

int *__fastcall MiFreePagesFromMdl(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int16 v5; // ax
  ULONG_PTR *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rdi
  int *result; // rax
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // r13
  ULONG_PTR v15; // r8
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  ULONG_PTR *v19; // r15
  unsigned __int8 v20; // al
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdx
  volatile signed __int32 *v23; // r9
  int v24; // eax
  unsigned __int64 v25; // rcx
  ULONG_PTR *v26; // rsi
  int v27; // [rsp+78h] [rbp+10h]
  unsigned __int64 v29; // [rsp+88h] [rbp+20h]

  if ( (*(_WORD *)(a2 + 10) & 0x200) != 0 )
    MiRetardMdl(a2);
  if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  v5 = *(_WORD *)(a2 + 10);
  if ( (v5 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, a2, v5, 0LL);
  v6 = (ULONG_PTR *)(a2 + 48);
  v7 = 0LL;
  v8 = (((*(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  v29 = v8;
  v9 = v8;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(a2 + 48, 633LL, v8);
  v10 = 0LL;
  result = &MiSystemPartition;
  v12 = -1LL;
  v13 = 1;
  v27 = 1;
  if ( v8 )
  {
    while ( 1 )
    {
      v14 = 48 * *v6 - 0x58000000000LL;
      if ( (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, a2, (ULONG_PTR)v6, *v6);
      if ( ((*(_QWORD *)(v14 + 40) >> 54) & 7) == 3 )
      {
        v20 = MiLockPageInline(48 * *v6 - 0x58000000000LL);
        *(_QWORD *)(v14 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v20);
        v13 = v27;
      }
      v15 = *v6;
      if ( *v6 != v12 )
      {
        if ( v10 )
        {
          v19 = &v6[-v10];
          do
          {
            v7 += MiFreeSmallPageFromMdl(*v19++, a3);
            --v10;
          }
          while ( v10 );
        }
        v16 = *v6;
        if ( (*v6 & 0x1FF) == 0 && v8 >= 0x200 )
        {
          v13 = 1;
          v12 = v16 + 1;
          v27 = 1;
          v10 = 1LL;
          goto LABEL_18;
        }
        if ( (*v6 & 0x1FF) == 0x1FF && v8 >= 0x200 )
        {
          v13 = 0;
          v12 = v16 - 1;
          v27 = 0;
          v10 = 1LL;
          goto LABEL_18;
        }
        v17 = MiFreeSmallPageFromMdl(v16, a3);
        goto LABEL_17;
      }
      if ( v13 == 1 )
      {
        if ( (*v6 & 0x1FF) != 0x1FF )
        {
          v12 = v15 + 1;
          goto LABEL_31;
        }
      }
      else if ( (v15 & 0x1FF) != 0 )
      {
        v12 = v15 - 1;
LABEL_31:
        ++v10;
        goto LABEL_18;
      }
      v18 = v15 >> 9;
      if ( _bittest64((const signed __int64 *)qword_1402FF6E8, v18) )
      {
        v21 = v18 & 0x1F;
        LOBYTE(v22) = 1;
        v23 = (volatile signed __int32 *)(qword_1402FF6E8 + 4 * (v18 >> 5));
        if ( v21 + 1 > 0x20 )
        {
          if ( (v18 & 0x1F) != 0 )
          {
            _InterlockedAnd(v23++, ~(((1 << (32 - (v18 & 0x1F))) - 1) << v21));
            v22 = 1LL - (32 - (unsigned int)(v18 & 0x1F));
            if ( v22 >= 0x20 )
            {
              v25 = v22 >> 5;
              v22 += -32LL * (v22 >> 5);
              do
              {
                *v23++ = 0;
                --v25;
              }
              while ( v25 );
            }
            if ( !v22 )
              goto LABEL_37;
          }
          v24 = (1 << v22) - 1;
        }
        else
        {
          v24 = 1 << v21;
        }
        _InterlockedAnd(v23, ~v24);
      }
LABEL_37:
      v17 = MiFreeLargePageMemory(v18 << 9);
LABEL_17:
      v13 = v27;
      v7 += v17;
      v10 = 0LL;
      v12 = -1LL;
LABEL_18:
      ++v6;
      if ( !--v8 )
      {
        if ( v10 )
        {
          v26 = &v6[-v10];
          do
          {
            v7 += MiFreeSmallPageFromMdl(*v26++, a3);
            --v10;
          }
          while ( v10 );
        }
        result = &MiSystemPartition;
        if ( v7 )
        {
          if ( (int *)a1 == &MiSystemPartition )
          {
            MiReturnResidentAvailable(v7);
            _InterlockedExchangeAdd64(&qword_1402FF478, v7);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), v7);
          }
          MiReturnCommit(a1, v7);
          result = &MiSystemPartition;
        }
        v9 = v29;
        break;
      }
    }
  }
  if ( (int *)a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1402FF820, -(__int64)v9);
  *(_WORD *)(a2 + 10) &= ~2u;
  return result;
}
