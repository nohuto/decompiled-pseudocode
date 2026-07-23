/*
 * XREFs of CcFlushCachePriv @ 0x1400E6CB0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     CcFlushCache @ 0x14008EB94 (CcFlushCache.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcFlushCacheToLsn @ 0x14010F320 (CcFlushCacheToLsn.c)
 * Callees:
 *     CcGetVirtualAddressIfMapped @ 0x1400169FC (CcGetVirtualAddressIfMapped.c)
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B0D0 (CcBoostLowPriorityWorkerThread.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     CcIsFatalWriteError @ 0x14008E0DC (CcIsFatalWriteError.c)
 *     CcAmILowPriorityWriter @ 0x14009F3F4 (CcAmILowPriorityWriter.c)
 *     CcPerfLogFlushCache @ 0x1400A9064 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1400AAA58 (CcPerfLogFlushSection.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400CCCD0 (CcReleaseByteRangeFromWrite.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 *     CcSerializeWithLazyWriter @ 0x1401B1BE8 (CcSerializeWithLazyWriter.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, LARGE_INTEGER *a2, unsigned int a3, _QWORD *a4, char a5, int *a6)
{
  int v7; // edi
  int v8; // r13d
  __int64 v9; // r14
  int *v10; // r12
  int v11; // ecx
  KIRQL v12; // al
  signed __int64 v13; // rdx
  signed __int64 *v14; // r8
  __int64 v15; // r15
  KIRQL v16; // bl
  int v17; // eax
  __int64 v18; // r9
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned int v21; // r14d
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // edi
  unsigned int v26; // r13d
  int v27; // r14d
  bool v28; // al
  __int64 *v29; // rdx
  unsigned int v30; // ebx
  unsigned int v31; // r14d
  int v32; // esi
  __int64 v33; // r13
  void *VirtualAddressIfMapped; // rax
  unsigned int v35; // ecx
  bool v36; // al
  __int64 v37; // rdx
  struct _KEVENT *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rdx
  KIRQL v46; // al
  char v47; // al
  __int64 v48; // rbx
  unsigned int v49; // r14d
  int v50; // edi
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  KIRQL v54; // al
  int v55; // ecx
  KIRQL v56; // al
  signed __int64 v57; // rdi
  int v58; // r13d
  KIRQL v59; // bl
  unsigned int v60; // [rsp+38h] [rbp-81h]
  char v61; // [rsp+40h] [rbp-79h]
  int v62; // [rsp+44h] [rbp-75h]
  int Length; // [rsp+48h] [rbp-71h] BYREF
  int Length_4; // [rsp+4Ch] [rbp-6Dh]
  int v65; // [rsp+50h] [rbp-69h]
  int v66; // [rsp+54h] [rbp-65h]
  int v67; // [rsp+58h] [rbp-61h]
  unsigned int v68; // [rsp+5Ch] [rbp-5Dh] BYREF
  __int64 v69; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v70; // [rsp+68h] [rbp-51h]
  __int64 v71; // [rsp+70h] [rbp-49h]
  int v72; // [rsp+78h] [rbp-41h]
  __int64 v73; // [rsp+80h] [rbp-39h] BYREF
  __int64 v74; // [rsp+88h] [rbp-31h]
  unsigned __int64 v75; // [rsp+90h] [rbp-29h]
  __int64 v76; // [rsp+98h] [rbp-21h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-19h] BYREF
  _WORD *v78; // [rsp+A8h] [rbp-11h] BYREF
  char v79; // [rsp+B0h] [rbp-9h] BYREF
  unsigned __int64 v81; // [rsp+118h] [rbp+5Fh]

  v81 = (unsigned __int64)a2;
  Length_4 = 0;
  v7 = 0;
  v61 = 0;
  v8 = 0;
  v70 = 0;
  v9 = 0LL;
  v67 = 0;
  v62 = 0;
  v66 = 0;
  v65 = 0;
  v76 = 0LL;
  v71 = 0LL;
  if ( a4 && a2 && a2 != (LARGE_INTEGER *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x15F8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = (int *)&v79;
  if ( a6 )
    v10 = a6;
  v74 = 0LL;
  *v10 = 0;
  if ( a2 == (LARGE_INTEGER *)&CcNoDelay )
  {
    v8 = 1;
    a2 = 0LL;
    v71 = *((_QWORD *)v10 + 1);
    v62 = 1;
    v81 = 0LL;
    *v10 = -2147483626;
  }
  else
  {
    v11 = 1;
    if ( a5 )
      v11 = 17;
    v65 = v11;
  }
  if ( a2 == &CcFlushForImageSection )
  {
    v61 = 1;
    v81 = 0LL;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v12 = KeAcquireQueuedSpinLock(5uLL);
  v15 = *(_QWORD *)(a1 + 8);
  v16 = v12;
  if ( !v15 )
    goto LABEL_27;
  v17 = *(_DWORD *)(v15 + 152);
  v14 = (signed __int64 *)v81;
  if ( (v17 & 0x2000) != 0 )
  {
    if ( (v81 & 1) == 0 )
      goto LABEL_33;
    v14 = (signed __int64 *)(v81 ^ 1);
    v81 ^= 1uLL;
  }
  if ( !v8 )
  {
    if ( !v14 )
      goto LABEL_25;
    v13 = *(_QWORD *)(v15 + 32);
    if ( *v14 < v13 )
    {
      v18 = a3;
      if ( *v14 + a3 <= v13 )
      {
LABEL_26:
        ++*(_DWORD *)(v15 + 516);
        goto LABEL_28;
      }
      a3 = v13 - *(_DWORD *)v14;
LABEL_25:
      v18 = a3;
      goto LABEL_26;
    }
LABEL_33:
    KeReleaseQueuedSpinLock(5uLL, v16);
    return;
  }
  if ( (v17 & 0x10000) == 0 )
  {
LABEL_27:
    v18 = a3;
    goto LABEL_28;
  }
  v18 = a3;
  v66 = 1;
  if ( *(_DWORD *)(v15 + 516) )
    v7 = 1;
LABEL_28:
  if ( v81 && !(_DWORD)v18 )
  {
    if ( v15 )
    {
      if ( !v8 )
        --*(_DWORD *)(v15 + 516);
    }
    goto LABEL_33;
  }
  if ( v61 )
  {
    if ( !v15 )
      goto LABEL_41;
    if ( *(_DWORD *)(v15 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(v15, v13, v14, v18) )
    {
      --*(_DWORD *)(v15 + 516);
      KeReleaseQueuedSpinLock(5uLL, v16);
      v19 = -1073741740;
      goto LABEL_187;
    }
  }
  if ( v15 )
  {
    ++*(_DWORD *)(v15 + 4);
    v9 = *(_QWORD *)((*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
LABEL_41:
  KeReleaseQueuedSpinLock(5uLL, v16);
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x40000000) != 0 )
    v7 = 1;
  v20 = v81;
  if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
    CcPerfLogFlushCache(v71, v15, (__int64 *)v81, a3, v8 == 1, v66 == 1, v7 == 1);
  if ( !v8 )
  {
    if ( !v15 )
      goto LABEL_58;
    if ( (*(_DWORD *)(v15 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(v15);
  }
  if ( (!v15
     || (*(_BYTE *)(v9 + 6) & 0x10) != 0 && (*(_BYTE *)(v9 + 4) & 0x20) != 0
     || (*(_DWORD *)(v15 + 152) & 0x20000) != 0)
    && !v8
    || v7 )
  {
    goto LABEL_58;
  }
  if ( !v15 )
    return;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
  {
LABEL_58:
    v21 = a3;
    if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
      CcPerfLogFlushSection(v71, v15, (__int64 *)v81, a3, v65);
    if ( v15 )
      CcUnmapVacbArray(v15, (__int64 *)v81, a3, 0, 0);
    v22 = MmFlushSection(a1, (va_list)v81, a3);
    if ( v22 >= 0 )
      goto LABEL_70;
    if ( v8 )
    {
      if ( *v10 != -2147483626 )
      {
        v23 = Length_4;
        if ( *v10 < 0 )
          v23 = *v10;
        Length_4 = v23;
        goto LABEL_74;
      }
    }
    else if ( *v10 )
    {
LABEL_70:
      v24 = Length_4;
      if ( *v10 < 0 )
        v24 = *v10;
      Length_4 = v24;
      goto LABEL_74;
    }
    *v10 = v22;
    goto LABEL_70;
  }
  v21 = a3;
LABEL_74:
  if ( !v15 )
    goto LABEL_186;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
    goto LABEL_177;
  if ( v81 )
    v77 = *(_QWORD *)v81;
  v25 = v62;
  v26 = 1;
  if ( v21 )
    v26 = v21;
  Length = v26;
  if ( v62 )
  {
    v26 = Length;
    v74 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  while ( 1 )
  {
    v27 = v66;
    if ( !*(_DWORD *)(v15 + 192) && v25 && !v66
      || !*(_QWORD *)(v15 + 8) && (*(_DWORD *)(v15 + 152) & 4) == 0 && !*(_DWORD *)(v15 + 112)
      || v67 )
    {
      goto LABEL_173;
    }
    v28 = v25 && CcAmILowPriorityWriter();
    if ( !v25 || v27 )
    {
      v29 = &v77;
      if ( !v20 )
        v29 = 0LL;
    }
    else
    {
      v26 = 0;
      v29 = 0LL;
    }
    LOBYTE(v60) = v28;
    if ( !CcAcquireByteRangeForWrite(v15, v29, v26, a4, &v69, (unsigned int *)&Length, (__int64 *)&v78, v60) )
      goto LABEL_173;
    v30 = Length;
    v31 = 0;
    v32 = v66;
    v33 = (unsigned int)Length;
    v75 = (unsigned int)Length;
    do
    {
      VirtualAddressIfMapped = (void *)CcGetVirtualAddressIfMapped(v15, v69 + v33 - v30, &v76, &v68);
      if ( VirtualAddressIfMapped )
      {
        v35 = v68;
        if ( v68 > v30 )
          v35 = v30;
        v68 = v35;
        v36 = (MmSetAddressRangeModified(VirtualAddressIfMapped, v35) || v31)
           && v33 + v69 < *(_QWORD *)(v15 + 40)
           && (*(_DWORD *)(v15 + 268) & 0xF) != 0
           && v25
           && !v32
           && (*(_DWORD *)(v15 + 152) & 0x200) == 0
           && !CcCoalescingState;
        v31 = v36;
        v37 = *(_QWORD *)(v76 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v76 + 16)) )
        {
          v38 = *(struct _KEVENT **)(v37 + 184);
          if ( v38 )
            KeSetEvent(v38, 0, 0);
        }
      }
      else
      {
        v39 = v68;
        if ( v68 > v30 )
          v39 = v30;
        v68 = v39;
      }
      v30 -= v68;
    }
    while ( v30 );
    __addgsdword(0x5E28u, v31);
    v26 = Length;
    v40 = v74;
    v41 = v69;
    v72 = Length;
    if ( v31 )
    {
      v56 = KeAcquireQueuedSpinLock(5uLL);
      CcPagesSkippedDueToHotSpot += v75 >> 12;
      KeReleaseQueuedSpinLock(5uLL, v56);
      goto LABEL_160;
    }
    if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
      CcPerfLogFlushSection(v71, v15, &v69, Length, v65);
    v42 = v75;
    *v10 = v62 != 0 ? 0x80000016 : 0;
    v43 = MmFlushSection(a1, (va_list)&v69, v42);
    if ( v43 < 0 )
    {
      if ( !v62 )
      {
        if ( *v10 )
          goto LABEL_131;
LABEL_130:
        *v10 = v43;
        goto LABEL_131;
      }
      if ( *v10 == -2147483626 )
        goto LABEL_130;
    }
LABEL_131:
    v45 = (unsigned int)*v10;
    if ( (int)v45 < 0 )
    {
      v48 = v41;
      v73 = v41;
      v49 = v26;
      if ( !CcIsFatalWriteError(v15, v45, v44) )
      {
        v67 = 1;
        goto LABEL_160;
      }
      v50 = Length_4;
      while ( 1 )
      {
        if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
          CcPerfLogFlushSection(v71, v15, &v73, 4096, v65);
        *v10 = v62 != 0 ? 0x80000016 : 0;
        v51 = MmFlushSection(a1, (va_list)&v73, 4096LL);
        if ( v51 < 0 )
        {
          if ( !v62 )
          {
            if ( *v10 )
              goto LABEL_148;
LABEL_147:
            *v10 = v51;
            goto LABEL_148;
          }
          if ( *v10 == -2147483626 )
            goto LABEL_147;
        }
LABEL_148:
        v53 = (unsigned int)*v10;
        if ( (int)v53 < 0 )
        {
          if ( !CcIsFatalWriteError(v15, v53, v52) )
          {
            v55 = 1;
            v67 = 1;
            if ( !v50 )
              v50 = *v10;
            goto LABEL_151;
          }
          if ( !v50 )
            v50 = *v10;
        }
        else
        {
          v54 = KeAcquireQueuedSpinLock(5uLL);
          *(_DWORD *)(v15 + 152) |= 0x400u;
          KeReleaseQueuedSpinLock(5uLL, v54);
        }
        v55 = v67;
LABEL_151:
        v48 += 4096LL;
        v73 = v48;
        v49 -= 4096;
        if ( !v49 )
        {
          v40 = v74;
          v26 = v72;
          Length_4 = v50;
          v41 = v69;
          if ( !v55 )
          {
            v47 = 0;
            goto LABEL_161;
          }
LABEL_160:
          v47 = 1;
          goto LABEL_161;
        }
      }
    }
    if ( (*(_DWORD *)(v15 + 152) & 0x400) == 0 )
    {
      v46 = KeAcquireQueuedSpinLock(5uLL);
      *(_DWORD *)(v15 + 152) |= 0x400u;
      KeReleaseQueuedSpinLock(5uLL, v46);
    }
    if ( v62 )
    {
      __incgsdword(0x5E2Cu);
      __addgsdword(0x5E30u, (unsigned int)(Length + 4095) >> 12);
      v26 = Length;
    }
    v41 = v69;
    v47 = 0;
LABEL_161:
    CcReleaseByteRangeFromWrite(v15, &v69, v26, v78, v47);
    v70 += v26;
    if ( v70 >= 0x40000 && CcDeferredWrites.Flink != &CcDeferredWrites )
    {
      CcPostDeferredWrites(&CcDeferredWrites);
      v70 = 0;
    }
    if ( v62 && !v66 && CcDeferredWrites.Flink == &CcDeferredWrites )
      break;
LABEL_169:
    v20 = v81;
    if ( v81 )
    {
      v57 = v75 + v41;
      v69 = v57;
      if ( *(_QWORD *)v81 + a3 <= v57 )
        goto LABEL_173;
      v58 = *(_DWORD *)v81 - v57;
      v77 = v57;
      v26 = a3 + v58;
      Length = v26;
    }
    v25 = v62;
  }
  if ( MEMORY[0xFFFFF78000000320] <= v40 )
  {
    v26 = Length;
    v41 = v69;
    goto LABEL_169;
  }
  *((_QWORD *)v10 + 1) = 35422LL;
LABEL_173:
  if ( v70 && CcDeferredWrites.Flink != &CcDeferredWrites )
    CcPostDeferredWrites(&CcDeferredWrites);
  v8 = v62;
LABEL_177:
  v59 = KeAcquireQueuedSpinLock(5uLL);
  CcDecrementOpenCount((_DWORD *)v15);
  if ( !v8 )
    --*(_DWORD *)(v15 + 516);
  if ( v61 && *v10 >= 0 && Length_4 >= 0 && (*(_DWORD *)(v15 + 112) || *(_DWORD *)(v15 + 516)) )
    Length_4 = -1073741740;
  KeReleaseQueuedSpinLock(5uLL, v59);
LABEL_186:
  v19 = Length_4;
  if ( Length_4 < 0 )
LABEL_187:
    *v10 = v19;
}
