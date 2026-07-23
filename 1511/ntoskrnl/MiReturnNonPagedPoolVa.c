/*
 * XREFs of MiReturnNonPagedPoolVa @ 0x1400B4000
 * Callers:
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MiScrubNonPagedPool @ 0x1406250D4 (MiScrubNonPagedPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiCountNonPagedPool @ 0x1400B46D4 (MiCountNonPagedPool.c)
 *     MiNonPagedPoolToNode @ 0x1400B4754 (MiNonPagedPoolToNode.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400D6B5C (MiReturnNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiJoinBitmapPages @ 0x1401DA568 (MiJoinBitmapPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReturnNonPagedPoolVa(ULONG_PTR a1, unsigned __int64 a2)
{
  _QWORD *v4; // r13
  __int64 v5; // r8
  _SLIST_HEADER *v6; // r12
  unsigned __int64 Alignment; // rax
  __int64 v8; // r15
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r14
  unsigned __int64 *v18; // r8
  __int64 p_Region; // rax
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  __int64 v29; // r8
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v31; // rbx
  __int64 v32; // r12
  _QWORD *v33; // rbx
  _QWORD *v34; // rcx
  int v35; // r9d
  __int64 v36; // r8
  __int64 result; // rax
  _QWORD *v38; // rbx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  volatile signed __int32 *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v46; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v47; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v48; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+48h] [rbp-B8h]
  _QWORD *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-98h]
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v57; // [rsp+80h] [rbp-80h]
  _SLIST_HEADER *v58; // [rsp+88h] [rbp-78h]
  volatile signed __int64 *v59[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v60; // [rsp+A0h] [rbp-60h]
  _QWORD v61[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  _QWORD *v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v65; // [rsp+D4h] [rbp-2Ch]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  __int64 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]

  memset(v61, 0, sizeof(v61));
  v62 = 0LL;
  v4 = 0LL;
  v51 = 0LL;
  v6 = &qword_1402FE6C0[26 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v58 = v6;
  v46 = 0LL;
  v50 = (a1 - v6[20].Region) >> 12;
  v48 = 0LL;
  v54 = a2 + v50;
  v45 = v50 & 0xFFFFFFFFFFFFFE00uLL;
  Alignment = v6[24].Alignment;
  v47 = (a2 + v50 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v66 = 20LL;
  v64 = 0;
  v65 = 0;
  v8 = Alignment + 8 * (v47 >> 6);
  v67 = 0LL;
  v68 = 0LL;
  v59[0] = 0LL;
  v9 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v59[1] = (volatile signed __int64 *)&v6[19].Region;
  LOBYTE(Alignment) = KeGetCurrentIrql();
  __writecr8(2uLL);
  v60 = Alignment;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v59);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v6[19].Region, (__int64)v59);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)v59, v10, v5);
  }
  RtlClearBitsEx((__int64)&v6[23].Region, v50, a2);
  v56 = MI_READ_PTE_LOCK_FREE(v9);
  if ( (v56 & 0x80u) == 0LL )
  {
    v13 = 1;
  }
  else
  {
    v11 = a2;
    v12 = (v50 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    if ( (v54 & 0xFFFFFFFFFFFFFE00uLL) > v12 )
      v11 = v12 + a2 - (v54 & 0xFFFFFFFFFFFFFE00uLL);
    v6[18].Region -= v11;
    v13 = 0;
  }
  v6[17].Region -= a2;
  MiCountNonPagedPool(a2, 0LL);
  v15 = v50 & 0xFFFFFFFFFFFFFE00uLL;
  v16 = (a2 + v50 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v17 = -1LL;
  v18 = &v6[24].Region + v13;
  p_Region = (__int64)&v6[v13 + 21].Region;
  v57 = v18;
  v52 = p_Region;
  v20 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v49 = v8 & 0xFFFFFFFFFFFFF000uLL;
  if ( v47 > v45 )
  {
    v21 = v47 - 512;
    v55 = v47 - 512;
    do
    {
      v14 = 0LL;
      v22 = v21 >> 9;
      while ( 1 )
      {
        v8 -= 8LL;
        if ( *(_QWORD *)v8 )
          break;
        if ( (unsigned __int64)++v14 >= 8 )
          goto LABEL_21;
      }
      if ( v21 + 512 == v16 )
      {
        v49 = v8 & 0xFFFFFFFFFFFFF000uLL;
      }
      else if ( v21 <= v15 )
      {
        v17 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      p_Region = v52;
      v8 = v8 + 8 * v14 - 56;
LABEL_21:
      if ( v14 == 8 )
      {
        v46 = v58[20].Region + (v21 << 12);
        v23 = v46;
        v63 = (_QWORD *)(((v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v24 = MI_READ_PTE_LOCK_FREE(v63);
        v56 = v24;
        *(_QWORD *)v8 = -1LL;
        *(_QWORD *)(v8 + 8) = -1LL;
        *(_QWORD *)(v8 + 16) = -1LL;
        *(_QWORD *)(v8 + 24) = -1LL;
        *(_QWORD *)(v8 + 32) = -1LL;
        *(_QWORD *)(v8 + 40) = -1LL;
        *(_QWORD *)(v8 + 48) = -1LL;
        *(_QWORD *)(v8 + 56) = -1LL;
        v25 = v8 + 64;
        if ( v21 + 512 == v47 )
        {
          v26 = v25;
          if ( (v25 & 0xFFF) != 0 )
          {
            while ( !*(_QWORD *)v26 )
            {
              v26 += 8LL;
              if ( (v26 & 0xFFF) == 0 )
                goto LABEL_30;
            }
            v49 = v26 & 0xFFFFFFFFFFFFF000uLL;
          }
        }
LABEL_30:
        v8 = v25 - 64;
        if ( v21 <= v45 )
        {
          v17 = v8;
          if ( (v8 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v17 -= 8LL;
              if ( *(_QWORD *)v17 )
                break;
              if ( (v17 & 0xFFF) == 0 )
              {
                if ( !*(_QWORD *)v17 )
                  goto LABEL_36;
                break;
              }
            }
            v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
        }
LABEL_36:
        _bittestandset64(*(signed __int64 **)(v52 + 8), v22);
        if ( !v48 )
          v48 = v46 + 0x200000;
        v28 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v56) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        if ( (v24 & 0x80u) == 0LL )
        {
          v35 = 0;
          v36 = 512LL;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v31 = (volatile signed __int32 *)(v28 + 3);
          v32 = 512LL;
          do
          {
            v53 = 0;
            while ( _interlockedbittestandset64(v31, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v53, v27, v29);
              while ( (*(_QWORD *)v31 & 0x8000000000000000uLL) != 0 );
            }
            *((_BYTE *)v31 + 10) = *((_BYTE *)v31 + 10) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)v31, 0x7FFFFFFFFFFFFFFFuLL);
            v31 += 12;
            --v32;
          }
          while ( v32 );
          __writecr8(CurrentIrql);
          v21 = v55;
          *v28 = v51;
          v51 = v28;
          if ( v21 < v50 || v21 + 512 > v54 )
            --v58[18].Alignment;
          v23 = v46;
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
            MiLogPerfMemoryRangeEvent(v46, 0LL, 10LL, 512LL);
          v33 = v63;
          v34 = v63;
          *v63 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v34) )
            MiWritePteShadow(v33, 0LL);
          v35 = 1;
          v36 = 1LL;
        }
        MiInsertTbFlushEntry((__int64)&v64, v23, v36, v35);
        v16 = v47;
        v18 = v57;
        v15 = v50 & 0xFFFFFFFFFFFFFE00uLL;
      }
      else
      {
        _bittestandreset64(*(signed __int64 **)(p_Region + 8), v22);
        if ( v21 < *v18 )
          *v18 = v21;
      }
      v21 -= 512LL;
      v55 = v21;
      p_Region = v52;
    }
    while ( v21 + 512 > v15 );
    v20 = v49;
    v4 = v51;
  }
  if ( v20 > v17 )
    MiJoinBitmapPages(v14, v17, (v20 - v17) >> 12);
  KxReleaseQueuedSpinLock(v59);
  __writecr8(v60);
  result = v46;
  if ( v46 )
  {
    MiReturnSystemVa(v46, v48, 5, (__int64)&v64);
    if ( v4 )
    {
      do
      {
        v38 = (_QWORD *)*v4;
        v39 = (unsigned __int64)((__int64)(v4 + 0xB000000000LL) / 48) >> 9;
        if ( qword_1402FF6E8[0] )
        {
          v40 = ((unsigned __int64)((__int64)(v4 + 0xB000000000LL) / 48) >> 9) & 0x1F;
          LOBYTE(v41) = 1;
          v42 = (volatile signed __int32 *)(qword_1402FF6E8[0]
                                          + 4 * ((unsigned __int64)((__int64)(v4 + 0xB000000000LL) / 48) >> 14));
          if ( v40 + 1 > 0x20 )
          {
            if ( (v39 & 0x1F) != 0 )
            {
              _InterlockedAnd(v42, ~(((1 << (32 - (v39 & 0x1F))) - 1) << v40));
              v41 = 1LL - (32 - (unsigned int)(v39 & 0x1F));
              ++v42;
              if ( v41 >= 0x20 )
              {
                v44 = v41 >> 5;
                v41 += -32LL * (v41 >> 5);
                do
                {
                  *v42++ = 0;
                  --v44;
                }
                while ( v44 );
              }
              if ( !v41 )
                goto LABEL_70;
            }
            v43 = (1 << v41) - 1;
          }
          else
          {
            v43 = 1 << v40;
          }
          _InterlockedAnd(v42, ~v43);
        }
LABEL_70:
        MiFreeLargePageMemory(v39 << 9);
        v61[0] += 512LL;
        v4 = v38;
      }
      while ( v38 );
    }
    result = v61[0];
    if ( v61[0] )
    {
      v62 = v61[0];
      return MiReturnNonPagedPoolCharges(v61);
    }
  }
  return result;
}
