/*
 * XREFs of MiFreePagesFromMdl @ 0x1400E2D98
 * Callers:
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiCleanPhysicalProcessPages @ 0x1406A5EEC (MiCleanPhysicalProcessPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiFreeSmallPageFromMdl @ 0x1400E3044 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x140215348 (MiLogMdlRangeEvent.c)
 */

__int16 *__fastcall MiFreePagesFromMdl(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int16 *v3; // r14
  __int16 v5; // ax
  ULONG_PTR *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rdi
  __int16 *result; // rax
  __int64 v12; // r12
  int v13; // edx
  __int64 v14; // r14
  ULONG_PTR v15; // r8
  ULONG_PTR v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  ULONG_PTR *v20; // r14
  unsigned __int8 CurrentIrql; // al
  unsigned int v22; // r13d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  volatile signed __int32 *v25; // r9
  int v26; // eax
  unsigned __int64 v27; // rcx
  ULONG_PTR *v28; // rsi
  unsigned __int8 v29; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+98h] [rbp+10h]
  unsigned __int64 v33; // [rsp+A8h] [rbp+20h]

  v3 = (__int16 *)a1;
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
  v33 = v8;
  v9 = v8;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(a2 + 48, 633LL, v8);
  v10 = 0LL;
  result = MiSystemPartition;
  v12 = -1LL;
  v13 = 1;
  v31 = 1;
  if ( v8 )
  {
    while ( 1 )
    {
      v14 = 48 * *v6 - 0x58000000000LL;
      if ( (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, a2, (ULONG_PTR)v6, *v6);
      if ( ((*(_QWORD *)(v14 + 40) >> 54) & 7) == 3 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v29 = CurrentIrql;
        __writecr8(2uLL);
        v22 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v22);
          }
          while ( *(__int64 *)(v14 + 24) < 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
          CurrentIrql = v29;
          v13 = v31;
        }
        *(_QWORD *)(v14 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      v15 = *v6;
      if ( *v6 == v12 )
        break;
      if ( v10 )
      {
        v20 = &v6[-v10];
        do
        {
          v7 += MiFreeSmallPageFromMdl(*v20++, a3);
          --v10;
        }
        while ( v10 );
      }
      v16 = *v6;
      if ( (*v6 & 0x1FF) == 0 && v8 >= 0x200 )
      {
        v13 = 1;
        v12 = v16 + 1;
        v31 = 1;
        v10 = 1LL;
        goto LABEL_31;
      }
      if ( (*v6 & 0x1FF) == 0x1FF && v8 >= 0x200 )
      {
        v13 = 0;
        v12 = v16 - 1;
        v31 = 0;
        v10 = 1LL;
        goto LABEL_31;
      }
      v17 = a3;
      v18 = MiFreeSmallPageFromMdl(v16, a3);
LABEL_16:
      v13 = v31;
      v7 += v18;
      v10 = 0LL;
      v12 = -1LL;
LABEL_17:
      ++v6;
      if ( !--v8 )
      {
        if ( v10 )
        {
          v28 = &v6[-v10];
          do
          {
            v7 += MiFreeSmallPageFromMdl(*v28++, v17);
            --v10;
          }
          while ( v10 );
        }
        v3 = (__int16 *)a1;
        result = MiSystemPartition;
        if ( v7 )
        {
          if ( (__int16 *)a1 == MiSystemPartition )
          {
            MiReturnResidentAvailable(v7);
            _InterlockedExchangeAdd64(&qword_14034F8F8, v7);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), v7);
          }
          MiReturnCommit(a1, v7);
          result = MiSystemPartition;
        }
        v9 = v33;
        goto LABEL_24;
      }
    }
    if ( v13 == 1 )
    {
      if ( (*v6 & 0x1FF) != 0x1FF )
      {
        v12 = v15 + 1;
        goto LABEL_30;
      }
    }
    else if ( (v15 & 0x1FF) != 0 )
    {
      v12 = v15 - 1;
LABEL_30:
      ++v10;
LABEL_31:
      v17 = a3;
      goto LABEL_17;
    }
    v19 = v15 >> 9;
    if ( _bittest64((const signed __int64 *)qword_14034FBA8[0], v19) )
    {
      v23 = v19 & 0x1F;
      LOBYTE(v24) = 1;
      v25 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v19 >> 5));
      if ( v23 + 1 > 0x20 )
      {
        if ( (v19 & 0x1F) != 0 )
        {
          _InterlockedAnd(v25++, ~(((1 << (32 - (v19 & 0x1F))) - 1) << v23));
          v24 = 1LL - (32 - (unsigned int)(v19 & 0x1F));
          if ( v24 >= 0x20 )
          {
            v27 = v24 >> 5;
            v24 += -32LL * (v24 >> 5);
            do
            {
              *v25++ = 0;
              --v27;
            }
            while ( v27 );
          }
          if ( !v24 )
            goto LABEL_37;
        }
        v26 = (1 << v24) - 1;
      }
      else
      {
        v26 = 1 << v23;
      }
      _InterlockedAnd(v25, ~v26);
    }
LABEL_37:
    v18 = MiFreeLargePageMemory(v19 << 9);
    v17 = a3;
    goto LABEL_16;
  }
LABEL_24:
  if ( v3 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034FCE0, -(__int64)v9);
  *(_WORD *)(a2 + 10) &= ~2u;
  return result;
}
