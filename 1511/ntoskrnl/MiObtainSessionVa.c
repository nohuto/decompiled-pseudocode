/*
 * XREFs of MiObtainSessionVa @ 0x1400EDA74
 * Callers:
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     MiExpandSpecialPool @ 0x1401DA974 (MiExpandSpecialPool.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(ULONG NumberToFind)
{
  ULONG v2; // r8d
  ULONG v3; // r9d
  __int64 v4; // r11
  ULONG v5; // r12d
  ULONG v6; // eax
  unsigned int v7; // edx
  int v8; // r15d
  ULONG v9; // r10d
  ULONG v10; // ecx
  __int64 v11; // rsi
  ULONG v12; // r14d
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  ULONG v19; // r12d
  struct _KTHREAD *CurrentThread; // r15
  __int64 Process; // rcx
  ULONG_PTR v22; // rsi
  struct _KTHREAD *v23; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v25; // rcx
  __int64 v26; // r14
  int v27; // eax
  __int16 v28; // ax
  ULONG ClearBitsAndSet; // eax
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  struct _KPROCESS *v33; // rax
  unsigned __int64 v34; // rcx
  int v35; // edx
  unsigned __int64 *v36; // r11
  bool v37; // zf
  __int64 v38; // rcx
  ULONG v39; // r10d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  unsigned __int64 *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // r10d
  __int64 v51; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  ULONG v53; // eax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // [rsp+60h] [rbp-18h]
  unsigned int v56; // [rsp+D0h] [rbp+58h]

  v55 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v2 = *(_DWORD *)(v55 + 7696);
  v4 = *(_QWORD *)(v55 + 7704);
  v3 = *(_DWORD *)(v55 + 7712);
  v5 = v3 < v2 ? v3 : 0;
  v6 = v2 - 1;
  if ( NumberToFind )
  {
    if ( (v4 & 4) != 0 )
    {
      v7 = 1;
      v8 = 32;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    v56 = v7;
    while ( 1 )
    {
      v9 = v8 + v6;
      v10 = v8 + v5;
      v11 = v4 - 4LL * v7;
      if ( v6 - v5 + 1 >= NumberToFind )
        break;
      v18 = -1;
LABEL_105:
      if ( !v5 )
        goto LABEL_15;
      v7 = v56;
      v53 = v3 + NumberToFind;
      v4 = *(_QWORD *)(v55 + 7704);
      v5 = 0;
      if ( v3 + NumberToFind > v2 )
        v53 = v2;
      v6 = v53 - 1;
    }
    v12 = v9 - NumberToFind + 1;
    v13 = (unsigned __int64 *)(v11 + 8 * ((unsigned __int64)v10 >> 6));
    v14 = ((1LL << (v10 & 0x3F)) - 1) | *v13;
    v15 = v11 + 8 * ((unsigned __int64)v12 >> 6);
    if ( NumberToFind > 0x7F )
    {
      if ( (v12 & 0x3F) != 0 )
        v15 += 8LL;
      if ( v14 )
      {
        if ( *++v13 )
          goto LABEL_76;
        v37 = !_BitScanReverse64((unsigned __int64 *)&v44, v14);
        if ( v37 )
          v45 = 64;
        else
          v45 = 63 - v44;
      }
      else
      {
        v45 = 0;
      }
      while ( 1 )
      {
        v18 = ((unsigned int)(((__int64)v13 - v11) >> 3) << 6) - v45;
        if ( v18 > v12 )
          goto LABEL_50;
        v46 = &v13[(NumberToFind - v45) >> 6];
        while ( ++v13 != v46 )
        {
          if ( *v13 )
            goto LABEL_76;
        }
        if ( (((_BYTE)NumberToFind - (_BYTE)v45) & 0x3F) == 0 )
          goto LABEL_13;
        v37 = !_BitScanForward64((unsigned __int64 *)&v47, *v13);
        if ( v37 )
          LODWORD(v47) = 64;
        if ( (unsigned int)v47 >= (((_BYTE)NumberToFind - (_BYTE)v45) & 0x3Fu) )
          goto LABEL_13;
        do
        {
LABEL_76:
          if ( (unsigned __int64)v13 > v15 )
            goto LABEL_50;
          ++v13;
        }
        while ( *v13 );
        v37 = !_BitScanReverse64((unsigned __int64 *)&v48, *(v13 - 1));
        if ( v37 )
          v45 = 64;
        else
          v45 = 63 - v48;
      }
    }
    v16 = 64;
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind <= 1 )
      {
        while ( v14 == -1 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_58;
          v14 = *v13;
        }
        _BitScanForward64(&v17, ~v14);
        v18 = v17 + ((unsigned int)(((__int64)v13 - v11) >> 3) << 6);
        if ( v18 > v12 )
        {
LABEL_58:
          v18 = -1;
        }
        else
        {
LABEL_13:
          if ( v18 != -1 )
          {
            v18 -= v8;
LABEL_15:
            v19 = v18;
            goto LABEL_16;
          }
        }
        goto LABEL_59;
      }
      v35 = 0;
      v36 = (unsigned __int64 *)(v11 + 8 * ((unsigned __int64)v9 >> 6));
      while ( 1 )
      {
        if ( v14 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v13 > v15 )
              goto LABEL_58;
            v14 = *v13;
            if ( *v13 != -1LL )
            {
              v35 = 0;
              break;
            }
          }
        }
        v37 = !_BitScanForward64((unsigned __int64 *)&v38, v14);
        if ( v37 )
          LODWORD(v38) = 64;
        if ( (int)v38 + v35 >= NumberToFind )
          break;
        v39 = NumberToFind;
        v40 = ~v14;
        while ( 1 )
        {
          v40 &= v40 >> (v39 >> 1);
          if ( !v40 )
            break;
          v39 -= v39 >> 1;
          if ( v39 <= 1 )
          {
            _BitScanForward64(&v41, v40);
            v42 = v41;
            goto LABEL_49;
          }
        }
        if ( v13 == v36 )
          goto LABEL_58;
        v37 = !_BitScanReverse64((unsigned __int64 *)&v43, v14);
        if ( v37 )
          v35 = 64;
        else
          v35 = 63 - v43;
        v14 = *++v13;
      }
      v42 = -v35;
LABEL_49:
      v18 = ((unsigned int)(((__int64)v13 - v11) >> 3) << 6) + v42;
      if ( v18 <= v12 )
        goto LABEL_13;
LABEL_50:
      v18 = -1;
LABEL_59:
      v3 = *(_DWORD *)(v55 + 7712);
      v2 = *(_DWORD *)(v55 + 7696);
      goto LABEL_105;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v15 )
            goto LABEL_58;
          v14 = *v13;
        }
        v37 = !_BitScanReverse64((unsigned __int64 *)&v49, v14);
        if ( !v37 )
          v16 = 63 - v49;
        v18 = (((unsigned int)(((__int64)v13 - v11) >> 3) + 1) << 6) - v16;
        if ( v18 > v12 )
          goto LABEL_58;
        v50 = NumberToFind - v16;
        if ( NumberToFind == v16 )
          goto LABEL_13;
        ++v13;
        v16 = 64;
        v14 = *v13;
        if ( v50 >= 0x40 )
          break;
LABEL_92:
        v37 = !_BitScanForward64((unsigned __int64 *)&v51, v14);
        if ( v37 )
          LODWORD(v51) = 64;
        if ( (unsigned int)v51 >= v50 )
          goto LABEL_13;
        v16 = 64;
      }
      if ( !v14 )
      {
        v50 -= 64;
        if ( !v50 )
          goto LABEL_13;
        v14 = *++v13;
        goto LABEL_92;
      }
    }
  }
  v19 = v5 & 0xFFFFFFF8;
LABEL_16:
  if ( v19 == -1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v22 = *(_QWORD *)(Process + 1024) + 7688LL;
  if ( !KiAbEnabled )
  {
    v26 = 0LL;
    goto LABEL_27;
  }
  v23 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v23, *(_QWORD *)(Process + 1024) + 7688LL, KeGetCurrentIrql(), 0LL);
  --v23->SpecialApcDisable;
  if ( !v23->AbEntrySummary )
  {
    if ( !v23->AbOrphanedEntrySummary )
    {
      v26 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v23, v22);
      goto LABEL_83;
    }
    AbOrphanedEntrySummary = v23->AbOrphanedEntrySummary;
    v23->AbOrphanedEntrySummary = 0;
    v23->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v23->AbEntrySummary;
  _BitScanForward((unsigned int *)&v25, AbEntrySummary);
  v23->AbEntrySummary = AbEntrySummary & ~(1 << v25);
  Process = 96 * v25;
  v26 = (__int64)v23->LockEntries + Process;
  if ( !v26 )
  {
LABEL_83:
    _interlockedbittestandset((volatile signed __int32 *)&v23->116 + 1, 0xFu);
    goto LABEL_24;
  }
  if ( v22 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (v33 = v23->ApcState.Process, (v34 = v33[1].ActiveProcessors.Bitmap[2]) == 0)
    || v33 == PsInitialSystemProcess )
  {
    v27 = -1;
  }
  else
  {
    v27 = *(_DWORD *)(v34 + 8);
  }
  *(_DWORD *)(v26 + 40) = v27;
  Process = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v26 + 32) = v22 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_24:
  v28 = v23->SpecialApcDisable + 1;
  v23->SpecialApcDisable = v28;
  if ( !v28 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
    KiCheckForKernelApcDelivery(Process);
LABEL_27:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v22, v26, v22);
  if ( v26 )
    *(_BYTE *)(v26 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(v55 + 7696), NumberToFind, v19);
  v30 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v54 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 7688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v54 + 7688));
    KeAbPostRelease(v54 + 7688);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  if ( NumberToFind == 1 )
    *(_DWORD *)(v55 + 7712) = ClearBitsAndSet + 1;
  *(_DWORD *)(v55 + 7820) += NumberToFind;
  v31 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 7688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v31 + 7688));
  KeAbPostRelease(v31 + 7688);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return qword_1402FE600 + (v30 << 21);
}
