/*
 * XREFs of MiReturnNonPagedPoolVa @ 0x1401013F0
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     MiScrubNonPagedPool @ 0x140659F44 (MiScrubNonPagedPool.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiReturnNonPagedPoolCharges @ 0x140097D70 (MiReturnNonPagedPoolCharges.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiCountNonPagedPool @ 0x140101A3C (MiCountNonPagedPool.c)
 *     MiNonPagedPoolToNode @ 0x140101AE0 (MiNonPagedPoolToNode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MiJoinBitmapPages @ 0x1401EB150 (MiJoinBitmapPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReturnNonPagedPoolVa(ULONG_PTR a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v5; // r13
  unsigned __int64 Alignment; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _SLIST_HEADER *v12; // rcx
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  _SLIST_HEADER *v18; // r14
  unsigned __int64 v19; // rsi
  unsigned __int64 *v20; // r8
  unsigned __int64 *p_Region; // rax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r10
  __int64 v25; // r12
  __int64 v26; // r11
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r14
  char v30; // r9
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v32; // rdi
  __int64 v33; // r15
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  _SLIST_HEADER *v37; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v39; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v40; // [rsp+38h] [rbp-C8h]
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v42; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v43; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+60h] [rbp-A0h]
  _QWORD *v46; // [rsp+68h] [rbp-98h]
  unsigned __int64 v47; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v48; // [rsp+78h] [rbp-88h]
  unsigned __int64 v49; // [rsp+80h] [rbp-80h]
  volatile signed __int64 *v50[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int8 v51; // [rsp+98h] [rbp-68h]
  unsigned __int64 v52[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v57; // [rsp+D4h] [rbp-2Ch]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]

  v2 = 0LL;
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v5 = 0LL;
  v46 = 0LL;
  v37 = &qword_1403269F0[26 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v42 = (a1 - v37[20].Region) >> 12;
  v38 = v42 & 0xFFFFFFFFFFFFFE00uLL;
  v47 = a2 + v42;
  v39 = (a2 + v42 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  Alignment = v37[24].Alignment;
  v58 = 20LL;
  v56 = 0;
  v57 = 0;
  v7 = Alignment + 8 * (v39 >> 6);
  v59 = 0LL;
  v60 = 0LL;
  v40 = 0LL;
  v50[1] = (volatile signed __int64 *)&v37[19].Region;
  v8 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v45 = 0LL;
  v50[0] = 0LL;
  LOBYTE(Alignment) = KeGetCurrentIrql();
  __writecr8(2uLL);
  v51 = Alignment;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v50, (char *)&v37[19].HeaderX64 + 8);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v37[19].Region, (__int64)v50);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)v50, v9);
    v2 = v52[0];
  }
  RtlClearBitsEx((__int64)&v37[23].Region, v42, a2);
  if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x80u) == 0LL )
  {
    v12 = v37;
    v13 = 1;
  }
  else
  {
    v10 = a2;
    v11 = (v42 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    if ( (v47 & 0xFFFFFFFFFFFFFE00uLL) > v11 )
      v10 = v11 + a2 - (v47 & 0xFFFFFFFFFFFFFE00uLL);
    v12 = v37;
    v13 = 0;
    v37[18].Region -= v10;
  }
  v12[17].Region -= a2;
  MiCountNonPagedPool(a2, 0LL);
  v15 = v38;
  v16 = v13;
  v17 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v18 = v37;
  v19 = -1LL;
  v44 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v20 = &v37[24].Region + v16;
  v48 = v20;
  p_Region = &v37[v16 + 21].Region;
  v43 = p_Region;
  if ( v39 > v38 )
  {
    v22 = v39;
    v23 = v39 - 512;
    v49 = v39 - 512;
    do
    {
      v14 = 0LL;
      while ( 1 )
      {
        v7 -= 8LL;
        if ( *(_QWORD *)v7 )
          break;
        if ( (unsigned __int64)++v14 >= 8 )
          goto LABEL_22;
      }
      if ( v23 + 512 == v22 )
      {
        v44 = v7 & 0xFFFFFFFFFFFFF000uLL;
      }
      else if ( v23 <= v15 )
      {
        v19 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      p_Region = v43;
      v7 = v7 + 8 * v14 - 56;
LABEL_22:
      if ( v14 == 8 )
      {
        v40 = v18[20].Region + (v23 << 12);
        v55 = (_QWORD *)(((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v54 = MI_READ_PTE_LOCK_FREE(v55);
        *(_QWORD *)v7 = -1LL;
        *(_QWORD *)(v7 + 8) = -1LL;
        *(_QWORD *)(v7 + 16) = -1LL;
        *(_QWORD *)(v7 + 24) = -1LL;
        *(_QWORD *)(v7 + 32) = -1LL;
        *(_QWORD *)(v7 + 40) = -1LL;
        *(_QWORD *)(v7 + 48) = -1LL;
        *(_QWORD *)(v7 + 56) = -1LL;
        v25 = v7 + 64;
        if ( v23 + 512 == v26 )
        {
          v27 = v25;
          if ( (v25 & 0xFFF) != 0 )
          {
            while ( !*(_QWORD *)v27 )
            {
              v27 += 8LL;
              if ( (v27 & 0xFFF) == 0 )
                goto LABEL_31;
            }
            v44 = v27 & 0xFFFFFFFFFFFFF000uLL;
          }
        }
LABEL_31:
        v7 = v25 - 64;
        if ( v23 <= v38 )
        {
          v19 = v7;
          if ( (v7 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v19 -= 8LL;
              if ( *(_QWORD *)v19 )
                break;
              if ( (v19 & 0xFFF) == 0 )
              {
                if ( !*(_QWORD *)v19 )
                  goto LABEL_37;
                break;
              }
            }
            v19 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
        }
LABEL_37:
        _bittestandset64((signed __int64 *)v43[1], v24);
        if ( !v45 )
          v45 = v40 + 0x200000;
        v29 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        if ( v30 >= 0 )
        {
          MiInsertTbFlushEntry((__int64)&v56, v40, 512LL, 0);
          v18 = v37;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v32 = (volatile signed __int32 *)(v29 + 3);
          v33 = 512LL;
          do
          {
            v41 = 0;
            while ( _interlockedbittestandset64(v32, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v41);
              while ( (*(_QWORD *)v32 & 0x8000000000000000uLL) != 0 );
            }
            *((_BYTE *)v32 + 10) = *((_BYTE *)v32 + 10) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
            v32 += 12;
            --v33;
          }
          while ( v33 );
          __writecr8(CurrentIrql);
          v5 = v29;
          v23 = v49;
          *v29 = v46;
          v46 = v29;
          if ( v23 >= v42 && v23 + 512 <= v47 )
          {
            v18 = v37;
          }
          else
          {
            v18 = v37;
            --v37[18].Alignment;
          }
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
            MiLogPerfMemoryRangeEvent(v40, 0LL, 10LL, 512LL);
          v34 = v55;
          *v55 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v34, v28) )
            MiWritePteShadow(v35, 0LL);
          MiInsertTbFlushEntry((__int64)&v56, v40, 1LL, 1u);
        }
        v20 = v48;
        v15 = v38;
      }
      else
      {
        _bittestandreset64((signed __int64 *)p_Region[1], v23 >> 9);
        if ( v23 < *v20 )
          *v20 = v23;
      }
      v22 = v39;
      v23 -= 512LL;
      v49 = v23;
      p_Region = v43;
    }
    while ( v23 + 512 > v15 );
    v2 = v52[0];
    v17 = v44;
  }
  if ( v17 > v19 )
    MiJoinBitmapPages(v14, v19, (v17 - v19) >> 12);
  KxReleaseQueuedSpinLock(v50);
  __writecr8(v51);
  if ( v40 )
  {
    MiReturnSystemVa(v40, v45, 5, (__int64)&v56);
    if ( v5 )
    {
      do
      {
        v36 = (_QWORD *)*v5;
        MiFreeLargePageMemory((__int64)(v5 + 0xB000000000LL) / 48, 1, 0);
        v2 += 512LL;
        v5 = v36;
      }
      while ( v36 );
      v52[0] = v2;
    }
    if ( v2 )
    {
      v53 = v2;
      MiReturnNonPagedPoolCharges(v52);
    }
  }
}
