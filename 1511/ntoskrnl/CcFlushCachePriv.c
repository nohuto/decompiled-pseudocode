/*
 * XREFs of CcFlushCachePriv @ 0x1400AFD30
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcFlushCache @ 0x1400E8FD4 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x140107474 (CcFlushCacheToLsn.c)
 * Callees:
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400E15A8 (CcGetVirtualAddressIfMapped.c)
 *     CcAmILowPriorityWriter @ 0x1400E3684 (CcAmILowPriorityWriter.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E4134 (CcReleaseByteRangeFromWrite.c)
 *     CcIsFatalWriteError @ 0x1400E4250 (CcIsFatalWriteError.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1400E7D3C (CcBoostLowPriorityWorkerThread.c)
 *     CcPerfLogFlushCache @ 0x140123350 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x140123608 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, void *a2, unsigned int a3, _QWORD *a4, char a5, _BYTE *a6)
{
  unsigned __int64 v6; // r12
  int v8; // r13d
  __int64 v9; // rdi
  _BYTE *v10; // r15
  __int64 v11; // rsi
  KIRQL v12; // al
  __int64 v13; // r14
  KIRQL v14; // bl
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ebx
  KIRQL v20; // bl
  bool v21; // al
  __int64 *v22; // rdx
  unsigned int v23; // ebx
  unsigned int v24; // edi
  int v25; // esi
  __int64 v26; // r15
  void *VirtualAddressIfMapped; // rax
  unsigned int v28; // ecx
  bool v29; // al
  __int64 v30; // rdx
  __int64 v31; // rsi
  signed __int64 v32; // rbx
  char v33; // al
  signed __int64 v34; // rbx
  int v35; // eax
  signed __int64 v36; // rdx
  struct _KEVENT *v37; // rcx
  unsigned int v38; // eax
  KIRQL v39; // al
  KIRQL v40; // al
  signed __int64 v41; // rdi
  int v42; // edi
  unsigned int v43; // ebx
  int v44; // r13d
  int v45; // r12d
  KIRQL v46; // al
  int v47; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-99h]
  unsigned int v49; // [rsp+38h] [rbp-81h]
  unsigned int v50; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-75h]
  int v52; // [rsp+48h] [rbp-71h]
  int v53; // [rsp+4Ch] [rbp-6Dh]
  signed __int64 v54; // [rsp+50h] [rbp-69h] BYREF
  int v55; // [rsp+58h] [rbp-61h]
  unsigned int Length; // [rsp+5Ch] [rbp-5Dh] BYREF
  int Length_4; // [rsp+60h] [rbp-59h]
  unsigned int v58; // [rsp+64h] [rbp-55h]
  int v59; // [rsp+68h] [rbp-51h]
  __int64 v60; // [rsp+70h] [rbp-49h]
  unsigned int v61; // [rsp+78h] [rbp-41h]
  __int64 v62; // [rsp+80h] [rbp-39h]
  signed __int64 v63; // [rsp+88h] [rbp-31h] BYREF
  unsigned __int64 v64; // [rsp+90h] [rbp-29h]
  __int64 v65; // [rsp+98h] [rbp-21h] BYREF
  signed __int64 v66; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-11h] BYREF
  _BYTE v68[24]; // [rsp+B0h] [rbp-9h] BYREF
  unsigned __int64 v70; // [rsp+118h] [rbp+5Fh]

  v70 = (unsigned __int64)a2;
  v6 = (unsigned __int64)a2;
  v55 = 0;
  v8 = 0;
  v58 = 0;
  v9 = 0LL;
  Length_4 = 0;
  v59 = 0;
  v52 = 0;
  v51 = 0;
  v53 = 0;
  v65 = 0LL;
  v60 = 0LL;
  if ( a4 && a2 && a2 != &CcNoDelay )
    KeBugCheckEx(0x34u, 0x1539uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = a6;
  if ( !a6 )
  {
    v10 = v68;
    a6 = v68;
  }
  *(_DWORD *)v10 = 0;
  v11 = 0LL;
  if ( a2 == &CcNoDelay )
  {
    v8 = 1;
    v60 = *((_QWORD *)v10 + 1);
    v6 = 0LL;
    v59 = 1;
    *(_DWORD *)v10 = -2147483626;
    v70 = 0LL;
  }
  else
  {
    v35 = 1;
    if ( a5 )
      v35 = 17;
    v53 = v35;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v12 = KeAcquireQueuedSpinLock(5uLL);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12;
  if ( !v13 )
    goto LABEL_10;
  v15 = *(_DWORD *)(v13 + 152);
  if ( (v15 & 0x2000) != 0 )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_133;
    v6 ^= 1uLL;
    v70 = v6;
  }
  if ( !v8 )
  {
    if ( !v6 )
      goto LABEL_120;
    v36 = *(_QWORD *)(v13 + 32);
    if ( *(_QWORD *)v6 < v36 )
    {
      v16 = a3;
      if ( *(_QWORD *)v6 + a3 <= v36 )
      {
LABEL_107:
        ++*(_DWORD *)(v13 + 516);
        goto LABEL_11;
      }
      a3 = v36 - *(_DWORD *)v6;
LABEL_120:
      v16 = a3;
      goto LABEL_107;
    }
LABEL_133:
    KeReleaseQueuedSpinLock(5uLL, v14);
    return;
  }
  if ( (v15 & 0x10000) == 0 )
  {
LABEL_10:
    v16 = a3;
    goto LABEL_11;
  }
  v16 = a3;
  v52 = 1;
  if ( *(_DWORD *)(v13 + 516) )
    v51 = 1;
LABEL_11:
  if ( v6 && !v16 )
  {
    if ( v13 && !v8 )
      --*(_DWORD *)(v13 + 516);
    goto LABEL_133;
  }
  if ( v13 )
  {
    ++*(_DWORD *)(v13 + 4);
    v9 = *(_QWORD *)((*(_QWORD *)(v13 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
  __writecr8(v14);
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogFlushCache(v60, v13, v6, a3, v8 == 1, v52 == 1, v51 == 1);
  if ( v8 )
  {
LABEL_17:
    if ( (v13
       && ((*(_BYTE *)(v9 + 6) & 0x10) == 0 || (*(_BYTE *)(v9 + 4) & 0x20) == 0)
       && (*(_DWORD *)(v13 + 152) & 0x20000) == 0
       || v8)
      && !v51 )
    {
      if ( !v13 )
        return;
      if ( (*(_DWORD *)(v13 + 152) & 0x4000000) == 0 )
        goto LABEL_23;
    }
    goto LABEL_95;
  }
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(v13);
    goto LABEL_17;
  }
LABEL_95:
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogFlushSection(v60, v13, v6, a3, v53);
  if ( v13 )
    CcUnmapVacbArray(v13, v6, a3, 0, 0);
  MmFlushSection(a1, (va_list)v6, a3);
  v17 = *(_DWORD *)v10;
  if ( *(int *)v10 < 0 )
  {
    v55 = *(_DWORD *)v10;
    goto LABEL_24;
  }
LABEL_23:
  v17 = 0;
LABEL_24:
  if ( !v13 )
    goto LABEL_40;
  if ( (*(_DWORD *)(v13 + 152) & 0x4000000) != 0 )
    goto LABEL_37;
  if ( v6 )
    v66 = *(_QWORD *)v6;
  v18 = 1;
  v50 = 1;
  if ( a3 )
  {
    v18 = a3;
    v50 = a3;
  }
  if ( v8 )
  {
    v18 = v50;
    v11 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  v62 = v11;
  while ( 1 )
  {
    v19 = v52;
    if ( !*(_DWORD *)(v13 + 192) && v8 && !v52 )
      break;
    if ( !*(_QWORD *)(v13 + 8) && (*(_DWORD *)(v13 + 152) & 4) == 0 && !*(_DWORD *)(v13 + 112) || Length_4 )
      break;
    v21 = v8 && (unsigned __int8)CcAmILowPriorityWriter(&CcDeferredWrites);
    if ( !v8 || v19 )
    {
      v22 = &v66;
      if ( !v6 )
        v22 = 0LL;
    }
    else
    {
      v18 = 0;
      v22 = 0LL;
    }
    LOBYTE(v49) = v21;
    if ( !CcAcquireByteRangeForWrite(v13, v22, v18, a4, &v54, &v50, &v67, v49) )
      break;
    v23 = v50;
    v24 = 0;
    v25 = v52;
    v26 = v50;
    v64 = v50;
    do
    {
      VirtualAddressIfMapped = (void *)CcGetVirtualAddressIfMapped(v13, v54 + v26 - v23, &v65, &Length);
      if ( VirtualAddressIfMapped )
      {
        v28 = Length;
        if ( Length > v23 )
        {
          v28 = v23;
          Length = v23;
        }
        v29 = (MmSetAddressRangeModified(VirtualAddressIfMapped, v28) || v24)
           && v26 + v54 < *(_QWORD *)(v13 + 40)
           && (*(_DWORD *)(v13 + 268) & 0xF) != 0
           && v8
           && !v25
           && (*(_DWORD *)(v13 + 152) & 0x200) == 0
           && !CcCoalescingState;
        v24 = v29;
        v30 = *(_QWORD *)(v65 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v65 + 16)) )
        {
          v37 = *(struct _KEVENT **)(v30 + 184);
          if ( v37 )
            KeSetEvent(v37, 0, 0);
        }
      }
      else
      {
        v38 = Length;
        if ( Length > v23 )
          v38 = v23;
        Length = v38;
      }
      v23 -= Length;
    }
    while ( v23 );
    __addgsdword(0x5E28u, v24);
    v31 = v62;
    v10 = a6;
    if ( v24 )
    {
      v40 = KeAcquireQueuedSpinLock(5uLL);
      CcPagesSkippedDueToHotSpot += v64 >> 12;
      KeReleaseQueuedSpinLock(5uLL, v40);
      v18 = v50;
      v32 = v54;
      goto LABEL_127;
    }
    v18 = v50;
    v51 = v50;
    if ( (xmmword_140382290 & 0x20000) != 0 )
      CcPerfLogFlushSection(v60, v13, (unsigned int)&v54, v50, v53);
    BugCheckParameter4 = (ULONG_PTR)a6;
    MmFlushSection(a1, (va_list)&v54, v64);
    if ( *(int *)a6 < 0 )
    {
      v32 = v54;
      v41 = v54;
      v63 = v54;
      v61 = v51;
      if ( !(unsigned __int8)CcIsFatalWriteError(v13) )
      {
        Length_4 = 1;
LABEL_132:
        v18 = v51;
LABEL_127:
        v33 = 1;
        goto LABEL_76;
      }
      v43 = v61;
      v44 = v53;
      v45 = v60;
      do
      {
        if ( (xmmword_140382290 & 0x20000) != 0 )
          CcPerfLogFlushSection(v45, v13, (unsigned int)&v63, 4096, v44);
        BugCheckParameter4 = (ULONG_PTR)a6;
        MmFlushSection(a1, (va_list)&v63, 4096LL);
        if ( *(int *)a6 < 0 )
        {
          if ( (unsigned __int8)CcIsFatalWriteError(v13) )
          {
            v47 = Length_4;
            v55 = *(_DWORD *)a6;
          }
          else
          {
            v47 = 1;
            Length_4 = 1;
          }
        }
        else
        {
          v46 = KeAcquireQueuedSpinLock(5uLL);
          *(_DWORD *)(v13 + 152) |= 0x400u;
          KeReleaseQueuedSpinLock(5uLL, v46);
          v47 = Length_4;
        }
        v41 += 4096LL;
        v63 = v41;
        v43 -= 4096;
      }
      while ( v43 );
      v32 = v54;
      v31 = v62;
      v6 = v70;
      v8 = v59;
      if ( v47 )
        goto LABEL_132;
      v18 = v51;
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 152) & 0x400) == 0 )
      {
        v39 = KeAcquireQueuedSpinLock(5uLL);
        *(_DWORD *)(v13 + 152) |= 0x400u;
        KeReleaseQueuedSpinLock(5uLL, v39);
      }
      if ( v8 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (v50 + 4095) >> 12);
        v18 = v50;
      }
      v32 = v54;
    }
    v33 = 0;
LABEL_76:
    LOBYTE(BugCheckParameter4) = v33;
    CcReleaseByteRangeFromWrite(v13, &v54, v18, v67, BugCheckParameter4);
    v58 += v18;
    if ( v58 >= 0x40000 && CcDeferredWrites.Flink != &CcDeferredWrites )
    {
      CcPostDeferredWrites(&CcDeferredWrites);
      v58 = 0;
    }
    if ( v8 && !v52 && CcDeferredWrites.Flink == &CcDeferredWrites )
    {
      if ( MEMORY[0xFFFFF78000000320] > v31 )
      {
        *((_QWORD *)a6 + 1) = 35422LL;
        break;
      }
      v18 = v50;
      v32 = v54;
    }
    if ( v6 )
    {
      v34 = v64 + v32;
      v54 = v34;
      if ( *(_QWORD *)v6 + a3 <= v34 )
        break;
      v42 = *(_DWORD *)v6 - v34;
      v66 = v34;
      v18 = a3 + v42;
      v50 = v18;
    }
  }
  if ( v58 && CcDeferredWrites.Flink != &CcDeferredWrites )
    CcPostDeferredWrites(&CcDeferredWrites);
LABEL_37:
  v20 = KeAcquireQueuedSpinLock(5uLL);
  CcDecrementOpenCount(v13);
  if ( !v8 )
    --*(_DWORD *)(v13 + 516);
  KeReleaseQueuedSpinLock(5uLL, v20);
  v17 = v55;
LABEL_40:
  if ( v17 < 0 )
    *(_DWORD *)v10 = v17;
}
