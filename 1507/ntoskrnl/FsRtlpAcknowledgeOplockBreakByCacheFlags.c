/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140133958 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E3578 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404A60B8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6)
{
  unsigned int v6; // r13d
  ULONG_PTR v9; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // ecx
  char v17; // r12
  _QWORD *PoolWithTag; // r14
  unsigned int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // r10
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct _KTHREAD *v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r8
  _QWORD *v36; // rcx
  ULONG_PTR v37; // rbx
  signed __int32 v38; // eax
  char v40; // [rsp+50h] [rbp-68h]
  char v41; // [rsp+51h] [rbp-67h]
  bool v42; // [rsp+52h] [rbp-66h]
  unsigned int v43; // [rsp+54h] [rbp-64h]
  char v44; // [rsp+58h] [rbp-60h]
  char v45; // [rsp+59h] [rbp-5Fh] BYREF
  char v46; // [rsp+5Ah] [rbp-5Eh] BYREF
  char v47; // [rsp+5Bh] [rbp-5Dh]
  char v48; // [rsp+5Ch] [rbp-5Ch]
  PVOID P; // [rsp+60h] [rbp-58h] BYREF
  _QWORD *v50; // [rsp+68h] [rbp-50h]
  __int64 v51; // [rsp+70h] [rbp-48h]
  __int64 v52; // [rsp+78h] [rbp-40h]
  __int64 v53; // [rsp+80h] [rbp-38h]
  struct _KTHREAD *v54; // [rsp+88h] [rbp-30h]
  __int64 v55; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v56; // [rsp+C8h] [rbp+10h]

  v56 = a2;
  v55 = a1;
  v6 = a4;
  v43 = 0;
  P = 0LL;
  v44 = 0;
  v40 = 0;
  v47 = 0;
  v42 = 0;
  v45 = 0;
  v46 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    pIofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  v9 = *(_QWORD *)(a1 + 152);
  CurrentThread = KeGetCurrentThread();
  v11 = KeAbPreAcquire(v9, 0LL, 0LL, a4);
  v14 = v11;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v9, 0) )
    ExpAcquireFastMutexContended(v9, v11);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_QWORD *)(v9 + 8) = CurrentThread;
  v48 = 1;
  v15 = v55;
  v16 = *(_DWORD *)(v55 + 144);
  if ( ((v16 & 0xF00000) != 0 || (((v16 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0)
    && ((((v16 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0 || *(_QWORD *)(v55 + 72) != v55 + 72) )
  {
    v53 = *(_QWORD *)(a3 + 24);
    if ( (*(_DWORD *)(v53 + 8) & 4) != 0 )
    {
      v17 = 1;
      v41 = 1;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)273, 0x18uLL, 0x6F725346u);
      P = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
    }
    else
    {
      v17 = 0;
      v41 = 0;
      PoolWithTag = P;
    }
    v19 = *(_DWORD *)(v15 + 144) & 0x1F0FFDF;
    if ( v19 <= 0x307040 )
    {
      if ( v19 != 3174464 )
      {
        if ( v19 == 12288 || v19 == 45056 || v19 == 1060864 )
          goto LABEL_12;
        if ( v19 != 1069120 && v19 != 1077312 )
          goto LABEL_78;
      }
    }
    else
    {
      if ( v19 == 8400896 )
      {
LABEL_12:
        v20 = (_QWORD *)(v15 + 72);
        v21 = *(_QWORD **)(v15 + 72);
        while ( 1 )
        {
          v50 = v21;
          if ( v21 == v20 )
            break;
          if ( v17 )
          {
            v12 = v21[3];
            v23 = *(_QWORD *)(v56 + 48);
            if ( v12 != v23 && FsRtlpOplockKeysEqual(v23, v12, 0) )
            {
LABEL_16:
              v44 = 1;
              v22 = v21[6] & 0xF00000;
              if ( v22 == 0x800000 )
              {
                if ( v6 )
                {
                  v24 = (_QWORD *)(v15 + 88);
                  if ( (_QWORD *)*v24 != v24 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v6, a6) )
                  {
                    v25 = *(_QWORD *)(a3 + 24);
                    v26 = 0;
                    *(_QWORD *)v25 = 0LL;
                    *(_QWORD *)(v25 + 8) = 0LL;
                    *(_QWORD *)(v25 + 16) = 0LL;
                    goto LABEL_57;
                  }
                }
LABEL_18:
                FsRtlpOplockDequeueRH((__int64)v21, v12, v13);
                if ( !v17 )
                {
                  v47 = 1;
                  if ( !v6 )
                  {
                    ObfDereferenceObjectWithTag((PVOID)v21[3], 0x746C6644u);
                    goto LABEL_21;
                  }
                  goto LABEL_68;
                }
                PoolWithTag[2] = v21[3];
                v27 = *(_QWORD *)(v15 + 104);
                *PoolWithTag = v27;
                PoolWithTag[1] = v15 + 104;
                if ( *(_QWORD *)(v27 + 8) != v15 + 104 )
                  __fastfail(3u);
                *(_QWORD *)(v27 + 8) = PoolWithTag;
                *(_QWORD *)(v15 + 104) = PoolWithTag;
                PoolWithTag = 0LL;
                P = 0LL;
LABEL_21:
                if ( !v6 )
                {
                  FsRtlpComputeShareableOplockState(v15);
                  v43 = 0;
                  *(_DWORD *)(a3 + 48) = 0;
                  pIofCompleteRequest((PIRP)a3, 1);
                  goto LABEL_23;
                }
LABEL_68:
                if ( (v6 & 0x4040) == 0 && (v6 & 0x3010) != 0 )
                {
                  v43 = FsRtlpRequestShareableOplock(&v55, v56, a3, v6, a5, v17, 1, a6);
                  goto LABEL_76;
                }
                *(_QWORD *)v15 = a3;
                v52 = *(_QWORD *)(a3 + 184);
                *(_BYTE *)(v52 + 3) |= 1u;
                v43 = 259;
                *(_QWORD *)(a3 + 56) = v15;
                *(_QWORD *)(v55 + 16) = KeGetCurrentThread()->ApcState.Process;
                v28 = KeGetCurrentThread();
                v54 = v28;
                v15 = v55;
                *(_QWORD *)(v55 + 24) = v28;
                ObfReferenceObjectWithTag(v28, 0x746C6644u);
                *(_BYTE *)(v15 + 32) = 0;
                v17 = v41;
                if ( v41 )
                {
                  v29 = v56;
                  ObfReferenceObjectWithTag(*(PVOID *)(v56 + 48), 0x746C6644u);
                  v30 = *(_QWORD *)(v29 + 48);
                }
                else
                {
                  v30 = v21[3];
                }
                *(_QWORD *)(v15 + 8) = v30;
                *(_DWORD *)(v15 + 144) = v6 | *(_DWORD *)(v15 + 144) & 0x20 | 0x40;
                IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
                if ( *(_BYTE *)(a3 + 68) )
                {
                  FsRtlpCancelExclusiveIrp(a3, 1, v41 == 0);
                  PoolWithTag = P;
                  v21 = v50;
                }
                else
                {
                  _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
                  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
                  v17 = v41;
                  PoolWithTag = P;
                  v21 = v50;
LABEL_76:
                  v15 = v55;
                }
LABEL_23:
                FsRtlpModifyThreadPriorities(v15, (__int64)v21, 0LL);
                FsRtlpClearOwnerThread(v15, (__int64)v21);
                if ( *(_QWORD *)(v15 + 72) == v15 + 72 )
                  *(_BYTE *)(v15 + 32) = 0;
                ExFreePoolWithTag(v21, 0);
                if ( v17 )
                  *(_DWORD *)(v15 + 144) |= 0x1000000u;
              }
              else
              {
                if ( v22 != 0x100000 )
                  goto LABEL_18;
                if ( (v6 & 0x7000) <= 0x3000 )
                  goto LABEL_18;
                v24 = (_QWORD *)(v15 + 88);
                if ( (_QWORD *)*v24 == v24 )
                {
                  if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v6, a6) )
                    goto LABEL_18;
                }
                v25 = *(_QWORD *)(a3 + 24);
                *(_QWORD *)v25 = 0LL;
                *(_QWORD *)(v25 + 8) = 0LL;
                *(_QWORD *)(v25 + 16) = 0LL;
                v26 = 1;
LABEL_57:
                *(_DWORD *)(v25 + 4) = 3;
                v51 = v25;
                if ( (_QWORD *)*v24 == v24 )
                  v26 = a6;
                *(_DWORD *)(v25 + 8) = v26;
                *(_DWORD *)(v25 + 12) |= 1u;
                *(_QWORD *)(a3 + 56) = 24LL;
                *(_DWORD *)(a3 + 48) = -2147483602;
                pIofCompleteRequest((PIRP)a3, 1);
                v43 = -2147483602;
              }
              v40 = 1;
              break;
            }
          }
          else if ( v21[3] == *(_QWORD *)(v56 + 48) )
          {
            goto LABEL_16;
          }
          v21 = (_QWORD *)*v21;
          v20 = (_QWORD *)(v15 + 72);
        }
        if ( v44 )
        {
          if ( v47 )
            FsRtlpReleaseIrpsWaitingForRH(v15);
          if ( v40 )
            goto LABEL_105;
          goto LABEL_100;
        }
LABEL_78:
        v43 = -1073741597;
        *(_DWORD *)(a3 + 48) = -1073741597;
        pIofCompleteRequest((PIRP)a3, 1);
        goto LABEL_105;
      }
      if ( v19 != 5271616 && v19 != 8409152 && v19 != 8417344 )
        goto LABEL_78;
    }
    if ( v17 )
    {
      v31 = *(_QWORD *)(v15 + 8);
      v32 = *(_QWORD *)(a2 + 48);
      if ( v31 == v32 || !FsRtlpOplockKeysEqual(v32, v31, 0) )
        goto LABEL_78;
      if ( !v6 )
      {
        FsRtlpModifyThreadPriorities(v15, 0LL, 0LL);
        FsRtlpClearOwnerThread(v15, 0LL);
        *(_BYTE *)(v15 + 32) = 0;
        *(_DWORD *)(v15 + 144) = *(_DWORD *)(v15 + 144) & 0x20 | 1;
        PoolWithTag[2] = *(_QWORD *)(v15 + 8);
        v33 = *(_QWORD *)(v15 + 104);
        *PoolWithTag = v33;
        PoolWithTag[1] = v15 + 104;
        if ( *(_QWORD *)(v33 + 8) != v15 + 104 )
          __fastfail(3u);
        *(_QWORD *)(v33 + 8) = PoolWithTag;
        *(_QWORD *)(v15 + 104) = PoolWithTag;
        PoolWithTag = 0LL;
        P = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_DWORD *)(v15 + 144) |= 0x1000000u;
        *(_DWORD *)(a3 + 48) = 0;
        pIofCompleteRequest((PIRP)a3, 1);
        goto LABEL_100;
      }
    }
    else if ( *(_QWORD *)(v15 + 8) != *(_QWORD *)(a2 + 48) )
    {
      goto LABEL_78;
    }
    v34 = *(_DWORD *)(v15 + 144) & 0x1F0FFDF;
    if ( (v34 == 1069120 || v34 == 1077312 || v34 == 3174464 || v34 == 5271616 || v34 == 8409152 || v34 == 8417344)
      && (v6 & 0x7000) > ((*(_DWORD *)(v15 + 144) >> 8) & 0x1000 | (*(_DWORD *)(v15 + 144) >> 7) & 0x4000 | (*(_DWORD *)(v15 + 144) >> 9) & 0x2000u) )
    {
      v42 = *(_QWORD *)(v15 + 88) != v15 + 88;
    }
    if ( v42 )
    {
      v35 = *(_QWORD *)(a3 + 24);
      v51 = v35;
      *(_QWORD *)v35 = 0LL;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = 0LL;
      *(_DWORD *)(v35 + 4) = (*(_DWORD *)(v15 + 144) >> 12) & 7;
      *(_DWORD *)(v35 + 8) = (*(_DWORD *)(v15 + 144) >> 20) & 1 | (*(_DWORD *)(v15 + 144) >> 19) & 4 | (*(_DWORD *)(v15 + 144) >> 21) & 2;
      *(_DWORD *)(v35 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      pIofCompleteRequest((PIRP)a3, 1);
      v43 = -2147483602;
      goto LABEL_105;
    }
    FsRtlpModifyThreadPriorities(v15, 0LL, 0LL);
    FsRtlpClearOwnerThread(v15, 0LL);
    *(_BYTE *)(v15 + 32) = 0;
    v43 = FsRtlpGrantAnyOplockFromExclusive(
            v15,
            a3,
            a2,
            v6,
            (__int64)a5,
            v17,
            (__int64)&P,
            (__int64)&v46,
            (__int64)&v45,
            a6);
    PoolWithTag = P;
LABEL_100:
    if ( v46 )
    {
      while ( 1 )
      {
        v36 = (_QWORD *)(v15 + 88);
        if ( (_QWORD *)*v36 == v36 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v36);
      }
    }
    if ( v45 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v15 + 8), 0x746C6644u);
      *(_QWORD *)(v15 + 8) = 0LL;
    }
    goto LABEL_105;
  }
  v43 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  pIofCompleteRequest((PIRP)a3, 1);
  PoolWithTag = P;
LABEL_105:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v37 = *(_QWORD *)(v15 + 152);
  *(_QWORD *)(v37 + 8) = 0LL;
  v38 = _InterlockedCompareExchange((volatile signed __int32 *)v37, 1, 0);
  if ( v38 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v37, v38);
  KeAbPostRelease(v37);
  return v43;
}
